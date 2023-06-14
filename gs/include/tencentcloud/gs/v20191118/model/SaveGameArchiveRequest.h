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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SAVEGAMEARCHIVEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SAVEGAMEARCHIVEREQUEST_H_

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
                * SaveGameArchive请求参数结构体
                */
                class SaveGameArchiveRequest : public AbstractModel
                {
                public:
                    SaveGameArchiveRequest();
                    ~SaveGameArchiveRequest() = default;
                    std::string ToJsonString() const;


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

                private:

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SAVEGAMEARCHIVEREQUEST_H_
