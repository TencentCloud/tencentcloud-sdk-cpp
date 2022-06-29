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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEKAFKADELIVERYCONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEKAFKADELIVERYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 日志投递kafka配置描述的缩简版
                */
                class SimpleKafkaDeliveryConfig : public AbstractModel
                {
                public:
                    SimpleKafkaDeliveryConfig();
                    ~SimpleKafkaDeliveryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigId 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                private:

                    /**
                     * 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEKAFKADELIVERYCONFIG_H_
