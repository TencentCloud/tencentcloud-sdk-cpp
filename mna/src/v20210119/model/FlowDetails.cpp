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

#include <tencentcloud/mna/v20210119/model/FlowDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

FlowDetails::FlowDetails() :
    m_netDetailsHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_avgValueHasBeenSet(false),
    m_totalValueHasBeenSet(false)
{
}

CoreInternalOutcome FlowDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetDetails") && !value["NetDetails"].IsNull())
    {
        if (!value["NetDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetails.NetDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["NetDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netDetails.push_back(item);
        }
        m_netDetailsHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetails.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetails.MaxValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = value["MaxValue"].GetDouble();
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("AvgValue") && !value["AvgValue"].IsNull())
    {
        if (!value["AvgValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetails.AvgValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgValue = value["AvgValue"].GetDouble();
        m_avgValueHasBeenSet = true;
    }

    if (value.HasMember("TotalValue") && !value["TotalValue"].IsNull())
    {
        if (!value["TotalValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetails.TotalValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalValue = value["TotalValue"].GetDouble();
        m_totalValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_netDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netDetails.begin(); itr != m_netDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_avgValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgValue, allocator);
    }

    if (m_totalValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalValue, allocator);
    }

}


vector<NetDetails> FlowDetails::GetNetDetails() const
{
    return m_netDetails;
}

void FlowDetails::SetNetDetails(const vector<NetDetails>& _netDetails)
{
    m_netDetails = _netDetails;
    m_netDetailsHasBeenSet = true;
}

bool FlowDetails::NetDetailsHasBeenSet() const
{
    return m_netDetailsHasBeenSet;
}

string FlowDetails::GetDeviceId() const
{
    return m_deviceId;
}

void FlowDetails::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool FlowDetails::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

double FlowDetails::GetMaxValue() const
{
    return m_maxValue;
}

void FlowDetails::SetMaxValue(const double& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool FlowDetails::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

double FlowDetails::GetAvgValue() const
{
    return m_avgValue;
}

void FlowDetails::SetAvgValue(const double& _avgValue)
{
    m_avgValue = _avgValue;
    m_avgValueHasBeenSet = true;
}

bool FlowDetails::AvgValueHasBeenSet() const
{
    return m_avgValueHasBeenSet;
}

double FlowDetails::GetTotalValue() const
{
    return m_totalValue;
}

void FlowDetails::SetTotalValue(const double& _totalValue)
{
    m_totalValue = _totalValue;
    m_totalValueHasBeenSet = true;
}

bool FlowDetails::TotalValueHasBeenSet() const
{
    return m_totalValueHasBeenSet;
}

