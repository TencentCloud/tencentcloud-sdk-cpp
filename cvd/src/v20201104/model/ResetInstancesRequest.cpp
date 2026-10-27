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

#include <tencentcloud/cvd/v20201104/model/ResetInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

ResetInstancesRequest::ResetInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_isUnbindHasBeenSet(false)
{
}

string ResetInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnbindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnbind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUnbind, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ResetInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ResetInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ResetInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ResetInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void ResetInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ResetInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ResetInstancesRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void ResetInstancesRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool ResetInstancesRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

bool ResetInstancesRequest::GetIsUnbind() const
{
    return m_isUnbind;
}

void ResetInstancesRequest::SetIsUnbind(const bool& _isUnbind)
{
    m_isUnbind = _isUnbind;
    m_isUnbindHasBeenSet = true;
}

bool ResetInstancesRequest::IsUnbindHasBeenSet() const
{
    return m_isUnbindHasBeenSet;
}


