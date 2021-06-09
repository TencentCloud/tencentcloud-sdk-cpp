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

#include <tencentcloud/yunjing/v20180228/model/AddMachineTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

AddMachineTagRequest::AddMachineTagRequest() :
    m_quuidHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_mRegionHasBeenSet(false),
    m_mAreaHasBeenSet(false)
{
}

string AddMachineTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tagId, allocator);
    }

    if (m_mRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_mAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mArea.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddMachineTagRequest::GetQuuid() const
{
    return m_quuid;
}

void AddMachineTagRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AddMachineTagRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t AddMachineTagRequest::GetTagId() const
{
    return m_tagId;
}

void AddMachineTagRequest::SetTagId(const uint64_t& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool AddMachineTagRequest::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string AddMachineTagRequest::GetMRegion() const
{
    return m_mRegion;
}

void AddMachineTagRequest::SetMRegion(const string& _mRegion)
{
    m_mRegion = _mRegion;
    m_mRegionHasBeenSet = true;
}

bool AddMachineTagRequest::MRegionHasBeenSet() const
{
    return m_mRegionHasBeenSet;
}

string AddMachineTagRequest::GetMArea() const
{
    return m_mArea;
}

void AddMachineTagRequest::SetMArea(const string& _mArea)
{
    m_mArea = _mArea;
    m_mAreaHasBeenSet = true;
}

bool AddMachineTagRequest::MAreaHasBeenSet() const
{
    return m_mAreaHasBeenSet;
}


