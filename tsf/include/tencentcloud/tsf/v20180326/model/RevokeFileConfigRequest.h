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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REVOKEFILECONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REVOKEFILECONFIGREQUEST_H_

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
                * RevokeFileConfig请求参数结构体
                */
                class RevokeFileConfigRequest : public AbstractModel
                {
                public:
                    RevokeFileConfigRequest();
                    ~RevokeFileConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照【配置项发布ID】进行撤回。可通过调用[DescribeFileConfigReleases](https://cloud.tencent.com/document/product/649/85855)查询已发布的文件配置列表或登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=file)-查看发布信息-发布情况进行查看；也可以调用[ReleaseFileConfig](https://cloud.tencent.com/document/product/649/58592)发布文件配置。
                     * @return ConfigReleaseId 按照【配置项发布ID】进行撤回。可通过调用[DescribeFileConfigReleases](https://cloud.tencent.com/document/product/649/85855)查询已发布的文件配置列表或登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=file)-查看发布信息-发布情况进行查看；也可以调用[ReleaseFileConfig](https://cloud.tencent.com/document/product/649/58592)发布文件配置。
                     * 
                     */
                    std::string GetConfigReleaseId() const;

                    /**
                     * 设置按照【配置项发布ID】进行撤回。可通过调用[DescribeFileConfigReleases](https://cloud.tencent.com/document/product/649/85855)查询已发布的文件配置列表或登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=file)-查看发布信息-发布情况进行查看；也可以调用[ReleaseFileConfig](https://cloud.tencent.com/document/product/649/58592)发布文件配置。
                     * @param _configReleaseId 按照【配置项发布ID】进行撤回。可通过调用[DescribeFileConfigReleases](https://cloud.tencent.com/document/product/649/85855)查询已发布的文件配置列表或登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=file)-查看发布信息-发布情况进行查看；也可以调用[ReleaseFileConfig](https://cloud.tencent.com/document/product/649/58592)发布文件配置。
                     * 
                     */
                    void SetConfigReleaseId(const std::string& _configReleaseId);

                    /**
                     * 判断参数 ConfigReleaseId 是否已赋值
                     * @return ConfigReleaseId 是否已赋值
                     * 
                     */
                    bool ConfigReleaseIdHasBeenSet() const;

                private:

                    /**
                     * 按照【配置项发布ID】进行撤回。可通过调用[DescribeFileConfigReleases](https://cloud.tencent.com/document/product/649/85855)查询已发布的文件配置列表或登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=file)-查看发布信息-发布情况进行查看；也可以调用[ReleaseFileConfig](https://cloud.tencent.com/document/product/649/58592)发布文件配置。
                     */
                    std::string m_configReleaseId;
                    bool m_configReleaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REVOKEFILECONFIGREQUEST_H_
