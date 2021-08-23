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

#include <tencentcloud/ecm/v20190719/model/PeakNetwork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PeakNetwork::PeakNetwork() :
    m_recordTimeHasBeenSet(false),
    m_peakInNetworkHasBeenSet(false),
    m_peakOutNetworkHasBeenSet(false),
    m_chargeNetworkHasBeenSet(false)
{
}

CoreInternalOutcome PeakNetwork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordTime") && !value["RecordTime"].IsNull())
    {
        if (!value["RecordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakNetwork.RecordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTime = string(value["RecordTime"].GetString());
        m_recordTimeHasBeenSet = true;
    }

    if (value.HasMember("PeakInNetwork") && !value["PeakInNetwork"].IsNull())
    {
        if (!value["PeakInNetwork"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakNetwork.PeakInNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peakInNetwork = string(value["PeakInNetwork"].GetString());
        m_peakInNetworkHasBeenSet = true;
    }

    if (value.HasMember("PeakOutNetwork") && !value["PeakOutNetwork"].IsNull())
    {
        if (!value["PeakOutNetwork"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakNetwork.PeakOutNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peakOutNetwork = string(value["PeakOutNetwork"].GetString());
        m_peakOutNetworkHasBeenSet = true;
    }

    if (value.HasMember("ChargeNetwork") && !value["ChargeNetwork"].IsNull())
    {
        if (!value["ChargeNetwork"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakNetwork.ChargeNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeNetwork = string(value["ChargeNetwork"].GetString());
        m_chargeNetworkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeakNetwork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTime.c_str(), allocator).Move(), allocator);
    }

    if (m_peakInNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakInNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peakInNetwork.c_str(), allocator).Move(), allocator);
    }

    if (m_peakOutNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakOutNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peakOutNetwork.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeNetwork.c_str(), allocator).Move(), allocator);
    }

}


string PeakNetwork::GetRecordTime() const
{
    return m_recordTime;
}

void PeakNetwork::SetRecordTime(const string& _recordTime)
{
    m_recordTime = _recordTime;
    m_recordTimeHasBeenSet = true;
}

bool PeakNetwork::RecordTimeHasBeenSet() const
{
    return m_recordTimeHasBeenSet;
}

string PeakNetwork::GetPeakInNetwork() const
{
    return m_peakInNetwork;
}

void PeakNetwork::SetPeakInNetwork(const string& _peakInNetwork)
{
    m_peakInNetwork = _peakInNetwork;
    m_peakInNetworkHasBeenSet = true;
}

bool PeakNetwork::PeakInNetworkHasBeenSet() const
{
    return m_peakInNetworkHasBeenSet;
}

string PeakNetwork::GetPeakOutNetwork() const
{
    return m_peakOutNetwork;
}

void PeakNetwork::SetPeakOutNetwork(const string& _peakOutNetwork)
{
    m_peakOutNetwork = _peakOutNetwork;
    m_peakOutNetworkHasBeenSet = true;
}

bool PeakNetwork::PeakOutNetworkHasBeenSet() const
{
    return m_peakOutNetworkHasBeenSet;
}

string PeakNetwork::GetChargeNetwork() const
{
    return m_chargeNetwork;
}

void PeakNetwork::SetChargeNetwork(const string& _chargeNetwork)
{
    m_chargeNetwork = _chargeNetwork;
    m_chargeNetworkHasBeenSet = true;
}

bool PeakNetwork::ChargeNetworkHasBeenSet() const
{
    return m_chargeNetworkHasBeenSet;
}

