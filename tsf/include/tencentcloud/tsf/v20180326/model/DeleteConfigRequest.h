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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGREQUEST_H_

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
                * DeleteConfig请求参数结构体
                */
                class DeleteConfigRequest : public AbstractModel
                {
                public:
                    DeleteConfigRequest();
                    ~DeleteConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID。该参数可以通过调用 [DescribeConfigs](https://cloud.tencent.com/document/product/649/38340) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=app)配置详情-配置版本页查看；也可以调用[CreateConfig](https://cloud.tencent.com/document/product/649/38348)创建新的配置。
                     * @return ConfigId 配置ID。该参数可以通过调用 [DescribeConfigs](https://cloud.tencent.com/document/product/649/38340) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=app)配置详情-配置版本页查看；也可以调用[CreateConfig](https://cloud.tencent.com/document/product/649/38348)创建新的配置。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置ID。该参数可以通过调用 [DescribeConfigs](https://cloud.tencent.com/document/product/649/38340) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=app)配置详情-配置版本页查看；也可以调用[CreateConfig](https://cloud.tencent.com/document/product/649/38348)创建新的配置。
                     * @param _configId 配置ID。该参数可以通过调用 [DescribeConfigs](https://cloud.tencent.com/document/product/649/38340) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=app)配置详情-配置版本页查看；也可以调用[CreateConfig](https://cloud.tencent.com/document/product/649/38348)创建新的配置。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * 配置ID。该参数可以通过调用 [DescribeConfigs](https://cloud.tencent.com/document/product/649/38340) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=app)配置详情-配置版本页查看；也可以调用[CreateConfig](https://cloud.tencent.com/document/product/649/38348)创建新的配置。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGREQUEST_H_
