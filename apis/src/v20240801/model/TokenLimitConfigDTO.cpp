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

#include <tencentcloud/apis/v20240801/model/TokenLimitConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

TokenLimitConfigDTO::TokenLimitConfigDTO() :
    m_limitRequestBodyHasBeenSet(false),
    m_limitWindowsHasBeenSet(false)
{
}

CoreInternalOutcome TokenLimitConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitRequestBody") && !value["LimitRequestBody"].IsNull())
    {
        if (!value["LimitRequestBody"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenLimitConfigDTO.LimitRequestBody` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitRequestBody = value["LimitRequestBody"].GetUint64();
        m_limitRequestBodyHasBeenSet = true;
    }

    if (value.HasMember("LimitWindows") && !value["LimitWindows"].IsNull())
    {
        if (!value["LimitWindows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TokenLimitConfigDTO.LimitWindows` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitWindows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LimitWindowsDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitWindows.push_back(item);
        }
        m_limitWindowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenLimitConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitRequestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitRequestBody, allocator);
    }

    if (m_limitWindowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitWindows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitWindows.begin(); itr != m_limitWindows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t TokenLimitConfigDTO::GetLimitRequestBody() const
{
    return m_limitRequestBody;
}

void TokenLimitConfigDTO::SetLimitRequestBody(const uint64_t& _limitRequestBody)
{
    m_limitRequestBody = _limitRequestBody;
    m_limitRequestBodyHasBeenSet = true;
}

bool TokenLimitConfigDTO::LimitRequestBodyHasBeenSet() const
{
    return m_limitRequestBodyHasBeenSet;
}

vector<LimitWindowsDTO> TokenLimitConfigDTO::GetLimitWindows() const
{
    return m_limitWindows;
}

void TokenLimitConfigDTO::SetLimitWindows(const vector<LimitWindowsDTO>& _limitWindows)
{
    m_limitWindows = _limitWindows;
    m_limitWindowsHasBeenSet = true;
}

bool TokenLimitConfigDTO::LimitWindowsHasBeenSet() const
{
    return m_limitWindowsHasBeenSet;
}

