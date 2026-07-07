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

#include <tencentcloud/clb/v20180317/model/CreateModelRouterResourcePackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateModelRouterResourcePackageRequest::CreateModelRouterResourcePackageRequest() :
    m_modelRouterResourcePackageAmountHasBeenSet(false),
    m_autoPurchaseFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false)
{
}

string CreateModelRouterResourcePackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterResourcePackageAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterResourcePackageAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelRouterResourcePackageAmount, allocator);
    }

    if (m_autoPurchaseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPurchaseFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPurchaseFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateModelRouterResourcePackageRequest::GetModelRouterResourcePackageAmount() const
{
    return m_modelRouterResourcePackageAmount;
}

void CreateModelRouterResourcePackageRequest::SetModelRouterResourcePackageAmount(const uint64_t& _modelRouterResourcePackageAmount)
{
    m_modelRouterResourcePackageAmount = _modelRouterResourcePackageAmount;
    m_modelRouterResourcePackageAmountHasBeenSet = true;
}

bool CreateModelRouterResourcePackageRequest::ModelRouterResourcePackageAmountHasBeenSet() const
{
    return m_modelRouterResourcePackageAmountHasBeenSet;
}

uint64_t CreateModelRouterResourcePackageRequest::GetAutoPurchaseFlag() const
{
    return m_autoPurchaseFlag;
}

void CreateModelRouterResourcePackageRequest::SetAutoPurchaseFlag(const uint64_t& _autoPurchaseFlag)
{
    m_autoPurchaseFlag = _autoPurchaseFlag;
    m_autoPurchaseFlagHasBeenSet = true;
}

bool CreateModelRouterResourcePackageRequest::AutoPurchaseFlagHasBeenSet() const
{
    return m_autoPurchaseFlagHasBeenSet;
}

bool CreateModelRouterResourcePackageRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateModelRouterResourcePackageRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateModelRouterResourcePackageRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}


