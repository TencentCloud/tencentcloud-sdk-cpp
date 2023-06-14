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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERUNTIMEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERUNTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateRuntime请求参数结构体
                */
                class CreateRuntimeRequest : public AbstractModel
                {
                public:
                    CreateRuntimeRequest();
                    ~CreateRuntimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全局唯一的运行环境名称
                     * @return Name 全局唯一的运行环境名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置全局唯一的运行环境名称
                     * @param _name 全局唯一的运行环境名称
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
                     * 获取运行环境镜像地址
                     * @return Image 运行环境镜像地址
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置运行环境镜像地址
                     * @param _image 运行环境镜像地址
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取运行环境框架
                     * @return Framework 运行环境框架
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置运行环境框架
                     * @param _framework 运行环境框架
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取运行环境描述
                     * @return Description 运行环境描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置运行环境描述
                     * @param _description 运行环境描述
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
                     * 获取是否支持健康检查，默认为False
                     * @return HealthCheckOn 是否支持健康检查，默认为False
                     * 
                     */
                    bool GetHealthCheckOn() const;

                    /**
                     * 设置是否支持健康检查，默认为False
                     * @param _healthCheckOn 是否支持健康检查，默认为False
                     * 
                     */
                    void SetHealthCheckOn(const bool& _healthCheckOn);

                    /**
                     * 判断参数 HealthCheckOn 是否已赋值
                     * @return HealthCheckOn 是否已赋值
                     * 
                     */
                    bool HealthCheckOnHasBeenSet() const;

                private:

                    /**
                     * 全局唯一的运行环境名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行环境镜像地址
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 运行环境框架
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 运行环境描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否支持健康检查，默认为False
                     */
                    bool m_healthCheckOn;
                    bool m_healthCheckOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERUNTIMEREQUEST_H_
