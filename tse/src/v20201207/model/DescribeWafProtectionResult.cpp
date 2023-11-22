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

#include <tencentcloud/tse/v20201207/model/DescribeWafProtectionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeWafProtectionResult::DescribeWafProtectionResult() :
    m_globalStatusHasBeenSet(false),
    m_servicesStatusHasBeenSet(false),
    m_routeStatusHasBeenSet(false),
    m_objectStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWafProtectionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalStatus") && !value["GlobalStatus"].IsNull())
    {
        if (!value["GlobalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWafProtectionResult.GlobalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalStatus = string(value["GlobalStatus"].GetString());
        m_globalStatusHasBeenSet = true;
    }

    if (value.HasMember("ServicesStatus") && !value["ServicesStatus"].IsNull())
    {
        if (!value["ServicesStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeWafProtectionResult.ServicesStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["ServicesStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceWafStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_servicesStatus.push_back(item);
        }
        m_servicesStatusHasBeenSet = true;
    }

    if (value.HasMember("RouteStatus") && !value["RouteStatus"].IsNull())
    {
        if (!value["RouteStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeWafProtectionResult.RouteStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteWafStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeStatus.push_back(item);
        }
        m_routeStatusHasBeenSet = true;
    }

    if (value.HasMember("ObjectStatus") && !value["ObjectStatus"].IsNull())
    {
        if (!value["ObjectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWafProtectionResult.ObjectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectStatus = string(value["ObjectStatus"].GetString());
        m_objectStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeWafProtectionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicesStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_servicesStatus.begin(); itr != m_servicesStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_routeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeStatus.begin(); itr != m_routeStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_objectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectStatus.c_str(), allocator).Move(), allocator);
    }

}


string DescribeWafProtectionResult::GetGlobalStatus() const
{
    return m_globalStatus;
}

void DescribeWafProtectionResult::SetGlobalStatus(const string& _globalStatus)
{
    m_globalStatus = _globalStatus;
    m_globalStatusHasBeenSet = true;
}

bool DescribeWafProtectionResult::GlobalStatusHasBeenSet() const
{
    return m_globalStatusHasBeenSet;
}

vector<ServiceWafStatus> DescribeWafProtectionResult::GetServicesStatus() const
{
    return m_servicesStatus;
}

void DescribeWafProtectionResult::SetServicesStatus(const vector<ServiceWafStatus>& _servicesStatus)
{
    m_servicesStatus = _servicesStatus;
    m_servicesStatusHasBeenSet = true;
}

bool DescribeWafProtectionResult::ServicesStatusHasBeenSet() const
{
    return m_servicesStatusHasBeenSet;
}

vector<RouteWafStatus> DescribeWafProtectionResult::GetRouteStatus() const
{
    return m_routeStatus;
}

void DescribeWafProtectionResult::SetRouteStatus(const vector<RouteWafStatus>& _routeStatus)
{
    m_routeStatus = _routeStatus;
    m_routeStatusHasBeenSet = true;
}

bool DescribeWafProtectionResult::RouteStatusHasBeenSet() const
{
    return m_routeStatusHasBeenSet;
}

string DescribeWafProtectionResult::GetObjectStatus() const
{
    return m_objectStatus;
}

void DescribeWafProtectionResult::SetObjectStatus(const string& _objectStatus)
{
    m_objectStatus = _objectStatus;
    m_objectStatusHasBeenSet = true;
}

bool DescribeWafProtectionResult::ObjectStatusHasBeenSet() const
{
    return m_objectStatusHasBeenSet;
}

