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

#include <tencentcloud/gs/v20191118/model/CreateSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateSessionRequest::CreateSessionRequest() :
    m_userIdHasBeenSet(false),
    m_gameIdHasBeenSet(false),
    m_gameRegionHasBeenSet(false),
    m_gameParasHasBeenSet(false),
    m_clientSessionHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_setNoHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_maxBitrateHasBeenSet(false),
    m_minBitrateHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_optimizationHasBeenSet(false),
    m_hostUserIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_gameContextHasBeenSet(false),
    m_runModeHasBeenSet(false)
{
}

string CreateSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_gameParasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameParas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameParas.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSession.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_setNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setNo, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_maxBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBitrate, allocator);
    }

    if (m_minBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minBitrate, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_optimizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Optimization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_optimization, allocator);
    }

    if (m_hostUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_gameContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameContext.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

uint64_t CreateSessionRequest::GetSetNo() const
{
    return m_setNo;
}

void CreateSessionRequest::SetSetNo(const uint64_t& _setNo)
{
    m_setNo = _setNo;
    m_setNoHasBeenSet = true;
}

bool CreateSessionRequest::SetNoHasBeenSet() const
{
    return m_setNoHasBeenSet;
}

uint64_t CreateSessionRequest::GetBitrate() const
{
    return m_bitrate;
}

void CreateSessionRequest::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool CreateSessionRequest::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t CreateSessionRequest::GetMaxBitrate() const
{
    return m_maxBitrate;
}

void CreateSessionRequest::SetMaxBitrate(const uint64_t& _maxBitrate)
{
    m_maxBitrate = _maxBitrate;
    m_maxBitrateHasBeenSet = true;
}

bool CreateSessionRequest::MaxBitrateHasBeenSet() const
{
    return m_maxBitrateHasBeenSet;
}

uint64_t CreateSessionRequest::GetMinBitrate() const
{
    return m_minBitrate;
}

void CreateSessionRequest::SetMinBitrate(const uint64_t& _minBitrate)
{
    m_minBitrate = _minBitrate;
    m_minBitrateHasBeenSet = true;
}

bool CreateSessionRequest::MinBitrateHasBeenSet() const
{
    return m_minBitrateHasBeenSet;
}

uint64_t CreateSessionRequest::GetFps() const
{
    return m_fps;
}

void CreateSessionRequest::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool CreateSessionRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

string CreateSessionRequest::GetUserIp() const
{
    return m_userIp;
}

void CreateSessionRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool CreateSessionRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t CreateSessionRequest::GetOptimization() const
{
    return m_optimization;
}

void CreateSessionRequest::SetOptimization(const uint64_t& _optimization)
{
    m_optimization = _optimization;
    m_optimizationHasBeenSet = true;
}

bool CreateSessionRequest::OptimizationHasBeenSet() const
{
    return m_optimizationHasBeenSet;
}

string CreateSessionRequest::GetHostUserId() const
{
    return m_hostUserId;
}

void CreateSessionRequest::SetHostUserId(const string& _hostUserId)
{
    m_hostUserId = _hostUserId;
    m_hostUserIdHasBeenSet = true;
}

bool CreateSessionRequest::HostUserIdHasBeenSet() const
{
    return m_hostUserIdHasBeenSet;
}

string CreateSessionRequest::GetRole() const
{
    return m_role;
}

void CreateSessionRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateSessionRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string CreateSessionRequest::GetGameContext() const
{
    return m_gameContext;
}

void CreateSessionRequest::SetGameContext(const string& _gameContext)
{
    m_gameContext = _gameContext;
    m_gameContextHasBeenSet = true;
}

bool CreateSessionRequest::GameContextHasBeenSet() const
{
    return m_gameContextHasBeenSet;
}

string CreateSessionRequest::GetRunMode() const
{
    return m_runMode;
}

void CreateSessionRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool CreateSessionRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}


