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

#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

StatusCodeCacheParameters::StatusCodeCacheParameters() :
    m_statusCodeCacheParamsHasBeenSet(false)
{
}

CoreInternalOutcome StatusCodeCacheParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCodeCacheParams") && !value["StatusCodeCacheParams"].IsNull())
    {
        if (!value["StatusCodeCacheParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatusCodeCacheParameters.StatusCodeCacheParams` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusCodeCacheParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatusCodeCacheParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusCodeCacheParams.push_back(item);
        }
        m_statusCodeCacheParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatusCodeCacheParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeCacheParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodeCacheParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusCodeCacheParams.begin(); itr != m_statusCodeCacheParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<StatusCodeCacheParam> StatusCodeCacheParameters::GetStatusCodeCacheParams() const
{
    return m_statusCodeCacheParams;
}

void StatusCodeCacheParameters::SetStatusCodeCacheParams(const vector<StatusCodeCacheParam>& _statusCodeCacheParams)
{
    m_statusCodeCacheParams = _statusCodeCacheParams;
    m_statusCodeCacheParamsHasBeenSet = true;
}

bool StatusCodeCacheParameters::StatusCodeCacheParamsHasBeenSet() const
{
    return m_statusCodeCacheParamsHasBeenSet;
}

