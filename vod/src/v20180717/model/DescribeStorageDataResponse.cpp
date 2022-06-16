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

#include <tencentcloud/vod/v20180717/model/DescribeStorageDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeStorageDataResponse::DescribeStorageDataResponse() :
    m_mediaCountHasBeenSet(false),
    m_totalStorageHasBeenSet(false),
    m_standardStorageHasBeenSet(false),
    m_infrequentStorageHasBeenSet(false),
    m_archiveStorageHasBeenSet(false),
    m_deepArchiveStorageHasBeenSet(false),
    m_storageStatHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStorageDataResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MediaCount") && !rsp["MediaCount"].IsNull())
    {
        if (!rsp["MediaCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaCount = rsp["MediaCount"].GetUint64();
        m_mediaCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalStorage") && !rsp["TotalStorage"].IsNull())
    {
        if (!rsp["TotalStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalStorage = rsp["TotalStorage"].GetUint64();
        m_totalStorageHasBeenSet = true;
    }

    if (rsp.HasMember("StandardStorage") && !rsp["StandardStorage"].IsNull())
    {
        if (!rsp["StandardStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardStorage = rsp["StandardStorage"].GetUint64();
        m_standardStorageHasBeenSet = true;
    }

    if (rsp.HasMember("InfrequentStorage") && !rsp["InfrequentStorage"].IsNull())
    {
        if (!rsp["InfrequentStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InfrequentStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_infrequentStorage = rsp["InfrequentStorage"].GetUint64();
        m_infrequentStorageHasBeenSet = true;
    }

    if (rsp.HasMember("ArchiveStorage") && !rsp["ArchiveStorage"].IsNull())
    {
        if (!rsp["ArchiveStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveStorage = rsp["ArchiveStorage"].GetUint64();
        m_archiveStorageHasBeenSet = true;
    }

    if (rsp.HasMember("DeepArchiveStorage") && !rsp["DeepArchiveStorage"].IsNull())
    {
        if (!rsp["DeepArchiveStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeepArchiveStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deepArchiveStorage = rsp["DeepArchiveStorage"].GetUint64();
        m_deepArchiveStorageHasBeenSet = true;
    }

    if (rsp.HasMember("StorageStat") && !rsp["StorageStat"].IsNull())
    {
        if (!rsp["StorageStat"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageStat` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StorageStat"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageStatData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageStat.push_back(item);
        }
        m_storageStatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStorageDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mediaCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaCount, allocator);
    }

    if (m_totalStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalStorage, allocator);
    }

    if (m_standardStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardStorage, allocator);
    }

    if (m_infrequentStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfrequentStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_infrequentStorage, allocator);
    }

    if (m_archiveStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveStorage, allocator);
    }

    if (m_deepArchiveStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepArchiveStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deepArchiveStorage, allocator);
    }

    if (m_storageStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageStat.begin(); itr != m_storageStat.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeStorageDataResponse::GetMediaCount() const
{
    return m_mediaCount;
}

bool DescribeStorageDataResponse::MediaCountHasBeenSet() const
{
    return m_mediaCountHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetTotalStorage() const
{
    return m_totalStorage;
}

bool DescribeStorageDataResponse::TotalStorageHasBeenSet() const
{
    return m_totalStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetStandardStorage() const
{
    return m_standardStorage;
}

bool DescribeStorageDataResponse::StandardStorageHasBeenSet() const
{
    return m_standardStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetInfrequentStorage() const
{
    return m_infrequentStorage;
}

bool DescribeStorageDataResponse::InfrequentStorageHasBeenSet() const
{
    return m_infrequentStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetArchiveStorage() const
{
    return m_archiveStorage;
}

bool DescribeStorageDataResponse::ArchiveStorageHasBeenSet() const
{
    return m_archiveStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetDeepArchiveStorage() const
{
    return m_deepArchiveStorage;
}

bool DescribeStorageDataResponse::DeepArchiveStorageHasBeenSet() const
{
    return m_deepArchiveStorageHasBeenSet;
}

vector<StorageStatData> DescribeStorageDataResponse::GetStorageStat() const
{
    return m_storageStat;
}

bool DescribeStorageDataResponse::StorageStatHasBeenSet() const
{
    return m_storageStatHasBeenSet;
}


