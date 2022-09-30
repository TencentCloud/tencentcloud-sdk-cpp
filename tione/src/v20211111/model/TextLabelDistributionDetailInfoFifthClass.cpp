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

#include <tencentcloud/tione/v20211111/model/TextLabelDistributionDetailInfoFifthClass.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TextLabelDistributionDetailInfoFifthClass::TextLabelDistributionDetailInfoFifthClass() :
    m_labelValueHasBeenSet(false),
    m_labelCountHasBeenSet(false),
    m_labelPercentageHasBeenSet(false)
{
}

CoreInternalOutcome TextLabelDistributionDetailInfoFifthClass::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFifthClass.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("LabelCount") && !value["LabelCount"].IsNull())
    {
        if (!value["LabelCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFifthClass.LabelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_labelCount = value["LabelCount"].GetUint64();
        m_labelCountHasBeenSet = true;
    }

    if (value.HasMember("LabelPercentage") && !value["LabelPercentage"].IsNull())
    {
        if (!value["LabelPercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFifthClass.LabelPercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_labelPercentage = value["LabelPercentage"].GetDouble();
        m_labelPercentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextLabelDistributionDetailInfoFifthClass::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_labelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelCount, allocator);
    }

    if (m_labelPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelPercentage, allocator);
    }

}


string TextLabelDistributionDetailInfoFifthClass::GetLabelValue() const
{
    return m_labelValue;
}

void TextLabelDistributionDetailInfoFifthClass::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFifthClass::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

uint64_t TextLabelDistributionDetailInfoFifthClass::GetLabelCount() const
{
    return m_labelCount;
}

void TextLabelDistributionDetailInfoFifthClass::SetLabelCount(const uint64_t& _labelCount)
{
    m_labelCount = _labelCount;
    m_labelCountHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFifthClass::LabelCountHasBeenSet() const
{
    return m_labelCountHasBeenSet;
}

double TextLabelDistributionDetailInfoFifthClass::GetLabelPercentage() const
{
    return m_labelPercentage;
}

void TextLabelDistributionDetailInfoFifthClass::SetLabelPercentage(const double& _labelPercentage)
{
    m_labelPercentage = _labelPercentage;
    m_labelPercentageHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFifthClass::LabelPercentageHasBeenSet() const
{
    return m_labelPercentageHasBeenSet;
}

