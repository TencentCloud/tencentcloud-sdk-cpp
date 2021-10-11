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

#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionFenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreatePositionFenceRequest::CreatePositionFenceRequest() :
    m_spaceIdHasBeenSet(false),
    m_fenceNameHasBeenSet(false),
    m_fenceAreaHasBeenSet(false),
    m_fenceDescHasBeenSet(false)
{
}

string CreatePositionFenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fenceArea.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fenceDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePositionFenceRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreatePositionFenceRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreatePositionFenceRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreatePositionFenceRequest::GetFenceName() const
{
    return m_fenceName;
}

void CreatePositionFenceRequest::SetFenceName(const string& _fenceName)
{
    m_fenceName = _fenceName;
    m_fenceNameHasBeenSet = true;
}

bool CreatePositionFenceRequest::FenceNameHasBeenSet() const
{
    return m_fenceNameHasBeenSet;
}

string CreatePositionFenceRequest::GetFenceArea() const
{
    return m_fenceArea;
}

void CreatePositionFenceRequest::SetFenceArea(const string& _fenceArea)
{
    m_fenceArea = _fenceArea;
    m_fenceAreaHasBeenSet = true;
}

bool CreatePositionFenceRequest::FenceAreaHasBeenSet() const
{
    return m_fenceAreaHasBeenSet;
}

string CreatePositionFenceRequest::GetFenceDesc() const
{
    return m_fenceDesc;
}

void CreatePositionFenceRequest::SetFenceDesc(const string& _fenceDesc)
{
    m_fenceDesc = _fenceDesc;
    m_fenceDescHasBeenSet = true;
}

bool CreatePositionFenceRequest::FenceDescHasBeenSet() const
{
    return m_fenceDescHasBeenSet;
}


