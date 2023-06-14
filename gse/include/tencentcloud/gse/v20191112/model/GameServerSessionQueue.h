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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSessionQueueDestination.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatencyPolicy.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 服务部署组对象
                */
                class GameServerSessionQueue : public AbstractModel
                {
                public:
                    GameServerSessionQueue();
                    ~GameServerSessionQueue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务部署组名字
                     * @return Name 服务部署组名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务部署组名字
                     * @param _name 服务部署组名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取服务部署组资源
                     * @return GameServerSessionQueueArn 服务部署组资源
                     * 
                     */
                    std::string GetGameServerSessionQueueArn() const;

                    /**
                     * 设置服务部署组资源
                     * @param _gameServerSessionQueueArn 服务部署组资源
                     * 
                     */
                    void SetGameServerSessionQueueArn(const std::string& _gameServerSessionQueueArn);

                    /**
                     * 判断参数 GameServerSessionQueueArn 是否已赋值
                     * @return GameServerSessionQueueArn 是否已赋值
                     * 
                     */
                    bool GameServerSessionQueueArnHasBeenSet() const;

                    /**
                     * 获取目的fleet（可为别名）列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destinations 目的fleet（可为别名）列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GameServerSessionQueueDestination> GetDestinations() const;

                    /**
                     * 设置目的fleet（可为别名）列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destinations 目的fleet（可为别名）列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestinations(const std::vector<GameServerSessionQueueDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取延迟策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerLatencyPolicies 延迟策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PlayerLatencyPolicy> GetPlayerLatencyPolicies() const;

                    /**
                     * 设置延迟策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerLatencyPolicies 延迟策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlayerLatencyPolicies(const std::vector<PlayerLatencyPolicy>& _playerLatencyPolicies);

                    /**
                     * 判断参数 PlayerLatencyPolicies 是否已赋值
                     * @return PlayerLatencyPolicies 是否已赋值
                     * 
                     */
                    bool PlayerLatencyPoliciesHasBeenSet() const;

                    /**
                     * 获取超时时间
                     * @return TimeoutInSeconds 超时时间
                     * 
                     */
                    uint64_t GetTimeoutInSeconds() const;

                    /**
                     * 设置超时时间
                     * @param _timeoutInSeconds 超时时间
                     * 
                     */
                    void SetTimeoutInSeconds(const uint64_t& _timeoutInSeconds);

                    /**
                     * 判断参数 TimeoutInSeconds 是否已赋值
                     * @return TimeoutInSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutInSecondsHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 服务部署组名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务部署组资源
                     */
                    std::string m_gameServerSessionQueueArn;
                    bool m_gameServerSessionQueueArnHasBeenSet;

                    /**
                     * 目的fleet（可为别名）列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameServerSessionQueueDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * 延迟策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlayerLatencyPolicy> m_playerLatencyPolicies;
                    bool m_playerLatencyPoliciesHasBeenSet;

                    /**
                     * 超时时间
                     */
                    uint64_t m_timeoutInSeconds;
                    bool m_timeoutInSecondsHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUE_H_
