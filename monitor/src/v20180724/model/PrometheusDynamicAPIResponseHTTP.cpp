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

#include <tencentcloud/monitor/v20180724/model/PrometheusDynamicAPIResponseHTTP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusDynamicAPIResponseHTTP::PrometheusDynamicAPIResponseHTTP() :
    m_statusCodeHasBeenSet(false),
    m_responseBodyHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusDynamicAPIResponseHTTP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusDynamicAPIResponseHTTP.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ResponseBody") && !value["ResponseBody"].IsNull())
    {
        if (!value["ResponseBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusDynamicAPIResponseHTTP.ResponseBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseBody = string(value["ResponseBody"].GetString());
        m_responseBodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusDynamicAPIResponseHTTP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_responseBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseBody.c_str(), allocator).Move(), allocator);
    }

}


int64_t PrometheusDynamicAPIResponseHTTP::GetStatusCode() const
{
    return m_statusCode;
}

void PrometheusDynamicAPIResponseHTTP::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool PrometheusDynamicAPIResponseHTTP::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string PrometheusDynamicAPIResponseHTTP::GetResponseBody() const
{
    return m_responseBody;
}

void PrometheusDynamicAPIResponseHTTP::SetResponseBody(const string& _responseBody)
{
    m_responseBody = _responseBody;
    m_responseBodyHasBeenSet = true;
}

bool PrometheusDynamicAPIResponseHTTP::ResponseBodyHasBeenSet() const
{
    return m_responseBodyHasBeenSet;
}

