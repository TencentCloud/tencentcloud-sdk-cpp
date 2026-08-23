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

#include <tencentcloud/csip/v20221121/model/CreateImageLayerVulListExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateImageLayerVulListExportJobRequest::CreateImageLayerVulListExportJobRequest() :
    m_memberIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_idHasBeenSet(false),
    m_saveHasBeenSet(false),
    m_exportNameHasBeenSet(false)
{
}

string CreateImageLayerVulListExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_saveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Save";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_save, allocator);
    }

    if (m_exportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateImageLayerVulListExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateImageLayerVulListExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateImageLayerVulListExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

Filter CreateImageLayerVulListExportJobRequest::GetFilter() const
{
    return m_filter;
}

void CreateImageLayerVulListExportJobRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateImageLayerVulListExportJobRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string CreateImageLayerVulListExportJobRequest::GetId() const
{
    return m_id;
}

void CreateImageLayerVulListExportJobRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateImageLayerVulListExportJobRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t CreateImageLayerVulListExportJobRequest::GetSave() const
{
    return m_save;
}

void CreateImageLayerVulListExportJobRequest::SetSave(const uint64_t& _save)
{
    m_save = _save;
    m_saveHasBeenSet = true;
}

bool CreateImageLayerVulListExportJobRequest::SaveHasBeenSet() const
{
    return m_saveHasBeenSet;
}

string CreateImageLayerVulListExportJobRequest::GetExportName() const
{
    return m_exportName;
}

void CreateImageLayerVulListExportJobRequest::SetExportName(const string& _exportName)
{
    m_exportName = _exportName;
    m_exportNameHasBeenSet = true;
}

bool CreateImageLayerVulListExportJobRequest::ExportNameHasBeenSet() const
{
    return m_exportNameHasBeenSet;
}


