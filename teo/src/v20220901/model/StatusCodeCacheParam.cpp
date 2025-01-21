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

#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

StatusCodeCacheParam::StatusCodeCacheParam() :
    m_statusCodeHasBeenSet(false),
    m_cacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome StatusCodeCacheParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusCodeCacheParam.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusCodeCacheParam.CacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetInt64();
        m_cacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatusCodeCacheParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

}


int64_t StatusCodeCacheParam::GetStatusCode() const
{
    return m_statusCode;
}

void StatusCodeCacheParam::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool StatusCodeCacheParam::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

int64_t StatusCodeCacheParam::GetCacheTime() const
{
    return m_cacheTime;
}

void StatusCodeCacheParam::SetCacheTime(const int64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool StatusCodeCacheParam::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

