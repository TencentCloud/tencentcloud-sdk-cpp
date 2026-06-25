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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelParamCheckInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelParamCheckInfo::CloudNativeAPIGatewayLLMModelParamCheckInfo() :
    m_allowModelListHasBeenSet(false),
    m_modelValidationFailureStrategyHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelParamCheckInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllowModelList") && !value["AllowModelList"].IsNull())
    {
        if (!value["AllowModelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelParamCheckInfo.AllowModelList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowModelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowModelList.push_back((*itr).GetString());
        }
        m_allowModelListHasBeenSet = true;
    }

    if (value.HasMember("ModelValidationFailureStrategy") && !value["ModelValidationFailureStrategy"].IsNull())
    {
        if (!value["ModelValidationFailureStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelParamCheckInfo.ModelValidationFailureStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelValidationFailureStrategy = string(value["ModelValidationFailureStrategy"].GetString());
        m_modelValidationFailureStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelParamCheckInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allowModelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowModelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowModelList.begin(); itr != m_allowModelList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelValidationFailureStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelValidationFailureStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelValidationFailureStrategy.c_str(), allocator).Move(), allocator);
    }

}


vector<string> CloudNativeAPIGatewayLLMModelParamCheckInfo::GetAllowModelList() const
{
    return m_allowModelList;
}

void CloudNativeAPIGatewayLLMModelParamCheckInfo::SetAllowModelList(const vector<string>& _allowModelList)
{
    m_allowModelList = _allowModelList;
    m_allowModelListHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelParamCheckInfo::AllowModelListHasBeenSet() const
{
    return m_allowModelListHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelParamCheckInfo::GetModelValidationFailureStrategy() const
{
    return m_modelValidationFailureStrategy;
}

void CloudNativeAPIGatewayLLMModelParamCheckInfo::SetModelValidationFailureStrategy(const string& _modelValidationFailureStrategy)
{
    m_modelValidationFailureStrategy = _modelValidationFailureStrategy;
    m_modelValidationFailureStrategyHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelParamCheckInfo::ModelValidationFailureStrategyHasBeenSet() const
{
    return m_modelValidationFailureStrategyHasBeenSet;
}

