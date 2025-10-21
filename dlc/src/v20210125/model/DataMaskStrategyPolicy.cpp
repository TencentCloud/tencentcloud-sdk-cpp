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

#include <tencentcloud/dlc/v20210125/model/DataMaskStrategyPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataMaskStrategyPolicy::DataMaskStrategyPolicy() :
    m_policyInfoHasBeenSet(false),
    m_dataMaskStrategyIdHasBeenSet(false),
    m_columnTypeHasBeenSet(false)
{
}

CoreInternalOutcome DataMaskStrategyPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyInfo") && !value["PolicyInfo"].IsNull())
    {
        if (!value["PolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyPolicy.PolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policyInfo.Deserialize(value["PolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyInfoHasBeenSet = true;
    }

    if (value.HasMember("DataMaskStrategyId") && !value["DataMaskStrategyId"].IsNull())
    {
        if (!value["DataMaskStrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyPolicy.DataMaskStrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataMaskStrategyId = string(value["DataMaskStrategyId"].GetString());
        m_dataMaskStrategyIdHasBeenSet = true;
    }

    if (value.HasMember("ColumnType") && !value["ColumnType"].IsNull())
    {
        if (!value["ColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyPolicy.ColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnType = string(value["ColumnType"].GetString());
        m_columnTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataMaskStrategyPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataMaskStrategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataMaskStrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataMaskStrategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_columnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnType.c_str(), allocator).Move(), allocator);
    }

}


Policy DataMaskStrategyPolicy::GetPolicyInfo() const
{
    return m_policyInfo;
}

void DataMaskStrategyPolicy::SetPolicyInfo(const Policy& _policyInfo)
{
    m_policyInfo = _policyInfo;
    m_policyInfoHasBeenSet = true;
}

bool DataMaskStrategyPolicy::PolicyInfoHasBeenSet() const
{
    return m_policyInfoHasBeenSet;
}

string DataMaskStrategyPolicy::GetDataMaskStrategyId() const
{
    return m_dataMaskStrategyId;
}

void DataMaskStrategyPolicy::SetDataMaskStrategyId(const string& _dataMaskStrategyId)
{
    m_dataMaskStrategyId = _dataMaskStrategyId;
    m_dataMaskStrategyIdHasBeenSet = true;
}

bool DataMaskStrategyPolicy::DataMaskStrategyIdHasBeenSet() const
{
    return m_dataMaskStrategyIdHasBeenSet;
}

string DataMaskStrategyPolicy::GetColumnType() const
{
    return m_columnType;
}

void DataMaskStrategyPolicy::SetColumnType(const string& _columnType)
{
    m_columnType = _columnType;
    m_columnTypeHasBeenSet = true;
}

bool DataMaskStrategyPolicy::ColumnTypeHasBeenSet() const
{
    return m_columnTypeHasBeenSet;
}

