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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/TopicRecord.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteTopics请求参数结构体
                */
                class DeleteTopicsRequest : public AbstractModel
                {
                public:
                    DeleteTopicsRequest();
                    ~DeleteTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主题集合，每次最多删除20个。
                     * @return TopicSets 主题集合，每次最多删除20个。
                     * 
                     */
                    std::vector<TopicRecord> GetTopicSets() const;

                    /**
                     * 设置主题集合，每次最多删除20个。
                     * @param _topicSets 主题集合，每次最多删除20个。
                     * 
                     */
                    void SetTopicSets(const std::vector<TopicRecord>& _topicSets);

                    /**
                     * 判断参数 TopicSets 是否已赋值
                     * @return TopicSets 是否已赋值
                     * 
                     */
                    bool TopicSetsHasBeenSet() const;

                    /**
                     * 获取pulsar集群Id。
                     * @return ClusterId pulsar集群Id。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置pulsar集群Id。
                     * @param _clusterId pulsar集群Id。
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
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param _environmentId 环境（命名空间）名称。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取是否强制删除，默认为false
                     * @return Force 是否强制删除，默认为false
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制删除，默认为false
                     * @param _force 是否强制删除，默认为false
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 主题集合，每次最多删除20个。
                     */
                    std::vector<TopicRecord> m_topicSets;
                    bool m_topicSetsHasBeenSet;

                    /**
                     * pulsar集群Id。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 是否强制删除，默认为false
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_
