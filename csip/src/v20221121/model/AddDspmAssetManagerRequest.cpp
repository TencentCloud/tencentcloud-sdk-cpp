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

#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AddDspmAssetManagerRequest::AddDspmAssetManagerRequest() :
    m_identifyIdsHasBeenSet(false),
    m_assetIdHasBeenSet(false)
{
}

string AddDspmAssetManagerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_identifyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_identifyIds.begin(); itr != m_identifyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetId.begin(); itr != m_assetId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> AddDspmAssetManagerRequest::GetIdentifyIds() const
{
    return m_identifyIds;
}

void AddDspmAssetManagerRequest::SetIdentifyIds(const vector<string>& _identifyIds)
{
    m_identifyIds = _identifyIds;
    m_identifyIdsHasBeenSet = true;
}

bool AddDspmAssetManagerRequest::IdentifyIdsHasBeenSet() const
{
    return m_identifyIdsHasBeenSet;
}

vector<string> AddDspmAssetManagerRequest::GetAssetId() const
{
    return m_assetId;
}

void AddDspmAssetManagerRequest::SetAssetId(const vector<string>& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool AddDspmAssetManagerRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}


