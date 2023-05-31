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

#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackageClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyResourcePackageClustersRequest::ModifyResourcePackageClustersRequest() :
    m_packageIdHasBeenSet(false),
    m_bindClusterIdsHasBeenSet(false),
    m_unbindClusterIdsHasBeenSet(false)
{
}

string ModifyResourcePackageClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindClusterIds.begin(); itr != m_bindClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unbindClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unbindClusterIds.begin(); itr != m_unbindClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourcePackageClustersRequest::GetPackageId() const
{
    return m_packageId;
}

void ModifyResourcePackageClustersRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool ModifyResourcePackageClustersRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

vector<string> ModifyResourcePackageClustersRequest::GetBindClusterIds() const
{
    return m_bindClusterIds;
}

void ModifyResourcePackageClustersRequest::SetBindClusterIds(const vector<string>& _bindClusterIds)
{
    m_bindClusterIds = _bindClusterIds;
    m_bindClusterIdsHasBeenSet = true;
}

bool ModifyResourcePackageClustersRequest::BindClusterIdsHasBeenSet() const
{
    return m_bindClusterIdsHasBeenSet;
}

vector<string> ModifyResourcePackageClustersRequest::GetUnbindClusterIds() const
{
    return m_unbindClusterIds;
}

void ModifyResourcePackageClustersRequest::SetUnbindClusterIds(const vector<string>& _unbindClusterIds)
{
    m_unbindClusterIds = _unbindClusterIds;
    m_unbindClusterIdsHasBeenSet = true;
}

bool ModifyResourcePackageClustersRequest::UnbindClusterIdsHasBeenSet() const
{
    return m_unbindClusterIdsHasBeenSet;
}


