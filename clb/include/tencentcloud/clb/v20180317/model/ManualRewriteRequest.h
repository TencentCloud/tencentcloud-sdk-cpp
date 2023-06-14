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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RewriteLocationMap.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ManualRewrite请求参数结构体
                */
                class ManualRewriteRequest : public AbstractModel
                {
                public:
                    ManualRewriteRequest();
                    ~ManualRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取源监听器 ID。
                     * @return SourceListenerId 源监听器 ID。
                     * 
                     */
                    std::string GetSourceListenerId() const;

                    /**
                     * 设置源监听器 ID。
                     * @param _sourceListenerId 源监听器 ID。
                     * 
                     */
                    void SetSourceListenerId(const std::string& _sourceListenerId);

                    /**
                     * 判断参数 SourceListenerId 是否已赋值
                     * @return SourceListenerId 是否已赋值
                     * 
                     */
                    bool SourceListenerIdHasBeenSet() const;

                    /**
                     * 获取目标监听器 ID。
                     * @return TargetListenerId 目标监听器 ID。
                     * 
                     */
                    std::string GetTargetListenerId() const;

                    /**
                     * 设置目标监听器 ID。
                     * @param _targetListenerId 目标监听器 ID。
                     * 
                     */
                    void SetTargetListenerId(const std::string& _targetListenerId);

                    /**
                     * 判断参数 TargetListenerId 是否已赋值
                     * @return TargetListenerId 是否已赋值
                     * 
                     */
                    bool TargetListenerIdHasBeenSet() const;

                    /**
                     * 获取转发规则之间的重定向关系。
                     * @return RewriteInfos 转发规则之间的重定向关系。
                     * 
                     */
                    std::vector<RewriteLocationMap> GetRewriteInfos() const;

                    /**
                     * 设置转发规则之间的重定向关系。
                     * @param _rewriteInfos 转发规则之间的重定向关系。
                     * 
                     */
                    void SetRewriteInfos(const std::vector<RewriteLocationMap>& _rewriteInfos);

                    /**
                     * 判断参数 RewriteInfos 是否已赋值
                     * @return RewriteInfos 是否已赋值
                     * 
                     */
                    bool RewriteInfosHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 源监听器 ID。
                     */
                    std::string m_sourceListenerId;
                    bool m_sourceListenerIdHasBeenSet;

                    /**
                     * 目标监听器 ID。
                     */
                    std::string m_targetListenerId;
                    bool m_targetListenerIdHasBeenSet;

                    /**
                     * 转发规则之间的重定向关系。
                     */
                    std::vector<RewriteLocationMap> m_rewriteInfos;
                    bool m_rewriteInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_
