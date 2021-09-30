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

#include <tencentcloud/cii/v20210408/model/MachineUnderwriteOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

MachineUnderwriteOutput::MachineUnderwriteOutput() :
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome MachineUnderwriteOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineUnderwriteOutput.CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(value["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineUnderwriteOutput.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineUnderwriteOutput.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InsuranceResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineUnderwriteOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MachineUnderwriteOutput::GetCustomerId() const
{
    return m_customerId;
}

void MachineUnderwriteOutput::SetCustomerId(const string& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool MachineUnderwriteOutput::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string MachineUnderwriteOutput::GetCustomerName() const
{
    return m_customerName;
}

void MachineUnderwriteOutput::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool MachineUnderwriteOutput::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

vector<InsuranceResult> MachineUnderwriteOutput::GetResults() const
{
    return m_results;
}

void MachineUnderwriteOutput::SetResults(const vector<InsuranceResult>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool MachineUnderwriteOutput::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

