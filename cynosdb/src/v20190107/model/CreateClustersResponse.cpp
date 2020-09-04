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

#include <tencentcloud/cynosdb/v20190107/model/CreateClustersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace rapidjson;
using namespace std;

CreateClustersResponse::CreateClustersResponse() :
    m_tranIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_bigDealIdsHasBeenSet(false)
{
}

CoreInternalOutcome CreateClustersResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TranId") && !rsp["TranId"].IsNull())
    {
        if (!rsp["TranId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(rsp["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (rsp.HasMember("DealNames") && !rsp["DealNames"].IsNull())
    {
        if (!rsp["DealNames"].IsArray())
            return CoreInternalOutcome(Error("response `DealNames` is not array type"));

        const Value &tmpValue = rsp["DealNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceIds") && !rsp["ResourceIds"].IsNull())
    {
        if (!rsp["ResourceIds"].IsArray())
            return CoreInternalOutcome(Error("response `ResourceIds` is not array type"));

        const Value &tmpValue = rsp["ResourceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterIds") && !rsp["ClusterIds"].IsNull())
    {
        if (!rsp["ClusterIds"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterIds` is not array type"));

        const Value &tmpValue = rsp["ClusterIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterIds.push_back((*itr).GetString());
        }
        m_clusterIdsHasBeenSet = true;
    }

    if (rsp.HasMember("BigDealIds") && !rsp["BigDealIds"].IsNull())
    {
        if (!rsp["BigDealIds"].IsArray())
            return CoreInternalOutcome(Error("response `BigDealIds` is not array type"));

        const Value &tmpValue = rsp["BigDealIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bigDealIds.push_back((*itr).GetString());
        }
        m_bigDealIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateClustersResponse::GetTranId() const
{
    return m_tranId;
}

bool CreateClustersResponse::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

vector<string> CreateClustersResponse::GetDealNames() const
{
    return m_dealNames;
}

bool CreateClustersResponse::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

vector<string> CreateClustersResponse::GetResourceIds() const
{
    return m_resourceIds;
}

bool CreateClustersResponse::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> CreateClustersResponse::GetClusterIds() const
{
    return m_clusterIds;
}

bool CreateClustersResponse::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

vector<string> CreateClustersResponse::GetBigDealIds() const
{
    return m_bigDealIds;
}

bool CreateClustersResponse::BigDealIdsHasBeenSet() const
{
    return m_bigDealIdsHasBeenSet;
}


