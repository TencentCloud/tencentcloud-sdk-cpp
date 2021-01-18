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

#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

GetUpgradeInstanceProgressResponse::GetUpgradeInstanceProgressResponse() :
    m_totalHasBeenSet(false),
    m_doneHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_clusterStatusHasBeenSet(false)
{
}

CoreInternalOutcome GetUpgradeInstanceProgressResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Done") && !rsp["Done"].IsNull())
    {
        if (!rsp["Done"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Done` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_done = rsp["Done"].GetInt64();
        m_doneHasBeenSet = true;
    }

    if (rsp.HasMember("LifeState") && !rsp["LifeState"].IsNull())
    {
        if (!rsp["LifeState"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(rsp["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (rsp.HasMember("Instances") && !rsp["Instances"].IsNull())
    {
        if (!rsp["Instances"].IsArray())
            return CoreInternalOutcome(Error("response `Instances` is not array type"));

        const Value &tmpValue = rsp["Instances"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceUpgradeProgressItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instances.push_back(item);
        }
        m_instancesHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterStatus") && !rsp["ClusterStatus"].IsNull())
    {
        if (!rsp["ClusterStatus"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClusterStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterStatus.Deserialize(rsp["ClusterStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t GetUpgradeInstanceProgressResponse::GetTotal() const
{
    return m_total;
}

bool GetUpgradeInstanceProgressResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t GetUpgradeInstanceProgressResponse::GetDone() const
{
    return m_done;
}

bool GetUpgradeInstanceProgressResponse::DoneHasBeenSet() const
{
    return m_doneHasBeenSet;
}

string GetUpgradeInstanceProgressResponse::GetLifeState() const
{
    return m_lifeState;
}

bool GetUpgradeInstanceProgressResponse::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

vector<InstanceUpgradeProgressItem> GetUpgradeInstanceProgressResponse::GetInstances() const
{
    return m_instances;
}

bool GetUpgradeInstanceProgressResponse::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

InstanceUpgradeClusterStatus GetUpgradeInstanceProgressResponse::GetClusterStatus() const
{
    return m_clusterStatus;
}

bool GetUpgradeInstanceProgressResponse::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}


