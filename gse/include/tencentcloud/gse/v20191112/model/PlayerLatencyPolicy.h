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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCYPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCYPOLICY_H_

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
                * 延迟策略
                */
                class PlayerLatencyPolicy : public AbstractModel
                {
                public:
                    PlayerLatencyPolicy();
                    ~PlayerLatencyPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任意player允许的最大延迟，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaximumIndividualPlayerLatencyMilliseconds 任意player允许的最大延迟，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaximumIndividualPlayerLatencyMilliseconds() const;

                    /**
                     * 设置任意player允许的最大延迟，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maximumIndividualPlayerLatencyMilliseconds 任意player允许的最大延迟，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaximumIndividualPlayerLatencyMilliseconds(const uint64_t& _maximumIndividualPlayerLatencyMilliseconds);

                    /**
                     * 判断参数 MaximumIndividualPlayerLatencyMilliseconds 是否已赋值
                     * @return MaximumIndividualPlayerLatencyMilliseconds 是否已赋值
                     * 
                     */
                    bool MaximumIndividualPlayerLatencyMillisecondsHasBeenSet() const;

                    /**
                     * 获取放置新GameServerSession时强制实施策略的时间长度，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyDurationSeconds 放置新GameServerSession时强制实施策略的时间长度，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPolicyDurationSeconds() const;

                    /**
                     * 设置放置新GameServerSession时强制实施策略的时间长度，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyDurationSeconds 放置新GameServerSession时强制实施策略的时间长度，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyDurationSeconds(const uint64_t& _policyDurationSeconds);

                    /**
                     * 判断参数 PolicyDurationSeconds 是否已赋值
                     * @return PolicyDurationSeconds 是否已赋值
                     * 
                     */
                    bool PolicyDurationSecondsHasBeenSet() const;

                private:

                    /**
                     * 任意player允许的最大延迟，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maximumIndividualPlayerLatencyMilliseconds;
                    bool m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet;

                    /**
                     * 放置新GameServerSession时强制实施策略的时间长度，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_policyDurationSeconds;
                    bool m_policyDurationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCYPOLICY_H_
