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

#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CustomMetaInfo::CustomMetaInfo() :
    m_metaDataJdbcUrlHasBeenSet(false),
    m_metaDataUserHasBeenSet(false),
    m_metaDataPassHasBeenSet(false)
{
}

CoreInternalOutcome CustomMetaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaDataJdbcUrl") && !value["MetaDataJdbcUrl"].IsNull())
    {
        if (!value["MetaDataJdbcUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaInfo.MetaDataJdbcUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataJdbcUrl = string(value["MetaDataJdbcUrl"].GetString());
        m_metaDataJdbcUrlHasBeenSet = true;
    }

    if (value.HasMember("MetaDataUser") && !value["MetaDataUser"].IsNull())
    {
        if (!value["MetaDataUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaInfo.MetaDataUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataUser = string(value["MetaDataUser"].GetString());
        m_metaDataUserHasBeenSet = true;
    }

    if (value.HasMember("MetaDataPass") && !value["MetaDataPass"].IsNull())
    {
        if (!value["MetaDataPass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetaInfo.MetaDataPass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDataPass = string(value["MetaDataPass"].GetString());
        m_metaDataPassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomMetaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CustomMetaInfo::GetMetaDataJdbcUrl() const
{
    return m_metaDataJdbcUrl;
}

void CustomMetaInfo::SetMetaDataJdbcUrl(const string& _metaDataJdbcUrl)
{
    m_metaDataJdbcUrl = _metaDataJdbcUrl;
    m_metaDataJdbcUrlHasBeenSet = true;
}

bool CustomMetaInfo::MetaDataJdbcUrlHasBeenSet() const
{
    return m_metaDataJdbcUrlHasBeenSet;
}

string CustomMetaInfo::GetMetaDataUser() const
{
    return m_metaDataUser;
}

void CustomMetaInfo::SetMetaDataUser(const string& _metaDataUser)
{
    m_metaDataUser = _metaDataUser;
    m_metaDataUserHasBeenSet = true;
}

bool CustomMetaInfo::MetaDataUserHasBeenSet() const
{
    return m_metaDataUserHasBeenSet;
}

string CustomMetaInfo::GetMetaDataPass() const
{
    return m_metaDataPass;
}

void CustomMetaInfo::SetMetaDataPass(const string& _metaDataPass)
{
    m_metaDataPass = _metaDataPass;
    m_metaDataPassHasBeenSet = true;
}

bool CustomMetaInfo::MetaDataPassHasBeenSet() const
{
    return m_metaDataPassHasBeenSet;
}

