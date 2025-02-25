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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_

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
                * AddCustomizedConfig请求参数结构体
                */
                class AddCustomizedConfigRequest : public AbstractModel
                {
                public:
                    AddCustomizedConfigRequest();
                    ~AddCustomizedConfigRequest() = default;
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
                     * 获取配置类型，取值范围["CLB", "SERVER", "LOCATION"]，分别表示CLB配置，server配置，location配置。
                     * @return ConfigType 配置类型，取值范围["CLB", "SERVER", "LOCATION"]，分别表示CLB配置，server配置，location配置。
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置类型，取值范围["CLB", "SERVER", "LOCATION"]，分别表示CLB配置，server配置，location配置。
                     * @param _configType 配置类型，取值范围["CLB", "SERVER", "LOCATION"]，分别表示CLB配置，server配置，location配置。
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
                     * 配置类型，取值范围["CLB", "SERVER", "LOCATION"]，分别表示CLB配置，server配置，location配置。
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_
