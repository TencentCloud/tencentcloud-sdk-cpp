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

#include <tencentcloud/tcss/v20201101/model/ReverseShellWhiteListBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ReverseShellWhiteListBaseInfo::ReverseShellWhiteListBaseInfo() :
    m_idHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_imageIdsHasBeenSet(false)
{
}

CoreInternalOutcome ReverseShellWhiteListBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListBaseInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReverseShellWhiteListBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
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

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
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


string ReverseShellWhiteListBaseInfo::GetId() const
{
    return m_id;
}

void ReverseShellWhiteListBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ReverseShellWhiteListBaseInfo::GetImageCount() const
{
    return m_imageCount;
}

void ReverseShellWhiteListBaseInfo::SetImageCount(const uint64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

string ReverseShellWhiteListBaseInfo::GetProcessName() const
{
    return m_processName;
}

void ReverseShellWhiteListBaseInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string ReverseShellWhiteListBaseInfo::GetDstIp() const
{
    return m_dstIp;
}

void ReverseShellWhiteListBaseInfo::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string ReverseShellWhiteListBaseInfo::GetCreateTime() const
{
    return m_createTime;
}

void ReverseShellWhiteListBaseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReverseShellWhiteListBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ReverseShellWhiteListBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ReverseShellWhiteListBaseInfo::GetDstPort() const
{
    return m_dstPort;
}

void ReverseShellWhiteListBaseInfo::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

bool ReverseShellWhiteListBaseInfo::GetIsGlobal() const
{
    return m_isGlobal;
}

void ReverseShellWhiteListBaseInfo::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

vector<string> ReverseShellWhiteListBaseInfo::GetImageIds() const
{
    return m_imageIds;
}

void ReverseShellWhiteListBaseInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ReverseShellWhiteListBaseInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

