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

#include <tencentcloud/cii/v20210408/model/InsuranceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

InsuranceResult::InsuranceResult() :
    m_insuranceTypeHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome InsuranceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsuranceType") && !value["InsuranceType"].IsNull())
    {
        if (!value["InsuranceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsuranceResult.InsuranceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insuranceType = string(value["InsuranceType"].GetString());
        m_insuranceTypeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InsuranceResult.Result` is not array type"));

        const rapidjson::Value &tmpValue = value["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachinePredict item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_result.push_back(item);
        }
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InsuranceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_insuranceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsuranceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insuranceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InsuranceResult::GetInsuranceType() const
{
    return m_insuranceType;
}

void InsuranceResult::SetInsuranceType(const string& _insuranceType)
{
    m_insuranceType = _insuranceType;
    m_insuranceTypeHasBeenSet = true;
}

bool InsuranceResult::InsuranceTypeHasBeenSet() const
{
    return m_insuranceTypeHasBeenSet;
}

vector<MachinePredict> InsuranceResult::GetResult() const
{
    return m_result;
}

void InsuranceResult::SetResult(const vector<MachinePredict>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool InsuranceResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

