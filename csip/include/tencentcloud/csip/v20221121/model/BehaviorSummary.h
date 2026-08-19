/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORSUMMARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BehaviorInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户行为概览
                */
                class BehaviorSummary : public AbstractModel
                {
                public:
                    BehaviorSummary();
                    ~BehaviorSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取具体行为数据，用于渲染曲线图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BehaviorInfo 具体行为数据，用于渲染曲线图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BehaviorInfo> GetBehaviorInfo() const;

                    /**
                     * 设置具体行为数据，用于渲染曲线图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _behaviorInfo 具体行为数据，用于渲染曲线图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBehaviorInfo(const std::vector<BehaviorInfo>& _behaviorInfo);

                    /**
                     * 判断参数 BehaviorInfo 是否已赋值
                     * @return BehaviorInfo 是否已赋值
                     * 
                     */
                    bool BehaviorInfoHasBeenSet() const;

                    /**
                     * 获取异常行为个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbnormalCount 异常行为个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAbnormalCount() const;

                    /**
                     * 设置异常行为个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormalCount 异常行为个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormalCount(const uint64_t& _abnormalCount);

                    /**
                     * 判断参数 AbnormalCount 是否已赋值
                     * @return AbnormalCount 是否已赋值
                     * 
                     */
                    bool AbnormalCountHasBeenSet() const;

                    /**
                     * 获取是否接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAccess 是否接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAccess() const;

                    /**
                     * 设置是否接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAccess 是否接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAccess(const bool& _isAccess);

                    /**
                     * 判断参数 IsAccess 是否已赋值
                     * @return IsAccess 是否已赋值
                     * 
                     */
                    bool IsAccessHasBeenSet() const;

                private:

                    /**
                     * 具体行为数据，用于渲染曲线图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BehaviorInfo> m_behaviorInfo;
                    bool m_behaviorInfoHasBeenSet;

                    /**
                     * 异常行为个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_abnormalCount;
                    bool m_abnormalCountHasBeenSet;

                    /**
                     * 是否接入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAccess;
                    bool m_isAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORSUMMARY_H_
