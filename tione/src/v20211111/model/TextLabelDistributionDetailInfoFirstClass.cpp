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

#include <tencentcloud/tione/v20211111/model/TextLabelDistributionDetailInfoFirstClass.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TextLabelDistributionDetailInfoFirstClass::TextLabelDistributionDetailInfoFirstClass() :
    m_labelValueHasBeenSet(false),
    m_labelCountHasBeenSet(false),
    m_labelPercentageHasBeenSet(false),
    m_childLabelListHasBeenSet(false)
{
}

CoreInternalOutcome TextLabelDistributionDetailInfoFirstClass::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFirstClass.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("LabelCount") && !value["LabelCount"].IsNull())
    {
        if (!value["LabelCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFirstClass.LabelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_labelCount = value["LabelCount"].GetUint64();
        m_labelCountHasBeenSet = true;
    }

    if (value.HasMember("LabelPercentage") && !value["LabelPercentage"].IsNull())
    {
        if (!value["LabelPercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFirstClass.LabelPercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_labelPercentage = value["LabelPercentage"].GetDouble();
        m_labelPercentageHasBeenSet = true;
    }

    if (value.HasMember("ChildLabelList") && !value["ChildLabelList"].IsNull())
    {
        if (!value["ChildLabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextLabelDistributionDetailInfoFirstClass.ChildLabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildLabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextLabelDistributionDetailInfoSecondClass item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childLabelList.push_back(item);
        }
        m_childLabelListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextLabelDistributionDetailInfoFirstClass::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_childLabelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildLabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childLabelList.begin(); itr != m_childLabelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TextLabelDistributionDetailInfoFirstClass::GetLabelValue() const
{
    return m_labelValue;
}

void TextLabelDistributionDetailInfoFirstClass::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFirstClass::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

uint64_t TextLabelDistributionDetailInfoFirstClass::GetLabelCount() const
{
    return m_labelCount;
}

void TextLabelDistributionDetailInfoFirstClass::SetLabelCount(const uint64_t& _labelCount)
{
    m_labelCount = _labelCount;
    m_labelCountHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFirstClass::LabelCountHasBeenSet() const
{
    return m_labelCountHasBeenSet;
}

double TextLabelDistributionDetailInfoFirstClass::GetLabelPercentage() const
{
    return m_labelPercentage;
}

void TextLabelDistributionDetailInfoFirstClass::SetLabelPercentage(const double& _labelPercentage)
{
    m_labelPercentage = _labelPercentage;
    m_labelPercentageHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFirstClass::LabelPercentageHasBeenSet() const
{
    return m_labelPercentageHasBeenSet;
}

vector<TextLabelDistributionDetailInfoSecondClass> TextLabelDistributionDetailInfoFirstClass::GetChildLabelList() const
{
    return m_childLabelList;
}

void TextLabelDistributionDetailInfoFirstClass::SetChildLabelList(const vector<TextLabelDistributionDetailInfoSecondClass>& _childLabelList)
{
    m_childLabelList = _childLabelList;
    m_childLabelListHasBeenSet = true;
}

bool TextLabelDistributionDetailInfoFirstClass::ChildLabelListHasBeenSet() const
{
    return m_childLabelListHasBeenSet;
}

