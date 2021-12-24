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

#include <tencentcloud/iecp/v20210914/model/ModifyApplicationBasicInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyApplicationBasicInfoRequest::ModifyApplicationBasicInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_basicInfoHasBeenSet(false)
{
}

string ModifyApplicationBasicInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyApplicationBasicInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationBasicInfoRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationBasicInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

ApplicationBasicInfo ModifyApplicationBasicInfoRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void ModifyApplicationBasicInfoRequest::SetBasicInfo(const ApplicationBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool ModifyApplicationBasicInfoRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}


