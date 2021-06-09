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

#include <tencentcloud/ump/v20200918/model/CreateCameraStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CreateCameraStateRequest::CreateCameraStateRequest() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_cameraStatesHasBeenSet(false)
{
}

string CreateCameraStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }

    if (m_cameraStatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraStates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cameraStates.begin(); itr != m_cameraStates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCameraStateRequest::GetGroupCode() const
{
    return m_groupCode;
}

void CreateCameraStateRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool CreateCameraStateRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t CreateCameraStateRequest::GetMallId() const
{
    return m_mallId;
}

void CreateCameraStateRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool CreateCameraStateRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

vector<CameraState> CreateCameraStateRequest::GetCameraStates() const
{
    return m_cameraStates;
}

void CreateCameraStateRequest::SetCameraStates(const vector<CameraState>& _cameraStates)
{
    m_cameraStates = _cameraStates;
    m_cameraStatesHasBeenSet = true;
}

bool CreateCameraStateRequest::CameraStatesHasBeenSet() const
{
    return m_cameraStatesHasBeenSet;
}


