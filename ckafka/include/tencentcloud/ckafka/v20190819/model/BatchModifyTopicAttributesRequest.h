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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * BatchModifyTopicAttributes请求参数结构体
                */
                class BatchModifyTopicAttributesRequest : public AbstractModel
                {
                public:
                    BatchModifyTopicAttributesRequest();
                    ~BatchModifyTopicAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取主题属性列表 (同一个批次最多支持10个)
                     * @return Topic 主题属性列表 (同一个批次最多支持10个)
                     * 
                     */
                    std::vector<BatchModifyTopicInfo> GetTopic() const;

                    /**
                     * 设置主题属性列表 (同一个批次最多支持10个)
                     * @param _topic 主题属性列表 (同一个批次最多支持10个)
                     * 
                     */
                    void SetTopic(const std::vector<BatchModifyTopicInfo>& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题属性列表 (同一个批次最多支持10个)
                     */
                    std::vector<BatchModifyTopicInfo> m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICATTRIBUTESREQUEST_H_
