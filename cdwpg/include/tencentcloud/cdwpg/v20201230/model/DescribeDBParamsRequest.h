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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEDBPARAMSREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEDBPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeDBParams请求参数结构体
                */
                class DescribeDBParamsRequest : public AbstractModel
                {
                public:
                    DescribeDBParamsRequest();
                    ~DescribeDBParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cn/dn
                     * @return NodeTypes cn/dn
                     * 
                     */
                    std::vector<std::string> GetNodeTypes() const;

                    /**
                     * 设置cn/dn
                     * @param _nodeTypes cn/dn
                     * 
                     */
                    void SetNodeTypes(const std::vector<std::string>& _nodeTypes);

                    /**
                     * 判断参数 NodeTypes 是否已赋值
                     * @return NodeTypes 是否已赋值
                     * 
                     */
                    bool NodeTypesHasBeenSet() const;

                    /**
                     * 获取分页参数，分页步长，默认为10 示例值：10
                     * @return Limit 分页参数，分页步长，默认为10 示例值：10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，分页步长，默认为10 示例值：10
                     * @param _limit 分页参数，分页步长，默认为10 示例值：10
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
                     * 获取分页参数，第一页为0，第二页为10
                     * @return Offset 分页参数，第一页为0，第二页为10
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，第一页为0，第二页为10
                     * @param _offset 分页参数，第一页为0，第二页为10
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
                     * 获取InstanceId名称
                     * @return InstanceId InstanceId名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId名称
                     * @param _instanceId InstanceId名称
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * cn/dn
                     */
                    std::vector<std::string> m_nodeTypes;
                    bool m_nodeTypesHasBeenSet;

                    /**
                     * 分页参数，分页步长，默认为10 示例值：10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，第一页为0，第二页为10
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * InstanceId名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEDBPARAMSREQUEST_H_
