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

#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifySecurityGroupRuleRequest::ModifySecurityGroupRuleRequest() :
    m_directionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_sgRuleOriginSequenceHasBeenSet(false)
{
}

string ModifySecurityGroupRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sgRuleOriginSequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgRuleOriginSequence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sgRuleOriginSequence, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySecurityGroupRuleRequest::GetDirection() const
{
    return m_direction;
}

void ModifySecurityGroupRuleRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool ModifySecurityGroupRuleRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

uint64_t ModifySecurityGroupRuleRequest::GetEnable() const
{
    return m_enable;
}

void ModifySecurityGroupRuleRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifySecurityGroupRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<SecurityGroupListData> ModifySecurityGroupRuleRequest::GetData() const
{
    return m_data;
}

void ModifySecurityGroupRuleRequest::SetData(const vector<SecurityGroupListData>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ModifySecurityGroupRuleRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t ModifySecurityGroupRuleRequest::GetSgRuleOriginSequence() const
{
    return m_sgRuleOriginSequence;
}

void ModifySecurityGroupRuleRequest::SetSgRuleOriginSequence(const uint64_t& _sgRuleOriginSequence)
{
    m_sgRuleOriginSequence = _sgRuleOriginSequence;
    m_sgRuleOriginSequenceHasBeenSet = true;
}

bool ModifySecurityGroupRuleRequest::SgRuleOriginSequenceHasBeenSet() const
{
    return m_sgRuleOriginSequenceHasBeenSet;
}


