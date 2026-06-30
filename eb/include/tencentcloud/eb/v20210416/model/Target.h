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
                     * 获取<p>目标类型</p>
                     * @return Type <p>目标类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>目标类型</p>
                     * @param _type <p>目标类型</p>
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
                     * 获取<p>事件集ID</p>
                     * @return EventBusId <p>事件集ID</p>
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置<p>事件集ID</p>
                     * @param _eventBusId <p>事件集ID</p>
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
                     * 获取<p>目标ID</p>
                     * @return TargetId <p>目标ID</p>
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置<p>目标ID</p>
                     * @param _targetId <p>目标ID</p>
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
                     * 获取<p>目标描述</p>
                     * @return TargetDescription <p>目标描述</p>
                     * 
                     */
                    TargetDescription GetTargetDescription() const;

                    /**
                     * 设置<p>目标描述</p>
                     * @param _targetDescription <p>目标描述</p>
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
                     * 获取<p>事件规则ID</p>
                     * @return RuleId <p>事件规则ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>事件规则ID</p>
                     * @param _ruleId <p>事件规则ID</p>
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
                     * 获取<p>开启批量投递使能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableBatchDelivery <p>开启批量投递使能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置<p>开启批量投递使能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableBatchDelivery <p>开启批量投递使能</p>
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
                     * 获取<p>批量投递最长等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchTimeout <p>批量投递最长等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置<p>批量投递最长等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchTimeout <p>批量投递最长等待时间</p>
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
                     * 获取<p>批量投递最大事件条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchEventCount <p>批量投递最大事件条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置<p>批量投递最大事件条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchEventCount <p>批量投递最大事件条数</p>
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
                     * <p>目标类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>事件集ID</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>目标ID</p>
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>目标描述</p>
                     */
                    TargetDescription m_targetDescription;
                    bool m_targetDescriptionHasBeenSet;

                    /**
                     * <p>事件规则ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>开启批量投递使能</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                    /**
                     * <p>批量投递最长等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * <p>批量投递最大事件条数</p>
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
