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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递Ckafka 高级配置
                */
                class AdvancedConsumerConfiguration : public AbstractModel
                {
                public:
                    AdvancedConsumerConfiguration();
                    ~AdvancedConsumerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ckafka分区hash状态。 默认 false

- true：开启根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
- false：关闭根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
                     * @return PartitionHashStatus Ckafka分区hash状态。 默认 false

- true：开启根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
- false：关闭根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
                     * 
                     */
                    bool GetPartitionHashStatus() const;

                    /**
                     * 设置Ckafka分区hash状态。 默认 false

- true：开启根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
- false：关闭根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
                     * @param _partitionHashStatus Ckafka分区hash状态。 默认 false

- true：开启根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
- false：关闭根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
                     * 
                     */
                    void SetPartitionHashStatus(const bool& _partitionHashStatus);

                    /**
                     * 判断参数 PartitionHashStatus 是否已赋值
                     * @return PartitionHashStatus 是否已赋值
                     * 
                     */
                    bool PartitionHashStatusHasBeenSet() const;

                    /**
                     * 获取需要计算 hash 的字段列表。最大支持5个字段。
                     * @return PartitionFields 需要计算 hash 的字段列表。最大支持5个字段。
                     * 
                     */
                    std::vector<std::string> GetPartitionFields() const;

                    /**
                     * 设置需要计算 hash 的字段列表。最大支持5个字段。
                     * @param _partitionFields 需要计算 hash 的字段列表。最大支持5个字段。
                     * 
                     */
                    void SetPartitionFields(const std::vector<std::string>& _partitionFields);

                    /**
                     * 判断参数 PartitionFields 是否已赋值
                     * @return PartitionFields 是否已赋值
                     * 
                     */
                    bool PartitionFieldsHasBeenSet() const;

                private:

                    /**
                     * Ckafka分区hash状态。 默认 false

- true：开启根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
- false：关闭根据字段 Hash 值结果相等的信息投递到统一 ckafka 分区
                     */
                    bool m_partitionHashStatus;
                    bool m_partitionHashStatusHasBeenSet;

                    /**
                     * 需要计算 hash 的字段列表。最大支持5个字段。
                     */
                    std::vector<std::string> m_partitionFields;
                    bool m_partitionFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_
