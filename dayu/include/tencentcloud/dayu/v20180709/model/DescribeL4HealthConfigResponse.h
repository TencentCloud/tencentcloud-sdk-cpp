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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4HEALTHCONFIGRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4HEALTHCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4HealthConfig.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeL4HealthConfig返回参数结构体
                */
                class DescribeL4HealthConfigResponse : public AbstractModel
                {
                public:
                    DescribeL4HealthConfigResponse();
                    ~DescribeL4HealthConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取四层健康检查配置数组
                     * @return HealthConfig 四层健康检查配置数组
                     * 
                     */
                    std::vector<L4HealthConfig> GetHealthConfig() const;

                    /**
                     * 判断参数 HealthConfig 是否已赋值
                     * @return HealthConfig 是否已赋值
                     * 
                     */
                    bool HealthConfigHasBeenSet() const;

                private:

                    /**
                     * 四层健康检查配置数组
                     */
                    std::vector<L4HealthConfig> m_healthConfig;
                    bool m_healthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4HEALTHCONFIGRESPONSE_H_
