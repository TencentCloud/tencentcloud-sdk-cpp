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

#include <tencentcloud/tcss/v20201101/model/CreateExportComplianceStatusListJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateExportComplianceStatusListJobRequest::CreateExportComplianceStatusListJobRequest() :
    m_assetTypeHasBeenSet(false),
    m_exportByAssetHasBeenSet(false),
    m_exportAllHasBeenSet(false),
    m_idListHasBeenSet(false)
{
}

string CreateExportComplianceStatusListJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_exportByAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportByAsset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportByAsset, allocator);
    }

    if (m_exportAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportAll, allocator);
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExportComplianceStatusListJobRequest::GetAssetType() const
{
    return m_assetType;
}

void CreateExportComplianceStatusListJobRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CreateExportComplianceStatusListJobRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

bool CreateExportComplianceStatusListJobRequest::GetExportByAsset() const
{
    return m_exportByAsset;
}

void CreateExportComplianceStatusListJobRequest::SetExportByAsset(const bool& _exportByAsset)
{
    m_exportByAsset = _exportByAsset;
    m_exportByAssetHasBeenSet = true;
}

bool CreateExportComplianceStatusListJobRequest::ExportByAssetHasBeenSet() const
{
    return m_exportByAssetHasBeenSet;
}

bool CreateExportComplianceStatusListJobRequest::GetExportAll() const
{
    return m_exportAll;
}

void CreateExportComplianceStatusListJobRequest::SetExportAll(const bool& _exportAll)
{
    m_exportAll = _exportAll;
    m_exportAllHasBeenSet = true;
}

bool CreateExportComplianceStatusListJobRequest::ExportAllHasBeenSet() const
{
    return m_exportAllHasBeenSet;
}

vector<uint64_t> CreateExportComplianceStatusListJobRequest::GetIdList() const
{
    return m_idList;
}

void CreateExportComplianceStatusListJobRequest::SetIdList(const vector<uint64_t>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool CreateExportComplianceStatusListJobRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}


