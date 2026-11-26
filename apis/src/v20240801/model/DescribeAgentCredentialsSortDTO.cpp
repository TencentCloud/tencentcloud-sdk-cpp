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

#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialsSortDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentCredentialsSortDTO::DescribeAgentCredentialsSortDTO() :
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentCredentialsSortDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialsSortDTO.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialsSortDTO.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialsSortDTO.Name` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_name = value["Name"].GetInt64();
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialsSortDTO.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialsSortDTO.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAgentCredentialsSortDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_name, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


int64_t DescribeAgentCredentialsSortDTO::GetCreateTime() const
{
    return m_createTime;
}

void DescribeAgentCredentialsSortDTO::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeAgentCredentialsSortDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeAgentCredentialsSortDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeAgentCredentialsSortDTO::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeAgentCredentialsSortDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeAgentCredentialsSortDTO::GetName() const
{
    return m_name;
}

void DescribeAgentCredentialsSortDTO::SetName(const int64_t& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAgentCredentialsSortDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeAgentCredentialsSortDTO::GetStatus() const
{
    return m_status;
}

void DescribeAgentCredentialsSortDTO::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentCredentialsSortDTO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeAgentCredentialsSortDTO::GetType() const
{
    return m_type;
}

void DescribeAgentCredentialsSortDTO::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAgentCredentialsSortDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

