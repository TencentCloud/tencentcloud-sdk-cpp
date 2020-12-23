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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATESESSIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATESESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateSession请求参数结构体
                */
                class CreateSessionRequest : public AbstractModel
                {
                public:
                    CreateSessionRequest();
                    ~CreateSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端session信息，从JSSDK请求中获得
                     * @return ClientSession 客户端session信息，从JSSDK请求中获得
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置客户端session信息，从JSSDK请求中获得
                     * @param ClientSession 客户端session信息，从JSSDK请求中获得
                     */
                    void SetClientSession(const std::string& _clientSession);

                    /**
                     * 判断参数 ClientSession 是否已赋值
                     * @return ClientSession 是否已赋值
                     */
                    bool ClientSessionHasBeenSet() const;

                    /**
                     * 获取游戏用户ID
                     * @return UserId 游戏用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置游戏用户ID
                     * @param UserId 游戏用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取游戏ID
                     * @return GameId 游戏ID
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param GameId 游戏ID
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取游戏区域，ap-guangzhou、ap-shanghai、ap-beijing、ap-chengdu、ap-chongqing、ap-nanjing等
                     * @return GameRegion 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing、ap-chengdu、ap-chongqing、ap-nanjing等
                     */
                    std::string GetGameRegion() const;

                    /**
                     * 设置游戏区域，ap-guangzhou、ap-shanghai、ap-beijing、ap-chengdu、ap-chongqing、ap-nanjing等
                     * @param GameRegion 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing、ap-chengdu、ap-chongqing、ap-nanjing等
                     */
                    void SetGameRegion(const std::string& _gameRegion);

                    /**
                     * 判断参数 GameRegion 是否已赋值
                     * @return GameRegion 是否已赋值
                     */
                    bool GameRegionHasBeenSet() const;

                    /**
                     * 获取游戏参数
                     * @return GameParas 游戏参数
                     */
                    std::string GetGameParas() const;

                    /**
                     * 设置游戏参数
                     * @param GameParas 游戏参数
                     */
                    void SetGameParas(const std::string& _gameParas);

                    /**
                     * 判断参数 GameParas 是否已赋值
                     * @return GameParas 是否已赋值
                     */
                    bool GameParasHasBeenSet() const;

                    /**
                     * 获取分辨率,，可设置为1080p或720p
                     * @return Resolution 分辨率,，可设置为1080p或720p
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率,，可设置为1080p或720p
                     * @param Resolution 分辨率,，可设置为1080p或720p
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取背景图url，格式为png或jpeg，宽高1920*1080
                     * @return ImageUrl 背景图url，格式为png或jpeg，宽高1920*1080
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置背景图url，格式为png或jpeg，宽高1920*1080
                     * @param ImageUrl 背景图url，格式为png或jpeg，宽高1920*1080
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取【废弃】资源池编号
                     * @return SetNo 【废弃】资源池编号
                     */
                    uint64_t GetSetNo() const;

                    /**
                     * 设置【废弃】资源池编号
                     * @param SetNo 【废弃】资源池编号
                     */
                    void SetSetNo(const uint64_t& _setNo);

                    /**
                     * 判断参数 SetNo 是否已赋值
                     * @return SetNo 是否已赋值
                     */
                    bool SetNoHasBeenSet() const;

                    /**
                     * 获取单位Mbps，固定码率，后端不动态调整(MaxBitrate和MinBitrate将无效)
                     * @return Bitrate 单位Mbps，固定码率，后端不动态调整(MaxBitrate和MinBitrate将无效)
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置单位Mbps，固定码率，后端不动态调整(MaxBitrate和MinBitrate将无效)
                     * @param Bitrate 单位Mbps，固定码率，后端不动态调整(MaxBitrate和MinBitrate将无效)
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取单位Mbps，动态调整最大码率
                     * @return MaxBitrate 单位Mbps，动态调整最大码率
                     */
                    uint64_t GetMaxBitrate() const;

                    /**
                     * 设置单位Mbps，动态调整最大码率
                     * @param MaxBitrate 单位Mbps，动态调整最大码率
                     */
                    void SetMaxBitrate(const uint64_t& _maxBitrate);

                    /**
                     * 判断参数 MaxBitrate 是否已赋值
                     * @return MaxBitrate 是否已赋值
                     */
                    bool MaxBitrateHasBeenSet() const;

                    /**
                     * 获取单位Mbps，动态调整最小码率
                     * @return MinBitrate 单位Mbps，动态调整最小码率
                     */
                    uint64_t GetMinBitrate() const;

                    /**
                     * 设置单位Mbps，动态调整最小码率
                     * @param MinBitrate 单位Mbps，动态调整最小码率
                     */
                    void SetMinBitrate(const uint64_t& _minBitrate);

                    /**
                     * 判断参数 MinBitrate 是否已赋值
                     * @return MinBitrate 是否已赋值
                     */
                    bool MinBitrateHasBeenSet() const;

                    /**
                     * 获取帧率，可设置为30、45、60、90、120、144
                     * @return Fps 帧率，可设置为30、45、60、90、120、144
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置帧率，可设置为30、45、60、90、120、144
                     * @param Fps 帧率，可设置为30、45、60、90、120、144
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取游戏用户IP，用于就近调度，例如125.127.178.228
                     * @return UserIp 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置游戏用户IP，用于就近调度，例如125.127.178.228
                     * @param UserIp 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取优化项，便于客户灰度开启新的优化项，默认为0
                     * @return Optimization 优化项，便于客户灰度开启新的优化项，默认为0
                     */
                    uint64_t GetOptimization() const;

                    /**
                     * 设置优化项，便于客户灰度开启新的优化项，默认为0
                     * @param Optimization 优化项，便于客户灰度开启新的优化项，默认为0
                     */
                    void SetOptimization(const uint64_t& _optimization);

                    /**
                     * 判断参数 Optimization 是否已赋值
                     * @return Optimization 是否已赋值
                     */
                    bool OptimizationHasBeenSet() const;

                    /**
                     * 获取【多人云游】游戏主机用户ID
                     * @return HostUserId 【多人云游】游戏主机用户ID
                     */
                    std::string GetHostUserId() const;

                    /**
                     * 设置【多人云游】游戏主机用户ID
                     * @param HostUserId 【多人云游】游戏主机用户ID
                     */
                    void SetHostUserId(const std::string& _hostUserId);

                    /**
                     * 判断参数 HostUserId 是否已赋值
                     * @return HostUserId 是否已赋值
                     */
                    bool HostUserIdHasBeenSet() const;

                    /**
                     * 获取【多人云游】角色；Player表示玩家；Viewer表示观察者
                     * @return Role 【多人云游】角色；Player表示玩家；Viewer表示观察者
                     */
                    std::string GetRole() const;

                    /**
                     * 设置【多人云游】角色；Player表示玩家；Viewer表示观察者
                     * @param Role 【多人云游】角色；Player表示玩家；Viewer表示观察者
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 客户端session信息，从JSSDK请求中获得
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * 游戏用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 游戏ID
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing、ap-chengdu、ap-chongqing、ap-nanjing等
                     */
                    std::string m_gameRegion;
                    bool m_gameRegionHasBeenSet;

                    /**
                     * 游戏参数
                     */
                    std::string m_gameParas;
                    bool m_gameParasHasBeenSet;

                    /**
                     * 分辨率,，可设置为1080p或720p
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 背景图url，格式为png或jpeg，宽高1920*1080
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 【废弃】资源池编号
                     */
                    uint64_t m_setNo;
                    bool m_setNoHasBeenSet;

                    /**
                     * 单位Mbps，固定码率，后端不动态调整(MaxBitrate和MinBitrate将无效)
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 单位Mbps，动态调整最大码率
                     */
                    uint64_t m_maxBitrate;
                    bool m_maxBitrateHasBeenSet;

                    /**
                     * 单位Mbps，动态调整最小码率
                     */
                    uint64_t m_minBitrate;
                    bool m_minBitrateHasBeenSet;

                    /**
                     * 帧率，可设置为30、45、60、90、120、144
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 优化项，便于客户灰度开启新的优化项，默认为0
                     */
                    uint64_t m_optimization;
                    bool m_optimizationHasBeenSet;

                    /**
                     * 【多人云游】游戏主机用户ID
                     */
                    std::string m_hostUserId;
                    bool m_hostUserIdHasBeenSet;

                    /**
                     * 【多人云游】角色；Player表示玩家；Viewer表示观察者
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATESESSIONREQUEST_H_
