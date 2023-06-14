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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LBItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLBListeners返回参数结构体
                */
                class DescribeLBListenersResponse : public AbstractModel
                {
                public:
                    DescribeLBListenersResponse();
                    ~DescribeLBListenersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定的后端规则
                     * @return LoadBalancers 绑定的后端规则
                     * 
                     */
                    std::vector<LBItem> GetLoadBalancers() const;

                    /**
                     * 判断参数 LoadBalancers 是否已赋值
                     * @return LoadBalancers 是否已赋值
                     * 
                     */
                    bool LoadBalancersHasBeenSet() const;

                private:

                    /**
                     * 绑定的后端规则
                     */
                    std::vector<LBItem> m_loadBalancers;
                    bool m_loadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSRESPONSE_H_
