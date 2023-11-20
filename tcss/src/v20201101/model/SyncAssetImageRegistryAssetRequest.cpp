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

#include <tencentcloud/tcss/v20201101/model/SyncAssetImageRegistryAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SyncAssetImageRegistryAssetRequest::SyncAssetImageRegistryAssetRequest() :
    m_allHasBeenSet(false),
    m_registryIdsHasBeenSet(false)
{
}

string SyncAssetImageRegistryAssetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_registryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryIds.begin(); itr != m_registryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool SyncAssetImageRegistryAssetRequest::GetAll() const
{
    return m_all;
}

void SyncAssetImageRegistryAssetRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool SyncAssetImageRegistryAssetRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<uint64_t> SyncAssetImageRegistryAssetRequest::GetRegistryIds() const
{
    return m_registryIds;
}

void SyncAssetImageRegistryAssetRequest::SetRegistryIds(const vector<uint64_t>& _registryIds)
{
    m_registryIds = _registryIds;
    m_registryIdsHasBeenSet = true;
}

bool SyncAssetImageRegistryAssetRequest::RegistryIdsHasBeenSet() const
{
    return m_registryIdsHasBeenSet;
}


