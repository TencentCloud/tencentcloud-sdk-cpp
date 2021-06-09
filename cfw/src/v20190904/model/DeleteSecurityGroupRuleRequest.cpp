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

#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DeleteSecurityGroupRuleRequest::DeleteSecurityGroupRuleRequest() :
    m_idHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_isDelReverseHasBeenSet(false)
{
}

string DeleteSecurityGroupRuleRequest::ToJsonString() const
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_isDelReverseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelReverse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelReverse, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteSecurityGroupRuleRequest::GetId() const
{
    return m_id;
}

void DeleteSecurityGroupRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeleteSecurityGroupRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeleteSecurityGroupRuleRequest::GetArea() const
{
    return m_area;
}

void DeleteSecurityGroupRuleRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DeleteSecurityGroupRuleRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t DeleteSecurityGroupRuleRequest::GetDirection() const
{
    return m_direction;
}

void DeleteSecurityGroupRuleRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DeleteSecurityGroupRuleRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

uint64_t DeleteSecurityGroupRuleRequest::GetIsDelReverse() const
{
    return m_isDelReverse;
}

void DeleteSecurityGroupRuleRequest::SetIsDelReverse(const uint64_t& _isDelReverse)
{
    m_isDelReverse = _isDelReverse;
    m_isDelReverseHasBeenSet = true;
}

bool DeleteSecurityGroupRuleRequest::IsDelReverseHasBeenSet() const
{
    return m_isDelReverseHasBeenSet;
}


