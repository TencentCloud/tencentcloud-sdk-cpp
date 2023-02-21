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

#include <tencentcloud/scf/v20180416/model/TriggerCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

TriggerCount::TriggerCount() :
    m_cosHasBeenSet(false),
    m_timerHasBeenSet(false),
    m_cmqHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_apigwHasBeenSet(false),
    m_clsHasBeenSet(false),
    m_clbHasBeenSet(false),
    m_mpsHasBeenSet(false),
    m_cmHasBeenSet(false),
    m_vodHasBeenSet(false),
    m_ebHasBeenSet(false)
{
}

CoreInternalOutcome TriggerCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cos") && !value["Cos"].IsNull())
    {
        if (!value["Cos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Cos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cos = value["Cos"].GetInt64();
        m_cosHasBeenSet = true;
    }

    if (value.HasMember("Timer") && !value["Timer"].IsNull())
    {
        if (!value["Timer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Timer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timer = value["Timer"].GetInt64();
        m_timerHasBeenSet = true;
    }

    if (value.HasMember("Cmq") && !value["Cmq"].IsNull())
    {
        if (!value["Cmq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Cmq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cmq = value["Cmq"].GetInt64();
        m_cmqHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Ckafka") && !value["Ckafka"].IsNull())
    {
        if (!value["Ckafka"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Ckafka` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ckafka = value["Ckafka"].GetInt64();
        m_ckafkaHasBeenSet = true;
    }

    if (value.HasMember("Apigw") && !value["Apigw"].IsNull())
    {
        if (!value["Apigw"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Apigw` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apigw = value["Apigw"].GetInt64();
        m_apigwHasBeenSet = true;
    }

    if (value.HasMember("Cls") && !value["Cls"].IsNull())
    {
        if (!value["Cls"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Cls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cls = value["Cls"].GetInt64();
        m_clsHasBeenSet = true;
    }

    if (value.HasMember("Clb") && !value["Clb"].IsNull())
    {
        if (!value["Clb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Clb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clb = value["Clb"].GetInt64();
        m_clbHasBeenSet = true;
    }

    if (value.HasMember("Mps") && !value["Mps"].IsNull())
    {
        if (!value["Mps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Mps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mps = value["Mps"].GetInt64();
        m_mpsHasBeenSet = true;
    }

    if (value.HasMember("Cm") && !value["Cm"].IsNull())
    {
        if (!value["Cm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Cm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cm = value["Cm"].GetInt64();
        m_cmHasBeenSet = true;
    }

    if (value.HasMember("Vod") && !value["Vod"].IsNull())
    {
        if (!value["Vod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Vod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vod = value["Vod"].GetInt64();
        m_vodHasBeenSet = true;
    }

    if (value.HasMember("Eb") && !value["Eb"].IsNull())
    {
        if (!value["Eb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount.Eb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eb = value["Eb"].GetInt64();
        m_ebHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cos, allocator);
    }

    if (m_timerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timer, allocator);
    }

    if (m_cmqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmq, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ckafka, allocator);
    }

    if (m_apigwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Apigw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apigw, allocator);
    }

    if (m_clsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cls, allocator);
    }

    if (m_clbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clb, allocator);
    }

    if (m_mpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mps, allocator);
    }

    if (m_cmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cm, allocator);
    }

    if (m_vodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vod, allocator);
    }

    if (m_ebHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eb, allocator);
    }

}


int64_t TriggerCount::GetCos() const
{
    return m_cos;
}

void TriggerCount::SetCos(const int64_t& _cos)
{
    m_cos = _cos;
    m_cosHasBeenSet = true;
}

bool TriggerCount::CosHasBeenSet() const
{
    return m_cosHasBeenSet;
}

int64_t TriggerCount::GetTimer() const
{
    return m_timer;
}

void TriggerCount::SetTimer(const int64_t& _timer)
{
    m_timer = _timer;
    m_timerHasBeenSet = true;
}

bool TriggerCount::TimerHasBeenSet() const
{
    return m_timerHasBeenSet;
}

int64_t TriggerCount::GetCmq() const
{
    return m_cmq;
}

void TriggerCount::SetCmq(const int64_t& _cmq)
{
    m_cmq = _cmq;
    m_cmqHasBeenSet = true;
}

bool TriggerCount::CmqHasBeenSet() const
{
    return m_cmqHasBeenSet;
}

int64_t TriggerCount::GetTotal() const
{
    return m_total;
}

void TriggerCount::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TriggerCount::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t TriggerCount::GetCkafka() const
{
    return m_ckafka;
}

void TriggerCount::SetCkafka(const int64_t& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool TriggerCount::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

int64_t TriggerCount::GetApigw() const
{
    return m_apigw;
}

void TriggerCount::SetApigw(const int64_t& _apigw)
{
    m_apigw = _apigw;
    m_apigwHasBeenSet = true;
}

bool TriggerCount::ApigwHasBeenSet() const
{
    return m_apigwHasBeenSet;
}

int64_t TriggerCount::GetCls() const
{
    return m_cls;
}

void TriggerCount::SetCls(const int64_t& _cls)
{
    m_cls = _cls;
    m_clsHasBeenSet = true;
}

bool TriggerCount::ClsHasBeenSet() const
{
    return m_clsHasBeenSet;
}

int64_t TriggerCount::GetClb() const
{
    return m_clb;
}

void TriggerCount::SetClb(const int64_t& _clb)
{
    m_clb = _clb;
    m_clbHasBeenSet = true;
}

bool TriggerCount::ClbHasBeenSet() const
{
    return m_clbHasBeenSet;
}

int64_t TriggerCount::GetMps() const
{
    return m_mps;
}

void TriggerCount::SetMps(const int64_t& _mps)
{
    m_mps = _mps;
    m_mpsHasBeenSet = true;
}

bool TriggerCount::MpsHasBeenSet() const
{
    return m_mpsHasBeenSet;
}

int64_t TriggerCount::GetCm() const
{
    return m_cm;
}

void TriggerCount::SetCm(const int64_t& _cm)
{
    m_cm = _cm;
    m_cmHasBeenSet = true;
}

bool TriggerCount::CmHasBeenSet() const
{
    return m_cmHasBeenSet;
}

int64_t TriggerCount::GetVod() const
{
    return m_vod;
}

void TriggerCount::SetVod(const int64_t& _vod)
{
    m_vod = _vod;
    m_vodHasBeenSet = true;
}

bool TriggerCount::VodHasBeenSet() const
{
    return m_vodHasBeenSet;
}

int64_t TriggerCount::GetEb() const
{
    return m_eb;
}

void TriggerCount::SetEb(const int64_t& _eb)
{
    m_eb = _eb;
    m_ebHasBeenSet = true;
}

bool TriggerCount::EbHasBeenSet() const
{
    return m_ebHasBeenSet;
}

