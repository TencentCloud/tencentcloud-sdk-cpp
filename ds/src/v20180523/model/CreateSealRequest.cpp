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

#include <tencentcloud/ds/v20180523/model/CreateSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

CreateSealRequest::CreateSealRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_accountResIdHasBeenSet(false),
    m_imgUrlHasBeenSet(false),
    m_imgDataHasBeenSet(false)
{
}

string CreateSealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_accountResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountResId.c_str(), allocator).Move(), allocator);
    }

    if (m_imgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imgDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imgData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSealRequest::GetModule() const
{
    return m_module;
}

void CreateSealRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateSealRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateSealRequest::GetOperation() const
{
    return m_operation;
}

void CreateSealRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateSealRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreateSealRequest::GetAccountResId() const
{
    return m_accountResId;
}

void CreateSealRequest::SetAccountResId(const string& _accountResId)
{
    m_accountResId = _accountResId;
    m_accountResIdHasBeenSet = true;
}

bool CreateSealRequest::AccountResIdHasBeenSet() const
{
    return m_accountResIdHasBeenSet;
}

string CreateSealRequest::GetImgUrl() const
{
    return m_imgUrl;
}

void CreateSealRequest::SetImgUrl(const string& _imgUrl)
{
    m_imgUrl = _imgUrl;
    m_imgUrlHasBeenSet = true;
}

bool CreateSealRequest::ImgUrlHasBeenSet() const
{
    return m_imgUrlHasBeenSet;
}

string CreateSealRequest::GetImgData() const
{
    return m_imgData;
}

void CreateSealRequest::SetImgData(const string& _imgData)
{
    m_imgData = _imgData;
    m_imgDataHasBeenSet = true;
}

bool CreateSealRequest::ImgDataHasBeenSet() const
{
    return m_imgDataHasBeenSet;
}


