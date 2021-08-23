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

#include <tencentcloud/tsf/v20180326/model/ApiDetailResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiDetailResponse::ApiDetailResponse() :
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_definitionsHasBeenSet(false),
    m_requestContentTypeHasBeenSet(false),
    m_canRunHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ApiDetailResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.Request` is not array type"));

        const rapidjson::Value &tmpValue = value["Request"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiRequestDescr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_request.push_back(item);
        }
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.Response` is not array type"));

        const rapidjson::Value &tmpValue = value["Response"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiResponseDescr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_response.push_back(item);
        }
        m_responseHasBeenSet = true;
    }

    if (value.HasMember("Definitions") && !value["Definitions"].IsNull())
    {
        if (!value["Definitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.Definitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Definitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiDefinitionDescr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_definitions.push_back(item);
        }
        m_definitionsHasBeenSet = true;
    }

    if (value.HasMember("RequestContentType") && !value["RequestContentType"].IsNull())
    {
        if (!value["RequestContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.RequestContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestContentType = string(value["RequestContentType"].GetString());
        m_requestContentTypeHasBeenSet = true;
    }

    if (value.HasMember("CanRun") && !value["CanRun"].IsNull())
    {
        if (!value["CanRun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.CanRun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRun = value["CanRun"].GetBool();
        m_canRunHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailResponse.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiDetailResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_request.begin(); itr != m_request.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_response.begin(); itr != m_response.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_definitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_definitions.begin(); itr != m_definitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestContentType.c_str(), allocator).Move(), allocator);
    }

    if (m_canRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRun, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


vector<ApiRequestDescr> ApiDetailResponse::GetRequest() const
{
    return m_request;
}

void ApiDetailResponse::SetRequest(const vector<ApiRequestDescr>& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool ApiDetailResponse::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

vector<ApiResponseDescr> ApiDetailResponse::GetResponse() const
{
    return m_response;
}

void ApiDetailResponse::SetResponse(const vector<ApiResponseDescr>& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool ApiDetailResponse::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

vector<ApiDefinitionDescr> ApiDetailResponse::GetDefinitions() const
{
    return m_definitions;
}

void ApiDetailResponse::SetDefinitions(const vector<ApiDefinitionDescr>& _definitions)
{
    m_definitions = _definitions;
    m_definitionsHasBeenSet = true;
}

bool ApiDetailResponse::DefinitionsHasBeenSet() const
{
    return m_definitionsHasBeenSet;
}

string ApiDetailResponse::GetRequestContentType() const
{
    return m_requestContentType;
}

void ApiDetailResponse::SetRequestContentType(const string& _requestContentType)
{
    m_requestContentType = _requestContentType;
    m_requestContentTypeHasBeenSet = true;
}

bool ApiDetailResponse::RequestContentTypeHasBeenSet() const
{
    return m_requestContentTypeHasBeenSet;
}

bool ApiDetailResponse::GetCanRun() const
{
    return m_canRun;
}

void ApiDetailResponse::SetCanRun(const bool& _canRun)
{
    m_canRun = _canRun;
    m_canRunHasBeenSet = true;
}

bool ApiDetailResponse::CanRunHasBeenSet() const
{
    return m_canRunHasBeenSet;
}

int64_t ApiDetailResponse::GetStatus() const
{
    return m_status;
}

void ApiDetailResponse::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiDetailResponse::GetDescription() const
{
    return m_description;
}

void ApiDetailResponse::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

