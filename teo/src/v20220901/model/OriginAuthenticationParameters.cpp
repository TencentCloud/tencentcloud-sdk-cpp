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

#include <tencentcloud/teo/v20220901/model/OriginAuthenticationParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginAuthenticationParameters::OriginAuthenticationParameters() :
    m_requestPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome OriginAuthenticationParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestProperties") && !value["RequestProperties"].IsNull())
    {
        if (!value["RequestProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginAuthenticationParameters.RequestProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginAuthenticationRequestProperties item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestProperties.push_back(item);
        }
        m_requestPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginAuthenticationParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestProperties.begin(); itr != m_requestProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<OriginAuthenticationRequestProperties> OriginAuthenticationParameters::GetRequestProperties() const
{
    return m_requestProperties;
}

void OriginAuthenticationParameters::SetRequestProperties(const vector<OriginAuthenticationRequestProperties>& _requestProperties)
{
    m_requestProperties = _requestProperties;
    m_requestPropertiesHasBeenSet = true;
}

bool OriginAuthenticationParameters::RequestPropertiesHasBeenSet() const
{
    return m_requestPropertiesHasBeenSet;
}

