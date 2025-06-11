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

#include <tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeSoftwareInformationRequest::DescribeSoftwareInformationRequest() :
    m_midHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string DescribeSoftwareInformationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSoftwareInformationRequest::GetMid() const
{
    return m_mid;
}

void DescribeSoftwareInformationRequest::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DescribeSoftwareInformationRequest::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

Condition DescribeSoftwareInformationRequest::GetCondition() const
{
    return m_condition;
}

void DescribeSoftwareInformationRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeSoftwareInformationRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


