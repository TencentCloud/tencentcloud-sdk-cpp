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

#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsByAssetInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAssetTagsByAssetInfoRequest::ModifyAssetTagsByAssetInfoRequest() :
    m_memberIdHasBeenSet(false),
    m_assetsHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

string ModifyAssetTagsByAssetInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assets.begin(); itr != m_assets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAssetTagsByAssetInfoRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAssetTagsByAssetInfoRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAssetTagsByAssetInfoRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<AssetTagModifyAssetItem> ModifyAssetTagsByAssetInfoRequest::GetAssets() const
{
    return m_assets;
}

void ModifyAssetTagsByAssetInfoRequest::SetAssets(const vector<AssetTagModifyAssetItem>& _assets)
{
    m_assets = _assets;
    m_assetsHasBeenSet = true;
}

bool ModifyAssetTagsByAssetInfoRequest::AssetsHasBeenSet() const
{
    return m_assetsHasBeenSet;
}

vector<string> ModifyAssetTagsByAssetInfoRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void ModifyAssetTagsByAssetInfoRequest::SetTagIDs(const vector<string>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool ModifyAssetTagsByAssetInfoRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

string ModifyAssetTagsByAssetInfoRequest::GetOperationType() const
{
    return m_operationType;
}

void ModifyAssetTagsByAssetInfoRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool ModifyAssetTagsByAssetInfoRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}


