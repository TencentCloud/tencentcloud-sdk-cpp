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

#include <tencentcloud/bizlive/v20190313/model/CreateSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

CreateSessionRequest::CreateSessionRequest() :
    m_clientSessionHasBeenSet(false),
    m_gameIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_gameParasHasBeenSet(false),
    m_gameRegionHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

string CreateSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSession.c_str(), allocator).Move(), allocator);
    }

    if (m_gameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameParasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameParas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameParas.c_str(), allocator).Move(), allocator);
    }

    if (m_gameRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSessionRequest::GetClientSession() const
{
    return m_clientSession;
}

void CreateSessionRequest::SetClientSession(const string& _clientSession)
{
    m_clientSession = _clientSession;
    m_clientSessionHasBeenSet = true;
}

bool CreateSessionRequest::ClientSessionHasBeenSet() const
{
    return m_clientSessionHasBeenSet;
}

string CreateSessionRequest::GetGameId() const
{
    return m_gameId;
}

void CreateSessionRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool CreateSessionRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string CreateSessionRequest::GetUserId() const
{
    return m_userId;
}

void CreateSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateSessionRequest::GetGameParas() const
{
    return m_gameParas;
}

void CreateSessionRequest::SetGameParas(const string& _gameParas)
{
    m_gameParas = _gameParas;
    m_gameParasHasBeenSet = true;
}

bool CreateSessionRequest::GameParasHasBeenSet() const
{
    return m_gameParasHasBeenSet;
}

string CreateSessionRequest::GetGameRegion() const
{
    return m_gameRegion;
}

void CreateSessionRequest::SetGameRegion(const string& _gameRegion)
{
    m_gameRegion = _gameRegion;
    m_gameRegionHasBeenSet = true;
}

bool CreateSessionRequest::GameRegionHasBeenSet() const
{
    return m_gameRegionHasBeenSet;
}

string CreateSessionRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CreateSessionRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CreateSessionRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CreateSessionRequest::GetResolution() const
{
    return m_resolution;
}

void CreateSessionRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool CreateSessionRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}


