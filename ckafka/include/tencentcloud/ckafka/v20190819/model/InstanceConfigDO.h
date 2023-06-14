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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECONFIGDO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECONFIGDO_H_

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
                * 实例配置实体
                */
                class InstanceConfigDO : public AbstractModel
                {
                public:
                    InstanceConfigDO();
                    ~InstanceConfigDO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否自动创建主题
                     * @return AutoCreateTopicsEnable 是否自动创建主题
                     * 
                     */
                    bool GetAutoCreateTopicsEnable() const;

                    /**
                     * 设置是否自动创建主题
                     * @param _autoCreateTopicsEnable 是否自动创建主题
                     * 
                     */
                    void SetAutoCreateTopicsEnable(const bool& _autoCreateTopicsEnable);

                    /**
                     * 判断参数 AutoCreateTopicsEnable 是否已赋值
                     * @return AutoCreateTopicsEnable 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicsEnableHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return DefaultNumPartitions 分区数
                     * 
                     */
                    int64_t GetDefaultNumPartitions() const;

                    /**
                     * 设置分区数
                     * @param _defaultNumPartitions 分区数
                     * 
                     */
                    void SetDefaultNumPartitions(const int64_t& _defaultNumPartitions);

                    /**
                     * 判断参数 DefaultNumPartitions 是否已赋值
                     * @return DefaultNumPartitions 是否已赋值
                     * 
                     */
                    bool DefaultNumPartitionsHasBeenSet() const;

                    /**
                     * 获取默认的复制Factor
                     * @return DefaultReplicationFactor 默认的复制Factor
                     * 
                     */
                    int64_t GetDefaultReplicationFactor() const;

                    /**
                     * 设置默认的复制Factor
                     * @param _defaultReplicationFactor 默认的复制Factor
                     * 
                     */
                    void SetDefaultReplicationFactor(const int64_t& _defaultReplicationFactor);

                    /**
                     * 判断参数 DefaultReplicationFactor 是否已赋值
                     * @return DefaultReplicationFactor 是否已赋值
                     * 
                     */
                    bool DefaultReplicationFactorHasBeenSet() const;

                private:

                    /**
                     * 是否自动创建主题
                     */
                    bool m_autoCreateTopicsEnable;
                    bool m_autoCreateTopicsEnableHasBeenSet;

                    /**
                     * 分区数
                     */
                    int64_t m_defaultNumPartitions;
                    bool m_defaultNumPartitionsHasBeenSet;

                    /**
                     * 默认的复制Factor
                     */
                    int64_t m_defaultReplicationFactor;
                    bool m_defaultReplicationFactorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECONFIGDO_H_
