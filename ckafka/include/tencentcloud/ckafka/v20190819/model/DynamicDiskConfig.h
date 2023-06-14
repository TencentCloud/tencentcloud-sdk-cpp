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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_

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
                * 动态硬盘扩容配置
                */
                class DynamicDiskConfig : public AbstractModel
                {
                public:
                    DynamicDiskConfig();
                    ~DynamicDiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动态硬盘扩容配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 动态硬盘扩容配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置动态硬盘扩容配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 动态硬盘扩容配置开关（0: 关闭，1: 开启）
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
                     * 获取每次磁盘动态扩容大小百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepForwardPercentage 每次磁盘动态扩容大小百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStepForwardPercentage() const;

                    /**
                     * 设置每次磁盘动态扩容大小百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stepForwardPercentage 每次磁盘动态扩容大小百分比
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
                     * 获取磁盘配额百分比触发条件，即消息达到此值触发硬盘自动扩容事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskQuotaPercentage 磁盘配额百分比触发条件，即消息达到此值触发硬盘自动扩容事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskQuotaPercentage() const;

                    /**
                     * 设置磁盘配额百分比触发条件，即消息达到此值触发硬盘自动扩容事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskQuotaPercentage 磁盘配额百分比触发条件，即消息达到此值触发硬盘自动扩容事件
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
                     * 获取最大扩容硬盘大小，以 GB 为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDiskSpace 最大扩容硬盘大小，以 GB 为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxDiskSpace() const;

                    /**
                     * 设置最大扩容硬盘大小，以 GB 为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDiskSpace 最大扩容硬盘大小，以 GB 为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDiskSpace(const int64_t& _maxDiskSpace);

                    /**
                     * 判断参数 MaxDiskSpace 是否已赋值
                     * @return MaxDiskSpace 是否已赋值
                     * 
                     */
                    bool MaxDiskSpaceHasBeenSet() const;

                private:

                    /**
                     * 动态硬盘扩容配置开关（0: 关闭，1: 开启）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 每次磁盘动态扩容大小百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_stepForwardPercentage;
                    bool m_stepForwardPercentageHasBeenSet;

                    /**
                     * 磁盘配额百分比触发条件，即消息达到此值触发硬盘自动扩容事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskQuotaPercentage;
                    bool m_diskQuotaPercentageHasBeenSet;

                    /**
                     * 最大扩容硬盘大小，以 GB 为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxDiskSpace;
                    bool m_maxDiskSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_
