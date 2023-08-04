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

#include <tencentcloud/iss/v20230517/model/ControlDevicePresetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDevicePresetRequest::ControlDevicePresetRequest() :
    m_channelIdHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

string ControlDevicePresetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_index, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDevicePresetRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlDevicePresetRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlDevicePresetRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ControlDevicePresetRequest::GetCmd() const
{
    return m_cmd;
}

void ControlDevicePresetRequest::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool ControlDevicePresetRequest::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

int64_t ControlDevicePresetRequest::GetIndex() const
{
    return m_index;
}

void ControlDevicePresetRequest::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ControlDevicePresetRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}


