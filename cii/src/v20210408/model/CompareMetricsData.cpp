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

#include <tencentcloud/cii/v20210408/model/CompareMetricsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

CompareMetricsData::CompareMetricsData() :
    m_shortStructAccuracyHasBeenSet(false),
    m_shortStructRecallHasBeenSet(false),
    m_longStructAccuracyHasBeenSet(false),
    m_longStructRecallHasBeenSet(false),
    m_longContentAccuracyHasBeenSet(false),
    m_longContentRecallHasBeenSet(false)
{
}

CoreInternalOutcome CompareMetricsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShortStructAccuracy") && !value["ShortStructAccuracy"].IsNull())
    {
        if (!value["ShortStructAccuracy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.ShortStructAccuracy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortStructAccuracy = string(value["ShortStructAccuracy"].GetString());
        m_shortStructAccuracyHasBeenSet = true;
    }

    if (value.HasMember("ShortStructRecall") && !value["ShortStructRecall"].IsNull())
    {
        if (!value["ShortStructRecall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.ShortStructRecall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortStructRecall = string(value["ShortStructRecall"].GetString());
        m_shortStructRecallHasBeenSet = true;
    }

    if (value.HasMember("LongStructAccuracy") && !value["LongStructAccuracy"].IsNull())
    {
        if (!value["LongStructAccuracy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.LongStructAccuracy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longStructAccuracy = string(value["LongStructAccuracy"].GetString());
        m_longStructAccuracyHasBeenSet = true;
    }

    if (value.HasMember("LongStructRecall") && !value["LongStructRecall"].IsNull())
    {
        if (!value["LongStructRecall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.LongStructRecall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longStructRecall = string(value["LongStructRecall"].GetString());
        m_longStructRecallHasBeenSet = true;
    }

    if (value.HasMember("LongContentAccuracy") && !value["LongContentAccuracy"].IsNull())
    {
        if (!value["LongContentAccuracy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.LongContentAccuracy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longContentAccuracy = string(value["LongContentAccuracy"].GetString());
        m_longContentAccuracyHasBeenSet = true;
    }

    if (value.HasMember("LongContentRecall") && !value["LongContentRecall"].IsNull())
    {
        if (!value["LongContentRecall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareMetricsData.LongContentRecall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longContentRecall = string(value["LongContentRecall"].GetString());
        m_longContentRecallHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareMetricsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shortStructAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortStructAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortStructAccuracy.c_str(), allocator).Move(), allocator);
    }

    if (m_shortStructRecallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortStructRecall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortStructRecall.c_str(), allocator).Move(), allocator);
    }

    if (m_longStructAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongStructAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longStructAccuracy.c_str(), allocator).Move(), allocator);
    }

    if (m_longStructRecallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongStructRecall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longStructRecall.c_str(), allocator).Move(), allocator);
    }

    if (m_longContentAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongContentAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longContentAccuracy.c_str(), allocator).Move(), allocator);
    }

    if (m_longContentRecallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongContentRecall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longContentRecall.c_str(), allocator).Move(), allocator);
    }

}


string CompareMetricsData::GetShortStructAccuracy() const
{
    return m_shortStructAccuracy;
}

void CompareMetricsData::SetShortStructAccuracy(const string& _shortStructAccuracy)
{
    m_shortStructAccuracy = _shortStructAccuracy;
    m_shortStructAccuracyHasBeenSet = true;
}

bool CompareMetricsData::ShortStructAccuracyHasBeenSet() const
{
    return m_shortStructAccuracyHasBeenSet;
}

string CompareMetricsData::GetShortStructRecall() const
{
    return m_shortStructRecall;
}

void CompareMetricsData::SetShortStructRecall(const string& _shortStructRecall)
{
    m_shortStructRecall = _shortStructRecall;
    m_shortStructRecallHasBeenSet = true;
}

bool CompareMetricsData::ShortStructRecallHasBeenSet() const
{
    return m_shortStructRecallHasBeenSet;
}

string CompareMetricsData::GetLongStructAccuracy() const
{
    return m_longStructAccuracy;
}

void CompareMetricsData::SetLongStructAccuracy(const string& _longStructAccuracy)
{
    m_longStructAccuracy = _longStructAccuracy;
    m_longStructAccuracyHasBeenSet = true;
}

bool CompareMetricsData::LongStructAccuracyHasBeenSet() const
{
    return m_longStructAccuracyHasBeenSet;
}

string CompareMetricsData::GetLongStructRecall() const
{
    return m_longStructRecall;
}

void CompareMetricsData::SetLongStructRecall(const string& _longStructRecall)
{
    m_longStructRecall = _longStructRecall;
    m_longStructRecallHasBeenSet = true;
}

bool CompareMetricsData::LongStructRecallHasBeenSet() const
{
    return m_longStructRecallHasBeenSet;
}

string CompareMetricsData::GetLongContentAccuracy() const
{
    return m_longContentAccuracy;
}

void CompareMetricsData::SetLongContentAccuracy(const string& _longContentAccuracy)
{
    m_longContentAccuracy = _longContentAccuracy;
    m_longContentAccuracyHasBeenSet = true;
}

bool CompareMetricsData::LongContentAccuracyHasBeenSet() const
{
    return m_longContentAccuracyHasBeenSet;
}

string CompareMetricsData::GetLongContentRecall() const
{
    return m_longContentRecall;
}

void CompareMetricsData::SetLongContentRecall(const string& _longContentRecall)
{
    m_longContentRecall = _longContentRecall;
    m_longContentRecallHasBeenSet = true;
}

bool CompareMetricsData::LongContentRecallHasBeenSet() const
{
    return m_longContentRecallHasBeenSet;
}

