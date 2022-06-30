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

#include <tencentcloud/eb/v20210416/model/ESTargetParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

ESTargetParams::ESTargetParams() :
    m_netModeHasBeenSet(false),
    m_indexPrefixHasBeenSet(false),
    m_rotationIntervalHasBeenSet(false),
    m_outputModeHasBeenSet(false),
    m_indexSuffixModeHasBeenSet(false),
    m_indexTemplateTypeHasBeenSet(false)
{
}

CoreInternalOutcome ESTargetParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetMode") && !value["NetMode"].IsNull())
    {
        if (!value["NetMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.NetMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netMode = string(value["NetMode"].GetString());
        m_netModeHasBeenSet = true;
    }

    if (value.HasMember("IndexPrefix") && !value["IndexPrefix"].IsNull())
    {
        if (!value["IndexPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.IndexPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexPrefix = string(value["IndexPrefix"].GetString());
        m_indexPrefixHasBeenSet = true;
    }

    if (value.HasMember("RotationInterval") && !value["RotationInterval"].IsNull())
    {
        if (!value["RotationInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.RotationInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationInterval = string(value["RotationInterval"].GetString());
        m_rotationIntervalHasBeenSet = true;
    }

    if (value.HasMember("OutputMode") && !value["OutputMode"].IsNull())
    {
        if (!value["OutputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.OutputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMode = string(value["OutputMode"].GetString());
        m_outputModeHasBeenSet = true;
    }

    if (value.HasMember("IndexSuffixMode") && !value["IndexSuffixMode"].IsNull())
    {
        if (!value["IndexSuffixMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.IndexSuffixMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexSuffixMode = string(value["IndexSuffixMode"].GetString());
        m_indexSuffixModeHasBeenSet = true;
    }

    if (value.HasMember("IndexTemplateType") && !value["IndexTemplateType"].IsNull())
    {
        if (!value["IndexTemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTargetParams.IndexTemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexTemplateType = string(value["IndexTemplateType"].GetString());
        m_indexTemplateTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESTargetParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_netModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netMode.c_str(), allocator).Move(), allocator);
    }

    if (m_indexPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_rotationIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotationInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_outputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_indexSuffixModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSuffixMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexSuffixMode.c_str(), allocator).Move(), allocator);
    }

    if (m_indexTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexTemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexTemplateType.c_str(), allocator).Move(), allocator);
    }

}


string ESTargetParams::GetNetMode() const
{
    return m_netMode;
}

void ESTargetParams::SetNetMode(const string& _netMode)
{
    m_netMode = _netMode;
    m_netModeHasBeenSet = true;
}

bool ESTargetParams::NetModeHasBeenSet() const
{
    return m_netModeHasBeenSet;
}

string ESTargetParams::GetIndexPrefix() const
{
    return m_indexPrefix;
}

void ESTargetParams::SetIndexPrefix(const string& _indexPrefix)
{
    m_indexPrefix = _indexPrefix;
    m_indexPrefixHasBeenSet = true;
}

bool ESTargetParams::IndexPrefixHasBeenSet() const
{
    return m_indexPrefixHasBeenSet;
}

string ESTargetParams::GetRotationInterval() const
{
    return m_rotationInterval;
}

void ESTargetParams::SetRotationInterval(const string& _rotationInterval)
{
    m_rotationInterval = _rotationInterval;
    m_rotationIntervalHasBeenSet = true;
}

bool ESTargetParams::RotationIntervalHasBeenSet() const
{
    return m_rotationIntervalHasBeenSet;
}

string ESTargetParams::GetOutputMode() const
{
    return m_outputMode;
}

void ESTargetParams::SetOutputMode(const string& _outputMode)
{
    m_outputMode = _outputMode;
    m_outputModeHasBeenSet = true;
}

bool ESTargetParams::OutputModeHasBeenSet() const
{
    return m_outputModeHasBeenSet;
}

string ESTargetParams::GetIndexSuffixMode() const
{
    return m_indexSuffixMode;
}

void ESTargetParams::SetIndexSuffixMode(const string& _indexSuffixMode)
{
    m_indexSuffixMode = _indexSuffixMode;
    m_indexSuffixModeHasBeenSet = true;
}

bool ESTargetParams::IndexSuffixModeHasBeenSet() const
{
    return m_indexSuffixModeHasBeenSet;
}

string ESTargetParams::GetIndexTemplateType() const
{
    return m_indexTemplateType;
}

void ESTargetParams::SetIndexTemplateType(const string& _indexTemplateType)
{
    m_indexTemplateType = _indexTemplateType;
    m_indexTemplateTypeHasBeenSet = true;
}

bool ESTargetParams::IndexTemplateTypeHasBeenSet() const
{
    return m_indexTemplateTypeHasBeenSet;
}

