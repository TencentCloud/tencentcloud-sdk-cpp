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

#include <tencentcloud/apigateway/v20180808/model/Plugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

Plugin::Plugin() :
    m_pluginIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_pluginTypeHasBeenSet(false),
    m_pluginDataHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_attachedApiTotalCountHasBeenSet(false),
    m_attachedApisHasBeenSet(false)
{
}

CoreInternalOutcome Plugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = string(value["PluginType"].GetString());
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("PluginData") && !value["PluginData"].IsNull())
    {
        if (!value["PluginData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginData = string(value["PluginData"].GetString());
        m_pluginDataHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("AttachedApiTotalCount") && !value["AttachedApiTotalCount"].IsNull())
    {
        if (!value["AttachedApiTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.AttachedApiTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attachedApiTotalCount = value["AttachedApiTotalCount"].GetInt64();
        m_attachedApiTotalCountHasBeenSet = true;
    }

    if (value.HasMember("AttachedApis") && !value["AttachedApis"].IsNull())
    {
        if (!value["AttachedApis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Plugin.AttachedApis` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedApis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttachedApiInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachedApis.push_back(item);
        }
        m_attachedApisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Plugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginType.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginData.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedApiTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedApiTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedApiTotalCount, allocator);
    }

    if (m_attachedApisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedApis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachedApis.begin(); itr != m_attachedApis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Plugin::GetPluginId() const
{
    return m_pluginId;
}

void Plugin::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool Plugin::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string Plugin::GetPluginName() const
{
    return m_pluginName;
}

void Plugin::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool Plugin::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string Plugin::GetPluginType() const
{
    return m_pluginType;
}

void Plugin::SetPluginType(const string& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool Plugin::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string Plugin::GetPluginData() const
{
    return m_pluginData;
}

void Plugin::SetPluginData(const string& _pluginData)
{
    m_pluginData = _pluginData;
    m_pluginDataHasBeenSet = true;
}

bool Plugin::PluginDataHasBeenSet() const
{
    return m_pluginDataHasBeenSet;
}

string Plugin::GetDescription() const
{
    return m_description;
}

void Plugin::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Plugin::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Plugin::GetCreatedTime() const
{
    return m_createdTime;
}

void Plugin::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Plugin::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Plugin::GetModifiedTime() const
{
    return m_modifiedTime;
}

void Plugin::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool Plugin::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

int64_t Plugin::GetAttachedApiTotalCount() const
{
    return m_attachedApiTotalCount;
}

void Plugin::SetAttachedApiTotalCount(const int64_t& _attachedApiTotalCount)
{
    m_attachedApiTotalCount = _attachedApiTotalCount;
    m_attachedApiTotalCountHasBeenSet = true;
}

bool Plugin::AttachedApiTotalCountHasBeenSet() const
{
    return m_attachedApiTotalCountHasBeenSet;
}

vector<AttachedApiInfo> Plugin::GetAttachedApis() const
{
    return m_attachedApis;
}

void Plugin::SetAttachedApis(const vector<AttachedApiInfo>& _attachedApis)
{
    m_attachedApis = _attachedApis;
    m_attachedApisHasBeenSet = true;
}

bool Plugin::AttachedApisHasBeenSet() const
{
    return m_attachedApisHasBeenSet;
}

