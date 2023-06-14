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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayNodes请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayNodesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayNodesRequest();
                    ~DescribeCloudNativeAPIGatewayNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取实例分组id
                     * @return GroupId 实例分组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置实例分组id
                     * @param _groupId 实例分组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取翻页获取多少个
                     * @return Limit 翻页获取多少个
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页获取多少个
                     * @param _limit 翻页获取多少个
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
                     * 获取翻页从第几个开始获取
                     * @return Offset 翻页从第几个开始获取
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页从第几个开始获取
                     * @param _offset 翻页从第几个开始获取
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 实例分组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 翻页获取多少个
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页从第几个开始获取
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYNODESREQUEST_H_
