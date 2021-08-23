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

#include <tencentcloud/tci/v20190318/model/Word.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

Word::Word() :
    m_confidenceHasBeenSet(false),
    m_mbtmHasBeenSet(false),
    m_metmHasBeenSet(false),
    m_textHasBeenSet(false),
    m_wsizeHasBeenSet(false)
{
}

CoreInternalOutcome Word::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Word.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Mbtm") && !value["Mbtm"].IsNull())
    {
        if (!value["Mbtm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Word.Mbtm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mbtm = value["Mbtm"].GetInt64();
        m_mbtmHasBeenSet = true;
    }

    if (value.HasMember("Metm") && !value["Metm"].IsNull())
    {
        if (!value["Metm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Word.Metm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metm = value["Metm"].GetInt64();
        m_metmHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Word.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Wsize") && !value["Wsize"].IsNull())
    {
        if (!value["Wsize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Word.Wsize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wsize = value["Wsize"].GetInt64();
        m_wsizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Word::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_mbtmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mbtm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbtm, allocator);
    }

    if (m_metmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metm, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_wsizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wsize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wsize, allocator);
    }

}


double Word::GetConfidence() const
{
    return m_confidence;
}

void Word::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool Word::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t Word::GetMbtm() const
{
    return m_mbtm;
}

void Word::SetMbtm(const int64_t& _mbtm)
{
    m_mbtm = _mbtm;
    m_mbtmHasBeenSet = true;
}

bool Word::MbtmHasBeenSet() const
{
    return m_mbtmHasBeenSet;
}

int64_t Word::GetMetm() const
{
    return m_metm;
}

void Word::SetMetm(const int64_t& _metm)
{
    m_metm = _metm;
    m_metmHasBeenSet = true;
}

bool Word::MetmHasBeenSet() const
{
    return m_metmHasBeenSet;
}

string Word::GetText() const
{
    return m_text;
}

void Word::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Word::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t Word::GetWsize() const
{
    return m_wsize;
}

void Word::SetWsize(const int64_t& _wsize)
{
    m_wsize = _wsize;
    m_wsizeHasBeenSet = true;
}

bool Word::WsizeHasBeenSet() const
{
    return m_wsizeHasBeenSet;
}

