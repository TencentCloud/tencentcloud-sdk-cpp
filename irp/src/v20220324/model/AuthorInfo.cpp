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

#include <tencentcloud/irp/v20220324/model/AuthorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

AuthorInfo::AuthorInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_followTypeHasBeenSet(false),
    m_iconUrlHasBeenSet(false)
{
}

CoreInternalOutcome AuthorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorInfo.SourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = value["SourceId"].GetInt64();
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("FollowType") && !value["FollowType"].IsNull())
    {
        if (!value["FollowType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorInfo.FollowType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_followType = value["FollowType"].GetInt64();
        m_followTypeHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorInfo.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceId, allocator);
    }

    if (m_followTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followType, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

}


string AuthorInfo::GetId() const
{
    return m_id;
}

void AuthorInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AuthorInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AuthorInfo::GetName() const
{
    return m_name;
}

void AuthorInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AuthorInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AuthorInfo::GetSourceId() const
{
    return m_sourceId;
}

void AuthorInfo::SetSourceId(const int64_t& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool AuthorInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

int64_t AuthorInfo::GetFollowType() const
{
    return m_followType;
}

void AuthorInfo::SetFollowType(const int64_t& _followType)
{
    m_followType = _followType;
    m_followTypeHasBeenSet = true;
}

bool AuthorInfo::FollowTypeHasBeenSet() const
{
    return m_followTypeHasBeenSet;
}

string AuthorInfo::GetIconUrl() const
{
    return m_iconUrl;
}

void AuthorInfo::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool AuthorInfo::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

