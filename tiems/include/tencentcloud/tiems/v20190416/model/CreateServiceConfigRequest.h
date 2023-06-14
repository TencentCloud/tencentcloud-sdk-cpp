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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_

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
                * CreateServiceConfig请求参数结构体
                */
                class CreateServiceConfigRequest : public AbstractModel
                {
                public:
                    CreateServiceConfigRequest();
                    ~CreateServiceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置名称
                     * @return Name 配置名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名称
                     * @param _name 配置名称
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
                     * 获取运行环境
                     * @return Runtime 运行环境
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行环境
                     * @param _runtime 运行环境
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * @return ModelUri 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * 
                     */
                    std::string GetModelUri() const;

                    /**
                     * 设置模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * @param _modelUri 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * 
                     */
                    void SetModelUri(const std::string& _modelUri);

                    /**
                     * 判断参数 ModelUri 是否已赋值
                     * @return ModelUri 是否已赋值
                     * 
                     */
                    bool ModelUriHasBeenSet() const;

                    /**
                     * 获取配置描述
                     * @return Description 配置描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置配置描述
                     * @param _description 配置描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行环境
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     */
                    std::string m_modelUri;
                    bool m_modelUriHasBeenSet;

                    /**
                     * 配置描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_
