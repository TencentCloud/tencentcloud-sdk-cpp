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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/EnvironmentConfig.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CreateEnvironment请求参数结构体
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境名称。
                     * @return Name 环境名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置环境名称。
                     * @param _name 环境名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取环境配置信息。
                     * @return Config 环境配置信息。
                     * 
                     */
                    EnvironmentConfig GetConfig() const;

                    /**
                     * 设置环境配置信息。
                     * @param _config 环境配置信息。
                     * 
                     */
                    void SetConfig(const EnvironmentConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取环境描述。
                     * @return Description 环境描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置环境描述。
                     * @param _description 环境描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否为默认环境。
                     * @return IsDefault 是否为默认环境。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认环境。
                     * @param _isDefault 是否为默认环境。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 环境名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境配置信息。
                     */
                    EnvironmentConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 环境描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否为默认环境。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_
