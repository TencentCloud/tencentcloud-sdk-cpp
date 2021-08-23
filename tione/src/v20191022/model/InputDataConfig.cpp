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

#include <tencentcloud/tione/v20191022/model/InputDataConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

InputDataConfig::InputDataConfig() :
    m_channelNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_inputModeHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

CoreInternalOutcome InputDataConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDataConfig.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputDataConfig.DataSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataSource.Deserialize(value["DataSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("InputMode") && !value["InputMode"].IsNull())
    {
        if (!value["InputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDataConfig.InputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputMode = string(value["InputMode"].GetString());
        m_inputModeHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDataConfig.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDataConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

}


string InputDataConfig::GetChannelName() const
{
    return m_channelName;
}

void InputDataConfig::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool InputDataConfig::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

DataSource InputDataConfig::GetDataSource() const
{
    return m_dataSource;
}

void InputDataConfig::SetDataSource(const DataSource& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool InputDataConfig::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string InputDataConfig::GetInputMode() const
{
    return m_inputMode;
}

void InputDataConfig::SetInputMode(const string& _inputMode)
{
    m_inputMode = _inputMode;
    m_inputModeHasBeenSet = true;
}

bool InputDataConfig::InputModeHasBeenSet() const
{
    return m_inputModeHasBeenSet;
}

string InputDataConfig::GetContentType() const
{
    return m_contentType;
}

void InputDataConfig::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool InputDataConfig::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

