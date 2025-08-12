/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATECONFIGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATECONFIGTEMPLATEREQUEST_H_

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
                * UpdateConfigTemplate请求参数结构体
                */
                class UpdateConfigTemplateRequest : public AbstractModel
                {
                public:
                    UpdateConfigTemplateRequest();
                    ~UpdateConfigTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     * @return ConfigTemplateId 配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     * 
                     */
                    std::string GetConfigTemplateId() const;

                    /**
                     * 设置配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     * @param _configTemplateId 配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     * 
                     */
                    void SetConfigTemplateId(const std::string& _configTemplateId);

                    /**
                     * 判断参数 ConfigTemplateId 是否已赋值
                     * @return ConfigTemplateId 是否已赋值
                     * 
                     */
                    bool ConfigTemplateIdHasBeenSet() const;

                    /**
                     * 获取配置模板名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”），且不能以分隔符开头或结尾。
                     * @return ConfigTemplateName 配置模板名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”），且不能以分隔符开头或结尾。
                     * 
                     */
                    std::string GetConfigTemplateName() const;

                    /**
                     * 设置配置模板名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”），且不能以分隔符开头或结尾。
                     * @param _configTemplateName 配置模板名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”），且不能以分隔符开头或结尾。
                     * 
                     */
                    void SetConfigTemplateName(const std::string& _configTemplateName);

                    /**
                     * 判断参数 ConfigTemplateName 是否已赋值
                     * @return ConfigTemplateName 是否已赋值
                     * 
                     */
                    bool ConfigTemplateNameHasBeenSet() const;

                    /**
                     * 获取配置模板对应的微服务框架。
- Ribbon：Ribbon类型配置模板
- Hystrix：Hystrix类型配置模板
- Zuul：Zuul类型配置模板
- customize：自定义类型配置模板
                     * @return ConfigTemplateType 配置模板对应的微服务框架。
- Ribbon：Ribbon类型配置模板
- Hystrix：Hystrix类型配置模板
- Zuul：Zuul类型配置模板
- customize：自定义类型配置模板
                     * 
                     */
                    std::string GetConfigTemplateType() const;

                    /**
                     * 设置配置模板对应的微服务框架。
- Ribbon：Ribbon类型配置模板
- Hystrix：Hystrix类型配置模板
- Zuul：Zuul类型配置模板
- customize：自定义类型配置模板
                     * @param _configTemplateType 配置模板对应的微服务框架。
- Ribbon：Ribbon类型配置模板
- Hystrix：Hystrix类型配置模板
- Zuul：Zuul类型配置模板
- customize：自定义类型配置模板
                     * 
                     */
                    void SetConfigTemplateType(const std::string& _configTemplateType);

                    /**
                     * 判断参数 ConfigTemplateType 是否已赋值
                     * @return ConfigTemplateType 是否已赋值
                     * 
                     */
                    bool ConfigTemplateTypeHasBeenSet() const;

                    /**
                     * 获取配置模板数据。
                     * @return ConfigTemplateValue 配置模板数据。
                     * 
                     */
                    std::string GetConfigTemplateValue() const;

                    /**
                     * 设置配置模板数据。
                     * @param _configTemplateValue 配置模板数据。
                     * 
                     */
                    void SetConfigTemplateValue(const std::string& _configTemplateValue);

                    /**
                     * 判断参数 ConfigTemplateValue 是否已赋值
                     * @return ConfigTemplateValue 是否已赋值
                     * 
                     */
                    bool ConfigTemplateValueHasBeenSet() const;

                    /**
                     * 获取配置模板描述，最多支持200个字符。
                     * @return ConfigTemplateDesc 配置模板描述，最多支持200个字符。
                     * 
                     */
                    std::string GetConfigTemplateDesc() const;

                    /**
                     * 设置配置模板描述，最多支持200个字符。
                     * @param _configTemplateDesc 配置模板描述，最多支持200个字符。
                     * 
                     */
                    void SetConfigTemplateDesc(const std::string& _configTemplateDesc);

                    /**
                     * 判断参数 ConfigTemplateDesc 是否已赋值
                     * @return ConfigTemplateDesc 是否已赋值
                     * 
                     */
                    bool ConfigTemplateDescHasBeenSet() const;

                private:

                    /**
                     * 配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                    /**
                     * 配置模板名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”），且不能以分隔符开头或结尾。
                     */
                    std::string m_configTemplateName;
                    bool m_configTemplateNameHasBeenSet;

                    /**
                     * 配置模板对应的微服务框架。
- Ribbon：Ribbon类型配置模板
- Hystrix：Hystrix类型配置模板
- Zuul：Zuul类型配置模板
- customize：自定义类型配置模板
                     */
                    std::string m_configTemplateType;
                    bool m_configTemplateTypeHasBeenSet;

                    /**
                     * 配置模板数据。
                     */
                    std::string m_configTemplateValue;
                    bool m_configTemplateValueHasBeenSet;

                    /**
                     * 配置模板描述，最多支持200个字符。
                     */
                    std::string m_configTemplateDesc;
                    bool m_configTemplateDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATECONFIGTEMPLATEREQUEST_H_
