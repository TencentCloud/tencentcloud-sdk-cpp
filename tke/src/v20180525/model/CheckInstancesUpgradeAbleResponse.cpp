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
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome CheckInstancesUpgradeAbleResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ClusterVersion") && !rsp["ClusterVersion"].IsNull())
    {
        if (!rsp["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(rsp["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (rsp.HasMember("LatestVersion") && !rsp["LatestVersion"].IsNull())
    {
        if (!rsp["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(rsp["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradeAbleInstances") && !rsp["UpgradeAbleInstances"].IsNull())
    {
        if (!rsp["UpgradeAbleInstances"].IsArray())
            return CoreInternalOutcome(Error("response `UpgradeAbleInstances` is not array type"));

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
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


