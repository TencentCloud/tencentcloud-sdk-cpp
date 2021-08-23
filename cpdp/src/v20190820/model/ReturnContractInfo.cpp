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

#include <tencentcloud/cpdp/v20190820/model/ReturnContractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ReturnContractInfo::ReturnContractInfo() :
    m_contractInfoHasBeenSet(false),
    m_channelReturnContractInfoHasBeenSet(false),
    m_externalReturnContractInfoHasBeenSet(false)
{
}

CoreInternalOutcome ReturnContractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContractInfo") && !value["ContractInfo"].IsNull())
    {
        if (!value["ContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnContractInfo.ContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contractInfo.Deserialize(value["ContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contractInfoHasBeenSet = true;
    }

    if (value.HasMember("ChannelReturnContractInfo") && !value["ChannelReturnContractInfo"].IsNull())
    {
        if (!value["ChannelReturnContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnContractInfo.ChannelReturnContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_channelReturnContractInfo.Deserialize(value["ChannelReturnContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_channelReturnContractInfoHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractInfo") && !value["ExternalReturnContractInfo"].IsNull())
    {
        if (!value["ExternalReturnContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnContractInfo.ExternalReturnContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalReturnContractInfo.Deserialize(value["ExternalReturnContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalReturnContractInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReturnContractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contractInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_channelReturnContractInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelReturnContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_channelReturnContractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalReturnContractInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalReturnContractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContractInfo ReturnContractInfo::GetContractInfo() const
{
    return m_contractInfo;
}

void ReturnContractInfo::SetContractInfo(const ContractInfo& _contractInfo)
{
    m_contractInfo = _contractInfo;
    m_contractInfoHasBeenSet = true;
}

bool ReturnContractInfo::ContractInfoHasBeenSet() const
{
    return m_contractInfoHasBeenSet;
}

ChannelReturnContractInfo ReturnContractInfo::GetChannelReturnContractInfo() const
{
    return m_channelReturnContractInfo;
}

void ReturnContractInfo::SetChannelReturnContractInfo(const ChannelReturnContractInfo& _channelReturnContractInfo)
{
    m_channelReturnContractInfo = _channelReturnContractInfo;
    m_channelReturnContractInfoHasBeenSet = true;
}

bool ReturnContractInfo::ChannelReturnContractInfoHasBeenSet() const
{
    return m_channelReturnContractInfoHasBeenSet;
}

ExternalReturnContractInfo ReturnContractInfo::GetExternalReturnContractInfo() const
{
    return m_externalReturnContractInfo;
}

void ReturnContractInfo::SetExternalReturnContractInfo(const ExternalReturnContractInfo& _externalReturnContractInfo)
{
    m_externalReturnContractInfo = _externalReturnContractInfo;
    m_externalReturnContractInfoHasBeenSet = true;
}

bool ReturnContractInfo::ExternalReturnContractInfoHasBeenSet() const
{
    return m_externalReturnContractInfoHasBeenSet;
}

