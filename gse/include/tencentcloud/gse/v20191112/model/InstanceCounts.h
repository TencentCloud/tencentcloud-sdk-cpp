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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCECOUNTS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCECOUNTS_H_

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
                * 服务器实例统计数据
                */
                class InstanceCounts : public AbstractModel
                {
                public:
                    InstanceCounts();
                    ~InstanceCounts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活跃的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Active 活跃的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActive() const;

                    /**
                     * 设置活跃的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _active 活跃的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActive(const uint64_t& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取期望的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desired 期望的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDesired() const;

                    /**
                     * 设置期望的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desired 期望的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesired(const uint64_t& _desired);

                    /**
                     * 判断参数 Desired 是否已赋值
                     * @return Desired 是否已赋值
                     * 
                     */
                    bool DesiredHasBeenSet() const;

                    /**
                     * 获取空闲的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Idle 空闲的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIdle() const;

                    /**
                     * 设置空闲的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idle 空闲的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdle(const uint64_t& _idle);

                    /**
                     * 判断参数 Idle 是否已赋值
                     * @return Idle 是否已赋值
                     * 
                     */
                    bool IdleHasBeenSet() const;

                    /**
                     * 获取服务器实例数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxiNum 服务器实例数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxiNum() const;

                    /**
                     * 设置服务器实例数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxiNum 服务器实例数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxiNum(const uint64_t& _maxiNum);

                    /**
                     * 判断参数 MaxiNum 是否已赋值
                     * @return MaxiNum 是否已赋值
                     * 
                     */
                    bool MaxiNumHasBeenSet() const;

                    /**
                     * 获取服务器实例数最小限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniNum 服务器实例数最小限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMiniNum() const;

                    /**
                     * 设置服务器实例数最小限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniNum 服务器实例数最小限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniNum(const uint64_t& _miniNum);

                    /**
                     * 判断参数 MiniNum 是否已赋值
                     * @return MiniNum 是否已赋值
                     * 
                     */
                    bool MiniNumHasBeenSet() const;

                    /**
                     * 获取已开始创建，但未激活的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pending 已开始创建，但未激活的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPending() const;

                    /**
                     * 设置已开始创建，但未激活的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pending 已开始创建，但未激活的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPending(const uint64_t& _pending);

                    /**
                     * 判断参数 Pending 是否已赋值
                     * @return Pending 是否已赋值
                     * 
                     */
                    bool PendingHasBeenSet() const;

                    /**
                     * 获取结束中的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Terminating 结束中的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTerminating() const;

                    /**
                     * 设置结束中的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminating 结束中的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerminating(const uint64_t& _terminating);

                    /**
                     * 判断参数 Terminating 是否已赋值
                     * @return Terminating 是否已赋值
                     * 
                     */
                    bool TerminatingHasBeenSet() const;

                private:

                    /**
                     * 活跃的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 期望的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_desired;
                    bool m_desiredHasBeenSet;

                    /**
                     * 空闲的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_idle;
                    bool m_idleHasBeenSet;

                    /**
                     * 服务器实例数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxiNum;
                    bool m_maxiNumHasBeenSet;

                    /**
                     * 服务器实例数最小限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_miniNum;
                    bool m_miniNumHasBeenSet;

                    /**
                     * 已开始创建，但未激活的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pending;
                    bool m_pendingHasBeenSet;

                    /**
                     * 结束中的服务器实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_terminating;
                    bool m_terminatingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCECOUNTS_H_
