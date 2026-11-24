/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/WorkflowLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowLabel::WorkflowLabel() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_labelValueIdHasBeenSet(false),
    m_labelValueHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowLabel.LabelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = value["LabelId"].GetInt64();
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowLabel.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowLabel.LabelValueId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = value["LabelValueId"].GetInt64();
        m_labelValueIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowLabel.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelId, allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelValueId, allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkflowLabel::GetLabelId() const
{
    return m_labelId;
}

void WorkflowLabel::SetLabelId(const int64_t& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool WorkflowLabel::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string WorkflowLabel::GetLabelName() const
{
    return m_labelName;
}

void WorkflowLabel::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool WorkflowLabel::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

int64_t WorkflowLabel::GetLabelValueId() const
{
    return m_labelValueId;
}

void WorkflowLabel::SetLabelValueId(const int64_t& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool WorkflowLabel::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

string WorkflowLabel::GetLabelValue() const
{
    return m_labelValue;
}

void WorkflowLabel::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool WorkflowLabel::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

