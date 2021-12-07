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

#include <tencentcloud/tcss/v20201101/model/ReverseShellWhiteListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ReverseShellWhiteListInfo::ReverseShellWhiteListInfo() :
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome ReverseShellWhiteListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListInfo.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListInfo.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellWhiteListInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReverseShellWhiteListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string ReverseShellWhiteListInfo::GetDstIp() const
{
    return m_dstIp;
}

void ReverseShellWhiteListInfo::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ReverseShellWhiteListInfo::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string ReverseShellWhiteListInfo::GetDstPort() const
{
    return m_dstPort;
}

void ReverseShellWhiteListInfo::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ReverseShellWhiteListInfo::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string ReverseShellWhiteListInfo::GetProcessName() const
{
    return m_processName;
}

void ReverseShellWhiteListInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ReverseShellWhiteListInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

vector<string> ReverseShellWhiteListInfo::GetImageIds() const
{
    return m_imageIds;
}

void ReverseShellWhiteListInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ReverseShellWhiteListInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string ReverseShellWhiteListInfo::GetId() const
{
    return m_id;
}

void ReverseShellWhiteListInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReverseShellWhiteListInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

