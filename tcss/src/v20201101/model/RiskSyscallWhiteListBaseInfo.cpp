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

#include <tencentcloud/tcss/v20201101/model/RiskSyscallWhiteListBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RiskSyscallWhiteListBaseInfo::RiskSyscallWhiteListBaseInfo() :
    m_idHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_syscallNamesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_imageIdsHasBeenSet(false)
{
}

CoreInternalOutcome RiskSyscallWhiteListBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("SyscallNames") && !value["SyscallNames"].IsNull())
    {
        if (!value["SyscallNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.SyscallNames` is not array type"));

        const rapidjson::Value &tmpValue = value["SyscallNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_syscallNames.push_back((*itr).GetString());
        }
        m_syscallNamesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListBaseInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskSyscallWhiteListBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_syscallNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyscallNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_syscallNames.begin(); itr != m_syscallNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RiskSyscallWhiteListBaseInfo::GetId() const
{
    return m_id;
}

void RiskSyscallWhiteListBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t RiskSyscallWhiteListBaseInfo::GetImageCount() const
{
    return m_imageCount;
}

void RiskSyscallWhiteListBaseInfo::SetImageCount(const uint64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

string RiskSyscallWhiteListBaseInfo::GetProcessPath() const
{
    return m_processPath;
}

void RiskSyscallWhiteListBaseInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

vector<string> RiskSyscallWhiteListBaseInfo::GetSyscallNames() const
{
    return m_syscallNames;
}

void RiskSyscallWhiteListBaseInfo::SetSyscallNames(const vector<string>& _syscallNames)
{
    m_syscallNames = _syscallNames;
    m_syscallNamesHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::SyscallNamesHasBeenSet() const
{
    return m_syscallNamesHasBeenSet;
}

string RiskSyscallWhiteListBaseInfo::GetCreateTime() const
{
    return m_createTime;
}

void RiskSyscallWhiteListBaseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RiskSyscallWhiteListBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RiskSyscallWhiteListBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool RiskSyscallWhiteListBaseInfo::GetIsGlobal() const
{
    return m_isGlobal;
}

void RiskSyscallWhiteListBaseInfo::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

vector<string> RiskSyscallWhiteListBaseInfo::GetImageIds() const
{
    return m_imageIds;
}

void RiskSyscallWhiteListBaseInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool RiskSyscallWhiteListBaseInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

