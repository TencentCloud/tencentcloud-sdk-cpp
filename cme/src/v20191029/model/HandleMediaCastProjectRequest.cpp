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

#include <tencentcloud/cme/v20191029/model/HandleMediaCastProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

HandleMediaCastProjectRequest::HandleMediaCastProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_sourceInfosHasBeenSet(false),
    m_destinationInfosHasBeenSet(false),
    m_outputMediaSettingHasBeenSet(false),
    m_playSettingHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string HandleMediaCastProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfos.begin(); itr != m_sourceInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_destinationInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationInfos.begin(); itr != m_destinationInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputMediaSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMediaSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputMediaSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_playSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaySetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_position, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string HandleMediaCastProjectRequest::GetPlatform() const
{
    return m_platform;
}

void HandleMediaCastProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string HandleMediaCastProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void HandleMediaCastProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string HandleMediaCastProjectRequest::GetOperation() const
{
    return m_operation;
}

void HandleMediaCastProjectRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<MediaCastSourceInfo> HandleMediaCastProjectRequest::GetSourceInfos() const
{
    return m_sourceInfos;
}

void HandleMediaCastProjectRequest::SetSourceInfos(const vector<MediaCastSourceInfo>& _sourceInfos)
{
    m_sourceInfos = _sourceInfos;
    m_sourceInfosHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::SourceInfosHasBeenSet() const
{
    return m_sourceInfosHasBeenSet;
}

vector<MediaCastDestinationInfo> HandleMediaCastProjectRequest::GetDestinationInfos() const
{
    return m_destinationInfos;
}

void HandleMediaCastProjectRequest::SetDestinationInfos(const vector<MediaCastDestinationInfo>& _destinationInfos)
{
    m_destinationInfos = _destinationInfos;
    m_destinationInfosHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::DestinationInfosHasBeenSet() const
{
    return m_destinationInfosHasBeenSet;
}

MediaCastOutputMediaSetting HandleMediaCastProjectRequest::GetOutputMediaSetting() const
{
    return m_outputMediaSetting;
}

void HandleMediaCastProjectRequest::SetOutputMediaSetting(const MediaCastOutputMediaSetting& _outputMediaSetting)
{
    m_outputMediaSetting = _outputMediaSetting;
    m_outputMediaSettingHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::OutputMediaSettingHasBeenSet() const
{
    return m_outputMediaSettingHasBeenSet;
}

MediaCastPlaySetting HandleMediaCastProjectRequest::GetPlaySetting() const
{
    return m_playSetting;
}

void HandleMediaCastProjectRequest::SetPlaySetting(const MediaCastPlaySetting& _playSetting)
{
    m_playSetting = _playSetting;
    m_playSettingHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::PlaySettingHasBeenSet() const
{
    return m_playSettingHasBeenSet;
}

int64_t HandleMediaCastProjectRequest::GetPosition() const
{
    return m_position;
}

void HandleMediaCastProjectRequest::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string HandleMediaCastProjectRequest::GetOperator() const
{
    return m_operator;
}

void HandleMediaCastProjectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool HandleMediaCastProjectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


