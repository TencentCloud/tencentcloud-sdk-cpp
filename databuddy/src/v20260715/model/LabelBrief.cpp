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

#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

LabelBrief::LabelBrief() :
    m_labelKeyHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_labelKeyIdHasBeenSet(false),
    m_labelValueIdHasBeenSet(false)
{
}

CoreInternalOutcome LabelBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelKey") && !value["LabelKey"].IsNull())
    {
        if (!value["LabelKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelBrief.LabelKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelKey = string(value["LabelKey"].GetString());
        m_labelKeyHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelBrief.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("LabelKeyId") && !value["LabelKeyId"].IsNull())
    {
        if (!value["LabelKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelBrief.LabelKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelKeyId = string(value["LabelKeyId"].GetString());
        m_labelKeyIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelBrief.LabelValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = string(value["LabelValueId"].GetString());
        m_labelValueIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelKey.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_labelKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValueId.c_str(), allocator).Move(), allocator);
    }

}


string LabelBrief::GetLabelKey() const
{
    return m_labelKey;
}

void LabelBrief::SetLabelKey(const string& _labelKey)
{
    m_labelKey = _labelKey;
    m_labelKeyHasBeenSet = true;
}

bool LabelBrief::LabelKeyHasBeenSet() const
{
    return m_labelKeyHasBeenSet;
}

string LabelBrief::GetLabelValue() const
{
    return m_labelValue;
}

void LabelBrief::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool LabelBrief::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

string LabelBrief::GetLabelKeyId() const
{
    return m_labelKeyId;
}

void LabelBrief::SetLabelKeyId(const string& _labelKeyId)
{
    m_labelKeyId = _labelKeyId;
    m_labelKeyIdHasBeenSet = true;
}

bool LabelBrief::LabelKeyIdHasBeenSet() const
{
    return m_labelKeyIdHasBeenSet;
}

string LabelBrief::GetLabelValueId() const
{
    return m_labelValueId;
}

void LabelBrief::SetLabelValueId(const string& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool LabelBrief::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

