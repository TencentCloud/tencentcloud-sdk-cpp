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

#include <tencentcloud/kms/v20190118/model/CreateKmsInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

CreateKmsInstanceRequest::CreateKmsInstanceRequest() :
    m_instanceChargeTypeHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateKmsInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKmsInstanceRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateKmsInstanceRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateKmsInstanceRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateKmsInstanceRequest::GetProductVersion() const
{
    return m_productVersion;
}

void CreateKmsInstanceRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool CreateKmsInstanceRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

InstanceChargePrepaid CreateKmsInstanceRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateKmsInstanceRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateKmsInstanceRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string CreateKmsInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateKmsInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateKmsInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

vector<Tag> CreateKmsInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateKmsInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateKmsInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


