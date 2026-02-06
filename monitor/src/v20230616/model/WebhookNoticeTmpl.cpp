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

#include <tencentcloud/monitor/v20230616/model/WebhookNoticeTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

WebhookNoticeTmpl::WebhookNoticeTmpl() :
    m_bodyHasBeenSet(false),
    m_bodyContentTypeHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome WebhookNoticeTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookNoticeTmpl.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("BodyContentType") && !value["BodyContentType"].IsNull())
    {
        if (!value["BodyContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookNoticeTmpl.BodyContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyContentType = string(value["BodyContentType"].GetString());
        m_bodyContentTypeHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookNoticeTmpl.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebhookNoticeTmplHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookNoticeTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyContentType.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WebhookNoticeTmpl::GetBody() const
{
    return m_body;
}

void WebhookNoticeTmpl::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool WebhookNoticeTmpl::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string WebhookNoticeTmpl::GetBodyContentType() const
{
    return m_bodyContentType;
}

void WebhookNoticeTmpl::SetBodyContentType(const string& _bodyContentType)
{
    m_bodyContentType = _bodyContentType;
    m_bodyContentTypeHasBeenSet = true;
}

bool WebhookNoticeTmpl::BodyContentTypeHasBeenSet() const
{
    return m_bodyContentTypeHasBeenSet;
}

vector<WebhookNoticeTmplHeader> WebhookNoticeTmpl::GetHeaders() const
{
    return m_headers;
}

void WebhookNoticeTmpl::SetHeaders(const vector<WebhookNoticeTmplHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool WebhookNoticeTmpl::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

