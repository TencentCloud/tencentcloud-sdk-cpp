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

#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CheckInstancesUpgradeAbleResponse::CheckInstancesUpgradeAbleResponse() :
    m_clusterVersionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_upgradeAbleInstancesHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_unavailableVersionReasonHasBeenSet(false)
{
}

CoreInternalOutcome CheckInstancesUpgradeAbleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterVersion") && !rsp["ClusterVersion"].IsNull())
    {
        if (!rsp["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(rsp["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (rsp.HasMember("LatestVersion") && !rsp["LatestVersion"].IsNull())
    {
        if (!rsp["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(rsp["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradeAbleInstances") && !rsp["UpgradeAbleInstances"].IsNull())
    {
        if (!rsp["UpgradeAbleInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstances` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UpgradeAbleInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpgradeAbleInstancesItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_upgradeAbleInstances.push_back(item);
        }
        m_upgradeAbleInstancesHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("UnavailableVersionReason") && !rsp["UnavailableVersionReason"].IsNull())
    {
        if (!rsp["UnavailableVersionReason"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnavailableVersionReason` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UnavailableVersionReason"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnavailableReason item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unavailableVersionReason.push_back(item);
        }
        m_unavailableVersionReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckInstancesUpgradeAbleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeAbleInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeAbleInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upgradeAbleInstances.begin(); itr != m_upgradeAbleInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_unavailableVersionReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnavailableVersionReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unavailableVersionReason.begin(); itr != m_unavailableVersionReason.end(); ++itr, ++i)
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


string CheckInstancesUpgradeAbleResponse::GetClusterVersion() const
{
    return m_clusterVersion;
}

bool CheckInstancesUpgradeAbleResponse::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string CheckInstancesUpgradeAbleResponse::GetLatestVersion() const
{
    return m_latestVersion;
}

bool CheckInstancesUpgradeAbleResponse::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

vector<UpgradeAbleInstancesItem> CheckInstancesUpgradeAbleResponse::GetUpgradeAbleInstances() const
{
    return m_upgradeAbleInstances;
}

bool CheckInstancesUpgradeAbleResponse::UpgradeAbleInstancesHasBeenSet() const
{
    return m_upgradeAbleInstancesHasBeenSet;
}

int64_t CheckInstancesUpgradeAbleResponse::GetTotal() const
{
    return m_total;
}

bool CheckInstancesUpgradeAbleResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<UnavailableReason> CheckInstancesUpgradeAbleResponse::GetUnavailableVersionReason() const
{
    return m_unavailableVersionReason;
}

bool CheckInstancesUpgradeAbleResponse::UnavailableVersionReasonHasBeenSet() const
{
    return m_unavailableVersionReasonHasBeenSet;
}


