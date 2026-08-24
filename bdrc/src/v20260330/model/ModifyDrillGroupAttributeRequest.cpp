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

#include <tencentcloud/bdrc/v20260330/model/ModifyDrillGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyDrillGroupAttributeRequest::ModifyDrillGroupAttributeRequest() :
    m_drillGroupIdHasBeenSet(false),
    m_drillGroupNameHasBeenSet(false)
{
}

string ModifyDrillGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDrillGroupAttributeRequest::GetDrillGroupId() const
{
    return m_drillGroupId;
}

void ModifyDrillGroupAttributeRequest::SetDrillGroupId(const string& _drillGroupId)
{
    m_drillGroupId = _drillGroupId;
    m_drillGroupIdHasBeenSet = true;
}

bool ModifyDrillGroupAttributeRequest::DrillGroupIdHasBeenSet() const
{
    return m_drillGroupIdHasBeenSet;
}

string ModifyDrillGroupAttributeRequest::GetDrillGroupName() const
{
    return m_drillGroupName;
}

void ModifyDrillGroupAttributeRequest::SetDrillGroupName(const string& _drillGroupName)
{
    m_drillGroupName = _drillGroupName;
    m_drillGroupNameHasBeenSet = true;
}

bool ModifyDrillGroupAttributeRequest::DrillGroupNameHasBeenSet() const
{
    return m_drillGroupNameHasBeenSet;
}


