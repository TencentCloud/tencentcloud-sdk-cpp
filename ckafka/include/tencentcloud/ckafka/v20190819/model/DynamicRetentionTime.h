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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 动态消息保留时间配置
                */
                class DynamicRetentionTime : public AbstractModel
                {
                public:
                    DynamicRetentionTime();
                    ~DynamicRetentionTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动态消息保留时间配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 动态消息保留时间配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置动态消息保留时间配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 动态消息保留时间配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取磁盘配额百分比触发条件，即消息达到此值触发消息保留时间变更事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskQuotaPercentage 磁盘配额百分比触发条件，即消息达到此值触发消息保留时间变更事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskQuotaPercentage() const;

                    /**
                     * 设置磁盘配额百分比触发条件，即消息达到此值触发消息保留时间变更事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskQuotaPercentage 磁盘配额百分比触发条件，即消息达到此值触发消息保留时间变更事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskQuotaPercentage(const int64_t& _diskQuotaPercentage);

                    /**
                     * 判断参数 DiskQuotaPercentage 是否已赋值
                     * @return DiskQuotaPercentage 是否已赋值
                     * 
                     */
                    bool DiskQuotaPercentageHasBeenSet() const;

                    /**
                     * 获取每次向前调整消息保留时间百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepForwardPercentage 每次向前调整消息保留时间百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStepForwardPercentage() const;

                    /**
                     * 设置每次向前调整消息保留时间百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stepForwardPercentage 每次向前调整消息保留时间百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStepForwardPercentage(const int64_t& _stepForwardPercentage);

                    /**
                     * 判断参数 StepForwardPercentage 是否已赋值
                     * @return StepForwardPercentage 是否已赋值
                     * 
                     */
                    bool StepForwardPercentageHasBeenSet() const;

                    /**
                     * 获取保底时长，单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BottomRetention 保底时长，单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBottomRetention() const;

                    /**
                     * 设置保底时长，单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bottomRetention 保底时长，单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBottomRetention(const int64_t& _bottomRetention);

                    /**
                     * 判断参数 BottomRetention 是否已赋值
                     * @return BottomRetention 是否已赋值
                     * 
                     */
                    bool BottomRetentionHasBeenSet() const;

                private:

                    /**
                     * 动态消息保留时间配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 磁盘配额百分比触发条件，即消息达到此值触发消息保留时间变更事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskQuotaPercentage;
                    bool m_diskQuotaPercentageHasBeenSet;

                    /**
                     * 每次向前调整消息保留时间百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_stepForwardPercentage;
                    bool m_stepForwardPercentageHasBeenSet;

                    /**
                     * 保底时长，单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bottomRetention;
                    bool m_bottomRetentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_
