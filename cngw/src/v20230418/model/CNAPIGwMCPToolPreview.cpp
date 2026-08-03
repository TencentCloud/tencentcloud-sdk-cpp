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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolPreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwMCPToolPreview::CNAPIGwMCPToolPreview() :
    m_contentTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputParamsHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_upstreamUrlHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwMCPToolPreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InputParams") && !value["InputParams"].IsNull())
    {
        if (!value["InputParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.InputParams` is not array type"));

        const rapidjson::Value &tmpValue = value["InputParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CNAPIGwMCPToolParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputParams.push_back(item);
        }
        m_inputParamsHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("UpstreamUrl") && !value["UpstreamUrl"].IsNull())
    {
        if (!value["UpstreamUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolPreview.UpstreamUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamUrl = string(value["UpstreamUrl"].GetString());
        m_upstreamUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwMCPToolPreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputParams.begin(); itr != m_inputParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamUrl.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwMCPToolPreview::GetContentType() const
{
    return m_contentType;
}

void CNAPIGwMCPToolPreview::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetDescription() const
{
    return m_description;
}

void CNAPIGwMCPToolPreview::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<CNAPIGwMCPToolParam> CNAPIGwMCPToolPreview::GetInputParams() const
{
    return m_inputParams;
}

void CNAPIGwMCPToolPreview::SetInputParams(const vector<CNAPIGwMCPToolParam>& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetMethod() const
{
    return m_method;
}

void CNAPIGwMCPToolPreview::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetName() const
{
    return m_name;
}

void CNAPIGwMCPToolPreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetPath() const
{
    return m_path;
}

void CNAPIGwMCPToolPreview::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetStatus() const
{
    return m_status;
}

void CNAPIGwMCPToolPreview::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetStatusMessage() const
{
    return m_statusMessage;
}

void CNAPIGwMCPToolPreview::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

string CNAPIGwMCPToolPreview::GetUpstreamUrl() const
{
    return m_upstreamUrl;
}

void CNAPIGwMCPToolPreview::SetUpstreamUrl(const string& _upstreamUrl)
{
    m_upstreamUrl = _upstreamUrl;
    m_upstreamUrlHasBeenSet = true;
}

bool CNAPIGwMCPToolPreview::UpstreamUrlHasBeenSet() const
{
    return m_upstreamUrlHasBeenSet;
}

