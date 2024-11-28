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

#include <tencentcloud/bi/v20220105/model/ExportScreenPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ExportScreenPageRequest::ExportScreenPageRequest() :
    m_projectIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_canvasTypeHasBeenSet(false),
    m_picTypeHasBeenSet(false),
    m_widgetIdsHasBeenSet(false),
    m_asyncRequestHasBeenSet(false),
    m_tranIdHasBeenSet(false)
{
}

string ExportScreenPageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_canvasTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanvasType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_canvasType.c_str(), allocator).Move(), allocator);
    }

    if (m_picTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picType.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_widgetIds.begin(); itr != m_widgetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_asyncRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequest, allocator);
    }

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportScreenPageRequest::GetProjectId() const
{
    return m_projectId;
}

void ExportScreenPageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportScreenPageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ExportScreenPageRequest::GetPageId() const
{
    return m_pageId;
}

void ExportScreenPageRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ExportScreenPageRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string ExportScreenPageRequest::GetCanvasType() const
{
    return m_canvasType;
}

void ExportScreenPageRequest::SetCanvasType(const string& _canvasType)
{
    m_canvasType = _canvasType;
    m_canvasTypeHasBeenSet = true;
}

bool ExportScreenPageRequest::CanvasTypeHasBeenSet() const
{
    return m_canvasTypeHasBeenSet;
}

string ExportScreenPageRequest::GetPicType() const
{
    return m_picType;
}

void ExportScreenPageRequest::SetPicType(const string& _picType)
{
    m_picType = _picType;
    m_picTypeHasBeenSet = true;
}

bool ExportScreenPageRequest::PicTypeHasBeenSet() const
{
    return m_picTypeHasBeenSet;
}

vector<string> ExportScreenPageRequest::GetWidgetIds() const
{
    return m_widgetIds;
}

void ExportScreenPageRequest::SetWidgetIds(const vector<string>& _widgetIds)
{
    m_widgetIds = _widgetIds;
    m_widgetIdsHasBeenSet = true;
}

bool ExportScreenPageRequest::WidgetIdsHasBeenSet() const
{
    return m_widgetIdsHasBeenSet;
}

bool ExportScreenPageRequest::GetAsyncRequest() const
{
    return m_asyncRequest;
}

void ExportScreenPageRequest::SetAsyncRequest(const bool& _asyncRequest)
{
    m_asyncRequest = _asyncRequest;
    m_asyncRequestHasBeenSet = true;
}

bool ExportScreenPageRequest::AsyncRequestHasBeenSet() const
{
    return m_asyncRequestHasBeenSet;
}

string ExportScreenPageRequest::GetTranId() const
{
    return m_tranId;
}

void ExportScreenPageRequest::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool ExportScreenPageRequest::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}


