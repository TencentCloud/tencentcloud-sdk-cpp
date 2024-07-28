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

#include <tencentcloud/cfg/v20210820/model/DescribeActionFieldConfigListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribeActionFieldConfigListRequest::DescribeActionFieldConfigListRequest() :
    m_actionIdsHasBeenSet(false),
    m_objectTypeIdHasBeenSet(false)
{
}

string DescribeActionFieldConfigListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_actionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionIds.begin(); itr != m_actionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_objectTypeId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeActionFieldConfigListRequest::GetActionIds() const
{
    return m_actionIds;
}

void DescribeActionFieldConfigListRequest::SetActionIds(const vector<uint64_t>& _actionIds)
{
    m_actionIds = _actionIds;
    m_actionIdsHasBeenSet = true;
}

bool DescribeActionFieldConfigListRequest::ActionIdsHasBeenSet() const
{
    return m_actionIdsHasBeenSet;
}

uint64_t DescribeActionFieldConfigListRequest::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void DescribeActionFieldConfigListRequest::SetObjectTypeId(const uint64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool DescribeActionFieldConfigListRequest::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}


