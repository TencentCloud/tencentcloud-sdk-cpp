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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEFILECONFIGWITHDETAILRESPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEFILECONFIGWITHDETAILRESPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateFileConfigWithDetailResp请求参数结构体
                */
                class CreateFileConfigWithDetailRespRequest : public AbstractModel
                {
                public:
                    CreateFileConfigWithDetailRespRequest();
                    ~CreateFileConfigWithDetailRespRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项名称
                     * @return ConfigName 配置项名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
                     * @param _configName 配置项名称
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
                     * @return ConfigVersion 配置项版本
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置项版本
                     * @param _configVersion 配置项版本
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
                     * 获取配置项文件名
                     * @return ConfigFileName 配置项文件名
                     * 
                     */
                    std::string GetConfigFileName() const;

                    /**
                     * 设置配置项文件名
                     * @param _configFileName 配置项文件名
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
                     * 获取配置项文件内容（原始内容编码需要 utf-8 格式，如果 ConfigFileCode 为 gbk，后台会进行转换）
                     * @return ConfigFileValue 配置项文件内容（原始内容编码需要 utf-8 格式，如果 ConfigFileCode 为 gbk，后台会进行转换）
                     * 
                     */
                    std::string GetConfigFileValue() const;

                    /**
                     * 设置配置项文件内容（原始内容编码需要 utf-8 格式，如果 ConfigFileCode 为 gbk，后台会进行转换）
                     * @param _configFileValue 配置项文件内容（原始内容编码需要 utf-8 格式，如果 ConfigFileCode 为 gbk，后台会进行转换）
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
                     * 获取配置项关联应用ID
                     * @return ApplicationId 配置项关联应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置配置项关联应用ID
                     * @param _applicationId 配置项关联应用ID
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
                     * 获取发布路径
                     * @return ConfigFilePath 发布路径
                     * 
                     */
                    std::string GetConfigFilePath() const;

                    /**
                     * 设置发布路径
                     * @param _configFilePath 发布路径
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
                     * 获取配置项版本描述
                     * @return ConfigVersionDesc 配置项版本描述
                     * 
                     */
                    std::string GetConfigVersionDesc() const;

                    /**
                     * 设置配置项版本描述
                     * @param _configVersionDesc 配置项版本描述
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
                     * 获取配置项文件编码，utf-8 或 gbk。注：如果选择 gbk，需要新版本 tsf-consul-template （公有云虚拟机需要使用 1.32 tsf-agent，容器需要从文档中获取最新的 tsf-consul-template-docker.tar.gz）的支持
                     * @return ConfigFileCode 配置项文件编码，utf-8 或 gbk。注：如果选择 gbk，需要新版本 tsf-consul-template （公有云虚拟机需要使用 1.32 tsf-agent，容器需要从文档中获取最新的 tsf-consul-template-docker.tar.gz）的支持
                     * 
                     */
                    std::string GetConfigFileCode() const;

                    /**
                     * 设置配置项文件编码，utf-8 或 gbk。注：如果选择 gbk，需要新版本 tsf-consul-template （公有云虚拟机需要使用 1.32 tsf-agent，容器需要从文档中获取最新的 tsf-consul-template-docker.tar.gz）的支持
                     * @param _configFileCode 配置项文件编码，utf-8 或 gbk。注：如果选择 gbk，需要新版本 tsf-consul-template （公有云虚拟机需要使用 1.32 tsf-agent，容器需要从文档中获取最新的 tsf-consul-template-docker.tar.gz）的支持
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
                     * 获取后置命令
                     * @return ConfigPostCmd 后置命令
                     * 
                     */
                    std::string GetConfigPostCmd() const;

                    /**
                     * 设置后置命令
                     * @param _configPostCmd 后置命令
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
                     * 获取Base64编码的配置项
                     * @return EncodeWithBase64 Base64编码的配置项
                     * 
                     */
                    bool GetEncodeWithBase64() const;

                    /**
                     * 设置Base64编码的配置项
                     * @param _encodeWithBase64 Base64编码的配置项
                     * 
                     */
                    void SetEncodeWithBase64(const bool& _encodeWithBase64);

                    /**
                     * 判断参数 EncodeWithBase64 是否已赋值
                     * @return EncodeWithBase64 是否已赋值
                     * 
                     */
                    bool EncodeWithBase64HasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 配置项名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置项版本
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * 配置项文件名
                     */
                    std::string m_configFileName;
                    bool m_configFileNameHasBeenSet;

                    /**
                     * 配置项文件内容（原始内容编码需要 utf-8 格式，如果 ConfigFileCode 为 gbk，后台会进行转换）
                     */
                    std::string m_configFileValue;
                    bool m_configFileValueHasBeenSet;

                    /**
                     * 配置项关联应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 发布路径
                     */
                    std::string m_configFilePath;
                    bool m_configFilePathHasBeenSet;

                    /**
                     * 配置项版本描述
                     */
                    std::string m_configVersionDesc;
                    bool m_configVersionDescHasBeenSet;

                    /**
                     * 配置项文件编码，utf-8 或 gbk。注：如果选择 gbk，需要新版本 tsf-consul-template （公有云虚拟机需要使用 1.32 tsf-agent，容器需要从文档中获取最新的 tsf-consul-template-docker.tar.gz）的支持
                     */
                    std::string m_configFileCode;
                    bool m_configFileCodeHasBeenSet;

                    /**
                     * 后置命令
                     */
                    std::string m_configPostCmd;
                    bool m_configPostCmdHasBeenSet;

                    /**
                     * Base64编码的配置项
                     */
                    bool m_encodeWithBase64;
                    bool m_encodeWithBase64HasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEFILECONFIGWITHDETAILRESPREQUEST_H_
