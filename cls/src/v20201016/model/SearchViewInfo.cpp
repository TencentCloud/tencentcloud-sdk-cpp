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

#include <tencentcloud/cls/v20201016/model/SearchViewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SearchViewInfo::SearchViewInfo() :
    m_viewIdHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_viewTypeHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetRegionHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SearchViewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewId") && !value["ViewId"].IsNull())
    {
        if (!value["ViewId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.ViewId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewId = string(value["ViewId"].GetString());
        m_viewIdHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("ViewType") && !value["ViewType"].IsNull())
    {
        if (!value["ViewType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.ViewType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewType = string(value["ViewType"].GetString());
        m_viewTypeHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetRegion") && !value["LogsetRegion"].IsNull())
    {
        if (!value["LogsetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.LogsetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetRegion = string(value["LogsetRegion"].GetString());
        m_logsetRegionHasBeenSet = true;
    }

    if (value.HasMember("Topics") && !value["Topics"].IsNull())
    {
        if (!value["Topics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.Topics` is not array type"));

        const rapidjson::Value &tmpValue = value["Topics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ViewSearchTopic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topics.push_back(item);
        }
        m_topicsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchViewInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchViewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewType.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string SearchViewInfo::GetViewId() const
{
    return m_viewId;
}

void SearchViewInfo::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool SearchViewInfo::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}

string SearchViewInfo::GetViewName() const
{
    return m_viewName;
}

void SearchViewInfo::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool SearchViewInfo::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string SearchViewInfo::GetViewType() const
{
    return m_viewType;
}

void SearchViewInfo::SetViewType(const string& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool SearchViewInfo::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

string SearchViewInfo::GetLogsetId() const
{
    return m_logsetId;
}

void SearchViewInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool SearchViewInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string SearchViewInfo::GetLogsetRegion() const
{
    return m_logsetRegion;
}

void SearchViewInfo::SetLogsetRegion(const string& _logsetRegion)
{
    m_logsetRegion = _logsetRegion;
    m_logsetRegionHasBeenSet = true;
}

bool SearchViewInfo::LogsetRegionHasBeenSet() const
{
    return m_logsetRegionHasBeenSet;
}

vector<ViewSearchTopic> SearchViewInfo::GetTopics() const
{
    return m_topics;
}

void SearchViewInfo::SetTopics(const vector<ViewSearchTopic>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool SearchViewInfo::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

string SearchViewInfo::GetDescription() const
{
    return m_description;
}

void SearchViewInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SearchViewInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SearchViewInfo::GetCreateTime() const
{
    return m_createTime;
}

void SearchViewInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SearchViewInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SearchViewInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SearchViewInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SearchViewInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

