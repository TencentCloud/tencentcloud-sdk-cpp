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

#include <tencentcloud/dayu/v20180709/model/DescribeDDoSEvInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeDDoSEvInfoResponse::DescribeDDoSEvInfoResponse() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tcpPacketSumHasBeenSet(false),
    m_tcpKBSumHasBeenSet(false),
    m_udpPacketSumHasBeenSet(false),
    m_udpKBSumHasBeenSet(false),
    m_icmpPacketSumHasBeenSet(false),
    m_icmpKBSumHasBeenSet(false),
    m_otherPacketSumHasBeenSet(false),
    m_otherKBSumHasBeenSet(false),
    m_totalTrafficHasBeenSet(false),
    m_mbpsHasBeenSet(false),
    m_ppsHasBeenSet(false),
    m_pcapUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDDoSEvInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsString())
        {
            return CoreInternalOutcome(Error("response `Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(rsp["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Ip") && !rsp["Ip"].IsNull())
    {
        if (!rsp["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(rsp["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TcpPacketSum") && !rsp["TcpPacketSum"].IsNull())
    {
        if (!rsp["TcpPacketSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TcpPacketSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpPacketSum = rsp["TcpPacketSum"].GetUint64();
        m_tcpPacketSumHasBeenSet = true;
    }

    if (rsp.HasMember("TcpKBSum") && !rsp["TcpKBSum"].IsNull())
    {
        if (!rsp["TcpKBSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TcpKBSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpKBSum = rsp["TcpKBSum"].GetUint64();
        m_tcpKBSumHasBeenSet = true;
    }

    if (rsp.HasMember("UdpPacketSum") && !rsp["UdpPacketSum"].IsNull())
    {
        if (!rsp["UdpPacketSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UdpPacketSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_udpPacketSum = rsp["UdpPacketSum"].GetUint64();
        m_udpPacketSumHasBeenSet = true;
    }

    if (rsp.HasMember("UdpKBSum") && !rsp["UdpKBSum"].IsNull())
    {
        if (!rsp["UdpKBSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UdpKBSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_udpKBSum = rsp["UdpKBSum"].GetUint64();
        m_udpKBSumHasBeenSet = true;
    }

    if (rsp.HasMember("IcmpPacketSum") && !rsp["IcmpPacketSum"].IsNull())
    {
        if (!rsp["IcmpPacketSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `IcmpPacketSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_icmpPacketSum = rsp["IcmpPacketSum"].GetUint64();
        m_icmpPacketSumHasBeenSet = true;
    }

    if (rsp.HasMember("IcmpKBSum") && !rsp["IcmpKBSum"].IsNull())
    {
        if (!rsp["IcmpKBSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `IcmpKBSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_icmpKBSum = rsp["IcmpKBSum"].GetUint64();
        m_icmpKBSumHasBeenSet = true;
    }

    if (rsp.HasMember("OtherPacketSum") && !rsp["OtherPacketSum"].IsNull())
    {
        if (!rsp["OtherPacketSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherPacketSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherPacketSum = rsp["OtherPacketSum"].GetUint64();
        m_otherPacketSumHasBeenSet = true;
    }

    if (rsp.HasMember("OtherKBSum") && !rsp["OtherKBSum"].IsNull())
    {
        if (!rsp["OtherKBSum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OtherKBSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherKBSum = rsp["OtherKBSum"].GetUint64();
        m_otherKBSumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTraffic") && !rsp["TotalTraffic"].IsNull())
    {
        if (!rsp["TotalTraffic"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalTraffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTraffic = rsp["TotalTraffic"].GetUint64();
        m_totalTrafficHasBeenSet = true;
    }

    if (rsp.HasMember("Mbps") && !rsp["Mbps"].IsNull())
    {
        if (!rsp["Mbps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Mbps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mbps = rsp["Mbps"].GetUint64();
        m_mbpsHasBeenSet = true;
    }

    if (rsp.HasMember("Pps") && !rsp["Pps"].IsNull())
    {
        if (!rsp["Pps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Pps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pps = rsp["Pps"].GetUint64();
        m_ppsHasBeenSet = true;
    }

    if (rsp.HasMember("PcapUrl") && !rsp["PcapUrl"].IsNull())
    {
        if (!rsp["PcapUrl"].IsArray())
            return CoreInternalOutcome(Error("response `PcapUrl` is not array type"));

        const Value &tmpValue = rsp["PcapUrl"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pcapUrl.push_back((*itr).GetString());
        }
        m_pcapUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDDoSEvInfoResponse::GetBusiness() const
{
    return m_business;
}

bool DescribeDDoSEvInfoResponse::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeDDoSEvInfoResponse::GetId() const
{
    return m_id;
}

bool DescribeDDoSEvInfoResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDDoSEvInfoResponse::GetIp() const
{
    return m_ip;
}

bool DescribeDDoSEvInfoResponse::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeDDoSEvInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeDDoSEvInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDDoSEvInfoResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeDDoSEvInfoResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetTcpPacketSum() const
{
    return m_tcpPacketSum;
}

bool DescribeDDoSEvInfoResponse::TcpPacketSumHasBeenSet() const
{
    return m_tcpPacketSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetTcpKBSum() const
{
    return m_tcpKBSum;
}

bool DescribeDDoSEvInfoResponse::TcpKBSumHasBeenSet() const
{
    return m_tcpKBSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetUdpPacketSum() const
{
    return m_udpPacketSum;
}

bool DescribeDDoSEvInfoResponse::UdpPacketSumHasBeenSet() const
{
    return m_udpPacketSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetUdpKBSum() const
{
    return m_udpKBSum;
}

bool DescribeDDoSEvInfoResponse::UdpKBSumHasBeenSet() const
{
    return m_udpKBSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetIcmpPacketSum() const
{
    return m_icmpPacketSum;
}

bool DescribeDDoSEvInfoResponse::IcmpPacketSumHasBeenSet() const
{
    return m_icmpPacketSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetIcmpKBSum() const
{
    return m_icmpKBSum;
}

bool DescribeDDoSEvInfoResponse::IcmpKBSumHasBeenSet() const
{
    return m_icmpKBSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetOtherPacketSum() const
{
    return m_otherPacketSum;
}

bool DescribeDDoSEvInfoResponse::OtherPacketSumHasBeenSet() const
{
    return m_otherPacketSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetOtherKBSum() const
{
    return m_otherKBSum;
}

bool DescribeDDoSEvInfoResponse::OtherKBSumHasBeenSet() const
{
    return m_otherKBSumHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetTotalTraffic() const
{
    return m_totalTraffic;
}

bool DescribeDDoSEvInfoResponse::TotalTrafficHasBeenSet() const
{
    return m_totalTrafficHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetMbps() const
{
    return m_mbps;
}

bool DescribeDDoSEvInfoResponse::MbpsHasBeenSet() const
{
    return m_mbpsHasBeenSet;
}

uint64_t DescribeDDoSEvInfoResponse::GetPps() const
{
    return m_pps;
}

bool DescribeDDoSEvInfoResponse::PpsHasBeenSet() const
{
    return m_ppsHasBeenSet;
}

vector<string> DescribeDDoSEvInfoResponse::GetPcapUrl() const
{
    return m_pcapUrl;
}

bool DescribeDDoSEvInfoResponse::PcapUrlHasBeenSet() const
{
    return m_pcapUrlHasBeenSet;
}


