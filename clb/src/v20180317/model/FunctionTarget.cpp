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

#include <tencentcloud/clb/v20180317/model/FunctionTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

FunctionTarget::FunctionTarget() :
    m_functionHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome FunctionTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTarget.Function` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_function.Deserialize(value["Function"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_functionHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTarget.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_function.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


FunctionInfo FunctionTarget::GetFunction() const
{
    return m_function;
}

void FunctionTarget::SetFunction(const FunctionInfo& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool FunctionTarget::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

uint64_t FunctionTarget::GetWeight() const
{
    return m_weight;
}

void FunctionTarget::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool FunctionTarget::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

