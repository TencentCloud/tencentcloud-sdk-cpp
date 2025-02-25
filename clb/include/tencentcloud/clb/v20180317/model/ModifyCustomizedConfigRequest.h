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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyCustomizedConfig请求参数结构体
                */
                class ModifyCustomizedConfigRequest : public AbstractModel
                {
                public:
                    ModifyCustomizedConfigRequest();
                    ~ModifyCustomizedConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置名字
                     * @return ConfigName 配置名字
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名字
                     * @param _configName 配置名字
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
                     * 获取配置ID
                     * @return UconfigId 配置ID
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置配置ID
                     * @param _uconfigId 配置ID
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取配置内容
                     * @return ConfigContent 配置内容
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置配置内容
                     * @param _configContent 配置内容
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                private:

                    /**
                     * 配置名字
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置ID
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * 配置内容
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_
