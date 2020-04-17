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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_

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
                * SetLoadBalancerClsLog请求参数结构体
                */
                class SetLoadBalancerClsLogRequest : public AbstractModel
                {
                public:
                    SetLoadBalancerClsLogRequest();
                    ~SetLoadBalancerClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param LoadBalancerId 负载均衡实例 ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取日志服务(CLS)的日志集ID
                     * @return LogSetId 日志服务(CLS)的日志集ID
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置日志服务(CLS)的日志集ID
                     * @param LogSetId 日志服务(CLS)的日志集ID
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取日志服务(CLS)的日志主题ID
                     * @return LogTopicId 日志服务(CLS)的日志主题ID
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置日志服务(CLS)的日志主题ID
                     * @param LogTopicId 日志服务(CLS)的日志主题ID
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 日志服务(CLS)的日志集ID
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志服务(CLS)的日志主题ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_
