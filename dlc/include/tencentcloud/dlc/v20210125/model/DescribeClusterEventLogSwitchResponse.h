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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTEREVENTLOGSWITCHRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTEREVENTLOGSWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClusterEventLogSwitch返回参数结构体
                */
                class DescribeClusterEventLogSwitchResponse : public AbstractModel
                {
                public:
                    DescribeClusterEventLogSwitchResponse();
                    ~DescribeClusterEventLogSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TKE 集群 ID（回显）</p>
                     * @return ClusterId <p>TKE 集群 ID（回显）</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>事件日志是否已开启</p>
                     * @return Enable <p>事件日志是否已开启</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>关联的 CLS 日志集 ID（Enable=true 时返回）</p>
                     * @return LogsetId <p>关联的 CLS 日志集 ID（Enable=true 时返回）</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的 CLS 日志主题 ID（Enable=true 时返回）</p>
                     * @return TopicId <p>关联的 CLS 日志主题 ID（Enable=true 时返回）</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的 CLS 日志主题所在地域（Enable=true 时返回）</p>
                     * @return TopicRegion <p>关联的 CLS 日志主题所在地域（Enable=true 时返回）</p>
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                private:

                    /**
                     * <p>TKE 集群 ID（回显）</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>事件日志是否已开启</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>关联的 CLS 日志集 ID（Enable=true 时返回）</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>关联的 CLS 日志主题 ID（Enable=true 时返回）</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>关联的 CLS 日志主题所在地域（Enable=true 时返回）</p>
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTEREVENTLOGSWITCHRESPONSE_H_
