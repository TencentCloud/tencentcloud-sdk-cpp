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

#include <tencentcloud/teo/v20220901/model/HTTPResponseParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HTTPResponseParameters::HTTPResponseParameters() :
    m_statusCodeHasBeenSet(false),
    m_responsePageHasBeenSet(false)
{
}

CoreInternalOutcome HTTPResponseParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPResponseParameters.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ResponsePage") && !value["ResponsePage"].IsNull())
    {
        if (!value["ResponsePage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPResponseParameters.ResponsePage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responsePage = string(value["ResponsePage"].GetString());
        m_responsePageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPResponseParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_responsePageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponsePage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responsePage.c_str(), allocator).Move(), allocator);
    }

}


int64_t HTTPResponseParameters::GetStatusCode() const
{
    return m_statusCode;
}

void HTTPResponseParameters::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool HTTPResponseParameters::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string HTTPResponseParameters::GetResponsePage() const
{
    return m_responsePage;
}

void HTTPResponseParameters::SetResponsePage(const string& _responsePage)
{
    m_responsePage = _responsePage;
    m_responsePageHasBeenSet = true;
}

bool HTTPResponseParameters::ResponsePageHasBeenSet() const
{
    return m_responsePageHasBeenSet;
}

