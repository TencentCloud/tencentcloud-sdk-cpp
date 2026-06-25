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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwMCPTool::CNAPIGwMCPTool() :
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_inputParamsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwMCPTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("InputParams") && !value["InputParams"].IsNull())
    {
        if (!value["InputParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.InputParams` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPTool.CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(value["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwMCPTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentVersion.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwMCPTool::GetName() const
{
    return m_name;
}

void CNAPIGwMCPTool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwMCPTool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwMCPTool::GetDisplayName() const
{
    return m_displayName;
}

void CNAPIGwMCPTool::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CNAPIGwMCPTool::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CNAPIGwMCPTool::GetMethod() const
{
    return m_method;
}

void CNAPIGwMCPTool::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CNAPIGwMCPTool::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CNAPIGwMCPTool::GetDescription() const
{
    return m_description;
}

void CNAPIGwMCPTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwMCPTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CNAPIGwMCPTool::GetToolId() const
{
    return m_toolId;
}

void CNAPIGwMCPTool::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool CNAPIGwMCPTool::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string CNAPIGwMCPTool::GetContentType() const
{
    return m_contentType;
}

void CNAPIGwMCPTool::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CNAPIGwMCPTool::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CNAPIGwMCPTool::GetServiceId() const
{
    return m_serviceId;
}

void CNAPIGwMCPTool::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CNAPIGwMCPTool::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CNAPIGwMCPTool::GetPath() const
{
    return m_path;
}

void CNAPIGwMCPTool::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CNAPIGwMCPTool::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<CNAPIGwMCPToolParam> CNAPIGwMCPTool::GetInputParams() const
{
    return m_inputParams;
}

void CNAPIGwMCPTool::SetInputParams(const vector<CNAPIGwMCPToolParam>& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool CNAPIGwMCPTool::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}

string CNAPIGwMCPTool::GetCreateTime() const
{
    return m_createTime;
}

void CNAPIGwMCPTool::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CNAPIGwMCPTool::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CNAPIGwMCPTool::GetUpdateTime() const
{
    return m_updateTime;
}

void CNAPIGwMCPTool::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CNAPIGwMCPTool::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CNAPIGwMCPTool::GetStatus() const
{
    return m_status;
}

void CNAPIGwMCPTool::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CNAPIGwMCPTool::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CNAPIGwMCPTool::GetCurrentVersion() const
{
    return m_currentVersion;
}

void CNAPIGwMCPTool::SetCurrentVersion(const string& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool CNAPIGwMCPTool::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

