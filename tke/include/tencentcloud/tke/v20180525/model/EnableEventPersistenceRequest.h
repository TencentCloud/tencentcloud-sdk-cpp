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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEEVENTPERSISTENCEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEEVENTPERSISTENCEREQUEST_H_

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
                * EnableEventPersistence请求参数结构体
                */
                class EnableEventPersistenceRequest : public AbstractModel
                {
                public:
                    EnableEventPersistenceRequest();
                    ~EnableEventPersistenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取cls服务的logsetID
                     * @return LogsetId cls服务的logsetID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置cls服务的logsetID
                     * @param _logsetId cls服务的logsetID
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
                     * 获取cls服务的topicID
                     * @return TopicId cls服务的topicID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置cls服务的topicID
                     * @param _topicId cls服务的topicID
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
                     * 获取topic所在地域，默认为集群所在地域
                     * @return TopicRegion topic所在地域，默认为集群所在地域
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置topic所在地域，默认为集群所在地域
                     * @param _topicRegion topic所在地域，默认为集群所在地域
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * cls服务的logsetID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * cls服务的topicID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * topic所在地域，默认为集群所在地域
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEEVENTPERSISTENCEREQUEST_H_
