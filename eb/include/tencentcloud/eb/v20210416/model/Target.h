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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TARGET_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Target信息
                */
                class Target : public AbstractModel
                {
                public:
                    Target();
                    ~Target() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标类型
                     * @return Type 目标类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置目标类型
                     * @param _type 目标类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取目标ID
                     * @return TargetId 目标ID
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置目标ID
                     * @param _targetId 目标ID
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取目标描述
                     * @return TargetDescription 目标描述
                     * 
                     */
                    TargetDescription GetTargetDescription() const;

                    /**
                     * 设置目标描述
                     * @param _targetDescription 目标描述
                     * 
                     */
                    void SetTargetDescription(const TargetDescription& _targetDescription);

                    /**
                     * 判断参数 TargetDescription 是否已赋值
                     * @return TargetDescription 是否已赋值
                     * 
                     */
                    bool TargetDescriptionHasBeenSet() const;

                    /**
                     * 获取事件规则ID
                     * @return RuleId 事件规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置事件规则ID
                     * @param _ruleId 事件规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableBatchDelivery 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableBatchDelivery 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     * 
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                    /**
                     * 获取批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchTimeout 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchTimeout 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchTimeout(const int64_t& _batchTimeout);

                    /**
                     * 判断参数 BatchTimeout 是否已赋值
                     * @return BatchTimeout 是否已赋值
                     * 
                     */
                    bool BatchTimeoutHasBeenSet() const;

                    /**
                     * 获取批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchEventCount 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchEventCount 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     * 
                     */
                    bool BatchEventCountHasBeenSet() const;

                private:

                    /**
                     * 目标类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 目标ID
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 目标描述
                     */
                    TargetDescription m_targetDescription;
                    bool m_targetDescriptionHasBeenSet;

                    /**
                     * 事件规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                    /**
                     * 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TARGET_H_
