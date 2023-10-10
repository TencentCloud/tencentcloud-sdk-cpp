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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetLoadInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetLoadInfoResponse::DescribeAssetLoadInfoResponse() :
    m_cpuLoadHasBeenSet(false),
    m_memLoadHasBeenSet(false),
    m_diskLoadHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetLoadInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CpuLoad") && !rsp["CpuLoad"].IsNull())
    {
        if (!rsp["CpuLoad"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CpuLoad` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuLoad.Deserialize(rsp["CpuLoad"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuLoadHasBeenSet = true;
    }

    if (rsp.HasMember("MemLoad") && !rsp["MemLoad"].IsNull())
    {
        if (!rsp["MemLoad"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MemLoad` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memLoad.Deserialize(rsp["MemLoad"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memLoadHasBeenSet = true;
    }

    if (rsp.HasMember("DiskLoad") && !rsp["DiskLoad"].IsNull())
    {
        if (!rsp["DiskLoad"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiskLoad` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskLoad.Deserialize(rsp["DiskLoad"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskLoadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetLoadInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cpuLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuLoad.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memLoad.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskLoad.ToJsonObject(value[key.c_str()], allocator);
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


AssetLoadSummary DescribeAssetLoadInfoResponse::GetCpuLoad() const
{
    return m_cpuLoad;
}

bool DescribeAssetLoadInfoResponse::CpuLoadHasBeenSet() const
{
    return m_cpuLoadHasBeenSet;
}

AssetLoadSummary DescribeAssetLoadInfoResponse::GetMemLoad() const
{
    return m_memLoad;
}

bool DescribeAssetLoadInfoResponse::MemLoadHasBeenSet() const
{
    return m_memLoadHasBeenSet;
}

AssetLoadSummary DescribeAssetLoadInfoResponse::GetDiskLoad() const
{
    return m_diskLoad;
}

bool DescribeAssetLoadInfoResponse::DiskLoadHasBeenSet() const
{
    return m_diskLoadHasBeenSet;
}


