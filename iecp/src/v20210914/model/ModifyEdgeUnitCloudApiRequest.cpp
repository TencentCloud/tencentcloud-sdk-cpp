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

#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitCloudApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyEdgeUnitCloudApiRequest::ModifyEdgeUnitCloudApiRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_openCloudMonitorHasBeenSet(false)
{
}

string ModifyEdgeUnitCloudApiRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_openCloudMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCloudMonitor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openCloudMonitor, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEdgeUnitCloudApiRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyEdgeUnitCloudApiRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyEdgeUnitCloudApiRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string ModifyEdgeUnitCloudApiRequest::GetName() const
{
    return m_name;
}

void ModifyEdgeUnitCloudApiRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEdgeUnitCloudApiRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEdgeUnitCloudApiRequest::GetDescription() const
{
    return m_description;
}

void ModifyEdgeUnitCloudApiRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyEdgeUnitCloudApiRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyEdgeUnitCloudApiRequest::GetOpenCloudMonitor() const
{
    return m_openCloudMonitor;
}

void ModifyEdgeUnitCloudApiRequest::SetOpenCloudMonitor(const bool& _openCloudMonitor)
{
    m_openCloudMonitor = _openCloudMonitor;
    m_openCloudMonitorHasBeenSet = true;
}

bool ModifyEdgeUnitCloudApiRequest::OpenCloudMonitorHasBeenSet() const
{
    return m_openCloudMonitorHasBeenSet;
}


