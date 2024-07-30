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

#include <tencentcloud/lke/v20231130/model/InvokeAPI.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

InvokeAPI::InvokeAPI() :
    m_methodHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_headerValuesHasBeenSet(false),
    m_queryValuesHasBeenSet(false),
    m_requestPostBodyHasBeenSet(false),
    m_responseBodyHasBeenSet(false),
    m_responseValuesHasBeenSet(false),
    m_failMessageHasBeenSet(false)
{
}

CoreInternalOutcome InvokeAPI::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("HeaderValues") && !value["HeaderValues"].IsNull())
    {
        if (!value["HeaderValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.HeaderValues` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StrValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerValues.push_back(item);
        }
        m_headerValuesHasBeenSet = true;
    }

    if (value.HasMember("QueryValues") && !value["QueryValues"].IsNull())
    {
        if (!value["QueryValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.QueryValues` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StrValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryValues.push_back(item);
        }
        m_queryValuesHasBeenSet = true;
    }

    if (value.HasMember("RequestPostBody") && !value["RequestPostBody"].IsNull())
    {
        if (!value["RequestPostBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.RequestPostBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestPostBody = string(value["RequestPostBody"].GetString());
        m_requestPostBodyHasBeenSet = true;
    }

    if (value.HasMember("ResponseBody") && !value["ResponseBody"].IsNull())
    {
        if (!value["ResponseBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.ResponseBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseBody = string(value["ResponseBody"].GetString());
        m_responseBodyHasBeenSet = true;
    }

    if (value.HasMember("ResponseValues") && !value["ResponseValues"].IsNull())
    {
        if (!value["ResponseValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.ResponseValues` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_responseValues.push_back(item);
        }
        m_responseValuesHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeAPI.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvokeAPI::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_headerValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerValues.begin(); itr != m_headerValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queryValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryValues.begin(); itr != m_queryValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestPostBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPostBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestPostBody.c_str(), allocator).Move(), allocator);
    }

    if (m_responseBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseBody.c_str(), allocator).Move(), allocator);
    }

    if (m_responseValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseValues.begin(); itr != m_responseValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

}


string InvokeAPI::GetMethod() const
{
    return m_method;
}

void InvokeAPI::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool InvokeAPI::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string InvokeAPI::GetUrl() const
{
    return m_url;
}

void InvokeAPI::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InvokeAPI::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<StrValue> InvokeAPI::GetHeaderValues() const
{
    return m_headerValues;
}

void InvokeAPI::SetHeaderValues(const vector<StrValue>& _headerValues)
{
    m_headerValues = _headerValues;
    m_headerValuesHasBeenSet = true;
}

bool InvokeAPI::HeaderValuesHasBeenSet() const
{
    return m_headerValuesHasBeenSet;
}

vector<StrValue> InvokeAPI::GetQueryValues() const
{
    return m_queryValues;
}

void InvokeAPI::SetQueryValues(const vector<StrValue>& _queryValues)
{
    m_queryValues = _queryValues;
    m_queryValuesHasBeenSet = true;
}

bool InvokeAPI::QueryValuesHasBeenSet() const
{
    return m_queryValuesHasBeenSet;
}

string InvokeAPI::GetRequestPostBody() const
{
    return m_requestPostBody;
}

void InvokeAPI::SetRequestPostBody(const string& _requestPostBody)
{
    m_requestPostBody = _requestPostBody;
    m_requestPostBodyHasBeenSet = true;
}

bool InvokeAPI::RequestPostBodyHasBeenSet() const
{
    return m_requestPostBodyHasBeenSet;
}

string InvokeAPI::GetResponseBody() const
{
    return m_responseBody;
}

void InvokeAPI::SetResponseBody(const string& _responseBody)
{
    m_responseBody = _responseBody;
    m_responseBodyHasBeenSet = true;
}

bool InvokeAPI::ResponseBodyHasBeenSet() const
{
    return m_responseBodyHasBeenSet;
}

vector<ValueInfo> InvokeAPI::GetResponseValues() const
{
    return m_responseValues;
}

void InvokeAPI::SetResponseValues(const vector<ValueInfo>& _responseValues)
{
    m_responseValues = _responseValues;
    m_responseValuesHasBeenSet = true;
}

bool InvokeAPI::ResponseValuesHasBeenSet() const
{
    return m_responseValuesHasBeenSet;
}

string InvokeAPI::GetFailMessage() const
{
    return m_failMessage;
}

void InvokeAPI::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool InvokeAPI::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

