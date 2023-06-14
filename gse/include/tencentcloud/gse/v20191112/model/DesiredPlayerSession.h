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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 玩家游戏会话信息
                */
                class DesiredPlayerSession : public AbstractModel
                {
                public:
                    DesiredPlayerSession();
                    ~DesiredPlayerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取与玩家会话关联的唯一玩家标识
                     * @return PlayerId 与玩家会话关联的唯一玩家标识
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置与玩家会话关联的唯一玩家标识
                     * @param _playerId 与玩家会话关联的唯一玩家标识
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取开发人员定义的玩家数据
                     * @return PlayerData 开发人员定义的玩家数据
                     * 
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置开发人员定义的玩家数据
                     * @param _playerData 开发人员定义的玩家数据
                     * 
                     */
                    void SetPlayerData(const std::string& _playerData);

                    /**
                     * 判断参数 PlayerData 是否已赋值
                     * @return PlayerData 是否已赋值
                     * 
                     */
                    bool PlayerDataHasBeenSet() const;

                private:

                    /**
                     * 与玩家会话关联的唯一玩家标识
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 开发人员定义的玩家数据
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_
