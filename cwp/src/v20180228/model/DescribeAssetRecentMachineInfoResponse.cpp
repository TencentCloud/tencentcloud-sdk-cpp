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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetRecentMachineInfoResponse::DescribeAssetRecentMachineInfoResponse() :
    m_totalListHasBeenSet(false),
    m_liveListHasBeenSet(false),
    m_offlineListHasBeenSet(false),
    m_riskListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetRecentMachineInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalList") && !rsp["TotalList"].IsNull())
    {
        if (!rsp["TotalList"].IsArray())
            return CoreInternalOutcome(Error("response `TotalList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TotalList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_totalList.push_back(item);
        }
        m_totalListHasBeenSet = true;
    }

    if (rsp.HasMember("LiveList") && !rsp["LiveList"].IsNull())
    {
        if (!rsp["LiveList"].IsArray())
            return CoreInternalOutcome(Error("response `LiveList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LiveList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_liveList.push_back(item);
        }
        m_liveListHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineList") && !rsp["OfflineList"].IsNull())
    {
        if (!rsp["OfflineList"].IsArray())
            return CoreInternalOutcome(Error("response `OfflineList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OfflineList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_offlineList.push_back(item);
        }
        m_offlineListHasBeenSet = true;
    }

    if (rsp.HasMember("RiskList") && !rsp["RiskList"].IsNull())
    {
        if (!rsp["RiskList"].IsArray())
            return CoreInternalOutcome(Error("response `RiskList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskList.push_back(item);
        }
        m_riskListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<AssetKeyVal> DescribeAssetRecentMachineInfoResponse::GetTotalList() const
{
    return m_totalList;
}

bool DescribeAssetRecentMachineInfoResponse::TotalListHasBeenSet() const
{
    return m_totalListHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetRecentMachineInfoResponse::GetLiveList() const
{
    return m_liveList;
}

bool DescribeAssetRecentMachineInfoResponse::LiveListHasBeenSet() const
{
    return m_liveListHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetRecentMachineInfoResponse::GetOfflineList() const
{
    return m_offlineList;
}

bool DescribeAssetRecentMachineInfoResponse::OfflineListHasBeenSet() const
{
    return m_offlineListHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetRecentMachineInfoResponse::GetRiskList() const
{
    return m_riskList;
}

bool DescribeAssetRecentMachineInfoResponse::RiskListHasBeenSet() const
{
    return m_riskListHasBeenSet;
}


