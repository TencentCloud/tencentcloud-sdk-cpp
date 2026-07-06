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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECLUSTERAUDITREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECLUSTERAUDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EnableClusterAudit请求参数结构体
                */
                class EnableClusterAuditRequest : public AbstractModel
                {
                public:
                    EnableClusterAuditRequest();
                    ~EnableClusterAuditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集ID，可以通过cls接口或者控制台获取</p>
                     * @return LogsetId <p>CLS日志集ID，可以通过cls接口或者控制台获取</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>CLS日志集ID，可以通过cls接口或者控制台获取</p>
                     * @param _logsetId <p>CLS日志集ID，可以通过cls接口或者控制台获取</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志主题ID，可以通过cls接口或者控制台获取</p>
                     * @return TopicId <p>CLS日志主题ID，可以通过cls接口或者控制台获取</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>CLS日志主题ID，可以通过cls接口或者控制台获取</p>
                     * @param _topicId <p>CLS日志主题ID，可以通过cls接口或者控制台获取</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>topic所在region，默认为集群当前region</p>
                     * @return TopicRegion <p>topic所在region，默认为集群当前region</p>
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置<p>topic所在region，默认为集群当前region</p>
                     * @param _topicRegion <p>topic所在region，默认为集群当前region</p>
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                    /**
                     * 获取<p>集群类型 tke/eks</p><p>默认值：tke</p>
                     * @return ClusterType <p>集群类型 tke/eks</p><p>默认值：tke</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型 tke/eks</p><p>默认值：tke</p>
                     * @param _clusterType <p>集群类型 tke/eks</p><p>默认值：tke</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>CLS日志集ID，可以通过cls接口或者控制台获取</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>CLS日志主题ID，可以通过cls接口或者控制台获取</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>topic所在region，默认为集群当前region</p>
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                    /**
                     * <p>集群类型 tke/eks</p><p>默认值：tke</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECLUSTERAUDITREQUEST_H_
