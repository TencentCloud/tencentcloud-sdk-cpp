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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeConsumerGroups请求参数结构体
                */
                class DescribeConsumerGroupsRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupsRequest();
                    ~DescribeConsumerGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅实例id
                     * @return SubscribeId 订阅实例id
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置订阅实例id
                     * @param _subscribeId 订阅实例id
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取返回记录的起始偏移量。默认0
                     * @return Offset 返回记录的起始偏移量。默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回记录的起始偏移量。默认0
                     * @param _offset 返回记录的起始偏移量。默认0
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
                     * 获取单次返回的记录数量。默认10
                     * @return Limit 单次返回的记录数量。默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次返回的记录数量。默认10
                     * @param _limit 单次返回的记录数量。默认10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 订阅实例id
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 返回记录的起始偏移量。默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次返回的记录数量。默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECONSUMERGROUPSREQUEST_H_
