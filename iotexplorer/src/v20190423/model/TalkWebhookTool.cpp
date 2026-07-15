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

#include <tencentcloud/iotexplorer/v20190423/model/TalkWebhookTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkWebhookTool::TalkWebhookTool() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_authHasBeenSet(false)
{
}

CoreInternalOutcome TalkWebhookTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Endpoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endpoint.Deserialize(value["Endpoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Required` is not array type"));

        const rapidjson::Value &tmpValue = value["Required"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_required.push_back((*itr).GetString());
        }
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Auth") && !value["Auth"].IsNull())
    {
        if (!value["Auth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookTool.Auth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auth.Deserialize(value["Auth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkWebhookTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endpoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_required.begin(); itr != m_required.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Auth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auth.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TalkWebhookTool::GetName() const
{
    return m_name;
}

void TalkWebhookTool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TalkWebhookTool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TalkWebhookTool::GetDescription() const
{
    return m_description;
}

void TalkWebhookTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TalkWebhookTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TalkWebhookTool::GetParameters() const
{
    return m_parameters;
}

void TalkWebhookTool::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool TalkWebhookTool::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

TalkWebhookEndpoint TalkWebhookTool::GetEndpoint() const
{
    return m_endpoint;
}

void TalkWebhookTool::SetEndpoint(const TalkWebhookEndpoint& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool TalkWebhookTool::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

vector<string> TalkWebhookTool::GetRequired() const
{
    return m_required;
}

void TalkWebhookTool::SetRequired(const vector<string>& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool TalkWebhookTool::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

TalkWebhookAuth TalkWebhookTool::GetAuth() const
{
    return m_auth;
}

void TalkWebhookTool::SetAuth(const TalkWebhookAuth& _auth)
{
    m_auth = _auth;
    m_authHasBeenSet = true;
}

bool TalkWebhookTool::AuthHasBeenSet() const
{
    return m_authHasBeenSet;
}

