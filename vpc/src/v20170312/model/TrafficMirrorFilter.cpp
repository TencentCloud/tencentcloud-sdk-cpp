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

#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficMirrorFilter::TrafficMirrorFilter() :
    m_srcNetHasBeenSet(false),
    m_dstNetHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_dstPortHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirrorFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcNet") && !value["SrcNet"].IsNull())
    {
        if (!value["SrcNet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.SrcNet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcNet = string(value["SrcNet"].GetString());
        m_srcNetHasBeenSet = true;
    }

    if (value.HasMember("DstNet") && !value["DstNet"].IsNull())
    {
        if (!value["DstNet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.DstNet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstNet = string(value["DstNet"].GetString());
        m_dstNetHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SrcPort") && !value["SrcPort"].IsNull())
    {
        if (!value["SrcPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.SrcPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = string(value["SrcPort"].GetString());
        m_srcPortHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirrorFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcNet.c_str(), allocator).Move(), allocator);
    }

    if (m_dstNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstNet.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPort.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
    }

}


string TrafficMirrorFilter::GetSrcNet() const
{
    return m_srcNet;
}

void TrafficMirrorFilter::SetSrcNet(const string& _srcNet)
{
    m_srcNet = _srcNet;
    m_srcNetHasBeenSet = true;
}

bool TrafficMirrorFilter::SrcNetHasBeenSet() const
{
    return m_srcNetHasBeenSet;
}

string TrafficMirrorFilter::GetDstNet() const
{
    return m_dstNet;
}

void TrafficMirrorFilter::SetDstNet(const string& _dstNet)
{
    m_dstNet = _dstNet;
    m_dstNetHasBeenSet = true;
}

bool TrafficMirrorFilter::DstNetHasBeenSet() const
{
    return m_dstNetHasBeenSet;
}

string TrafficMirrorFilter::GetProtocol() const
{
    return m_protocol;
}

void TrafficMirrorFilter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TrafficMirrorFilter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string TrafficMirrorFilter::GetSrcPort() const
{
    return m_srcPort;
}

void TrafficMirrorFilter::SetSrcPort(const string& _srcPort)
{
    m_srcPort = _srcPort;
    m_srcPortHasBeenSet = true;
}

bool TrafficMirrorFilter::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string TrafficMirrorFilter::GetDstPort() const
{
    return m_dstPort;
}

void TrafficMirrorFilter::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool TrafficMirrorFilter::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

