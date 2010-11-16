inline void CodeGenerator::setEmitSource( bool emitSource )
{
	m_emitSource = emitSource;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline bool CodeGenerator::emitSource() const
{
	return m_emitSource;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void CodeGenerator::setName( const std::string& name )
{
	m_name = name;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline const std::string& CodeGenerator::name() const
{
	return m_name;
}
