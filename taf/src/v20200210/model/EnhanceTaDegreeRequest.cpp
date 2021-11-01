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

#include <tencentcloud/taf/v20200210/model/EnhanceTaDegreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

EnhanceTaDegreeRequest::EnhanceTaDegreeRequest() :
    m_bspDataHasBeenSet(false),
    m_businessEncryptDataHasBeenSet(false)
{
}

string EnhanceTaDegreeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bspDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BspData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bspData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_businessEncryptDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessEncryptData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessEncryptData.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputTaBspData EnhanceTaDegreeRequest::GetBspData() const
{
    return m_bspData;
}

void EnhanceTaDegreeRequest::SetBspData(const InputTaBspData& _bspData)
{
    m_bspData = _bspData;
    m_bspDataHasBeenSet = true;
}

bool EnhanceTaDegreeRequest::BspDataHasBeenSet() const
{
    return m_bspDataHasBeenSet;
}

InputBusinessEncryptData EnhanceTaDegreeRequest::GetBusinessEncryptData() const
{
    return m_businessEncryptData;
}

void EnhanceTaDegreeRequest::SetBusinessEncryptData(const InputBusinessEncryptData& _businessEncryptData)
{
    m_businessEncryptData = _businessEncryptData;
    m_businessEncryptDataHasBeenSet = true;
}

bool EnhanceTaDegreeRequest::BusinessEncryptDataHasBeenSet() const
{
    return m_businessEncryptDataHasBeenSet;
}


