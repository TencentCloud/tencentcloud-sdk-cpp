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

#include <tencentcloud/dbbrain/v20210527/model/CreateUserAutonomyProfileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateUserAutonomyProfileRequest::CreateUserAutonomyProfileRequest() :
    m_profileTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_profileInfoHasBeenSet(false)
{
}

string CreateUserAutonomyProfileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_profileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_profileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserAutonomyProfileRequest::GetProfileType() const
{
    return m_profileType;
}

void CreateUserAutonomyProfileRequest::SetProfileType(const string& _profileType)
{
    m_profileType = _profileType;
    m_profileTypeHasBeenSet = true;
}

bool CreateUserAutonomyProfileRequest::ProfileTypeHasBeenSet() const
{
    return m_profileTypeHasBeenSet;
}

string CreateUserAutonomyProfileRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateUserAutonomyProfileRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateUserAutonomyProfileRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateUserAutonomyProfileRequest::GetProduct() const
{
    return m_product;
}

void CreateUserAutonomyProfileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateUserAutonomyProfileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string CreateUserAutonomyProfileRequest::GetProfileInfo() const
{
    return m_profileInfo;
}

void CreateUserAutonomyProfileRequest::SetProfileInfo(const string& _profileInfo)
{
    m_profileInfo = _profileInfo;
    m_profileInfoHasBeenSet = true;
}

bool CreateUserAutonomyProfileRequest::ProfileInfoHasBeenSet() const
{
    return m_profileInfoHasBeenSet;
}


