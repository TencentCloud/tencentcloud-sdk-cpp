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

#include <tencentcloud/live/v20180801/model/DiagnoseResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DiagnoseResult::DiagnoseResult() :
    m_streamBrokenResultsHasBeenSet(false),
    m_lowFrameRateResultsHasBeenSet(false),
    m_streamFormatResultsHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamBrokenResults") && !value["StreamBrokenResults"].IsNull())
    {
        if (!value["StreamBrokenResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.StreamBrokenResults` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamBrokenResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_streamBrokenResults.push_back((*itr).GetString());
        }
        m_streamBrokenResultsHasBeenSet = true;
    }

    if (value.HasMember("LowFrameRateResults") && !value["LowFrameRateResults"].IsNull())
    {
        if (!value["LowFrameRateResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.LowFrameRateResults` is not array type"));

        const rapidjson::Value &tmpValue = value["LowFrameRateResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lowFrameRateResults.push_back((*itr).GetString());
        }
        m_lowFrameRateResultsHasBeenSet = true;
    }

    if (value.HasMember("StreamFormatResults") && !value["StreamFormatResults"].IsNull())
    {
        if (!value["StreamFormatResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.StreamFormatResults` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamFormatResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_streamFormatResults.push_back((*itr).GetString());
        }
        m_streamFormatResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamBrokenResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamBrokenResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_streamBrokenResults.begin(); itr != m_streamBrokenResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lowFrameRateResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowFrameRateResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lowFrameRateResults.begin(); itr != m_lowFrameRateResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_streamFormatResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamFormatResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_streamFormatResults.begin(); itr != m_streamFormatResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> DiagnoseResult::GetStreamBrokenResults() const
{
    return m_streamBrokenResults;
}

void DiagnoseResult::SetStreamBrokenResults(const vector<string>& _streamBrokenResults)
{
    m_streamBrokenResults = _streamBrokenResults;
    m_streamBrokenResultsHasBeenSet = true;
}

bool DiagnoseResult::StreamBrokenResultsHasBeenSet() const
{
    return m_streamBrokenResultsHasBeenSet;
}

vector<string> DiagnoseResult::GetLowFrameRateResults() const
{
    return m_lowFrameRateResults;
}

void DiagnoseResult::SetLowFrameRateResults(const vector<string>& _lowFrameRateResults)
{
    m_lowFrameRateResults = _lowFrameRateResults;
    m_lowFrameRateResultsHasBeenSet = true;
}

bool DiagnoseResult::LowFrameRateResultsHasBeenSet() const
{
    return m_lowFrameRateResultsHasBeenSet;
}

vector<string> DiagnoseResult::GetStreamFormatResults() const
{
    return m_streamFormatResults;
}

void DiagnoseResult::SetStreamFormatResults(const vector<string>& _streamFormatResults)
{
    m_streamFormatResults = _streamFormatResults;
    m_streamFormatResultsHasBeenSet = true;
}

bool DiagnoseResult::StreamFormatResultsHasBeenSet() const
{
    return m_streamFormatResultsHasBeenSet;
}

