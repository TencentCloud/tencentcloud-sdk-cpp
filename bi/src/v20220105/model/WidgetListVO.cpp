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

#include <tencentcloud/bi/v20220105/model/WidgetListVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

WidgetListVO::WidgetListVO() :
    m_corpIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_widgetListHasBeenSet(false)
{
}

CoreInternalOutcome WidgetListVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetListVO.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetListVO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetListVO.PageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = string(value["PageId"].GetString());
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetList") && !value["WidgetList"].IsNull())
    {
        if (!value["WidgetList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WidgetListVO.WidgetList` is not array type"));

        const rapidjson::Value &tmpValue = value["WidgetList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WidgetVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_widgetList.push_back(item);
        }
        m_widgetListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WidgetListVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_widgetList.begin(); itr != m_widgetList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WidgetListVO::GetCorpId() const
{
    return m_corpId;
}

void WidgetListVO::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool WidgetListVO::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string WidgetListVO::GetProjectId() const
{
    return m_projectId;
}

void WidgetListVO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WidgetListVO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WidgetListVO::GetPageId() const
{
    return m_pageId;
}

void WidgetListVO::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool WidgetListVO::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

vector<WidgetVO> WidgetListVO::GetWidgetList() const
{
    return m_widgetList;
}

void WidgetListVO::SetWidgetList(const vector<WidgetVO>& _widgetList)
{
    m_widgetList = _widgetList;
    m_widgetListHasBeenSet = true;
}

bool WidgetListVO::WidgetListHasBeenSet() const
{
    return m_widgetListHasBeenSet;
}

