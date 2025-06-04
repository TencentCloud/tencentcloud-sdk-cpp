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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBOPERATEPROTECTRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBOPERATEPROTECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LBOperateProtectInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLBOperateProtect返回参数结构体
                */
                class DescribeLBOperateProtectResponse : public AbstractModel
                {
                public:
                    DescribeLBOperateProtectResponse();
                    ~DescribeLBOperateProtectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的负载均衡操作保护信息数组。
                     * @return LoadBalancerSet 返回的负载均衡操作保护信息数组。
                     * 
                     */
                    std::vector<LBOperateProtectInfo> GetLoadBalancerSet() const;

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                private:

                    /**
                     * 返回的负载均衡操作保护信息数组。
                     */
                    std::vector<LBOperateProtectInfo> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBOPERATEPROTECTRESPONSE_H_
