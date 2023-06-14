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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONFIG_H_

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
                * 配置项
                */
                class Config : public AbstractModel
                {
                public:
                    Config();
                    ~Config() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId 配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersion 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersion 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                    /**
                     * 获取配置项版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersionDesc 配置项版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigVersionDesc() const;

                    /**
                     * 设置配置项版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersionDesc 配置项版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersionDesc(const std::string& _configVersionDesc);

                    /**
                     * 判断参数 ConfigVersionDesc 是否已赋值
                     * @return ConfigVersionDesc 是否已赋值
                     * 
                     */
                    bool ConfigVersionDescHasBeenSet() const;

                    /**
                     * 获取配置项值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigValue 配置项值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置配置项值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configValue 配置项值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                    /**
                     * 获取配置项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigType 配置项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configType 配置项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取删除标识，true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标识，true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识，true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteFlag 删除标识，true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersionCount 配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfigVersionCount() const;

                    /**
                     * 设置配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersionCount 配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersionCount(const int64_t& _configVersionCount);

                    /**
                     * 判断参数 ConfigVersionCount 是否已赋值
                     * @return ConfigVersionCount 是否已赋值
                     * 
                     */
                    bool ConfigVersionCountHasBeenSet() const;

                private:

                    /**
                     * 配置项ID
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

                    /**
                     * 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * 配置项版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configVersionDesc;
                    bool m_configVersionDescHasBeenSet;

                    /**
                     * 配置项值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                    /**
                     * 配置项类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 删除标识，true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_configVersionCount;
                    bool m_configVersionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONFIG_H_
