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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheKeyParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceCacheKeyParams::HTTPServiceCacheKeyParams() :
    m_fullURLCacheHasBeenSet(false),
    m_queryStringSwitchHasBeenSet(false),
    m_queryStringActionHasBeenSet(false),
    m_queryStringValuesHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceCacheKeyParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullURLCache") && !value["FullURLCache"].IsNull())
    {
        if (!value["FullURLCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheKeyParams.FullURLCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullURLCache = string(value["FullURLCache"].GetString());
        m_fullURLCacheHasBeenSet = true;
    }

    if (value.HasMember("QueryStringSwitch") && !value["QueryStringSwitch"].IsNull())
    {
        if (!value["QueryStringSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheKeyParams.QueryStringSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStringSwitch = string(value["QueryStringSwitch"].GetString());
        m_queryStringSwitchHasBeenSet = true;
    }

    if (value.HasMember("QueryStringAction") && !value["QueryStringAction"].IsNull())
    {
        if (!value["QueryStringAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheKeyParams.QueryStringAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStringAction = string(value["QueryStringAction"].GetString());
        m_queryStringActionHasBeenSet = true;
    }

    if (value.HasMember("QueryStringValues") && !value["QueryStringValues"].IsNull())
    {
        if (!value["QueryStringValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheKeyParams.QueryStringValues` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryStringValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_queryStringValues.push_back((*itr).GetString());
        }
        m_queryStringValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceCacheKeyParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullURLCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullURLCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullURLCache.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStringSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryStringSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStringAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryStringAction.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStringValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queryStringValues.begin(); itr != m_queryStringValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string HTTPServiceCacheKeyParams::GetFullURLCache() const
{
    return m_fullURLCache;
}

void HTTPServiceCacheKeyParams::SetFullURLCache(const string& _fullURLCache)
{
    m_fullURLCache = _fullURLCache;
    m_fullURLCacheHasBeenSet = true;
}

bool HTTPServiceCacheKeyParams::FullURLCacheHasBeenSet() const
{
    return m_fullURLCacheHasBeenSet;
}

string HTTPServiceCacheKeyParams::GetQueryStringSwitch() const
{
    return m_queryStringSwitch;
}

void HTTPServiceCacheKeyParams::SetQueryStringSwitch(const string& _queryStringSwitch)
{
    m_queryStringSwitch = _queryStringSwitch;
    m_queryStringSwitchHasBeenSet = true;
}

bool HTTPServiceCacheKeyParams::QueryStringSwitchHasBeenSet() const
{
    return m_queryStringSwitchHasBeenSet;
}

string HTTPServiceCacheKeyParams::GetQueryStringAction() const
{
    return m_queryStringAction;
}

void HTTPServiceCacheKeyParams::SetQueryStringAction(const string& _queryStringAction)
{
    m_queryStringAction = _queryStringAction;
    m_queryStringActionHasBeenSet = true;
}

bool HTTPServiceCacheKeyParams::QueryStringActionHasBeenSet() const
{
    return m_queryStringActionHasBeenSet;
}

vector<string> HTTPServiceCacheKeyParams::GetQueryStringValues() const
{
    return m_queryStringValues;
}

void HTTPServiceCacheKeyParams::SetQueryStringValues(const vector<string>& _queryStringValues)
{
    m_queryStringValues = _queryStringValues;
    m_queryStringValuesHasBeenSet = true;
}

bool HTTPServiceCacheKeyParams::QueryStringValuesHasBeenSet() const
{
    return m_queryStringValuesHasBeenSet;
}

