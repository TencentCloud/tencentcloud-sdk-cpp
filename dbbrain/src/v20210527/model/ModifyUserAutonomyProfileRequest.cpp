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

#include <tencentcloud/dbbrain/v20210527/model/ModifyUserAutonomyProfileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ModifyUserAutonomyProfileRequest::ModifyUserAutonomyProfileRequest() :
    m_profileTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_newProfileInfoHasBeenSet(false)
{
}

string ModifyUserAutonomyProfileRequest::ToJsonString() const
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

    if (m_newProfileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewProfileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newProfileInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserAutonomyProfileRequest::GetProfileType() const
{
    return m_profileType;
}

void ModifyUserAutonomyProfileRequest::SetProfileType(const string& _profileType)
{
    m_profileType = _profileType;
    m_profileTypeHasBeenSet = true;
}

bool ModifyUserAutonomyProfileRequest::ProfileTypeHasBeenSet() const
{
    return m_profileTypeHasBeenSet;
}

string ModifyUserAutonomyProfileRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUserAutonomyProfileRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUserAutonomyProfileRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyUserAutonomyProfileRequest::GetProduct() const
{
    return m_product;
}

void ModifyUserAutonomyProfileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ModifyUserAutonomyProfileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string ModifyUserAutonomyProfileRequest::GetNewProfileInfo() const
{
    return m_newProfileInfo;
}

void ModifyUserAutonomyProfileRequest::SetNewProfileInfo(const string& _newProfileInfo)
{
    m_newProfileInfo = _newProfileInfo;
    m_newProfileInfoHasBeenSet = true;
}

bool ModifyUserAutonomyProfileRequest::NewProfileInfoHasBeenSet() const
{
    return m_newProfileInfoHasBeenSet;
}


