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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeTopics请求参数结构体
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param _clusterId Pulsar 集群的ID
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
                     * 获取主题名模糊匹配。
                     * @return TopicName 主题名模糊匹配。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名模糊匹配。
                     * @param _topicName 主题名模糊匹配。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取起始下标，不填默认为0。
                     * @return Offset 起始下标，不填默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始下标，不填默认为0。
                     * @param _offset 起始下标，不填默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，不填则默认为10，最大值为20。
                     * @return Limit 返回数量，不填则默认为10，最大值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认为10，最大值为20。
                     * @param _limit 返回数量，不填则默认为10，最大值为20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取topic类型描述：
0：非持久非分区主题类型；
1：非持久分区主题类型；
2：持久非分区主题类型；
3：持久分区主题类型；
                     * @return TopicType topic类型描述：
0：非持久非分区主题类型；
1：非持久分区主题类型；
2：持久非分区主题类型；
3：持久分区主题类型；
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置topic类型描述：
0：非持久非分区主题类型；
1：非持久分区主题类型；
2：持久非分区主题类型；
3：持久分区主题类型；
                     * @param _topicType topic类型描述：
0：非持久非分区主题类型；
1：非持久分区主题类型；
2：持久非分区主题类型；
3：持久分区主题类型；
                     * 
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取* TopicName
按照主题名字查询，精确查询。
类型：String
必选：否
                     * @return Filters * TopicName
按照主题名字查询，精确查询。
类型：String
必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* TopicName
按照主题名字查询，精确查询。
类型：String
必选：否
                     * @param _filters * TopicName
按照主题名字查询，精确查询。
类型：String
必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取创建来源：
1：用户创建
2：系统创建
                     * @return TopicCreator 创建来源：
1：用户创建
2：系统创建
                     * 
                     */
                    uint64_t GetTopicCreator() const;

                    /**
                     * 设置创建来源：
1：用户创建
2：系统创建
                     * @param _topicCreator 创建来源：
1：用户创建
2：系统创建
                     * 
                     */
                    void SetTopicCreator(const uint64_t& _topicCreator);

                    /**
                     * 判断参数 TopicCreator 是否已赋值
                     * @return TopicCreator 是否已赋值
                     * 
                     */
                    bool TopicCreatorHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 主题名模糊匹配。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 起始下标，不填默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认为10，最大值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * topic类型描述：
0：非持久非分区主题类型；
1：非持久分区主题类型；
2：持久非分区主题类型；
3：持久分区主题类型；
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * * TopicName
按照主题名字查询，精确查询。
类型：String
必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 创建来源：
1：用户创建
2：系统创建
                     */
                    uint64_t m_topicCreator;
                    bool m_topicCreatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
