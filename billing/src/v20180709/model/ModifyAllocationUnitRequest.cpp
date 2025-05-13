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

#include <tencentcloud/billing/v20180709/model/ModifyAllocationUnitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ModifyAllocationUnitRequest::ModifyAllocationUnitRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string ModifyAllocationUnitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAllocationUnitRequest::GetId() const
{
    return m_id;
}

void ModifyAllocationUnitRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyAllocationUnitRequest::GetName() const
{
    return m_name;
}

void ModifyAllocationUnitRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAllocationUnitRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyAllocationUnitRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string ModifyAllocationUnitRequest::GetSourceId() const
{
    return m_sourceId;
}

void ModifyAllocationUnitRequest::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string ModifyAllocationUnitRequest::GetRemark() const
{
    return m_remark;
}

void ModifyAllocationUnitRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyAllocationUnitRequest::GetMonth() const
{
    return m_month;
}

void ModifyAllocationUnitRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool ModifyAllocationUnitRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


