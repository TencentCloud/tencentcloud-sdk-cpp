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

#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

LogOutputConf::LogOutputConf() :
    m_outputTypeHasBeenSet(false),
    m_clsLogsetNameHasBeenSet(false),
    m_clsLogTopicIdHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsLogTopicNameHasBeenSet(false)
{
}

CoreInternalOutcome LogOutputConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogOutputConf.OutputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = string(value["OutputType"].GetString());
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("ClsLogsetName") && !value["ClsLogsetName"].IsNull())
    {
        if (!value["ClsLogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogOutputConf.ClsLogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetName = string(value["ClsLogsetName"].GetString());
        m_clsLogsetNameHasBeenSet = true;
    }

    if (value.HasMember("ClsLogTopicId") && !value["ClsLogTopicId"].IsNull())
    {
        if (!value["ClsLogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogOutputConf.ClsLogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogTopicId = string(value["ClsLogTopicId"].GetString());
        m_clsLogTopicIdHasBeenSet = true;
    }

    if (value.HasMember("ClsLogsetId") && !value["ClsLogsetId"].IsNull())
    {
        if (!value["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogOutputConf.ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(value["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (value.HasMember("ClsLogTopicName") && !value["ClsLogTopicName"].IsNull())
    {
        if (!value["ClsLogTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogOutputConf.ClsLogTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogTopicName = string(value["ClsLogTopicName"].GetString());
        m_clsLogTopicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogOutputConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputType.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogTopicName.c_str(), allocator).Move(), allocator);
    }

}


string LogOutputConf::GetOutputType() const
{
    return m_outputType;
}

void LogOutputConf::SetOutputType(const string& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool LogOutputConf::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

string LogOutputConf::GetClsLogsetName() const
{
    return m_clsLogsetName;
}

void LogOutputConf::SetClsLogsetName(const string& _clsLogsetName)
{
    m_clsLogsetName = _clsLogsetName;
    m_clsLogsetNameHasBeenSet = true;
}

bool LogOutputConf::ClsLogsetNameHasBeenSet() const
{
    return m_clsLogsetNameHasBeenSet;
}

string LogOutputConf::GetClsLogTopicId() const
{
    return m_clsLogTopicId;
}

void LogOutputConf::SetClsLogTopicId(const string& _clsLogTopicId)
{
    m_clsLogTopicId = _clsLogTopicId;
    m_clsLogTopicIdHasBeenSet = true;
}

bool LogOutputConf::ClsLogTopicIdHasBeenSet() const
{
    return m_clsLogTopicIdHasBeenSet;
}

string LogOutputConf::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void LogOutputConf::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool LogOutputConf::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string LogOutputConf::GetClsLogTopicName() const
{
    return m_clsLogTopicName;
}

void LogOutputConf::SetClsLogTopicName(const string& _clsLogTopicName)
{
    m_clsLogTopicName = _clsLogTopicName;
    m_clsLogTopicNameHasBeenSet = true;
}

bool LogOutputConf::ClsLogTopicNameHasBeenSet() const
{
    return m_clsLogTopicNameHasBeenSet;
}

