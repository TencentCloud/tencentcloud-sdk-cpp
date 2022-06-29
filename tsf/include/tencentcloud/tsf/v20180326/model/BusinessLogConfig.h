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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/BusinessLogConfigSchema.h>
#include <tencentcloud/tsf/v20180326/model/BusinesLogConfigAssociatedGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 业务日志配置
                */
                class BusinessLogConfig : public AbstractModel
                {
                public:
                    BusinessLogConfig();
                    ~BusinessLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项ID
                     * @return ConfigId 配置项ID
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项ID
                     * @param ConfigId 配置项ID
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项名称
                     * @return ConfigName 配置项名称
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
                     * @param ConfigName 配置项名称
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置项日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigPath 配置项日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置配置项日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigPath 配置项日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigPath(const std::string& _configPath);

                    /**
                     * 判断参数 ConfigPath 是否已赋值
                     * @return ConfigPath 是否已赋值
                     */
                    bool ConfigPathHasBeenSet() const;

                    /**
                     * 获取配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigDesc 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigDesc() const;

                    /**
                     * 设置配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigDesc 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigDesc(const std::string& _configDesc);

                    /**
                     * 判断参数 ConfigDesc 是否已赋值
                     * @return ConfigDesc 是否已赋值
                     */
                    bool ConfigDescHasBeenSet() const;

                    /**
                     * 获取配置项标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTags 配置项标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigTags() const;

                    /**
                     * 设置配置项标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigTags 配置项标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigTags(const std::string& _configTags);

                    /**
                     * 判断参数 ConfigTags 是否已赋值
                     * @return ConfigTags 是否已赋值
                     */
                    bool ConfigTagsHasBeenSet() const;

                    /**
                     * 获取配置项对应的ES管道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigPipeline 配置项对应的ES管道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigPipeline() const;

                    /**
                     * 设置配置项对应的ES管道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigPipeline 配置项对应的ES管道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigPipeline(const std::string& _configPipeline);

                    /**
                     * 判断参数 ConfigPipeline 是否已赋值
                     * @return ConfigPipeline 是否已赋值
                     */
                    bool ConfigPipelineHasBeenSet() const;

                    /**
                     * 获取配置项创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigCreateTime 配置项创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigCreateTime() const;

                    /**
                     * 设置配置项创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigCreateTime 配置项创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigCreateTime(const std::string& _configCreateTime);

                    /**
                     * 判断参数 ConfigCreateTime 是否已赋值
                     * @return ConfigCreateTime 是否已赋值
                     */
                    bool ConfigCreateTimeHasBeenSet() const;

                    /**
                     * 获取配置项更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigUpdateTime 配置项更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigUpdateTime() const;

                    /**
                     * 设置配置项更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigUpdateTime 配置项更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigUpdateTime(const std::string& _configUpdateTime);

                    /**
                     * 判断参数 ConfigUpdateTime 是否已赋值
                     * @return ConfigUpdateTime 是否已赋值
                     */
                    bool ConfigUpdateTimeHasBeenSet() const;

                    /**
                     * 获取配置项解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigSchema 配置项解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BusinessLogConfigSchema GetConfigSchema() const;

                    /**
                     * 设置配置项解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigSchema 配置项解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigSchema(const BusinessLogConfigSchema& _configSchema);

                    /**
                     * 判断参数 ConfigSchema 是否已赋值
                     * @return ConfigSchema 是否已赋值
                     */
                    bool ConfigSchemaHasBeenSet() const;

                    /**
                     * 获取配置项关联部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigAssociatedGroups 配置项关联部署组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BusinesLogConfigAssociatedGroup> GetConfigAssociatedGroups() const;

                    /**
                     * 设置配置项关联部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigAssociatedGroups 配置项关联部署组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigAssociatedGroups(const std::vector<BusinesLogConfigAssociatedGroup>& _configAssociatedGroups);

                    /**
                     * 判断参数 ConfigAssociatedGroups 是否已赋值
                     * @return ConfigAssociatedGroups 是否已赋值
                     */
                    bool ConfigAssociatedGroupsHasBeenSet() const;

                private:

                    /**
                     * 配置项ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置项名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置项日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configDesc;
                    bool m_configDescHasBeenSet;

                    /**
                     * 配置项标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTags;
                    bool m_configTagsHasBeenSet;

                    /**
                     * 配置项对应的ES管道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configPipeline;
                    bool m_configPipelineHasBeenSet;

                    /**
                     * 配置项创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configCreateTime;
                    bool m_configCreateTimeHasBeenSet;

                    /**
                     * 配置项更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configUpdateTime;
                    bool m_configUpdateTimeHasBeenSet;

                    /**
                     * 配置项解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BusinessLogConfigSchema m_configSchema;
                    bool m_configSchemaHasBeenSet;

                    /**
                     * 配置项关联部署组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BusinesLogConfigAssociatedGroup> m_configAssociatedGroups;
                    bool m_configAssociatedGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIG_H_
