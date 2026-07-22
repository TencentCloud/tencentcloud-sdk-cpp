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

#include <tencentcloud/chdfs/v20201112/model/PathProtectionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

PathProtectionRule::PathProtectionRule() :
    m_pathProtectionRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome PathProtectionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PathProtectionRuleId") && !value["PathProtectionRuleId"].IsNull())
    {
        if (!value["PathProtectionRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PathProtectionRule.PathProtectionRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pathProtectionRuleId = value["PathProtectionRuleId"].GetUint64();
        m_pathProtectionRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathProtectionRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathProtectionRule.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PathProtectionRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathProtectionRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathProtectionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathProtectionRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathProtectionRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pathProtectionRuleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PathProtectionRule::GetPathProtectionRuleId() const
{
    return m_pathProtectionRuleId;
}

void PathProtectionRule::SetPathProtectionRuleId(const uint64_t& _pathProtectionRuleId)
{
    m_pathProtectionRuleId = _pathProtectionRuleId;
    m_pathProtectionRuleIdHasBeenSet = true;
}

bool PathProtectionRule::PathProtectionRuleIdHasBeenSet() const
{
    return m_pathProtectionRuleIdHasBeenSet;
}

string PathProtectionRule::GetName() const
{
    return m_name;
}

void PathProtectionRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PathProtectionRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PathProtectionRule::GetPath() const
{
    return m_path;
}

void PathProtectionRule::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool PathProtectionRule::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t PathProtectionRule::GetStatus() const
{
    return m_status;
}

void PathProtectionRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PathProtectionRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PathProtectionRule::GetCreateTime() const
{
    return m_createTime;
}

void PathProtectionRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PathProtectionRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

