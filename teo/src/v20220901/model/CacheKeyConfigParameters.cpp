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

#include <tencentcloud/teo/v20220901/model/CacheKeyConfigParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CacheKeyConfigParameters::CacheKeyConfigParameters() :
    m_fullURLCacheHasBeenSet(false),
    m_ignoreCaseHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

CoreInternalOutcome CacheKeyConfigParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullURLCache") && !value["FullURLCache"].IsNull())
    {
        if (!value["FullURLCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyConfigParameters.FullURLCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullURLCache = string(value["FullURLCache"].GetString());
        m_fullURLCacheHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCase") && !value["IgnoreCase"].IsNull())
    {
        if (!value["IgnoreCase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyConfigParameters.IgnoreCase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCase = string(value["IgnoreCase"].GetString());
        m_ignoreCaseHasBeenSet = true;
    }

    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyConfigParameters.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheKeyConfigParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullURLCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullURLCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullURLCache.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreCase.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CacheKeyConfigParameters::GetFullURLCache() const
{
    return m_fullURLCache;
}

void CacheKeyConfigParameters::SetFullURLCache(const string& _fullURLCache)
{
    m_fullURLCache = _fullURLCache;
    m_fullURLCacheHasBeenSet = true;
}

bool CacheKeyConfigParameters::FullURLCacheHasBeenSet() const
{
    return m_fullURLCacheHasBeenSet;
}

string CacheKeyConfigParameters::GetIgnoreCase() const
{
    return m_ignoreCase;
}

void CacheKeyConfigParameters::SetIgnoreCase(const string& _ignoreCase)
{
    m_ignoreCase = _ignoreCase;
    m_ignoreCaseHasBeenSet = true;
}

bool CacheKeyConfigParameters::IgnoreCaseHasBeenSet() const
{
    return m_ignoreCaseHasBeenSet;
}

CacheKeyQueryString CacheKeyConfigParameters::GetQueryString() const
{
    return m_queryString;
}

void CacheKeyConfigParameters::SetQueryString(const CacheKeyQueryString& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool CacheKeyConfigParameters::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

