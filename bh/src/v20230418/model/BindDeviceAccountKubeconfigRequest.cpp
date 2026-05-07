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

#include <tencentcloud/bh/v20230418/model/BindDeviceAccountKubeconfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

BindDeviceAccountKubeconfigRequest::BindDeviceAccountKubeconfigRequest() :
    m_idHasBeenSet(false),
    m_kubeconfigHasBeenSet(false),
    m_manageDimensionHasBeenSet(false)
{
}

string BindDeviceAccountKubeconfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_kubeconfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kubeconfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kubeconfig.c_str(), allocator).Move(), allocator);
    }

    if (m_manageDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageDimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_manageDimension, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BindDeviceAccountKubeconfigRequest::GetId() const
{
    return m_id;
}

void BindDeviceAccountKubeconfigRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BindDeviceAccountKubeconfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BindDeviceAccountKubeconfigRequest::GetKubeconfig() const
{
    return m_kubeconfig;
}

void BindDeviceAccountKubeconfigRequest::SetKubeconfig(const string& _kubeconfig)
{
    m_kubeconfig = _kubeconfig;
    m_kubeconfigHasBeenSet = true;
}

bool BindDeviceAccountKubeconfigRequest::KubeconfigHasBeenSet() const
{
    return m_kubeconfigHasBeenSet;
}

uint64_t BindDeviceAccountKubeconfigRequest::GetManageDimension() const
{
    return m_manageDimension;
}

void BindDeviceAccountKubeconfigRequest::SetManageDimension(const uint64_t& _manageDimension)
{
    m_manageDimension = _manageDimension;
    m_manageDimensionHasBeenSet = true;
}

bool BindDeviceAccountKubeconfigRequest::ManageDimensionHasBeenSet() const
{
    return m_manageDimensionHasBeenSet;
}


