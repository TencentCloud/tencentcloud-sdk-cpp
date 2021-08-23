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

#include <tencentcloud/apigateway/v20180808/model/IPStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

IPStrategy::IPStrategy() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_strategyDataHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_bindApiTotalCountHasBeenSet(false),
    m_bindApisHasBeenSet(false)
{
}

CoreInternalOutcome IPStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("StrategyData") && !value["StrategyData"].IsNull())
    {
        if (!value["StrategyData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.StrategyData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyData = string(value["StrategyData"].GetString());
        m_strategyDataHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("BindApiTotalCount") && !value["BindApiTotalCount"].IsNull())
    {
        if (!value["BindApiTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategy.BindApiTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindApiTotalCount = value["BindApiTotalCount"].GetInt64();
        m_bindApiTotalCountHasBeenSet = true;
    }

    if (value.HasMember("BindApis") && !value["BindApis"].IsNull())
    {
        if (!value["BindApis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPStrategy.BindApis` is not array type"));

        const rapidjson::Value &tmpValue = value["BindApis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DesApisStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindApis.push_back(item);
        }
        m_bindApisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyData.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindApiTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindApiTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindApiTotalCount, allocator);
    }

    if (m_bindApisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindApis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindApis.begin(); itr != m_bindApis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string IPStrategy::GetStrategyId() const
{
    return m_strategyId;
}

void IPStrategy::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool IPStrategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string IPStrategy::GetStrategyName() const
{
    return m_strategyName;
}

void IPStrategy::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool IPStrategy::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string IPStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void IPStrategy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool IPStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string IPStrategy::GetStrategyData() const
{
    return m_strategyData;
}

void IPStrategy::SetStrategyData(const string& _strategyData)
{
    m_strategyData = _strategyData;
    m_strategyDataHasBeenSet = true;
}

bool IPStrategy::StrategyDataHasBeenSet() const
{
    return m_strategyDataHasBeenSet;
}

string IPStrategy::GetCreatedTime() const
{
    return m_createdTime;
}

void IPStrategy::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool IPStrategy::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string IPStrategy::GetModifiedTime() const
{
    return m_modifiedTime;
}

void IPStrategy::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool IPStrategy::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string IPStrategy::GetServiceId() const
{
    return m_serviceId;
}

void IPStrategy::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool IPStrategy::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t IPStrategy::GetBindApiTotalCount() const
{
    return m_bindApiTotalCount;
}

void IPStrategy::SetBindApiTotalCount(const int64_t& _bindApiTotalCount)
{
    m_bindApiTotalCount = _bindApiTotalCount;
    m_bindApiTotalCountHasBeenSet = true;
}

bool IPStrategy::BindApiTotalCountHasBeenSet() const
{
    return m_bindApiTotalCountHasBeenSet;
}

vector<DesApisStatus> IPStrategy::GetBindApis() const
{
    return m_bindApis;
}

void IPStrategy::SetBindApis(const vector<DesApisStatus>& _bindApis)
{
    m_bindApis = _bindApis;
    m_bindApisHasBeenSet = true;
}

bool IPStrategy::BindApisHasBeenSet() const
{
    return m_bindApisHasBeenSet;
}

