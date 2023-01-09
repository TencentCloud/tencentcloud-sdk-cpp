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

#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

DescribeFileSystemResponse::DescribeFileSystemResponse() :
    m_fileSystemHasBeenSet(false),
    m_capacityUsedHasBeenSet(false),
    m_archiveCapacityUsedHasBeenSet(false),
    m_standardCapacityUsedHasBeenSet(false),
    m_degradeCapacityUsedHasBeenSet(false),
    m_deepArchiveCapacityUsedHasBeenSet(false),
    m_intelligentCapacityUsedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFileSystemResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FileSystem") && !rsp["FileSystem"].IsNull())
    {
        if (!rsp["FileSystem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSystem.Deserialize(rsp["FileSystem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSystemHasBeenSet = true;
    }

    if (rsp.HasMember("CapacityUsed") && !rsp["CapacityUsed"].IsNull())
    {
        if (!rsp["CapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityUsed = rsp["CapacityUsed"].GetUint64();
        m_capacityUsedHasBeenSet = true;
    }

    if (rsp.HasMember("ArchiveCapacityUsed") && !rsp["ArchiveCapacityUsed"].IsNull())
    {
        if (!rsp["ArchiveCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveCapacityUsed = rsp["ArchiveCapacityUsed"].GetUint64();
        m_archiveCapacityUsedHasBeenSet = true;
    }

    if (rsp.HasMember("StandardCapacityUsed") && !rsp["StandardCapacityUsed"].IsNull())
    {
        if (!rsp["StandardCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardCapacityUsed = rsp["StandardCapacityUsed"].GetUint64();
        m_standardCapacityUsedHasBeenSet = true;
    }

    if (rsp.HasMember("DegradeCapacityUsed") && !rsp["DegradeCapacityUsed"].IsNull())
    {
        if (!rsp["DegradeCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DegradeCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_degradeCapacityUsed = rsp["DegradeCapacityUsed"].GetUint64();
        m_degradeCapacityUsedHasBeenSet = true;
    }

    if (rsp.HasMember("DeepArchiveCapacityUsed") && !rsp["DeepArchiveCapacityUsed"].IsNull())
    {
        if (!rsp["DeepArchiveCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeepArchiveCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deepArchiveCapacityUsed = rsp["DeepArchiveCapacityUsed"].GetUint64();
        m_deepArchiveCapacityUsedHasBeenSet = true;
    }

    if (rsp.HasMember("IntelligentCapacityUsed") && !rsp["IntelligentCapacityUsed"].IsNull())
    {
        if (!rsp["IntelligentCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligentCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intelligentCapacityUsed = rsp["IntelligentCapacityUsed"].GetUint64();
        m_intelligentCapacityUsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFileSystemResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fileSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileSystem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_capacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityUsed, allocator);
    }

    if (m_archiveCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveCapacityUsed, allocator);
    }

    if (m_standardCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardCapacityUsed, allocator);
    }

    if (m_degradeCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DegradeCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_degradeCapacityUsed, allocator);
    }

    if (m_deepArchiveCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepArchiveCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deepArchiveCapacityUsed, allocator);
    }

    if (m_intelligentCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelligentCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intelligentCapacityUsed, allocator);
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


FileSystem DescribeFileSystemResponse::GetFileSystem() const
{
    return m_fileSystem;
}

bool DescribeFileSystemResponse::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetCapacityUsed() const
{
    return m_capacityUsed;
}

bool DescribeFileSystemResponse::CapacityUsedHasBeenSet() const
{
    return m_capacityUsedHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetArchiveCapacityUsed() const
{
    return m_archiveCapacityUsed;
}

bool DescribeFileSystemResponse::ArchiveCapacityUsedHasBeenSet() const
{
    return m_archiveCapacityUsedHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetStandardCapacityUsed() const
{
    return m_standardCapacityUsed;
}

bool DescribeFileSystemResponse::StandardCapacityUsedHasBeenSet() const
{
    return m_standardCapacityUsedHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetDegradeCapacityUsed() const
{
    return m_degradeCapacityUsed;
}

bool DescribeFileSystemResponse::DegradeCapacityUsedHasBeenSet() const
{
    return m_degradeCapacityUsedHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetDeepArchiveCapacityUsed() const
{
    return m_deepArchiveCapacityUsed;
}

bool DescribeFileSystemResponse::DeepArchiveCapacityUsedHasBeenSet() const
{
    return m_deepArchiveCapacityUsedHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetIntelligentCapacityUsed() const
{
    return m_intelligentCapacityUsed;
}

bool DescribeFileSystemResponse::IntelligentCapacityUsedHasBeenSet() const
{
    return m_intelligentCapacityUsedHasBeenSet;
}


