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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERRESPONSE_H_

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
                * SetCustomizedConfigForLoadBalancer返回参数结构体
                */
                class SetCustomizedConfigForLoadBalancerResponse : public AbstractModel
                {
                public:
                    SetCustomizedConfigForLoadBalancerResponse();
                    ~SetCustomizedConfigForLoadBalancerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个性化配置ID，如：pz-1234abcd
                     * @return ConfigId 个性化配置ID，如：pz-1234abcd
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * 个性化配置ID，如：pz-1234abcd
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERRESPONSE_H_
