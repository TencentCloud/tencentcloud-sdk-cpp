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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_

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
                * DeleteConfigTemplate请求参数结构体
                */
                class DeleteConfigTemplateRequest : public AbstractModel
                {
                public:
                    DeleteConfigTemplateRequest();
                    ~DeleteConfigTemplateRequest() = default;
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

                private:

                    /**
                     * 配置模板ID。该参数可以通过调用 [DescribeConfigTemplate](https://cloud.tencent.com/document/product/649/85856) 的返回值中的 ConfigTemplateId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=template)查看；也可以调用[CreateConfigTemplate](https://cloud.tencent.com/document/product/649/85861)创建新的配置模板。
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_
