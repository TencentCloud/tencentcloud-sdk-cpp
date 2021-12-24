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

#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationBasicInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyEdgeUnitApplicationBasicInfoRequest::ModifyEdgeUnitApplicationBasicInfoRequest() :
    m_basicInfoHasBeenSet(false),
    m_edgeUnitIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string ModifyEdgeUnitApplicationBasicInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ApplicationBasicInfo ModifyEdgeUnitApplicationBasicInfoRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void ModifyEdgeUnitApplicationBasicInfoRequest::SetBasicInfo(const ApplicationBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationBasicInfoRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

uint64_t ModifyEdgeUnitApplicationBasicInfoRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyEdgeUnitApplicationBasicInfoRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationBasicInfoRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t ModifyEdgeUnitApplicationBasicInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyEdgeUnitApplicationBasicInfoRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationBasicInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}


