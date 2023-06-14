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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_FILECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_FILECONFIG_H_

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
                * 文件配置项
                */
                class FileConfig : public AbstractModel
                {
                public:
                    FileConfig();
                    ~FileConfig() = default;
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
                     * 获取配置项文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFileName 配置项文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigFileName() const;

                    /**
                     * 设置配置项文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configFileName 配置项文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigFileName(const std::string& _configFileName);

                    /**
                     * 判断参数 ConfigFileName 是否已赋值
                     * @return ConfigFileName 是否已赋值
                     * 
                     */
                    bool ConfigFileNameHasBeenSet() const;

                    /**
                     * 获取配置项文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFileValue 配置项文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigFileValue() const;

                    /**
                     * 设置配置项文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configFileValue 配置项文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigFileValue(const std::string& _configFileValue);

                    /**
                     * 判断参数 ConfigFileValue 是否已赋值
                     * @return ConfigFileValue 是否已赋值
                     * 
                     */
                    bool ConfigFileValueHasBeenSet() const;

                    /**
                     * 获取配置项文件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFileCode 配置项文件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigFileCode() const;

                    /**
                     * 设置配置项文件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configFileCode 配置项文件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigFileCode(const std::string& _configFileCode);

                    /**
                     * 判断参数 ConfigFileCode 是否已赋值
                     * @return ConfigFileCode 是否已赋值
                     * 
                     */
                    bool ConfigFileCodeHasBeenSet() const;

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
                     * 获取配置项归属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 配置项归属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置配置项归属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 配置项归属应用ID
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
                     * 获取删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteFlag 删除标识
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

                    /**
                     * 获取配置项最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 配置项最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置配置项最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 配置项最后更新时间
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
                     * 获取发布路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFilePath 发布路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigFilePath() const;

                    /**
                     * 设置发布路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configFilePath 发布路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigFilePath(const std::string& _configFilePath);

                    /**
                     * 判断参数 ConfigFilePath 是否已赋值
                     * @return ConfigFilePath 是否已赋值
                     * 
                     */
                    bool ConfigFilePathHasBeenSet() const;

                    /**
                     * 获取后置命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigPostCmd 后置命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigPostCmd() const;

                    /**
                     * 设置后置命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configPostCmd 后置命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigPostCmd(const std::string& _configPostCmd);

                    /**
                     * 判断参数 ConfigPostCmd 是否已赋值
                     * @return ConfigPostCmd 是否已赋值
                     * 
                     */
                    bool ConfigPostCmdHasBeenSet() const;

                    /**
                     * 获取配置项文件长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFileValueLength 配置项文件长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConfigFileValueLength() const;

                    /**
                     * 设置配置项文件长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configFileValueLength 配置项文件长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigFileValueLength(const uint64_t& _configFileValueLength);

                    /**
                     * 判断参数 ConfigFileValueLength 是否已赋值
                     * @return ConfigFileValueLength 是否已赋值
                     * 
                     */
                    bool ConfigFileValueLengthHasBeenSet() const;

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
                     * 配置项文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configFileName;
                    bool m_configFileNameHasBeenSet;

                    /**
                     * 配置项文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configFileValue;
                    bool m_configFileValueHasBeenSet;

                    /**
                     * 配置项文件编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configFileCode;
                    bool m_configFileCodeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 配置项归属应用ID
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
                     * 删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 配置项版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_configVersionCount;
                    bool m_configVersionCountHasBeenSet;

                    /**
                     * 配置项最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 发布路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configFilePath;
                    bool m_configFilePathHasBeenSet;

                    /**
                     * 后置命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configPostCmd;
                    bool m_configPostCmdHasBeenSet;

                    /**
                     * 配置项文件长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_configFileValueLength;
                    bool m_configFileValueLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_FILECONFIG_H_
