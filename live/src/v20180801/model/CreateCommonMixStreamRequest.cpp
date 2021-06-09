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

#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateCommonMixStreamRequest::CreateCommonMixStreamRequest() :
    m_mixStreamSessionIdHasBeenSet(false),
    m_inputStreamListHasBeenSet(false),
    m_outputParamsHasBeenSet(false),
    m_mixStreamTemplateIdHasBeenSet(false),
    m_controlParamsHasBeenSet(false)
{
}

string CreateCommonMixStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mixStreamSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStreamSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mixStreamSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputStreamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStreamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputStreamList.begin(); itr != m_inputStreamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mixStreamTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStreamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mixStreamTemplateId, allocator);
    }

    if (m_controlParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_controlParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCommonMixStreamRequest::GetMixStreamSessionId() const
{
    return m_mixStreamSessionId;
}

void CreateCommonMixStreamRequest::SetMixStreamSessionId(const string& _mixStreamSessionId)
{
    m_mixStreamSessionId = _mixStreamSessionId;
    m_mixStreamSessionIdHasBeenSet = true;
}

bool CreateCommonMixStreamRequest::MixStreamSessionIdHasBeenSet() const
{
    return m_mixStreamSessionIdHasBeenSet;
}

vector<CommonMixInputParam> CreateCommonMixStreamRequest::GetInputStreamList() const
{
    return m_inputStreamList;
}

void CreateCommonMixStreamRequest::SetInputStreamList(const vector<CommonMixInputParam>& _inputStreamList)
{
    m_inputStreamList = _inputStreamList;
    m_inputStreamListHasBeenSet = true;
}

bool CreateCommonMixStreamRequest::InputStreamListHasBeenSet() const
{
    return m_inputStreamListHasBeenSet;
}

CommonMixOutputParams CreateCommonMixStreamRequest::GetOutputParams() const
{
    return m_outputParams;
}

void CreateCommonMixStreamRequest::SetOutputParams(const CommonMixOutputParams& _outputParams)
{
    m_outputParams = _outputParams;
    m_outputParamsHasBeenSet = true;
}

bool CreateCommonMixStreamRequest::OutputParamsHasBeenSet() const
{
    return m_outputParamsHasBeenSet;
}

int64_t CreateCommonMixStreamRequest::GetMixStreamTemplateId() const
{
    return m_mixStreamTemplateId;
}

void CreateCommonMixStreamRequest::SetMixStreamTemplateId(const int64_t& _mixStreamTemplateId)
{
    m_mixStreamTemplateId = _mixStreamTemplateId;
    m_mixStreamTemplateIdHasBeenSet = true;
}

bool CreateCommonMixStreamRequest::MixStreamTemplateIdHasBeenSet() const
{
    return m_mixStreamTemplateIdHasBeenSet;
}

CommonMixControlParams CreateCommonMixStreamRequest::GetControlParams() const
{
    return m_controlParams;
}

void CreateCommonMixStreamRequest::SetControlParams(const CommonMixControlParams& _controlParams)
{
    m_controlParams = _controlParams;
    m_controlParamsHasBeenSet = true;
}

bool CreateCommonMixStreamRequest::ControlParamsHasBeenSet() const
{
    return m_controlParamsHasBeenSet;
}


