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

#include <tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ResetInstancesRequest::ResetInstancesRequest() :
    m_instanceIdSetHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_keepDataHasBeenSet(false),
    m_keepImageLoginHasBeenSet(false)
{
}

string ResetInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
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

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_keepDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keepData.c_str(), allocator).Move(), allocator);
    }

    if (m_keepImageLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepImageLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keepImageLogin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ResetInstancesRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void ResetInstancesRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool ResetInstancesRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
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

string ResetInstancesRequest::GetPassword() const
{
    return m_password;
}

void ResetInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ResetInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

EnhancedService ResetInstancesRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void ResetInstancesRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool ResetInstancesRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string ResetInstancesRequest::GetKeepData() const
{
    return m_keepData;
}

void ResetInstancesRequest::SetKeepData(const string& _keepData)
{
    m_keepData = _keepData;
    m_keepDataHasBeenSet = true;
}

bool ResetInstancesRequest::KeepDataHasBeenSet() const
{
    return m_keepDataHasBeenSet;
}

string ResetInstancesRequest::GetKeepImageLogin() const
{
    return m_keepImageLogin;
}

void ResetInstancesRequest::SetKeepImageLogin(const string& _keepImageLogin)
{
    m_keepImageLogin = _keepImageLogin;
    m_keepImageLoginHasBeenSet = true;
}

bool ResetInstancesRequest::KeepImageLoginHasBeenSet() const
{
    return m_keepImageLoginHasBeenSet;
}


