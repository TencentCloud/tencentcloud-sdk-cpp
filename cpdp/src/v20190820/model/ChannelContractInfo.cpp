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

#include <tencentcloud/cpdp/v20190820/model/ChannelContractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ChannelContractInfo::ChannelContractInfo() :
    m_outContractCodeHasBeenSet(false),
    m_channelContractCodeHasBeenSet(false)
{
}

CoreInternalOutcome ChannelContractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutContractCode") && !value["OutContractCode"].IsNull())
    {
        if (!value["OutContractCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContractInfo.OutContractCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outContractCode = string(value["OutContractCode"].GetString());
        m_outContractCodeHasBeenSet = true;
    }

    if (value.HasMember("ChannelContractCode") && !value["ChannelContractCode"].IsNull())
    {
        if (!value["ChannelContractCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContractInfo.ChannelContractCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelContractCode = string(value["ChannelContractCode"].GetString());
        m_channelContractCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelContractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelContractCode.c_str(), allocator).Move(), allocator);
    }

}


string ChannelContractInfo::GetOutContractCode() const
{
    return m_outContractCode;
}

void ChannelContractInfo::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool ChannelContractInfo::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

string ChannelContractInfo::GetChannelContractCode() const
{
    return m_channelContractCode;
}

void ChannelContractInfo::SetChannelContractCode(const string& _channelContractCode)
{
    m_channelContractCode = _channelContractCode;
    m_channelContractCodeHasBeenSet = true;
}

bool ChannelContractInfo::ChannelContractCodeHasBeenSet() const
{
    return m_channelContractCodeHasBeenSet;
}

