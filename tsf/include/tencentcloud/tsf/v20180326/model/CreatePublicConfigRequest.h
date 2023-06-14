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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGREQUEST_H_

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
                * CreatePublicConfig请求参数结构体
                */
                class CreatePublicConfigRequest : public AbstractModel
                {
                public:
                    CreatePublicConfigRequest();
                    ~CreatePublicConfigRequest() = default;
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
                     * 获取配置项值，总是接收yaml格式的内容
                     * @return ConfigValue 配置项值，总是接收yaml格式的内容
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置配置项值，总是接收yaml格式的内容
                     * @param _configValue 配置项值，总是接收yaml格式的内容
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
                     * 获取配置项类型
                     * @return ConfigType 配置项类型
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置项类型
                     * @param _configType 配置项类型
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
                     * 配置项值，总是接收yaml格式的内容
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                    /**
                     * 配置项版本描述
                     */
                    std::string m_configVersionDesc;
                    bool m_configVersionDescHasBeenSet;

                    /**
                     * 配置项类型
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGREQUEST_H_
