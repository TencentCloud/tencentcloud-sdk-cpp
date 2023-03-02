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

#include <tencentcloud/mrs/v20200910/model/MolecularValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MolecularValue::MolecularValue() :
    m_exonHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_positiveHasBeenSet(false),
    m_srcHasBeenSet(false)
{
}

CoreInternalOutcome MolecularValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Exon") && !value["Exon"].IsNull())
    {
        if (!value["Exon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MolecularValue.Exon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exon = string(value["Exon"].GetString());
        m_exonHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MolecularValue.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MolecularValue.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MolecularValue.Positive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positive = string(value["Positive"].GetString());
        m_positiveHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MolecularValue.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MolecularValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exon.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positive.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

}


string MolecularValue::GetExon() const
{
    return m_exon;
}

void MolecularValue::SetExon(const string& _exon)
{
    m_exon = _exon;
    m_exonHasBeenSet = true;
}

bool MolecularValue::ExonHasBeenSet() const
{
    return m_exonHasBeenSet;
}

string MolecularValue::GetPosition() const
{
    return m_position;
}

void MolecularValue::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool MolecularValue::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string MolecularValue::GetType() const
{
    return m_type;
}

void MolecularValue::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MolecularValue::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MolecularValue::GetPositive() const
{
    return m_positive;
}

void MolecularValue::SetPositive(const string& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool MolecularValue::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

string MolecularValue::GetSrc() const
{
    return m_src;
}

void MolecularValue::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool MolecularValue::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

