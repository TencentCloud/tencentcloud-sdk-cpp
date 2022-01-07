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

#include <tencentcloud/eb/v20210416/model/DeadLetterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

DeadLetterConfig::DeadLetterConfig() :
    m_disposeMethodHasBeenSet(false),
    m_ckafkaDeliveryParamsHasBeenSet(false)
{
}

CoreInternalOutcome DeadLetterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisposeMethod") && !value["DisposeMethod"].IsNull())
    {
        if (!value["DisposeMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterConfig.DisposeMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposeMethod = string(value["DisposeMethod"].GetString());
        m_disposeMethodHasBeenSet = true;
    }

    if (value.HasMember("CkafkaDeliveryParams") && !value["CkafkaDeliveryParams"].IsNull())
    {
        if (!value["CkafkaDeliveryParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterConfig.CkafkaDeliveryParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafkaDeliveryParams.Deserialize(value["CkafkaDeliveryParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaDeliveryParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadLetterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disposeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposeMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disposeMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_ckafkaDeliveryParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CkafkaDeliveryParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafkaDeliveryParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DeadLetterConfig::GetDisposeMethod() const
{
    return m_disposeMethod;
}

void DeadLetterConfig::SetDisposeMethod(const string& _disposeMethod)
{
    m_disposeMethod = _disposeMethod;
    m_disposeMethodHasBeenSet = true;
}

bool DeadLetterConfig::DisposeMethodHasBeenSet() const
{
    return m_disposeMethodHasBeenSet;
}

CkafkaDeliveryParams DeadLetterConfig::GetCkafkaDeliveryParams() const
{
    return m_ckafkaDeliveryParams;
}

void DeadLetterConfig::SetCkafkaDeliveryParams(const CkafkaDeliveryParams& _ckafkaDeliveryParams)
{
    m_ckafkaDeliveryParams = _ckafkaDeliveryParams;
    m_ckafkaDeliveryParamsHasBeenSet = true;
}

bool DeadLetterConfig::CkafkaDeliveryParamsHasBeenSet() const
{
    return m_ckafkaDeliveryParamsHasBeenSet;
}

