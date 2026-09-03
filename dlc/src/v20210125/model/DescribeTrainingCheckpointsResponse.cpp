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

#include <tencentcloud/dlc/v20210125/model/DescribeTrainingCheckpointsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeTrainingCheckpointsResponse::DescribeTrainingCheckpointsResponse() :
    m_itemsHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_snapshotTimestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrainingCheckpointsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Items` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SharedMountFileItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (rsp.HasMember("MountPath") && !rsp["MountPath"].IsNull())
    {
        if (!rsp["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(rsp["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (rsp.HasMember("SubPath") && !rsp["SubPath"].IsNull())
    {
        if (!rsp["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(rsp["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }

    if (rsp.HasMember("StorageType") && !rsp["StorageType"].IsNull())
    {
        if (!rsp["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(rsp["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StoragePath") && !rsp["StoragePath"].IsNull())
    {
        if (!rsp["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(rsp["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotTimestamp") && !rsp["SnapshotTimestamp"].IsNull())
    {
        if (!rsp["SnapshotTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTimestamp = rsp["SnapshotTimestamp"].GetInt64();
        m_snapshotTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTrainingCheckpointsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotTimestamp, allocator);
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


vector<SharedMountFileItem> DescribeTrainingCheckpointsResponse::GetItems() const
{
    return m_items;
}

bool DescribeTrainingCheckpointsResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string DescribeTrainingCheckpointsResponse::GetMountPath() const
{
    return m_mountPath;
}

bool DescribeTrainingCheckpointsResponse::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

string DescribeTrainingCheckpointsResponse::GetSubPath() const
{
    return m_subPath;
}

bool DescribeTrainingCheckpointsResponse::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

string DescribeTrainingCheckpointsResponse::GetStorageType() const
{
    return m_storageType;
}

bool DescribeTrainingCheckpointsResponse::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string DescribeTrainingCheckpointsResponse::GetStoragePath() const
{
    return m_storagePath;
}

bool DescribeTrainingCheckpointsResponse::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

string DescribeTrainingCheckpointsResponse::GetMessage() const
{
    return m_message;
}

bool DescribeTrainingCheckpointsResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t DescribeTrainingCheckpointsResponse::GetSnapshotTimestamp() const
{
    return m_snapshotTimestamp;
}

bool DescribeTrainingCheckpointsResponse::SnapshotTimestampHasBeenSet() const
{
    return m_snapshotTimestampHasBeenSet;
}


