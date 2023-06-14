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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONREQUEST_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
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
                     * 
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置客户端session信息，从JSSDK请求中获得
                     * @param _clientSession 客户端session信息，从JSSDK请求中获得
                     * 
                     */
                    void SetClientSession(const std::string& _clientSession);

                    /**
                     * 判断参数 ClientSession 是否已赋值
                     * @return ClientSession 是否已赋值
                     * 
                     */
                    bool ClientSessionHasBeenSet() const;

                    /**
                     * 获取游戏ID
                     * @return GameId 游戏ID
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param _gameId 游戏ID
                     * 
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     * 
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取游戏用户ID
                     * @return UserId 游戏用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置游戏用户ID
                     * @param _userId 游戏用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取游戏参数
                     * @return GameParas 游戏参数
                     * 
                     */
                    std::string GetGameParas() const;

                    /**
                     * 设置游戏参数
                     * @param _gameParas 游戏参数
                     * 
                     */
                    void SetGameParas(const std::string& _gameParas);

                    /**
                     * 判断参数 GameParas 是否已赋值
                     * @return GameParas 是否已赋值
                     * 
                     */
                    bool GameParasHasBeenSet() const;

                    /**
                     * 获取游戏区域
                     * @return GameRegion 游戏区域
                     * 
                     */
                    std::string GetGameRegion() const;

                    /**
                     * 设置游戏区域
                     * @param _gameRegion 游戏区域
                     * 
                     */
                    void SetGameRegion(const std::string& _gameRegion);

                    /**
                     * 判断参数 GameRegion 是否已赋值
                     * @return GameRegion 是否已赋值
                     * 
                     */
                    bool GameRegionHasBeenSet() const;

                    /**
                     * 获取背景图url
                     * @return ImageUrl 背景图url
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置背景图url
                     * @param _imageUrl 背景图url
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取分辨率
                     * @return Resolution 分辨率
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率
                     * @param _resolution 分辨率
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * 客户端session信息，从JSSDK请求中获得
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * 游戏ID
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 游戏用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 游戏参数
                     */
                    std::string m_gameParas;
                    bool m_gameParasHasBeenSet;

                    /**
                     * 游戏区域
                     */
                    std::string m_gameRegion;
                    bool m_gameRegionHasBeenSet;

                    /**
                     * 背景图url
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 分辨率
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONREQUEST_H_
