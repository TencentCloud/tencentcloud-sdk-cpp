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

#include <tencentcloud/lke/v20231130/model/AttributeLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AttributeLabel::AttributeLabel() :
    m_labelBizIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_similarLabelsHasBeenSet(false)
{
}

CoreInternalOutcome AttributeLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelBizId") && !value["LabelBizId"].IsNull())
    {
        if (!value["LabelBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeLabel.LabelBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelBizId = string(value["LabelBizId"].GetString());
        m_labelBizIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeLabel.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("SimilarLabels") && !value["SimilarLabels"].IsNull())
    {
        if (!value["SimilarLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttributeLabel.SimilarLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SimilarLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_similarLabels.push_back((*itr).GetString());
        }
        m_similarLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_similarLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_similarLabels.begin(); itr != m_similarLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AttributeLabel::GetLabelBizId() const
{
    return m_labelBizId;
}

void AttributeLabel::SetLabelBizId(const string& _labelBizId)
{
    m_labelBizId = _labelBizId;
    m_labelBizIdHasBeenSet = true;
}

bool AttributeLabel::LabelBizIdHasBeenSet() const
{
    return m_labelBizIdHasBeenSet;
}

string AttributeLabel::GetLabelName() const
{
    return m_labelName;
}

void AttributeLabel::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool AttributeLabel::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

vector<string> AttributeLabel::GetSimilarLabels() const
{
    return m_similarLabels;
}

void AttributeLabel::SetSimilarLabels(const vector<string>& _similarLabels)
{
    m_similarLabels = _similarLabels;
    m_similarLabelsHasBeenSet = true;
}

bool AttributeLabel::SimilarLabelsHasBeenSet() const
{
    return m_similarLabelsHasBeenSet;
}

