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

#include <tencentcloud/trp/v20210515/model/CreateCustomPackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateCustomPackRequest::CreateCustomPackRequest() :
    m_merchantIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_packTypeHasBeenSet(false),
    m_packLevelHasBeenSet(false),
    m_packSpecHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_codePartsHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_serialTypeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_relateTypeHasBeenSet(false),
    m_sceneCodeHasBeenSet(false)
{
}

string CreateCustomPackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amount, allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_packTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packType, allocator);
    }

    if (m_packLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packLevel, allocator);
    }

    if (m_packSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packSpec.begin(); itr != m_packSpec.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_codePartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeParts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeParts.begin(); itr != m_codeParts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_serialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serialType, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_relateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_relateType, allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneCode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomPackRequest::GetMerchantId() const
{
    return m_merchantId;
}

void CreateCustomPackRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CreateCustomPackRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

uint64_t CreateCustomPackRequest::GetAmount() const
{
    return m_amount;
}

void CreateCustomPackRequest::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CreateCustomPackRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

uint64_t CreateCustomPackRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateCustomPackRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateCustomPackRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

uint64_t CreateCustomPackRequest::GetPackType() const
{
    return m_packType;
}

void CreateCustomPackRequest::SetPackType(const uint64_t& _packType)
{
    m_packType = _packType;
    m_packTypeHasBeenSet = true;
}

bool CreateCustomPackRequest::PackTypeHasBeenSet() const
{
    return m_packTypeHasBeenSet;
}

uint64_t CreateCustomPackRequest::GetPackLevel() const
{
    return m_packLevel;
}

void CreateCustomPackRequest::SetPackLevel(const uint64_t& _packLevel)
{
    m_packLevel = _packLevel;
    m_packLevelHasBeenSet = true;
}

bool CreateCustomPackRequest::PackLevelHasBeenSet() const
{
    return m_packLevelHasBeenSet;
}

vector<PackSpec> CreateCustomPackRequest::GetPackSpec() const
{
    return m_packSpec;
}

void CreateCustomPackRequest::SetPackSpec(const vector<PackSpec>& _packSpec)
{
    m_packSpec = _packSpec;
    m_packSpecHasBeenSet = true;
}

bool CreateCustomPackRequest::PackSpecHasBeenSet() const
{
    return m_packSpecHasBeenSet;
}

string CreateCustomPackRequest::GetCustomId() const
{
    return m_customId;
}

void CreateCustomPackRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateCustomPackRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

vector<CodePart> CreateCustomPackRequest::GetCodeParts() const
{
    return m_codeParts;
}

void CreateCustomPackRequest::SetCodeParts(const vector<CodePart>& _codeParts)
{
    m_codeParts = _codeParts;
    m_codePartsHasBeenSet = true;
}

bool CreateCustomPackRequest::CodePartsHasBeenSet() const
{
    return m_codePartsHasBeenSet;
}

string CreateCustomPackRequest::GetBatchId() const
{
    return m_batchId;
}

void CreateCustomPackRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateCustomPackRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

uint64_t CreateCustomPackRequest::GetSerialType() const
{
    return m_serialType;
}

void CreateCustomPackRequest::SetSerialType(const uint64_t& _serialType)
{
    m_serialType = _serialType;
    m_serialTypeHasBeenSet = true;
}

bool CreateCustomPackRequest::SerialTypeHasBeenSet() const
{
    return m_serialTypeHasBeenSet;
}

string CreateCustomPackRequest::GetProductId() const
{
    return m_productId;
}

void CreateCustomPackRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCustomPackRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t CreateCustomPackRequest::GetRelateType() const
{
    return m_relateType;
}

void CreateCustomPackRequest::SetRelateType(const int64_t& _relateType)
{
    m_relateType = _relateType;
    m_relateTypeHasBeenSet = true;
}

bool CreateCustomPackRequest::RelateTypeHasBeenSet() const
{
    return m_relateTypeHasBeenSet;
}

int64_t CreateCustomPackRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void CreateCustomPackRequest::SetSceneCode(const int64_t& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool CreateCustomPackRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}


