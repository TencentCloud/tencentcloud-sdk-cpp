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

#include <tencentcloud/mna/v20210119/model/DeviceDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DeviceDetails::DeviceDetails() :
    m_deviceBaseInfoHasBeenSet(false),
    m_deviceNetInfoHasBeenSet(false),
    m_gatewaySiteHasBeenSet(false),
    m_businessDownRateHasBeenSet(false),
    m_businessUpRateHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceBaseInfo") && !value["DeviceBaseInfo"].IsNull())
    {
        if (!value["DeviceBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.DeviceBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deviceBaseInfo.Deserialize(value["DeviceBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("DeviceNetInfo") && !value["DeviceNetInfo"].IsNull())
    {
        if (!value["DeviceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.DeviceNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceNetInfo.push_back(item);
        }
        m_deviceNetInfoHasBeenSet = true;
    }

    if (value.HasMember("GatewaySite") && !value["GatewaySite"].IsNull())
    {
        if (!value["GatewaySite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.GatewaySite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewaySite = string(value["GatewaySite"].GetString());
        m_gatewaySiteHasBeenSet = true;
    }

    if (value.HasMember("BusinessDownRate") && !value["BusinessDownRate"].IsNull())
    {
        if (!value["BusinessDownRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.BusinessDownRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_businessDownRate = value["BusinessDownRate"].GetDouble();
        m_businessDownRateHasBeenSet = true;
    }

    if (value.HasMember("BusinessUpRate") && !value["BusinessUpRate"].IsNull())
    {
        if (!value["BusinessUpRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.BusinessUpRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_businessUpRate = value["BusinessUpRate"].GetDouble();
        m_businessUpRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceNetInfo.begin(); itr != m_deviceNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gatewaySiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewaySite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewaySite.c_str(), allocator).Move(), allocator);
    }

    if (m_businessDownRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessDownRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessDownRate, allocator);
    }

    if (m_businessUpRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessUpRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessUpRate, allocator);
    }

}


DeviceBaseInfo DeviceDetails::GetDeviceBaseInfo() const
{
    return m_deviceBaseInfo;
}

void DeviceDetails::SetDeviceBaseInfo(const DeviceBaseInfo& _deviceBaseInfo)
{
    m_deviceBaseInfo = _deviceBaseInfo;
    m_deviceBaseInfoHasBeenSet = true;
}

bool DeviceDetails::DeviceBaseInfoHasBeenSet() const
{
    return m_deviceBaseInfoHasBeenSet;
}

vector<DeviceNetInfo> DeviceDetails::GetDeviceNetInfo() const
{
    return m_deviceNetInfo;
}

void DeviceDetails::SetDeviceNetInfo(const vector<DeviceNetInfo>& _deviceNetInfo)
{
    m_deviceNetInfo = _deviceNetInfo;
    m_deviceNetInfoHasBeenSet = true;
}

bool DeviceDetails::DeviceNetInfoHasBeenSet() const
{
    return m_deviceNetInfoHasBeenSet;
}

string DeviceDetails::GetGatewaySite() const
{
    return m_gatewaySite;
}

void DeviceDetails::SetGatewaySite(const string& _gatewaySite)
{
    m_gatewaySite = _gatewaySite;
    m_gatewaySiteHasBeenSet = true;
}

bool DeviceDetails::GatewaySiteHasBeenSet() const
{
    return m_gatewaySiteHasBeenSet;
}

double DeviceDetails::GetBusinessDownRate() const
{
    return m_businessDownRate;
}

void DeviceDetails::SetBusinessDownRate(const double& _businessDownRate)
{
    m_businessDownRate = _businessDownRate;
    m_businessDownRateHasBeenSet = true;
}

bool DeviceDetails::BusinessDownRateHasBeenSet() const
{
    return m_businessDownRateHasBeenSet;
}

double DeviceDetails::GetBusinessUpRate() const
{
    return m_businessUpRate;
}

void DeviceDetails::SetBusinessUpRate(const double& _businessUpRate)
{
    m_businessUpRate = _businessUpRate;
    m_businessUpRateHasBeenSet = true;
}

bool DeviceDetails::BusinessUpRateHasBeenSet() const
{
    return m_businessUpRateHasBeenSet;
}

