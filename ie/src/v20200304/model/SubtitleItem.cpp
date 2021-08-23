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

#include <tencentcloud/ie/v20200304/model/SubtitleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SubtitleItem::SubtitleItem() :
    m_idHasBeenSet(false),
    m_zhHasBeenSet(false),
    m_enHasBeenSet(false),
    m_startPtsHasBeenSet(false),
    m_endPtsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_endFlagHasBeenSet(false),
    m_puncEndTsHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Zh") && !value["Zh"].IsNull())
    {
        if (!value["Zh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.Zh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zh = string(value["Zh"].GetString());
        m_zhHasBeenSet = true;
    }

    if (value.HasMember("En") && !value["En"].IsNull())
    {
        if (!value["En"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.En` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_en = string(value["En"].GetString());
        m_enHasBeenSet = true;
    }

    if (value.HasMember("StartPts") && !value["StartPts"].IsNull())
    {
        if (!value["StartPts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.StartPts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startPts = value["StartPts"].GetUint64();
        m_startPtsHasBeenSet = true;
    }

    if (value.HasMember("EndPts") && !value["EndPts"].IsNull())
    {
        if (!value["EndPts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.EndPts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPts = value["EndPts"].GetUint64();
        m_endPtsHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("EndFlag") && !value["EndFlag"].IsNull())
    {
        if (!value["EndFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.EndFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = value["EndFlag"].GetBool();
        m_endFlagHasBeenSet = true;
    }

    if (value.HasMember("PuncEndTs") && !value["PuncEndTs"].IsNull())
    {
        if (!value["PuncEndTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleItem.PuncEndTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_puncEndTs = string(value["PuncEndTs"].GetString());
        m_puncEndTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_zhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zh.c_str(), allocator).Move(), allocator);
    }

    if (m_enHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "En";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_en.c_str(), allocator).Move(), allocator);
    }

    if (m_startPtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPts, allocator);
    }

    if (m_endPtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPts, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_endFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endFlag, allocator);
    }

    if (m_puncEndTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PuncEndTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_puncEndTs.c_str(), allocator).Move(), allocator);
    }

}


string SubtitleItem::GetId() const
{
    return m_id;
}

void SubtitleItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SubtitleItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SubtitleItem::GetZh() const
{
    return m_zh;
}

void SubtitleItem::SetZh(const string& _zh)
{
    m_zh = _zh;
    m_zhHasBeenSet = true;
}

bool SubtitleItem::ZhHasBeenSet() const
{
    return m_zhHasBeenSet;
}

string SubtitleItem::GetEn() const
{
    return m_en;
}

void SubtitleItem::SetEn(const string& _en)
{
    m_en = _en;
    m_enHasBeenSet = true;
}

bool SubtitleItem::EnHasBeenSet() const
{
    return m_enHasBeenSet;
}

uint64_t SubtitleItem::GetStartPts() const
{
    return m_startPts;
}

void SubtitleItem::SetStartPts(const uint64_t& _startPts)
{
    m_startPts = _startPts;
    m_startPtsHasBeenSet = true;
}

bool SubtitleItem::StartPtsHasBeenSet() const
{
    return m_startPtsHasBeenSet;
}

uint64_t SubtitleItem::GetEndPts() const
{
    return m_endPts;
}

void SubtitleItem::SetEndPts(const uint64_t& _endPts)
{
    m_endPts = _endPts;
    m_endPtsHasBeenSet = true;
}

bool SubtitleItem::EndPtsHasBeenSet() const
{
    return m_endPtsHasBeenSet;
}

string SubtitleItem::GetPeriod() const
{
    return m_period;
}

void SubtitleItem::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool SubtitleItem::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t SubtitleItem::GetConfidence() const
{
    return m_confidence;
}

void SubtitleItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SubtitleItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

bool SubtitleItem::GetEndFlag() const
{
    return m_endFlag;
}

void SubtitleItem::SetEndFlag(const bool& _endFlag)
{
    m_endFlag = _endFlag;
    m_endFlagHasBeenSet = true;
}

bool SubtitleItem::EndFlagHasBeenSet() const
{
    return m_endFlagHasBeenSet;
}

string SubtitleItem::GetPuncEndTs() const
{
    return m_puncEndTs;
}

void SubtitleItem::SetPuncEndTs(const string& _puncEndTs)
{
    m_puncEndTs = _puncEndTs;
    m_puncEndTsHasBeenSet = true;
}

bool SubtitleItem::PuncEndTsHasBeenSet() const
{
    return m_puncEndTsHasBeenSet;
}

