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

#include <tencentcloud/cpdp/v20190820/model/ChannelReturnContractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ChannelReturnContractInfo::ChannelReturnContractInfo() :
    m_contractStatusHasBeenSet(false),
    m_channelContractInfoHasBeenSet(false)
{
}

CoreInternalOutcome ChannelReturnContractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContractStatus") && !value["ContractStatus"].IsNull())
    {
        if (!value["ContractStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelReturnContractInfo.ContractStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractStatus = string(value["ContractStatus"].GetString());
        m_contractStatusHasBeenSet = true;
    }

    if (value.HasMember("ChannelContractInfo") && !value["ChannelContractInfo"].IsNull())
    {
        if (!value["ChannelContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelReturnContractInfo.ChannelContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_channelContractInfo.Deserialize(value["ChannelContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_channelContractInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelReturnContractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contractStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_channelContractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChannelReturnContractInfo::GetContractStatus() const
{
    return m_contractStatus;
}

void ChannelReturnContractInfo::SetContractStatus(const string& _contractStatus)
{
    m_contractStatus = _contractStatus;
    m_contractStatusHasBeenSet = true;
}

bool ChannelReturnContractInfo::ContractStatusHasBeenSet() const
{
    return m_contractStatusHasBeenSet;
}

ChannelContractInfo ChannelReturnContractInfo::GetChannelContractInfo() const
{
    return m_channelContractInfo;
}

void ChannelReturnContractInfo::SetChannelContractInfo(const ChannelContractInfo& _channelContractInfo)
{
    m_channelContractInfo = _channelContractInfo;
    m_channelContractInfoHasBeenSet = true;
}

bool ChannelReturnContractInfo::ChannelContractInfoHasBeenSet() const
{
    return m_channelContractInfoHasBeenSet;
}

