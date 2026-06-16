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

#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeDBCustomClusterDetailResponse::DescribeDBCustomClusterDetailResponse() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterNodeNumHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_apiServerNetworkHasBeenSet(false),
    m_containerNetworkHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBCustomClusterDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ClusterDescription") && !rsp["ClusterDescription"].IsNull())
    {
        if (!rsp["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(rsp["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
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

    if (rsp.HasMember("ClusterStatus") && !rsp["ClusterStatus"].IsNull())
    {
        if (!rsp["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(rsp["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
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

    if (rsp.HasMember("ClusterNodeNum") && !rsp["ClusterNodeNum"].IsNull())
    {
        if (!rsp["ClusterNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNodeNum = rsp["ClusterNodeNum"].GetInt64();
        m_clusterNodeNumHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterLevel") && !rsp["ClusterLevel"].IsNull())
    {
        if (!rsp["ClusterLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLevel = string(rsp["ClusterLevel"].GetString());
        m_clusterLevelHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("ApiServerNetwork") && !rsp["ApiServerNetwork"].IsNull())
    {
        if (!rsp["ApiServerNetwork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiServerNetwork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_apiServerNetwork.Deserialize(rsp["ApiServerNetwork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_apiServerNetworkHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerNetwork") && !rsp["ContainerNetwork"].IsNull())
    {
        if (!rsp["ContainerNetwork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containerNetwork.Deserialize(rsp["ContainerNetwork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerNetworkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBCustomClusterDetailResponse::ToJsonString() const
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

    if (m_clusterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterNodeNum, allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiServerNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiServerNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiServerNetwork.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerNetwork.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeDBCustomClusterDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeDBCustomClusterDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeDBCustomClusterDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetClusterDescription() const
{
    return m_clusterDescription;
}

bool DescribeDBCustomClusterDetailResponse::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeDBCustomClusterDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetClusterStatus() const
{
    return m_clusterStatus;
}

bool DescribeDBCustomClusterDetailResponse::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetClusterVersion() const
{
    return m_clusterVersion;
}

bool DescribeDBCustomClusterDetailResponse::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

int64_t DescribeDBCustomClusterDetailResponse::GetClusterNodeNum() const
{
    return m_clusterNodeNum;
}

bool DescribeDBCustomClusterDetailResponse::ClusterNodeNumHasBeenSet() const
{
    return m_clusterNodeNumHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetClusterLevel() const
{
    return m_clusterLevel;
}

bool DescribeDBCustomClusterDetailResponse::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

string DescribeDBCustomClusterDetailResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeDBCustomClusterDetailResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> DescribeDBCustomClusterDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeDBCustomClusterDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ApiServerNetwork DescribeDBCustomClusterDetailResponse::GetApiServerNetwork() const
{
    return m_apiServerNetwork;
}

bool DescribeDBCustomClusterDetailResponse::ApiServerNetworkHasBeenSet() const
{
    return m_apiServerNetworkHasBeenSet;
}

ContainerNetwork DescribeDBCustomClusterDetailResponse::GetContainerNetwork() const
{
    return m_containerNetwork;
}

bool DescribeDBCustomClusterDetailResponse::ContainerNetworkHasBeenSet() const
{
    return m_containerNetworkHasBeenSet;
}


