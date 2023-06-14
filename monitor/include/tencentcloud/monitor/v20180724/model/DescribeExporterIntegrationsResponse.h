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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/IntegrationConfiguration.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeExporterIntegrations返回参数结构体
                */
                class DescribeExporterIntegrationsResponse : public AbstractModel
                {
                public:
                    DescribeExporterIntegrationsResponse();
                    ~DescribeExporterIntegrationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集成配置列表
                     * @return IntegrationSet 集成配置列表
                     * 
                     */
                    std::vector<IntegrationConfiguration> GetIntegrationSet() const;

                    /**
                     * 判断参数 IntegrationSet 是否已赋值
                     * @return IntegrationSet 是否已赋值
                     * 
                     */
                    bool IntegrationSetHasBeenSet() const;

                private:

                    /**
                     * 集成配置列表
                     */
                    std::vector<IntegrationConfiguration> m_integrationSet;
                    bool m_integrationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSRESPONSE_H_
