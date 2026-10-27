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

#include <tencentcloud/vod/v20180717/model/DNATaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DNATaskOutput::DNATaskOutput() :
    m_refFileIdHasBeenSet(false),
    m_queryStartSecHasBeenSet(false),
    m_queryEndSecHasBeenSet(false),
    m_refStartSecHasBeenSet(false),
    m_refEndSecHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_speedRatioHasBeenSet(false)
{
}

CoreInternalOutcome DNATaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RefFileId") && !value["RefFileId"].IsNull())
    {
        if (!value["RefFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.RefFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refFileId = string(value["RefFileId"].GetString());
        m_refFileIdHasBeenSet = true;
    }

    if (value.HasMember("QueryStartSec") && !value["QueryStartSec"].IsNull())
    {
        if (!value["QueryStartSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.QueryStartSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryStartSec = value["QueryStartSec"].GetDouble();
        m_queryStartSecHasBeenSet = true;
    }

    if (value.HasMember("QueryEndSec") && !value["QueryEndSec"].IsNull())
    {
        if (!value["QueryEndSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.QueryEndSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryEndSec = value["QueryEndSec"].GetDouble();
        m_queryEndSecHasBeenSet = true;
    }

    if (value.HasMember("RefStartSec") && !value["RefStartSec"].IsNull())
    {
        if (!value["RefStartSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.RefStartSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_refStartSec = value["RefStartSec"].GetDouble();
        m_refStartSecHasBeenSet = true;
    }

    if (value.HasMember("RefEndSec") && !value["RefEndSec"].IsNull())
    {
        if (!value["RefEndSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.RefEndSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_refEndSec = value["RefEndSec"].GetDouble();
        m_refEndSecHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("SpeedRatio") && !value["SpeedRatio"].IsNull())
    {
        if (!value["SpeedRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DNATaskOutput.SpeedRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speedRatio = value["SpeedRatio"].GetDouble();
        m_speedRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNATaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_refFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStartSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStartSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryStartSec, allocator);
    }

    if (m_queryEndSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryEndSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryEndSec, allocator);
    }

    if (m_refStartSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefStartSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refStartSec, allocator);
    }

    if (m_refEndSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefEndSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refEndSec, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_speedRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speedRatio, allocator);
    }

}


string DNATaskOutput::GetRefFileId() const
{
    return m_refFileId;
}

void DNATaskOutput::SetRefFileId(const string& _refFileId)
{
    m_refFileId = _refFileId;
    m_refFileIdHasBeenSet = true;
}

bool DNATaskOutput::RefFileIdHasBeenSet() const
{
    return m_refFileIdHasBeenSet;
}

double DNATaskOutput::GetQueryStartSec() const
{
    return m_queryStartSec;
}

void DNATaskOutput::SetQueryStartSec(const double& _queryStartSec)
{
    m_queryStartSec = _queryStartSec;
    m_queryStartSecHasBeenSet = true;
}

bool DNATaskOutput::QueryStartSecHasBeenSet() const
{
    return m_queryStartSecHasBeenSet;
}

double DNATaskOutput::GetQueryEndSec() const
{
    return m_queryEndSec;
}

void DNATaskOutput::SetQueryEndSec(const double& _queryEndSec)
{
    m_queryEndSec = _queryEndSec;
    m_queryEndSecHasBeenSet = true;
}

bool DNATaskOutput::QueryEndSecHasBeenSet() const
{
    return m_queryEndSecHasBeenSet;
}

double DNATaskOutput::GetRefStartSec() const
{
    return m_refStartSec;
}

void DNATaskOutput::SetRefStartSec(const double& _refStartSec)
{
    m_refStartSec = _refStartSec;
    m_refStartSecHasBeenSet = true;
}

bool DNATaskOutput::RefStartSecHasBeenSet() const
{
    return m_refStartSecHasBeenSet;
}

double DNATaskOutput::GetRefEndSec() const
{
    return m_refEndSec;
}

void DNATaskOutput::SetRefEndSec(const double& _refEndSec)
{
    m_refEndSec = _refEndSec;
    m_refEndSecHasBeenSet = true;
}

bool DNATaskOutput::RefEndSecHasBeenSet() const
{
    return m_refEndSecHasBeenSet;
}

double DNATaskOutput::GetConfidence() const
{
    return m_confidence;
}

void DNATaskOutput::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool DNATaskOutput::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double DNATaskOutput::GetSpeedRatio() const
{
    return m_speedRatio;
}

void DNATaskOutput::SetSpeedRatio(const double& _speedRatio)
{
    m_speedRatio = _speedRatio;
    m_speedRatioHasBeenSet = true;
}

bool DNATaskOutput::SpeedRatioHasBeenSet() const
{
    return m_speedRatioHasBeenSet;
}

