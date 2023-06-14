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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeTopicDetail请求参数结构体
                */
                class DescribeTopicDetailRequest : public AbstractModel
                {
                public:
                    DescribeTopicDetailRequest();
                    ~DescribeTopicDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取（过滤条件）按照topicName过滤，支持模糊查询
                     * @return SearchWord （过滤条件）按照topicName过滤，支持模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置（过滤条件）按照topicName过滤，支持模糊查询
                     * @param _searchWord （过滤条件）按照topicName过滤，支持模糊查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取偏移量，不填默认为0
                     * @return Offset 偏移量，不填默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，不填默认为0
                     * @param _offset 偏移量，不填默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，不填则默认 10，最大值20，取值要大于0
                     * @return Limit 返回数量，不填则默认 10，最大值20，取值要大于0
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认 10，最大值20，取值要大于0
                     * @param _limit 返回数量，不填则默认 10，最大值20，取值要大于0
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Acl预设策略名称
                     * @return AclRuleName Acl预设策略名称
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置Acl预设策略名称
                     * @param _aclRuleName Acl预设策略名称
                     * 
                     */
                    void SetAclRuleName(const std::string& _aclRuleName);

                    /**
                     * 判断参数 AclRuleName 是否已赋值
                     * @return AclRuleName 是否已赋值
                     * 
                     */
                    bool AclRuleNameHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * （过滤条件）按照topicName过滤，支持模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，不填默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认 10，最大值20，取值要大于0
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Acl预设策略名称
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
