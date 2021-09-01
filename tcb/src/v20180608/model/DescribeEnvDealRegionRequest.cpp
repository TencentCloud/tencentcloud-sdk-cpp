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

#include <tencentcloud/tcb/v20180608/model/DescribeEnvDealRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeEnvDealRegionRequest::DescribeEnvDealRegionRequest() :
    m_envIdHasBeenSet(false),
    m_dealTypeHasBeenSet(false),
    m_dealActionHasBeenSet(false),
    m_dealRegionHasBeenSet(false)
{
}

string DescribeEnvDealRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealType.c_str(), allocator).Move(), allocator);
    }

    if (m_dealActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealAction.c_str(), allocator).Move(), allocator);
    }

    if (m_dealRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEnvDealRegionRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeEnvDealRegionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeEnvDealRegionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeEnvDealRegionRequest::GetDealType() const
{
    return m_dealType;
}

void DescribeEnvDealRegionRequest::SetDealType(const string& _dealType)
{
    m_dealType = _dealType;
    m_dealTypeHasBeenSet = true;
}

bool DescribeEnvDealRegionRequest::DealTypeHasBeenSet() const
{
    return m_dealTypeHasBeenSet;
}

string DescribeEnvDealRegionRequest::GetDealAction() const
{
    return m_dealAction;
}

void DescribeEnvDealRegionRequest::SetDealAction(const string& _dealAction)
{
    m_dealAction = _dealAction;
    m_dealActionHasBeenSet = true;
}

bool DescribeEnvDealRegionRequest::DealActionHasBeenSet() const
{
    return m_dealActionHasBeenSet;
}

string DescribeEnvDealRegionRequest::GetDealRegion() const
{
    return m_dealRegion;
}

void DescribeEnvDealRegionRequest::SetDealRegion(const string& _dealRegion)
{
    m_dealRegion = _dealRegion;
    m_dealRegionHasBeenSet = true;
}

bool DescribeEnvDealRegionRequest::DealRegionHasBeenSet() const
{
    return m_dealRegionHasBeenSet;
}


