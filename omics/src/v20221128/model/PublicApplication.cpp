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

#include <tencentcloud/omics/v20221128/model/PublicApplication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

PublicApplication::PublicApplication() :
    m_applicationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_appGroupTypeHasBeenSet(false),
    m_nextflowVersionHasBeenSet(false),
    m_appTagsHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome PublicApplication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicApplication.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicApplication.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicApplication.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AppGroupType") && !value["AppGroupType"].IsNull())
    {
        if (!value["AppGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicApplication.AppGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appGroupType = string(value["AppGroupType"].GetString());
        m_appGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("NextflowVersion") && !value["NextflowVersion"].IsNull())
    {
        if (!value["NextflowVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicApplication.NextflowVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["NextflowVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nextflowVersion.push_back((*itr).GetString());
        }
        m_nextflowVersionHasBeenSet = true;
    }

    if (value.HasMember("AppTags") && !value["AppTags"].IsNull())
    {
        if (!value["AppTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicApplication.AppTags` is not array type"));

        const rapidjson::Value &tmpValue = value["AppTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ToolRepoTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appTags.push_back(item);
        }
        m_appTagsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicApplication.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicApplication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_appGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextflowVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextflowVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nextflowVersion.begin(); itr != m_nextflowVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appTags.begin(); itr != m_appTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string PublicApplication::GetApplicationId() const
{
    return m_applicationId;
}

void PublicApplication::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool PublicApplication::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string PublicApplication::GetName() const
{
    return m_name;
}

void PublicApplication::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PublicApplication::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PublicApplication::GetType() const
{
    return m_type;
}

void PublicApplication::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PublicApplication::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PublicApplication::GetAppGroupType() const
{
    return m_appGroupType;
}

void PublicApplication::SetAppGroupType(const string& _appGroupType)
{
    m_appGroupType = _appGroupType;
    m_appGroupTypeHasBeenSet = true;
}

bool PublicApplication::AppGroupTypeHasBeenSet() const
{
    return m_appGroupTypeHasBeenSet;
}

vector<string> PublicApplication::GetNextflowVersion() const
{
    return m_nextflowVersion;
}

void PublicApplication::SetNextflowVersion(const vector<string>& _nextflowVersion)
{
    m_nextflowVersion = _nextflowVersion;
    m_nextflowVersionHasBeenSet = true;
}

bool PublicApplication::NextflowVersionHasBeenSet() const
{
    return m_nextflowVersionHasBeenSet;
}

vector<ToolRepoTag> PublicApplication::GetAppTags() const
{
    return m_appTags;
}

void PublicApplication::SetAppTags(const vector<ToolRepoTag>& _appTags)
{
    m_appTags = _appTags;
    m_appTagsHasBeenSet = true;
}

bool PublicApplication::AppTagsHasBeenSet() const
{
    return m_appTagsHasBeenSet;
}

string PublicApplication::GetAppId() const
{
    return m_appId;
}

void PublicApplication::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PublicApplication::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

