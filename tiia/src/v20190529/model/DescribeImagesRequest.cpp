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

#include <tencentcloud/tiia/v20190529/model/DescribeImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

DescribeImagesRequest::DescribeImagesRequest() :
    m_groupIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_picNameHasBeenSet(false)
{
}

string DescribeImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_picNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeImagesRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeImagesRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeImagesRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeImagesRequest::GetEntityId() const
{
    return m_entityId;
}

void DescribeImagesRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool DescribeImagesRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string DescribeImagesRequest::GetPicName() const
{
    return m_picName;
}

void DescribeImagesRequest::SetPicName(const string& _picName)
{
    m_picName = _picName;
    m_picNameHasBeenSet = true;
}

bool DescribeImagesRequest::PicNameHasBeenSet() const
{
    return m_picNameHasBeenSet;
}


