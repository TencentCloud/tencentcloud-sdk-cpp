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

#include <tencentcloud/gs/v20191118/model/DistributeAndroidInstanceImageToHostsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

DistributeAndroidInstanceImageToHostsRequest::DistributeAndroidInstanceImageToHostsRequest() :
    m_hostSerialNumbersHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

string DistributeAndroidInstanceImageToHostsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


vector<string> DistributeAndroidInstanceImageToHostsRequest::GetHostSerialNumbers() const
{
    return m_hostSerialNumbers;
}

void DistributeAndroidInstanceImageToHostsRequest::SetHostSerialNumbers(const vector<string>& _hostSerialNumbers)
{
    m_hostSerialNumbers = _hostSerialNumbers;
    m_hostSerialNumbersHasBeenSet = true;
}

bool DistributeAndroidInstanceImageToHostsRequest::HostSerialNumbersHasBeenSet() const
{
    return m_hostSerialNumbersHasBeenSet;
}

string DistributeAndroidInstanceImageToHostsRequest::GetImageId() const
{
    return m_imageId;
}

void DistributeAndroidInstanceImageToHostsRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool DistributeAndroidInstanceImageToHostsRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}


