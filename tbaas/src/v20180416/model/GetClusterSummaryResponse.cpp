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

#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetClusterSummaryResponse::GetClusterSummaryResponse() :
    m_totalChannelCountHasBeenSet(false),
    m_myChannelCountHasBeenSet(false),
    m_otherChannelCountHasBeenSet(false),
    m_joinChannelCountHasBeenSet(false),
    m_noneChannelCountHasBeenSet(false),
    m_totalPeerCountHasBeenSet(false),
    m_myPeerCountHasBeenSet(false),
    m_otherPeerCountHasBeenSet(false),
    m_totalGroupCountHasBeenSet(false),
    m_myGroupCountHasBeenSet(false),
    m_otherGroupCountHasBeenSet(false),
    m_totalChaincodeCountHasBeenSet(false),
    m_recentChaincodeCountHasBeenSet(false),
    m_myChaincodeCountHasBeenSet(false),
    m_otherChaincodeCountHasBeenSet(false),
    m_totalCertCountHasBeenSet(false),
    m_tlsCertCountHasBeenSet(false),
    m_peerCertCountHasBeenSet(false),
    m_orderCertCountHasBeenSet(false),
    m_clientCertCountHasBeenSet(false)
{
}

CoreInternalOutcome GetClusterSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalChannelCount") && !rsp["TotalChannelCount"].IsNull())
    {
        if (!rsp["TotalChannelCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalChannelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalChannelCount = rsp["TotalChannelCount"].GetUint64();
        m_totalChannelCountHasBeenSet = true;
    }

    if (rsp.HasMember("MyChannelCount") && !rsp["MyChannelCount"].IsNull())
    {
        if (!rsp["MyChannelCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MyChannelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_myChannelCount = rsp["MyChannelCount"].GetUint64();
        m_myChannelCountHasBeenSet = true;
    }

    if (rsp.HasMember("OtherChannelCount") && !rsp["OtherChannelCount"].IsNull())
    {
        if (!rsp["OtherChannelCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherChannelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherChannelCount = rsp["OtherChannelCount"].GetUint64();
        m_otherChannelCountHasBeenSet = true;
    }

    if (rsp.HasMember("JoinChannelCount") && !rsp["JoinChannelCount"].IsNull())
    {
        if (!rsp["JoinChannelCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `JoinChannelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_joinChannelCount = rsp["JoinChannelCount"].GetUint64();
        m_joinChannelCountHasBeenSet = true;
    }

    if (rsp.HasMember("NoneChannelCount") && !rsp["NoneChannelCount"].IsNull())
    {
        if (!rsp["NoneChannelCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NoneChannelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_noneChannelCount = rsp["NoneChannelCount"].GetUint64();
        m_noneChannelCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPeerCount") && !rsp["TotalPeerCount"].IsNull())
    {
        if (!rsp["TotalPeerCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalPeerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPeerCount = rsp["TotalPeerCount"].GetUint64();
        m_totalPeerCountHasBeenSet = true;
    }

    if (rsp.HasMember("MyPeerCount") && !rsp["MyPeerCount"].IsNull())
    {
        if (!rsp["MyPeerCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MyPeerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_myPeerCount = rsp["MyPeerCount"].GetUint64();
        m_myPeerCountHasBeenSet = true;
    }

    if (rsp.HasMember("OtherPeerCount") && !rsp["OtherPeerCount"].IsNull())
    {
        if (!rsp["OtherPeerCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherPeerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherPeerCount = rsp["OtherPeerCount"].GetUint64();
        m_otherPeerCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalGroupCount") && !rsp["TotalGroupCount"].IsNull())
    {
        if (!rsp["TotalGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalGroupCount = rsp["TotalGroupCount"].GetUint64();
        m_totalGroupCountHasBeenSet = true;
    }

    if (rsp.HasMember("MyGroupCount") && !rsp["MyGroupCount"].IsNull())
    {
        if (!rsp["MyGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MyGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_myGroupCount = rsp["MyGroupCount"].GetUint64();
        m_myGroupCountHasBeenSet = true;
    }

    if (rsp.HasMember("OtherGroupCount") && !rsp["OtherGroupCount"].IsNull())
    {
        if (!rsp["OtherGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherGroupCount = rsp["OtherGroupCount"].GetUint64();
        m_otherGroupCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalChaincodeCount") && !rsp["TotalChaincodeCount"].IsNull())
    {
        if (!rsp["TotalChaincodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalChaincodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalChaincodeCount = rsp["TotalChaincodeCount"].GetUint64();
        m_totalChaincodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("RecentChaincodeCount") && !rsp["RecentChaincodeCount"].IsNull())
    {
        if (!rsp["RecentChaincodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RecentChaincodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recentChaincodeCount = rsp["RecentChaincodeCount"].GetUint64();
        m_recentChaincodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("MyChaincodeCount") && !rsp["MyChaincodeCount"].IsNull())
    {
        if (!rsp["MyChaincodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MyChaincodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_myChaincodeCount = rsp["MyChaincodeCount"].GetUint64();
        m_myChaincodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("OtherChaincodeCount") && !rsp["OtherChaincodeCount"].IsNull())
    {
        if (!rsp["OtherChaincodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherChaincodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherChaincodeCount = rsp["OtherChaincodeCount"].GetUint64();
        m_otherChaincodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCertCount") && !rsp["TotalCertCount"].IsNull())
    {
        if (!rsp["TotalCertCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCertCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCertCount = rsp["TotalCertCount"].GetUint64();
        m_totalCertCountHasBeenSet = true;
    }

    if (rsp.HasMember("TlsCertCount") && !rsp["TlsCertCount"].IsNull())
    {
        if (!rsp["TlsCertCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TlsCertCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tlsCertCount = rsp["TlsCertCount"].GetUint64();
        m_tlsCertCountHasBeenSet = true;
    }

    if (rsp.HasMember("PeerCertCount") && !rsp["PeerCertCount"].IsNull())
    {
        if (!rsp["PeerCertCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PeerCertCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_peerCertCount = rsp["PeerCertCount"].GetUint64();
        m_peerCertCountHasBeenSet = true;
    }

    if (rsp.HasMember("OrderCertCount") && !rsp["OrderCertCount"].IsNull())
    {
        if (!rsp["OrderCertCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OrderCertCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderCertCount = rsp["OrderCertCount"].GetUint64();
        m_orderCertCountHasBeenSet = true;
    }

    if (rsp.HasMember("ClientCertCount") && !rsp["ClientCertCount"].IsNull())
    {
        if (!rsp["ClientCertCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClientCertCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertCount = rsp["ClientCertCount"].GetUint64();
        m_clientCertCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t GetClusterSummaryResponse::GetTotalChannelCount() const
{
    return m_totalChannelCount;
}

bool GetClusterSummaryResponse::TotalChannelCountHasBeenSet() const
{
    return m_totalChannelCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetMyChannelCount() const
{
    return m_myChannelCount;
}

bool GetClusterSummaryResponse::MyChannelCountHasBeenSet() const
{
    return m_myChannelCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetOtherChannelCount() const
{
    return m_otherChannelCount;
}

bool GetClusterSummaryResponse::OtherChannelCountHasBeenSet() const
{
    return m_otherChannelCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetJoinChannelCount() const
{
    return m_joinChannelCount;
}

bool GetClusterSummaryResponse::JoinChannelCountHasBeenSet() const
{
    return m_joinChannelCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetNoneChannelCount() const
{
    return m_noneChannelCount;
}

bool GetClusterSummaryResponse::NoneChannelCountHasBeenSet() const
{
    return m_noneChannelCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetTotalPeerCount() const
{
    return m_totalPeerCount;
}

bool GetClusterSummaryResponse::TotalPeerCountHasBeenSet() const
{
    return m_totalPeerCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetMyPeerCount() const
{
    return m_myPeerCount;
}

bool GetClusterSummaryResponse::MyPeerCountHasBeenSet() const
{
    return m_myPeerCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetOtherPeerCount() const
{
    return m_otherPeerCount;
}

bool GetClusterSummaryResponse::OtherPeerCountHasBeenSet() const
{
    return m_otherPeerCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetTotalGroupCount() const
{
    return m_totalGroupCount;
}

bool GetClusterSummaryResponse::TotalGroupCountHasBeenSet() const
{
    return m_totalGroupCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetMyGroupCount() const
{
    return m_myGroupCount;
}

bool GetClusterSummaryResponse::MyGroupCountHasBeenSet() const
{
    return m_myGroupCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetOtherGroupCount() const
{
    return m_otherGroupCount;
}

bool GetClusterSummaryResponse::OtherGroupCountHasBeenSet() const
{
    return m_otherGroupCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetTotalChaincodeCount() const
{
    return m_totalChaincodeCount;
}

bool GetClusterSummaryResponse::TotalChaincodeCountHasBeenSet() const
{
    return m_totalChaincodeCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetRecentChaincodeCount() const
{
    return m_recentChaincodeCount;
}

bool GetClusterSummaryResponse::RecentChaincodeCountHasBeenSet() const
{
    return m_recentChaincodeCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetMyChaincodeCount() const
{
    return m_myChaincodeCount;
}

bool GetClusterSummaryResponse::MyChaincodeCountHasBeenSet() const
{
    return m_myChaincodeCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetOtherChaincodeCount() const
{
    return m_otherChaincodeCount;
}

bool GetClusterSummaryResponse::OtherChaincodeCountHasBeenSet() const
{
    return m_otherChaincodeCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetTotalCertCount() const
{
    return m_totalCertCount;
}

bool GetClusterSummaryResponse::TotalCertCountHasBeenSet() const
{
    return m_totalCertCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetTlsCertCount() const
{
    return m_tlsCertCount;
}

bool GetClusterSummaryResponse::TlsCertCountHasBeenSet() const
{
    return m_tlsCertCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetPeerCertCount() const
{
    return m_peerCertCount;
}

bool GetClusterSummaryResponse::PeerCertCountHasBeenSet() const
{
    return m_peerCertCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetOrderCertCount() const
{
    return m_orderCertCount;
}

bool GetClusterSummaryResponse::OrderCertCountHasBeenSet() const
{
    return m_orderCertCountHasBeenSet;
}

uint64_t GetClusterSummaryResponse::GetClientCertCount() const
{
    return m_clientCertCount;
}

bool GetClusterSummaryResponse::ClientCertCountHasBeenSet() const
{
    return m_clientCertCountHasBeenSet;
}


