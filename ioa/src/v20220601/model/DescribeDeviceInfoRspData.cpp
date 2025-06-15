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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceInfoRspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceInfoRspData::DescribeDeviceInfoRspData() :
    m_processListHasBeenSet(false),
    m_networkListHasBeenSet(false),
    m_serviceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceInfoRspData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessList") && !value["ProcessList"].IsNull())
    {
        if (!value["ProcessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceInfoRspData.ProcessList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceProcessInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_processList.push_back(item);
        }
        m_processListHasBeenSet = true;
    }

    if (value.HasMember("NetworkList") && !value["NetworkList"].IsNull())
    {
        if (!value["NetworkList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceInfoRspData.NetworkList` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceNetworkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkList.push_back(item);
        }
        m_networkListHasBeenSet = true;
    }

    if (value.HasMember("ServiceList") && !value["ServiceList"].IsNull())
    {
        if (!value["ServiceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceInfoRspData.ServiceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceList.push_back(item);
        }
        m_serviceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceInfoRspData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_processList.begin(); itr != m_processList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkList.begin(); itr != m_networkList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceList.begin(); itr != m_serviceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DeviceProcessInfo> DescribeDeviceInfoRspData::GetProcessList() const
{
    return m_processList;
}

void DescribeDeviceInfoRspData::SetProcessList(const vector<DeviceProcessInfo>& _processList)
{
    m_processList = _processList;
    m_processListHasBeenSet = true;
}

bool DescribeDeviceInfoRspData::ProcessListHasBeenSet() const
{
    return m_processListHasBeenSet;
}

vector<DeviceNetworkInfo> DescribeDeviceInfoRspData::GetNetworkList() const
{
    return m_networkList;
}

void DescribeDeviceInfoRspData::SetNetworkList(const vector<DeviceNetworkInfo>& _networkList)
{
    m_networkList = _networkList;
    m_networkListHasBeenSet = true;
}

bool DescribeDeviceInfoRspData::NetworkListHasBeenSet() const
{
    return m_networkListHasBeenSet;
}

vector<DeviceServiceInfo> DescribeDeviceInfoRspData::GetServiceList() const
{
    return m_serviceList;
}

void DescribeDeviceInfoRspData::SetServiceList(const vector<DeviceServiceInfo>& _serviceList)
{
    m_serviceList = _serviceList;
    m_serviceListHasBeenSet = true;
}

bool DescribeDeviceInfoRspData::ServiceListHasBeenSet() const
{
    return m_serviceListHasBeenSet;
}

