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

#include <tencentcloud/lke/v20231130/model/Label.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Label::Label() :
    m_labelBizIdHasBeenSet(false),
    m_labelNameHasBeenSet(false)
{
}

CoreInternalOutcome Label::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelBizId") && !value["LabelBizId"].IsNull())
    {
        if (!value["LabelBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.LabelBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelBizId = string(value["LabelBizId"].GetString());
        m_labelBizIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Label::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string Label::GetLabelBizId() const
{
    return m_labelBizId;
}

void Label::SetLabelBizId(const string& _labelBizId)
{
    m_labelBizId = _labelBizId;
    m_labelBizIdHasBeenSet = true;
}

bool Label::LabelBizIdHasBeenSet() const
{
    return m_labelBizIdHasBeenSet;
}

string Label::GetLabelName() const
{
    return m_labelName;
}

void Label::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool Label::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

