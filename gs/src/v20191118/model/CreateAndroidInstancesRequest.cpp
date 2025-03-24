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

#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidInstancesRequest::CreateAndroidInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_hostSerialNumbersHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

string CreateAndroidInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_hostSerialNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostSerialNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostSerialNumbers.begin(); itr != m_hostSerialNumbers.end(); ++itr)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndroidInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateAndroidInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateAndroidInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateAndroidInstancesRequest::GetType() const
{
    return m_type;
}

void CreateAndroidInstancesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAndroidInstancesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t CreateAndroidInstancesRequest::GetNumber() const
{
    return m_number;
}

void CreateAndroidInstancesRequest::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateAndroidInstancesRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

vector<string> CreateAndroidInstancesRequest::GetHostSerialNumbers() const
{
    return m_hostSerialNumbers;
}

void CreateAndroidInstancesRequest::SetHostSerialNumbers(const vector<string>& _hostSerialNumbers)
{
    m_hostSerialNumbers = _hostSerialNumbers;
    m_hostSerialNumbersHasBeenSet = true;
}

bool CreateAndroidInstancesRequest::HostSerialNumbersHasBeenSet() const
{
    return m_hostSerialNumbersHasBeenSet;
}

string CreateAndroidInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void CreateAndroidInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateAndroidInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}


