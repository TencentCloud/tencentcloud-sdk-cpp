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

#include <tencentcloud/live/v20180801/model/HttpCodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

HttpCodeInfo::HttpCodeInfo() :
    m_httpCodeHasBeenSet(false),
    m_valueListHasBeenSet(false)
{
}

CoreInternalOutcome HttpCodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCodeInfo.HttpCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = string(value["HttpCode"].GetString());
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("ValueList") && !value["ValueList"].IsNull())
    {
        if (!value["ValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpCodeInfo.ValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpCodeValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valueList.push_back(item);
        }
        m_valueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpCodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCode.c_str(), allocator).Move(), allocator);
    }

    if (m_valueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valueList.begin(); itr != m_valueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HttpCodeInfo::GetHttpCode() const
{
    return m_httpCode;
}

void HttpCodeInfo::SetHttpCode(const string& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool HttpCodeInfo::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

vector<HttpCodeValue> HttpCodeInfo::GetValueList() const
{
    return m_valueList;
}

void HttpCodeInfo::SetValueList(const vector<HttpCodeValue>& _valueList)
{
    m_valueList = _valueList;
    m_valueListHasBeenSet = true;
}

bool HttpCodeInfo::ValueListHasBeenSet() const
{
    return m_valueListHasBeenSet;
}

