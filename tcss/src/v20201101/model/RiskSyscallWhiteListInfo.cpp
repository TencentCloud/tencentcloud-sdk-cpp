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

#include <tencentcloud/tcss/v20201101/model/RiskSyscallWhiteListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RiskSyscallWhiteListInfo::RiskSyscallWhiteListInfo() :
    m_imageIdsHasBeenSet(false),
    m_syscallNamesHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome RiskSyscallWhiteListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("SyscallNames") && !value["SyscallNames"].IsNull())
    {
        if (!value["SyscallNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListInfo.SyscallNames` is not array type"));

        const rapidjson::Value &tmpValue = value["SyscallNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_syscallNames.push_back((*itr).GetString());
        }
        m_syscallNamesHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallWhiteListInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskSyscallWhiteListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


vector<string> RiskSyscallWhiteListInfo::GetImageIds() const
{
    return m_imageIds;
}

void RiskSyscallWhiteListInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool RiskSyscallWhiteListInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

vector<string> RiskSyscallWhiteListInfo::GetSyscallNames() const
{
    return m_syscallNames;
}

void RiskSyscallWhiteListInfo::SetSyscallNames(const vector<string>& _syscallNames)
{
    m_syscallNames = _syscallNames;
    m_syscallNamesHasBeenSet = true;
}

bool RiskSyscallWhiteListInfo::SyscallNamesHasBeenSet() const
{
    return m_syscallNamesHasBeenSet;
}

string RiskSyscallWhiteListInfo::GetProcessPath() const
{
    return m_processPath;
}

void RiskSyscallWhiteListInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool RiskSyscallWhiteListInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string RiskSyscallWhiteListInfo::GetId() const
{
    return m_id;
}

void RiskSyscallWhiteListInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskSyscallWhiteListInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

