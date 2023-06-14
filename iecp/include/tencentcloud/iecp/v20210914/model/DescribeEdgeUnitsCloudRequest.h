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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITSCLOUDREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITSCLOUDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitsCloud请求参数结构体
                */
                class DescribeEdgeUnitsCloudRequest : public AbstractModel
                {
                public:
                    DescribeEdgeUnitsCloudRequest();
                    ~DescribeEdgeUnitsCloudRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取limit值
                     * @return Limit limit值
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置limit值
                     * @param _limit limit值
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
                     * 获取集群名称模糊匹配
                     * @return NamePattern 集群名称模糊匹配
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置集群名称模糊匹配
                     * @param _namePattern 集群名称模糊匹配
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取排序，ASC/DESC(默认)
                     * @return Order 排序，ASC/DESC(默认)
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，ASC/DESC(默认)
                     * @param _order 排序，ASC/DESC(默认)
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * limit值
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群名称模糊匹配
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 排序，ASC/DESC(默认)
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITSCLOUDREQUEST_H_
