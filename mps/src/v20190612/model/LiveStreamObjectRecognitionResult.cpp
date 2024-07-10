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

#include <tencentcloud/mps/v20190612/model/LiveStreamObjectRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamObjectRecognitionResult::LiveStreamObjectRecognitionResult() :
    m_nameHasBeenSet(false),
    m_startPtsOffsetHasBeenSet(false),
    m_endPtsOffsetHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamObjectRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartPtsOffset") && !value["StartPtsOffset"].IsNull())
    {
        if (!value["StartPtsOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.StartPtsOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsOffset = value["StartPtsOffset"].GetDouble();
        m_startPtsOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndPtsOffset") && !value["EndPtsOffset"].IsNull())
    {
        if (!value["EndPtsOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.EndPtsOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsOffset = value["EndPtsOffset"].GetDouble();
        m_endPtsOffsetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.AreaCoordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamObjectRecognitionResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamObjectRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startPtsOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPtsOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPtsOffset, allocator);
    }

    if (m_endPtsOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPtsOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPtsOffset, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_areaCoordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCoordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordSet.begin(); itr != m_areaCoordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string LiveStreamObjectRecognitionResult::GetName() const
{
    return m_name;
}

void LiveStreamObjectRecognitionResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double LiveStreamObjectRecognitionResult::GetStartPtsOffset() const
{
    return m_startPtsOffset;
}

void LiveStreamObjectRecognitionResult::SetStartPtsOffset(const double& _startPtsOffset)
{
    m_startPtsOffset = _startPtsOffset;
    m_startPtsOffsetHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::StartPtsOffsetHasBeenSet() const
{
    return m_startPtsOffsetHasBeenSet;
}

double LiveStreamObjectRecognitionResult::GetEndPtsOffset() const
{
    return m_endPtsOffset;
}

void LiveStreamObjectRecognitionResult::SetEndPtsOffset(const double& _endPtsOffset)
{
    m_endPtsOffset = _endPtsOffset;
    m_endPtsOffsetHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::EndPtsOffsetHasBeenSet() const
{
    return m_endPtsOffsetHasBeenSet;
}

double LiveStreamObjectRecognitionResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamObjectRecognitionResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<int64_t> LiveStreamObjectRecognitionResult::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void LiveStreamObjectRecognitionResult::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

string LiveStreamObjectRecognitionResult::GetUrl() const
{
    return m_url;
}

void LiveStreamObjectRecognitionResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LiveStreamObjectRecognitionResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

