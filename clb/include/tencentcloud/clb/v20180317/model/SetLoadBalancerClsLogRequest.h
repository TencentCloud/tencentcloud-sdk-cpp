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
                     * 获取负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @return LoadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @param _loadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
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
                     * 获取日志服务(CLS)的日志集 ID。
<li>增加和更新日志主题时可调用 [DescribeLogsets](https://cloud.tencent.com/document/product/614/58624) 接口获取日志集 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * @return LogSetId 日志服务(CLS)的日志集 ID。
<li>增加和更新日志主题时可调用 [DescribeLogsets](https://cloud.tencent.com/document/product/614/58624) 接口获取日志集 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置日志服务(CLS)的日志集 ID。
<li>增加和更新日志主题时可调用 [DescribeLogsets](https://cloud.tencent.com/document/product/614/58624) 接口获取日志集 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * @param _logSetId 日志服务(CLS)的日志集 ID。
<li>增加和更新日志主题时可调用 [DescribeLogsets](https://cloud.tencent.com/document/product/614/58624) 接口获取日志集 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取日志服务(CLS)的日志主题 ID。
<li>增加和更新日志主题时可调用 [DescribeTopics](https://cloud.tencent.com/document/product/614/56454) 接口获取日志主题 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * @return LogTopicId 日志服务(CLS)的日志主题 ID。
<li>增加和更新日志主题时可调用 [DescribeTopics](https://cloud.tencent.com/document/product/614/56454) 接口获取日志主题 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置日志服务(CLS)的日志主题 ID。
<li>增加和更新日志主题时可调用 [DescribeTopics](https://cloud.tencent.com/document/product/614/56454) 接口获取日志主题 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * @param _logTopicId 日志服务(CLS)的日志主题 ID。
<li>增加和更新日志主题时可调用 [DescribeTopics](https://cloud.tencent.com/document/product/614/56454) 接口获取日志主题 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取日志类型：
<li>ACCESS：访问日志</li>
<li>HEALTH：健康检查日志</li>
默认为ACCESS。
                     * @return LogType 日志类型：
<li>ACCESS：访问日志</li>
<li>HEALTH：健康检查日志</li>
默认为ACCESS。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型：
<li>ACCESS：访问日志</li>
<li>HEALTH：健康检查日志</li>
默认为ACCESS。
                     * @param _logType 日志类型：
<li>ACCESS：访问日志</li>
<li>HEALTH：健康检查日志</li>
默认为ACCESS。
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 日志服务(CLS)的日志集 ID。
<li>增加和更新日志主题时可调用 [DescribeLogsets](https://cloud.tencent.com/document/product/614/58624) 接口获取日志集 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志服务(CLS)的日志主题 ID。
<li>增加和更新日志主题时可调用 [DescribeTopics](https://cloud.tencent.com/document/product/614/56454) 接口获取日志主题 ID。</li>
<li>删除日志主题时，此参数填写为**空字符串**即可。</li>
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * 日志类型：
<li>ACCESS：访问日志</li>
<li>HEALTH：健康检查日志</li>
默认为ACCESS。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_
