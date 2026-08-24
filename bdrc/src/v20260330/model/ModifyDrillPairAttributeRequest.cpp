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

#include <tencentcloud/bdrc/v20260330/model/ModifyDrillPairAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyDrillPairAttributeRequest::ModifyDrillPairAttributeRequest() :
    m_drillPairIdHasBeenSet(false),
    m_drillPairNameHasBeenSet(false)
{
}

string ModifyDrillPairAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drillPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDrillPairAttributeRequest::GetDrillPairId() const
{
    return m_drillPairId;
}

void ModifyDrillPairAttributeRequest::SetDrillPairId(const string& _drillPairId)
{
    m_drillPairId = _drillPairId;
    m_drillPairIdHasBeenSet = true;
}

bool ModifyDrillPairAttributeRequest::DrillPairIdHasBeenSet() const
{
    return m_drillPairIdHasBeenSet;
}

string ModifyDrillPairAttributeRequest::GetDrillPairName() const
{
    return m_drillPairName;
}

void ModifyDrillPairAttributeRequest::SetDrillPairName(const string& _drillPairName)
{
    m_drillPairName = _drillPairName;
    m_drillPairNameHasBeenSet = true;
}

bool ModifyDrillPairAttributeRequest::DrillPairNameHasBeenSet() const
{
    return m_drillPairNameHasBeenSet;
}


