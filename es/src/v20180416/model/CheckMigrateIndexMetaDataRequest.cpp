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

#include <tencentcloud/es/v20180416/model/CheckMigrateIndexMetaDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CheckMigrateIndexMetaDataRequest::CheckMigrateIndexMetaDataRequest() :
    m_serverlessIdHasBeenSet(false),
    m_snapshotHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_clusterInstanceIdHasBeenSet(false),
    m_commonIndexArrHasBeenSet(false),
    m_dataStreamArrHasBeenSet(false)
{
}

string CheckMigrateIndexMetaDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serverlessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverlessId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_commonIndexArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonIndexArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commonIndexArr.begin(); itr != m_commonIndexArr.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataStreamArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStreamArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataStreamArr.begin(); itr != m_dataStreamArr.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckMigrateIndexMetaDataRequest::GetServerlessId() const
{
    return m_serverlessId;
}

void CheckMigrateIndexMetaDataRequest::SetServerlessId(const string& _serverlessId)
{
    m_serverlessId = _serverlessId;
    m_serverlessIdHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::ServerlessIdHasBeenSet() const
{
    return m_serverlessIdHasBeenSet;
}

string CheckMigrateIndexMetaDataRequest::GetSnapshot() const
{
    return m_snapshot;
}

void CheckMigrateIndexMetaDataRequest::SetSnapshot(const string& _snapshot)
{
    m_snapshot = _snapshot;
    m_snapshotHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::SnapshotHasBeenSet() const
{
    return m_snapshotHasBeenSet;
}

string CheckMigrateIndexMetaDataRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CheckMigrateIndexMetaDataRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CheckMigrateIndexMetaDataRequest::GetBasePath() const
{
    return m_basePath;
}

void CheckMigrateIndexMetaDataRequest::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

string CheckMigrateIndexMetaDataRequest::GetClusterInstanceId() const
{
    return m_clusterInstanceId;
}

void CheckMigrateIndexMetaDataRequest::SetClusterInstanceId(const string& _clusterInstanceId)
{
    m_clusterInstanceId = _clusterInstanceId;
    m_clusterInstanceIdHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::ClusterInstanceIdHasBeenSet() const
{
    return m_clusterInstanceIdHasBeenSet;
}

vector<string> CheckMigrateIndexMetaDataRequest::GetCommonIndexArr() const
{
    return m_commonIndexArr;
}

void CheckMigrateIndexMetaDataRequest::SetCommonIndexArr(const vector<string>& _commonIndexArr)
{
    m_commonIndexArr = _commonIndexArr;
    m_commonIndexArrHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::CommonIndexArrHasBeenSet() const
{
    return m_commonIndexArrHasBeenSet;
}

vector<string> CheckMigrateIndexMetaDataRequest::GetDataStreamArr() const
{
    return m_dataStreamArr;
}

void CheckMigrateIndexMetaDataRequest::SetDataStreamArr(const vector<string>& _dataStreamArr)
{
    m_dataStreamArr = _dataStreamArr;
    m_dataStreamArrHasBeenSet = true;
}

bool CheckMigrateIndexMetaDataRequest::DataStreamArrHasBeenSet() const
{
    return m_dataStreamArrHasBeenSet;
}


