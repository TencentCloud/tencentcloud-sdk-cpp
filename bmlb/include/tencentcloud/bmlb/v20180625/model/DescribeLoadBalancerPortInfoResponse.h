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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERPORTINFORESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERPORTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/LoadBalancerPortInfoListener.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerPortInfo返回参数结构体
                */
                class DescribeLoadBalancerPortInfoResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerPortInfoResponse();
                    ~DescribeLoadBalancerPortInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的监听器列表（四层和七层）。
                     * @return ListenerSet 返回的监听器列表（四层和七层）。
                     * 
                     */
                    std::vector<LoadBalancerPortInfoListener> GetListenerSet() const;

                    /**
                     * 判断参数 ListenerSet 是否已赋值
                     * @return ListenerSet 是否已赋值
                     * 
                     */
                    bool ListenerSetHasBeenSet() const;

                private:

                    /**
                     * 返回的监听器列表（四层和七层）。
                     */
                    std::vector<LoadBalancerPortInfoListener> m_listenerSet;
                    bool m_listenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERPORTINFORESPONSE_H_
