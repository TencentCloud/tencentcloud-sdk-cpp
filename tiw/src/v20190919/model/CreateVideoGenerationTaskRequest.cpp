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

#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreateVideoGenerationTaskRequest::CreateVideoGenerationTaskRequest() :
    m_onlineRecordTaskIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_whiteboardHasBeenSet(false),
    m_concatHasBeenSet(false),
    m_mixStreamHasBeenSet(false),
    m_recordControlHasBeenSet(false),
    m_extraDataHasBeenSet(false)
{
}

string CreateVideoGenerationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_onlineRecordTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineRecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onlineRecordTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_whiteboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_concatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_concat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mixStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mixStream.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_recordControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recordControl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVideoGenerationTaskRequest::GetOnlineRecordTaskId() const
{
    return m_onlineRecordTaskId;
}

void CreateVideoGenerationTaskRequest::SetOnlineRecordTaskId(const string& _onlineRecordTaskId)
{
    m_onlineRecordTaskId = _onlineRecordTaskId;
    m_onlineRecordTaskIdHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::OnlineRecordTaskIdHasBeenSet() const
{
    return m_onlineRecordTaskIdHasBeenSet;
}

int64_t CreateVideoGenerationTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateVideoGenerationTaskRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

Whiteboard CreateVideoGenerationTaskRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void CreateVideoGenerationTaskRequest::SetWhiteboard(const Whiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}

Concat CreateVideoGenerationTaskRequest::GetConcat() const
{
    return m_concat;
}

void CreateVideoGenerationTaskRequest::SetConcat(const Concat& _concat)
{
    m_concat = _concat;
    m_concatHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::ConcatHasBeenSet() const
{
    return m_concatHasBeenSet;
}

MixStream CreateVideoGenerationTaskRequest::GetMixStream() const
{
    return m_mixStream;
}

void CreateVideoGenerationTaskRequest::SetMixStream(const MixStream& _mixStream)
{
    m_mixStream = _mixStream;
    m_mixStreamHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::MixStreamHasBeenSet() const
{
    return m_mixStreamHasBeenSet;
}

RecordControl CreateVideoGenerationTaskRequest::GetRecordControl() const
{
    return m_recordControl;
}

void CreateVideoGenerationTaskRequest::SetRecordControl(const RecordControl& _recordControl)
{
    m_recordControl = _recordControl;
    m_recordControlHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::RecordControlHasBeenSet() const
{
    return m_recordControlHasBeenSet;
}

string CreateVideoGenerationTaskRequest::GetExtraData() const
{
    return m_extraData;
}

void CreateVideoGenerationTaskRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool CreateVideoGenerationTaskRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}


