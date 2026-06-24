/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CustomMetaDBInfo::CustomMetaDBInfo() :
    m_metaDataJdbcUrlHasBeenSet(false),
    m_metaDataUserHasBeenSet(false),
    m_metaDataPassHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_unifyMetaInstanceIdHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_defaultMetaVersionHasBeenSet(false),
    m_linkInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome CustomMetaDBInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaDataJdbcUrl") && !value["MetaDataJdbcUrl"].IsNull())
    {
        if (!value["MetaDataJdbcUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.MetaDataJdbcUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataJdbcUrl = string(value["MetaDataJdbcUrl"].GetString());
        m_metaDataJdbcUrlHasBeenSet = true;
    }

    if (value.HasMember("MetaDataUser") && !value["MetaDataUser"].IsNull())
    {
        if (!value["MetaDataUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.MetaDataUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataUser = string(value["MetaDataUser"].GetString());
        m_metaDataUserHasBeenSet = true;
    }

    if (value.HasMember("MetaDataPass") && !value["MetaDataPass"].IsNull())
    {
        if (!value["MetaDataPass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.MetaDataPass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataPass = string(value["MetaDataPass"].GetString());
        m_metaDataPassHasBeenSet = true;
    }

    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (value.HasMember("UnifyMetaInstanceId") && !value["UnifyMetaInstanceId"].IsNull())
    {
        if (!value["UnifyMetaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.UnifyMetaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifyMetaInstanceId = string(value["UnifyMetaInstanceId"].GetString());
        m_unifyMetaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_components.push_back((*itr).GetString());
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("DefaultMetaVersion") && !value["DefaultMetaVersion"].IsNull())
    {
        if (!value["DefaultMetaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.DefaultMetaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultMetaVersion = string(value["DefaultMetaVersion"].GetString());
        m_defaultMetaVersionHasBeenSet = true;
    }

    if (value.HasMember("LinkInstanceId") && !value["LinkInstanceId"].IsNull())
    {
        if (!value["LinkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaDBInfo.LinkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkInstanceId = string(value["LinkInstanceId"].GetString());
        m_linkInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomMetaDBInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaDataJdbcUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataJdbcUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaDataJdbcUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaDataUser.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaDataPass.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_unifyMetaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifyMetaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifyMetaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultMetaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultMetaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultMetaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_linkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string CustomMetaDBInfo::GetMetaDataJdbcUrl() const
{
    return m_metaDataJdbcUrl;
}

void CustomMetaDBInfo::SetMetaDataJdbcUrl(const string& _metaDataJdbcUrl)
{
    m_metaDataJdbcUrl = _metaDataJdbcUrl;
    m_metaDataJdbcUrlHasBeenSet = true;
}

bool CustomMetaDBInfo::MetaDataJdbcUrlHasBeenSet() const
{
    return m_metaDataJdbcUrlHasBeenSet;
}

string CustomMetaDBInfo::GetMetaDataUser() const
{
    return m_metaDataUser;
}

void CustomMetaDBInfo::SetMetaDataUser(const string& _metaDataUser)
{
    m_metaDataUser = _metaDataUser;
    m_metaDataUserHasBeenSet = true;
}

bool CustomMetaDBInfo::MetaDataUserHasBeenSet() const
{
    return m_metaDataUserHasBeenSet;
}

string CustomMetaDBInfo::GetMetaDataPass() const
{
    return m_metaDataPass;
}

void CustomMetaDBInfo::SetMetaDataPass(const string& _metaDataPass)
{
    m_metaDataPass = _metaDataPass;
    m_metaDataPassHasBeenSet = true;
}

bool CustomMetaDBInfo::MetaDataPassHasBeenSet() const
{
    return m_metaDataPassHasBeenSet;
}

string CustomMetaDBInfo::GetMetaType() const
{
    return m_metaType;
}

void CustomMetaDBInfo::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CustomMetaDBInfo::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CustomMetaDBInfo::GetUnifyMetaInstanceId() const
{
    return m_unifyMetaInstanceId;
}

void CustomMetaDBInfo::SetUnifyMetaInstanceId(const string& _unifyMetaInstanceId)
{
    m_unifyMetaInstanceId = _unifyMetaInstanceId;
    m_unifyMetaInstanceIdHasBeenSet = true;
}

bool CustomMetaDBInfo::UnifyMetaInstanceIdHasBeenSet() const
{
    return m_unifyMetaInstanceIdHasBeenSet;
}

vector<string> CustomMetaDBInfo::GetComponents() const
{
    return m_components;
}

void CustomMetaDBInfo::SetComponents(const vector<string>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool CustomMetaDBInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string CustomMetaDBInfo::GetDefaultMetaVersion() const
{
    return m_defaultMetaVersion;
}

void CustomMetaDBInfo::SetDefaultMetaVersion(const string& _defaultMetaVersion)
{
    m_defaultMetaVersion = _defaultMetaVersion;
    m_defaultMetaVersionHasBeenSet = true;
}

bool CustomMetaDBInfo::DefaultMetaVersionHasBeenSet() const
{
    return m_defaultMetaVersionHasBeenSet;
}

string CustomMetaDBInfo::GetLinkInstanceId() const
{
    return m_linkInstanceId;
}

void CustomMetaDBInfo::SetLinkInstanceId(const string& _linkInstanceId)
{
    m_linkInstanceId = _linkInstanceId;
    m_linkInstanceIdHasBeenSet = true;
}

bool CustomMetaDBInfo::LinkInstanceIdHasBeenSet() const
{
    return m_linkInstanceIdHasBeenSet;
}

