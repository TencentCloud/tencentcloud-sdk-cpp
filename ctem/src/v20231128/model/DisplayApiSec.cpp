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

#include <tencentcloud/ctem/v20231128/model/DisplayApiSec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayApiSec::DisplayApiSec() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_isRiskAPIHasBeenSet(false)
{
}

CoreInternalOutcome DisplayApiSec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Request` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_request = string(value["Request"].GetString());
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.Response` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_response = string(value["Response"].GetString());
        m_responseHasBeenSet = true;
    }

    if (value.HasMember("IsRiskAPI") && !value["IsRiskAPI"].IsNull())
    {
        if (!value["IsRiskAPI"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApiSec.IsRiskAPI` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRiskAPI = value["IsRiskAPI"].GetBool();
        m_isRiskAPIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayApiSec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

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

    if (m_isRiskAPIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRiskAPI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRiskAPI, allocator);
    }

}


int64_t DisplayApiSec::GetId() const
{
    return m_id;
}

void DisplayApiSec::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayApiSec::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayApiSec::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayApiSec::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayApiSec::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayApiSec::GetUrl() const
{
    return m_url;
}

void DisplayApiSec::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayApiSec::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayApiSec::GetHost() const
{
    return m_host;
}

void DisplayApiSec::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DisplayApiSec::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DisplayApiSec::GetPath() const
{
    return m_path;
}

void DisplayApiSec::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DisplayApiSec::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DisplayApiSec::GetMethod() const
{
    return m_method;
}

void DisplayApiSec::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DisplayApiSec::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string DisplayApiSec::GetStatus() const
{
    return m_status;
}

void DisplayApiSec::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayApiSec::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DisplayApiSec::GetCode() const
{
    return m_code;
}

void DisplayApiSec::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DisplayApiSec::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DisplayApiSec::GetRequest() const
{
    return m_request;
}

void DisplayApiSec::SetRequest(const string& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool DisplayApiSec::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

string DisplayApiSec::GetResponse() const
{
    return m_response;
}

void DisplayApiSec::SetResponse(const string& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool DisplayApiSec::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

bool DisplayApiSec::GetIsRiskAPI() const
{
    return m_isRiskAPI;
}

void DisplayApiSec::SetIsRiskAPI(const bool& _isRiskAPI)
{
    m_isRiskAPI = _isRiskAPI;
    m_isRiskAPIHasBeenSet = true;
}

bool DisplayApiSec::IsRiskAPIHasBeenSet() const
{
    return m_isRiskAPIHasBeenSet;
}

