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

#include <tencentcloud/waf/v20180125/model/ApiEventSample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiEventSample::ApiEventSample() :
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ApiEventSample::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEventSample.Request` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_request = string(value["Request"].GetString());
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEventSample.Response` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_response = string(value["Response"].GetString());
        m_responseHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEventSample.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiEventSample::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_request.c_str(), allocator).Move(), allocator);
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_response.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ApiEventSample::GetRequest() const
{
    return m_request;
}

void ApiEventSample::SetRequest(const string& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool ApiEventSample::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

string ApiEventSample::GetResponse() const
{
    return m_response;
}

void ApiEventSample::SetResponse(const string& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool ApiEventSample::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

string ApiEventSample::GetStatus() const
{
    return m_status;
}

void ApiEventSample::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiEventSample::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

