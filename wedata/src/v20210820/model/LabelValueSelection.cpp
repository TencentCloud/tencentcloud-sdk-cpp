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

#include <tencentcloud/wedata/v20210820/model/LabelValueSelection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LabelValueSelection::LabelValueSelection() :
    m_labelIdHasBeenSet(false),
    m_labelValueHasBeenSet(false)
{
}

CoreInternalOutcome LabelValueSelection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LabelValueSelection.LabelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = value["LabelId"].GetInt64();
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelValueSelection.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelValueSelection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelId, allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t LabelValueSelection::GetLabelId() const
{
    return m_labelId;
}

void LabelValueSelection::SetLabelId(const int64_t& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool LabelValueSelection::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string LabelValueSelection::GetLabelValue() const
{
    return m_labelValue;
}

void LabelValueSelection::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool LabelValueSelection::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

