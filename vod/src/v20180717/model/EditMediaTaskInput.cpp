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

#include <tencentcloud/vod/v20180717/model/EditMediaTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EditMediaTaskInput::EditMediaTaskInput() :
    m_inputTypeHasBeenSet(false),
    m_fileInfoSetHasBeenSet(false),
    m_streamInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTaskInput.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("FileInfoSet") && !value["FileInfoSet"].IsNull())
    {
        if (!value["FileInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EditMediaTaskInput.FileInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EditMediaFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfoSet.push_back(item);
        }
        m_fileInfoSetHasBeenSet = true;
    }

    if (value.HasMember("StreamInfoSet") && !value["StreamInfoSet"].IsNull())
    {
        if (!value["StreamInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EditMediaTaskInput.StreamInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EditMediaStreamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_streamInfoSet.push_back(item);
        }
        m_streamInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfoSet.begin(); itr != m_fileInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_streamInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamInfoSet.begin(); itr != m_streamInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EditMediaTaskInput::GetInputType() const
{
    return m_inputType;
}

void EditMediaTaskInput::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool EditMediaTaskInput::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

vector<EditMediaFileInfo> EditMediaTaskInput::GetFileInfoSet() const
{
    return m_fileInfoSet;
}

void EditMediaTaskInput::SetFileInfoSet(const vector<EditMediaFileInfo>& _fileInfoSet)
{
    m_fileInfoSet = _fileInfoSet;
    m_fileInfoSetHasBeenSet = true;
}

bool EditMediaTaskInput::FileInfoSetHasBeenSet() const
{
    return m_fileInfoSetHasBeenSet;
}

vector<EditMediaStreamInfo> EditMediaTaskInput::GetStreamInfoSet() const
{
    return m_streamInfoSet;
}

void EditMediaTaskInput::SetStreamInfoSet(const vector<EditMediaStreamInfo>& _streamInfoSet)
{
    m_streamInfoSet = _streamInfoSet;
    m_streamInfoSetHasBeenSet = true;
}

bool EditMediaTaskInput::StreamInfoSetHasBeenSet() const
{
    return m_streamInfoSetHasBeenSet;
}

