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

#include <tencentcloud/tione/v20191022/model/BillingLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

BillingLabel::BillingLabel() :
    m_labelHasBeenSet(false),
    m_volumeSizeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BillingLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingLabel.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("VolumeSize") && !value["VolumeSize"].IsNull())
    {
        if (!value["VolumeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillingLabel.VolumeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSize = value["VolumeSize"].GetInt64();
        m_volumeSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingLabel.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillingLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string BillingLabel::GetLabel() const
{
    return m_label;
}

void BillingLabel::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BillingLabel::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t BillingLabel::GetVolumeSize() const
{
    return m_volumeSize;
}

void BillingLabel::SetVolumeSize(const int64_t& _volumeSize)
{
    m_volumeSize = _volumeSize;
    m_volumeSizeHasBeenSet = true;
}

bool BillingLabel::VolumeSizeHasBeenSet() const
{
    return m_volumeSizeHasBeenSet;
}

string BillingLabel::GetStatus() const
{
    return m_status;
}

void BillingLabel::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BillingLabel::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

