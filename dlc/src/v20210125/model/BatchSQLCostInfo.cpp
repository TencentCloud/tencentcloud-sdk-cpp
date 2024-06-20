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

#include <tencentcloud/dlc/v20210125/model/BatchSQLCostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BatchSQLCostInfo::BatchSQLCostInfo() :
    m_batchIdHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_costHasBeenSet(false),
    m_timeCostHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

CoreInternalOutcome BatchSQLCostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.Cost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cost = value["Cost"].GetDouble();
        m_costHasBeenSet = true;
    }

    if (value.HasMember("TimeCost") && !value["TimeCost"].IsNull())
    {
        if (!value["TimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.TimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCost = value["TimeCost"].GetInt64();
        m_timeCostHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSQLCostInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchSQLCostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cost, allocator);
    }

    if (m_timeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCost, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

}


string BatchSQLCostInfo::GetBatchId() const
{
    return m_batchId;
}

void BatchSQLCostInfo::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool BatchSQLCostInfo::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string BatchSQLCostInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void BatchSQLCostInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool BatchSQLCostInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string BatchSQLCostInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void BatchSQLCostInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool BatchSQLCostInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

double BatchSQLCostInfo::GetCost() const
{
    return m_cost;
}

void BatchSQLCostInfo::SetCost(const double& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool BatchSQLCostInfo::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

int64_t BatchSQLCostInfo::GetTimeCost() const
{
    return m_timeCost;
}

void BatchSQLCostInfo::SetTimeCost(const int64_t& _timeCost)
{
    m_timeCost = _timeCost;
    m_timeCostHasBeenSet = true;
}

bool BatchSQLCostInfo::TimeCostHasBeenSet() const
{
    return m_timeCostHasBeenSet;
}

string BatchSQLCostInfo::GetOperator() const
{
    return m_operator;
}

void BatchSQLCostInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool BatchSQLCostInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

