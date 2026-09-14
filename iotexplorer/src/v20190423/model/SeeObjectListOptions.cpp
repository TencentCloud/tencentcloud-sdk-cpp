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

#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectListOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeObjectListOptions::SeeObjectListOptions() :
    m_delimiterHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxKeysHasBeenSet(false)
{
}

CoreInternalOutcome SeeObjectListOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListOptions.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("Marker") && !value["Marker"].IsNull())
    {
        if (!value["Marker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListOptions.Marker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marker = string(value["Marker"].GetString());
        m_markerHasBeenSet = true;
    }

    if (value.HasMember("MaxKeys") && !value["MaxKeys"].IsNull())
    {
        if (!value["MaxKeys"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListOptions.MaxKeys` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxKeys = value["MaxKeys"].GetInt64();
        m_maxKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeObjectListOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_markerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marker.c_str(), allocator).Move(), allocator);
    }

    if (m_maxKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxKeys, allocator);
    }

}


string SeeObjectListOptions::GetDelimiter() const
{
    return m_delimiter;
}

void SeeObjectListOptions::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool SeeObjectListOptions::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string SeeObjectListOptions::GetMarker() const
{
    return m_marker;
}

void SeeObjectListOptions::SetMarker(const string& _marker)
{
    m_marker = _marker;
    m_markerHasBeenSet = true;
}

bool SeeObjectListOptions::MarkerHasBeenSet() const
{
    return m_markerHasBeenSet;
}

int64_t SeeObjectListOptions::GetMaxKeys() const
{
    return m_maxKeys;
}

void SeeObjectListOptions::SetMaxKeys(const int64_t& _maxKeys)
{
    m_maxKeys = _maxKeys;
    m_maxKeysHasBeenSet = true;
}

bool SeeObjectListOptions::MaxKeysHasBeenSet() const
{
    return m_maxKeysHasBeenSet;
}

