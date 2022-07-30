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

#include <tencentcloud/ckafka/v20190819/model/TdwParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TdwParam::TdwParam() :
    m_bidHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_isDomesticHasBeenSet(false),
    m_tdwHostHasBeenSet(false),
    m_tdwPortHasBeenSet(false)
{
}

CoreInternalOutcome TdwParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bid") && !value["Bid"].IsNull())
    {
        if (!value["Bid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TdwParam.Bid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bid = string(value["Bid"].GetString());
        m_bidHasBeenSet = true;
    }

    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TdwParam.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("IsDomestic") && !value["IsDomestic"].IsNull())
    {
        if (!value["IsDomestic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TdwParam.IsDomestic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDomestic = value["IsDomestic"].GetBool();
        m_isDomesticHasBeenSet = true;
    }

    if (value.HasMember("TdwHost") && !value["TdwHost"].IsNull())
    {
        if (!value["TdwHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TdwParam.TdwHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tdwHost = string(value["TdwHost"].GetString());
        m_tdwHostHasBeenSet = true;
    }

    if (value.HasMember("TdwPort") && !value["TdwPort"].IsNull())
    {
        if (!value["TdwPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TdwParam.TdwPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tdwPort = value["TdwPort"].GetInt64();
        m_tdwPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TdwParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bid.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_isDomesticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDomestic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDomestic, allocator);
    }

    if (m_tdwHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TdwHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tdwHost.c_str(), allocator).Move(), allocator);
    }

    if (m_tdwPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TdwPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tdwPort, allocator);
    }

}


string TdwParam::GetBid() const
{
    return m_bid;
}

void TdwParam::SetBid(const string& _bid)
{
    m_bid = _bid;
    m_bidHasBeenSet = true;
}

bool TdwParam::BidHasBeenSet() const
{
    return m_bidHasBeenSet;
}

string TdwParam::GetTid() const
{
    return m_tid;
}

void TdwParam::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool TdwParam::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

bool TdwParam::GetIsDomestic() const
{
    return m_isDomestic;
}

void TdwParam::SetIsDomestic(const bool& _isDomestic)
{
    m_isDomestic = _isDomestic;
    m_isDomesticHasBeenSet = true;
}

bool TdwParam::IsDomesticHasBeenSet() const
{
    return m_isDomesticHasBeenSet;
}

string TdwParam::GetTdwHost() const
{
    return m_tdwHost;
}

void TdwParam::SetTdwHost(const string& _tdwHost)
{
    m_tdwHost = _tdwHost;
    m_tdwHostHasBeenSet = true;
}

bool TdwParam::TdwHostHasBeenSet() const
{
    return m_tdwHostHasBeenSet;
}

int64_t TdwParam::GetTdwPort() const
{
    return m_tdwPort;
}

void TdwParam::SetTdwPort(const int64_t& _tdwPort)
{
    m_tdwPort = _tdwPort;
    m_tdwPortHasBeenSet = true;
}

bool TdwParam::TdwPortHasBeenSet() const
{
    return m_tdwPortHasBeenSet;
}

