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

#include <tencentcloud/es/v20180416/model/DataStreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DataStreamInfo::DataStreamInfo() :
    m_dataStreamNameHasBeenSet(false),
    m_isShardCompleteHasBeenSet(false)
{
}

CoreInternalOutcome DataStreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataStreamName") && !value["DataStreamName"].IsNull())
    {
        if (!value["DataStreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataStreamInfo.DataStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataStreamName = string(value["DataStreamName"].GetString());
        m_dataStreamNameHasBeenSet = true;
    }

    if (value.HasMember("IsShardComplete") && !value["IsShardComplete"].IsNull())
    {
        if (!value["IsShardComplete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataStreamInfo.IsShardComplete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShardComplete = value["IsShardComplete"].GetInt64();
        m_isShardCompleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataStreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataStreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_isShardCompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShardComplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShardComplete, allocator);
    }

}


string DataStreamInfo::GetDataStreamName() const
{
    return m_dataStreamName;
}

void DataStreamInfo::SetDataStreamName(const string& _dataStreamName)
{
    m_dataStreamName = _dataStreamName;
    m_dataStreamNameHasBeenSet = true;
}

bool DataStreamInfo::DataStreamNameHasBeenSet() const
{
    return m_dataStreamNameHasBeenSet;
}

int64_t DataStreamInfo::GetIsShardComplete() const
{
    return m_isShardComplete;
}

void DataStreamInfo::SetIsShardComplete(const int64_t& _isShardComplete)
{
    m_isShardComplete = _isShardComplete;
    m_isShardCompleteHasBeenSet = true;
}

bool DataStreamInfo::IsShardCompleteHasBeenSet() const
{
    return m_isShardCompleteHasBeenSet;
}

