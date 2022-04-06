/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/bsca/v20210811/model/PURL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

PURL::PURL() :
    m_nameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifiersHasBeenSet(false),
    m_subpathHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome PURL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PURL.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PURL.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PURL.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Qualifiers") && !value["Qualifiers"].IsNull())
    {
        if (!value["Qualifiers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PURL.Qualifiers` is not array type"));

        const rapidjson::Value &tmpValue = value["Qualifiers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Qualifier item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualifiers.push_back(item);
        }
        m_qualifiersHasBeenSet = true;
    }

    if (value.HasMember("Subpath") && !value["Subpath"].IsNull())
    {
        if (!value["Subpath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PURL.Subpath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subpath = string(value["Subpath"].GetString());
        m_subpathHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PURL.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PURL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifiers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualifiers.begin(); itr != m_qualifiers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subpathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subpath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subpath.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string PURL::GetName() const
{
    return m_name;
}

void PURL::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PURL::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PURL::GetProtocol() const
{
    return m_protocol;
}

void PURL::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PURL::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string PURL::GetNamespace() const
{
    return m_namespace;
}

void PURL::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool PURL::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<Qualifier> PURL::GetQualifiers() const
{
    return m_qualifiers;
}

void PURL::SetQualifiers(const vector<Qualifier>& _qualifiers)
{
    m_qualifiers = _qualifiers;
    m_qualifiersHasBeenSet = true;
}

bool PURL::QualifiersHasBeenSet() const
{
    return m_qualifiersHasBeenSet;
}

string PURL::GetSubpath() const
{
    return m_subpath;
}

void PURL::SetSubpath(const string& _subpath)
{
    m_subpath = _subpath;
    m_subpathHasBeenSet = true;
}

bool PURL::SubpathHasBeenSet() const
{
    return m_subpathHasBeenSet;
}

string PURL::GetVersion() const
{
    return m_version;
}

void PURL::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PURL::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

