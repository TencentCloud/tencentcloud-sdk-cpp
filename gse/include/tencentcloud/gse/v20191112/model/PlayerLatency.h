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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_

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
                * 玩家延迟信息
                */
                class PlayerLatency : public AbstractModel
                {
                public:
                    PlayerLatency();
                    ~PlayerLatency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerId 玩家Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerId 玩家Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取延迟对应的区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionIdentifier 延迟对应的区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionIdentifier() const;

                    /**
                     * 设置延迟对应的区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionIdentifier 延迟对应的区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionIdentifier(const std::string& _regionIdentifier);

                    /**
                     * 判断参数 RegionIdentifier 是否已赋值
                     * @return RegionIdentifier 是否已赋值
                     * 
                     */
                    bool RegionIdentifierHasBeenSet() const;

                    /**
                     * 获取毫秒级延迟
                     * @return LatencyInMilliseconds 毫秒级延迟
                     * 
                     */
                    uint64_t GetLatencyInMilliseconds() const;

                    /**
                     * 设置毫秒级延迟
                     * @param _latencyInMilliseconds 毫秒级延迟
                     * 
                     */
                    void SetLatencyInMilliseconds(const uint64_t& _latencyInMilliseconds);

                    /**
                     * 判断参数 LatencyInMilliseconds 是否已赋值
                     * @return LatencyInMilliseconds 是否已赋值
                     * 
                     */
                    bool LatencyInMillisecondsHasBeenSet() const;

                private:

                    /**
                     * 玩家Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 延迟对应的区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionIdentifier;
                    bool m_regionIdentifierHasBeenSet;

                    /**
                     * 毫秒级延迟
                     */
                    uint64_t m_latencyInMilliseconds;
                    bool m_latencyInMillisecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_
