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

#include <tencentcloud/dlc/v20210125/model/CreateImportTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateImportTaskRequest::CreateImportTaskRequest() :
    m_inputTypeHasBeenSet(false),
    m_inputConfHasBeenSet(false),
    m_outputConfHasBeenSet(false),
    m_outputTypeHasBeenSet(false)
{
}

string CreateImportTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputConf.begin(); itr != m_inputConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputConf.begin(); itr != m_outputConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImportTaskRequest::GetInputType() const
{
    return m_inputType;
}

void CreateImportTaskRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateImportTaskRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

vector<KVPair> CreateImportTaskRequest::GetInputConf() const
{
    return m_inputConf;
}

void CreateImportTaskRequest::SetInputConf(const vector<KVPair>& _inputConf)
{
    m_inputConf = _inputConf;
    m_inputConfHasBeenSet = true;
}

bool CreateImportTaskRequest::InputConfHasBeenSet() const
{
    return m_inputConfHasBeenSet;
}

vector<KVPair> CreateImportTaskRequest::GetOutputConf() const
{
    return m_outputConf;
}

void CreateImportTaskRequest::SetOutputConf(const vector<KVPair>& _outputConf)
{
    m_outputConf = _outputConf;
    m_outputConfHasBeenSet = true;
}

bool CreateImportTaskRequest::OutputConfHasBeenSet() const
{
    return m_outputConfHasBeenSet;
}

string CreateImportTaskRequest::GetOutputType() const
{
    return m_outputType;
}

void CreateImportTaskRequest::SetOutputType(const string& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool CreateImportTaskRequest::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}


