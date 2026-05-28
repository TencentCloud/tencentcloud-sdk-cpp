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

#include <tencentcloud/ig/v20210518/model/HighlightWordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

HighlightWordInfo::HighlightWordInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_jumpTypeHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_jumpAppidHasBeenSet(false),
    m_jumpOriginIdHasBeenSet(false)
{
}

CoreInternalOutcome HighlightWordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("JumpType") && !value["JumpType"].IsNull())
    {
        if (!value["JumpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.JumpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpType = string(value["JumpType"].GetString());
        m_jumpTypeHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }

    if (value.HasMember("JumpAppid") && !value["JumpAppid"].IsNull())
    {
        if (!value["JumpAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.JumpAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpAppid = string(value["JumpAppid"].GetString());
        m_jumpAppidHasBeenSet = true;
    }

    if (value.HasMember("JumpOriginId") && !value["JumpOriginId"].IsNull())
    {
        if (!value["JumpOriginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightWordInfo.JumpOriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpOriginId = string(value["JumpOriginId"].GetString());
        m_jumpOriginIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightWordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_jumpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpType.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpOriginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpOriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpOriginId.c_str(), allocator).Move(), allocator);
    }

}


string HighlightWordInfo::GetName() const
{
    return m_name;
}

void HighlightWordInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HighlightWordInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t HighlightWordInfo::GetType() const
{
    return m_type;
}

void HighlightWordInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HighlightWordInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HighlightWordInfo::GetJumpType() const
{
    return m_jumpType;
}

void HighlightWordInfo::SetJumpType(const string& _jumpType)
{
    m_jumpType = _jumpType;
    m_jumpTypeHasBeenSet = true;
}

bool HighlightWordInfo::JumpTypeHasBeenSet() const
{
    return m_jumpTypeHasBeenSet;
}

string HighlightWordInfo::GetJumpUrl() const
{
    return m_jumpUrl;
}

void HighlightWordInfo::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool HighlightWordInfo::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string HighlightWordInfo::GetJumpAppid() const
{
    return m_jumpAppid;
}

void HighlightWordInfo::SetJumpAppid(const string& _jumpAppid)
{
    m_jumpAppid = _jumpAppid;
    m_jumpAppidHasBeenSet = true;
}

bool HighlightWordInfo::JumpAppidHasBeenSet() const
{
    return m_jumpAppidHasBeenSet;
}

string HighlightWordInfo::GetJumpOriginId() const
{
    return m_jumpOriginId;
}

void HighlightWordInfo::SetJumpOriginId(const string& _jumpOriginId)
{
    m_jumpOriginId = _jumpOriginId;
    m_jumpOriginIdHasBeenSet = true;
}

bool HighlightWordInfo::JumpOriginIdHasBeenSet() const
{
    return m_jumpOriginIdHasBeenSet;
}

