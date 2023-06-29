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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_

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
                * 修改实例属性的配置对象
                */
                class ModifyInstanceAttributesConfig : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesConfig();
                    ~ModifyInstanceAttributesConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动创建 true 表示开启，false 表示不开启
                     * @return AutoCreateTopicEnable 自动创建 true 表示开启，false 表示不开启
                     * 
                     */
                    bool GetAutoCreateTopicEnable() const;

                    /**
                     * 设置自动创建 true 表示开启，false 表示不开启
                     * @param _autoCreateTopicEnable 自动创建 true 表示开启，false 表示不开启
                     * 
                     */
                    void SetAutoCreateTopicEnable(const bool& _autoCreateTopicEnable);

                    /**
                     * 判断参数 AutoCreateTopicEnable 是否已赋值
                     * @return AutoCreateTopicEnable 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicEnableHasBeenSet() const;

                    /**
                     * 获取可选，如果auto.create.topic.enable设置为true没有设置该值时，默认设置为3
                     * @return DefaultNumPartitions 可选，如果auto.create.topic.enable设置为true没有设置该值时，默认设置为3
                     * 
                     */
                    int64_t GetDefaultNumPartitions() const;

                    /**
                     * 设置可选，如果auto.create.topic.enable设置为true没有设置该值时，默认设置为3
                     * @param _defaultNumPartitions 可选，如果auto.create.topic.enable设置为true没有设置该值时，默认设置为3
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
                     * 获取如果auto.create.topic.enable设置为true没有指定该值时默认设置为2
                     * @return DefaultReplicationFactor 如果auto.create.topic.enable设置为true没有指定该值时默认设置为2
                     * 
                     */
                    int64_t GetDefaultReplicationFactor() const;

                    /**
                     * 设置如果auto.create.topic.enable设置为true没有指定该值时默认设置为2
                     * @param _defaultReplicationFactor 如果auto.create.topic.enable设置为true没有指定该值时默认设置为2
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
                     * 自动创建 true 表示开启，false 表示不开启
                     */
                    bool m_autoCreateTopicEnable;
                    bool m_autoCreateTopicEnableHasBeenSet;

                    /**
                     * 可选，如果auto.create.topic.enable设置为true没有设置该值时，默认设置为3
                     */
                    int64_t m_defaultNumPartitions;
                    bool m_defaultNumPartitionsHasBeenSet;

                    /**
                     * 如果auto.create.topic.enable设置为true没有指定该值时默认设置为2
                     */
                    int64_t m_defaultReplicationFactor;
                    bool m_defaultReplicationFactorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_
