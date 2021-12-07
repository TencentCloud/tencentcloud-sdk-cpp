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

#include <tencentcloud/tcss/v20201101/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeClusterDetailResponse::DescribeClusterDetailResponse() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_scanTaskProgressHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_clusterNodeNumHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_seriousRiskCountHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_middleRiskCountHasBeenSet(false),
    m_hintRiskCountHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_defenderStatusHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTaskProgress") && !rsp["ScanTaskProgress"].IsNull())
    {
        if (!rsp["ScanTaskProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTaskProgress = rsp["ScanTaskProgress"].GetInt64();
        m_scanTaskProgressHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterVersion") && !rsp["ClusterVersion"].IsNull())
    {
        if (!rsp["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(rsp["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerRuntime") && !rsp["ContainerRuntime"].IsNull())
    {
        if (!rsp["ContainerRuntime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerRuntime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerRuntime = string(rsp["ContainerRuntime"].GetString());
        m_containerRuntimeHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterNodeNum") && !rsp["ClusterNodeNum"].IsNull())
    {
        if (!rsp["ClusterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNodeNum = rsp["ClusterNodeNum"].GetUint64();
        m_clusterNodeNumHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterStatus") && !rsp["ClusterStatus"].IsNull())
    {
        if (!rsp["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(rsp["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterType") && !rsp["ClusterType"].IsNull())
    {
        if (!rsp["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(rsp["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("SeriousRiskCount") && !rsp["SeriousRiskCount"].IsNull())
    {
        if (!rsp["SeriousRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousRiskCount = rsp["SeriousRiskCount"].GetUint64();
        m_seriousRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskCount") && !rsp["HighRiskCount"].IsNull())
    {
        if (!rsp["HighRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = rsp["HighRiskCount"].GetUint64();
        m_highRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleRiskCount") && !rsp["MiddleRiskCount"].IsNull())
    {
        if (!rsp["MiddleRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiddleRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_middleRiskCount = rsp["MiddleRiskCount"].GetUint64();
        m_middleRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("HintRiskCount") && !rsp["HintRiskCount"].IsNull())
    {
        if (!rsp["HintRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HintRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hintRiskCount = rsp["HintRiskCount"].GetUint64();
        m_hintRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("CheckStatus") && !rsp["CheckStatus"].IsNull())
    {
        if (!rsp["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(rsp["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (rsp.HasMember("DefenderStatus") && !rsp["DefenderStatus"].IsNull())
    {
        if (!rsp["DefenderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefenderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenderStatus = string(rsp["DefenderStatus"].GetString());
        m_defenderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskCreateTime") && !rsp["TaskCreateTime"].IsNull())
    {
        if (!rsp["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(rsp["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTaskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTaskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTaskProgress, allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_containerRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterNodeNum, allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_seriousRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousRiskCount, allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_middleRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleRiskCount, allocator);
    }

    if (m_hintRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HintRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hintRiskCount, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_defenderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
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


string DescribeClusterDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeClusterDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeClusterDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeClusterDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t DescribeClusterDetailResponse::GetScanTaskProgress() const
{
    return m_scanTaskProgress;
}

bool DescribeClusterDetailResponse::ScanTaskProgressHasBeenSet() const
{
    return m_scanTaskProgressHasBeenSet;
}

string DescribeClusterDetailResponse::GetClusterVersion() const
{
    return m_clusterVersion;
}

bool DescribeClusterDetailResponse::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string DescribeClusterDetailResponse::GetContainerRuntime() const
{
    return m_containerRuntime;
}

bool DescribeClusterDetailResponse::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetClusterNodeNum() const
{
    return m_clusterNodeNum;
}

bool DescribeClusterDetailResponse::ClusterNodeNumHasBeenSet() const
{
    return m_clusterNodeNumHasBeenSet;
}

string DescribeClusterDetailResponse::GetClusterStatus() const
{
    return m_clusterStatus;
}

bool DescribeClusterDetailResponse::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string DescribeClusterDetailResponse::GetClusterType() const
{
    return m_clusterType;
}

bool DescribeClusterDetailResponse::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string DescribeClusterDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeClusterDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetSeriousRiskCount() const
{
    return m_seriousRiskCount;
}

bool DescribeClusterDetailResponse::SeriousRiskCountHasBeenSet() const
{
    return m_seriousRiskCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetHighRiskCount() const
{
    return m_highRiskCount;
}

bool DescribeClusterDetailResponse::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetMiddleRiskCount() const
{
    return m_middleRiskCount;
}

bool DescribeClusterDetailResponse::MiddleRiskCountHasBeenSet() const
{
    return m_middleRiskCountHasBeenSet;
}

uint64_t DescribeClusterDetailResponse::GetHintRiskCount() const
{
    return m_hintRiskCount;
}

bool DescribeClusterDetailResponse::HintRiskCountHasBeenSet() const
{
    return m_hintRiskCountHasBeenSet;
}

string DescribeClusterDetailResponse::GetCheckStatus() const
{
    return m_checkStatus;
}

bool DescribeClusterDetailResponse::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string DescribeClusterDetailResponse::GetDefenderStatus() const
{
    return m_defenderStatus;
}

bool DescribeClusterDetailResponse::DefenderStatusHasBeenSet() const
{
    return m_defenderStatusHasBeenSet;
}

string DescribeClusterDetailResponse::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

bool DescribeClusterDetailResponse::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}


