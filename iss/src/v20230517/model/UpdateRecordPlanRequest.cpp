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

#include <tencentcloud/iss/v20230517/model/UpdateRecordPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateRecordPlanRequest::UpdateRecordPlanRequest() :
    m_planIdHasBeenSet(false),
    m_modHasBeenSet(false)
{
}

string UpdateRecordPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_modHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mod.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRecordPlanRequest::GetPlanId() const
{
    return m_planId;
}

void UpdateRecordPlanRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool UpdateRecordPlanRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

UpdateRecordPlanData UpdateRecordPlanRequest::GetMod() const
{
    return m_mod;
}

void UpdateRecordPlanRequest::SetMod(const UpdateRecordPlanData& _mod)
{
    m_mod = _mod;
    m_modHasBeenSet = true;
}

bool UpdateRecordPlanRequest::ModHasBeenSet() const
{
    return m_modHasBeenSet;
}


