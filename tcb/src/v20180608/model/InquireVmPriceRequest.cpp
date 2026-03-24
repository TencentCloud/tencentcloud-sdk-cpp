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

#include <tencentcloud/tcb/v20180608/model/InquireVmPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

InquireVmPriceRequest::InquireVmPriceRequest() :
    m_typeHasBeenSet(false),
    m_lightHouseBundleIdHasBeenSet(false),
    m_lightHouseBlueprintIdHasBeenSet(false)
{
}

string InquireVmPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lightHouseBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightHouseBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lightHouseBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_lightHouseBlueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightHouseBlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lightHouseBlueprintId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquireVmPriceRequest::GetType() const
{
    return m_type;
}

void InquireVmPriceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InquireVmPriceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InquireVmPriceRequest::GetLightHouseBundleId() const
{
    return m_lightHouseBundleId;
}

void InquireVmPriceRequest::SetLightHouseBundleId(const string& _lightHouseBundleId)
{
    m_lightHouseBundleId = _lightHouseBundleId;
    m_lightHouseBundleIdHasBeenSet = true;
}

bool InquireVmPriceRequest::LightHouseBundleIdHasBeenSet() const
{
    return m_lightHouseBundleIdHasBeenSet;
}

string InquireVmPriceRequest::GetLightHouseBlueprintId() const
{
    return m_lightHouseBlueprintId;
}

void InquireVmPriceRequest::SetLightHouseBlueprintId(const string& _lightHouseBlueprintId)
{
    m_lightHouseBlueprintId = _lightHouseBlueprintId;
    m_lightHouseBlueprintIdHasBeenSet = true;
}

bool InquireVmPriceRequest::LightHouseBlueprintIdHasBeenSet() const
{
    return m_lightHouseBlueprintIdHasBeenSet;
}


