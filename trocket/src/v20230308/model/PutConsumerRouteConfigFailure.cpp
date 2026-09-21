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

#include <tencentcloud/trocket/v20230308/model/PutConsumerRouteConfigFailure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

PutConsumerRouteConfigFailure::PutConsumerRouteConfigFailure() :
    m_keyHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome PutConsumerRouteConfigFailure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PutConsumerRouteConfigFailure.Key` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_key.Deserialize(value["Key"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PutConsumerRouteConfigFailure.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PutConsumerRouteConfigFailure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_key.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


ConsumerRouteKey PutConsumerRouteConfigFailure::GetKey() const
{
    return m_key;
}

void PutConsumerRouteConfigFailure::SetKey(const ConsumerRouteKey& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool PutConsumerRouteConfigFailure::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

ErrorInfo PutConsumerRouteConfigFailure::GetError() const
{
    return m_error;
}

void PutConsumerRouteConfigFailure::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool PutConsumerRouteConfigFailure::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

