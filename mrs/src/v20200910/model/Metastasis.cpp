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

#include <tencentcloud/mrs/v20200910/model/Metastasis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Metastasis::Metastasis() :
    m_indexHasBeenSet(false),
    m_textHasBeenSet(false),
    m_partHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_transferNumHasBeenSet(false)
{
}

CoreInternalOutcome Metastasis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Metastasis.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `Metastasis.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Error("response `Metastasis.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `Metastasis.TotalNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = string(value["TotalNum"].GetString());
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("TransferNum") && !value["TransferNum"].IsNull())
    {
        if (!value["TransferNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `Metastasis.TransferNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferNum = string(value["TransferNum"].GetString());
        m_transferNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Metastasis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalNum.c_str(), allocator).Move(), allocator);
    }

    if (m_transferNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferNum.c_str(), allocator).Move(), allocator);
    }

}


int64_t Metastasis::GetIndex() const
{
    return m_index;
}

void Metastasis::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Metastasis::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string Metastasis::GetText() const
{
    return m_text;
}

void Metastasis::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Metastasis::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string Metastasis::GetPart() const
{
    return m_part;
}

void Metastasis::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool Metastasis::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string Metastasis::GetTotalNum() const
{
    return m_totalNum;
}

void Metastasis::SetTotalNum(const string& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool Metastasis::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

string Metastasis::GetTransferNum() const
{
    return m_transferNum;
}

void Metastasis::SetTransferNum(const string& _transferNum)
{
    m_transferNum = _transferNum;
    m_transferNumHasBeenSet = true;
}

bool Metastasis::TransferNumHasBeenSet() const
{
    return m_transferNumHasBeenSet;
}

