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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLLISTREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayMCPToolList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayMCPToolListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayMCPToolListRequest();
                    ~DescribeCloudNativeAPIGatewayMCPToolListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 id</p>
                     * @return GatewayId <p>实例 id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 id</p>
                     * @param _gatewayId <p>实例 id</p>
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
                     * 获取<p>MCP服务 id</p>
                     * @return ServerId <p>MCP服务 id</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP服务 id</p>
                     * @param _serverId <p>MCP服务 id</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>条数</p><p>取值范围：[1, 100]</p>
                     * @return Limit <p>条数</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>条数</p><p>取值范围：[1, 100]</p>
                     * @param _limit <p>条数</p><p>取值范围：[1, 100]</p>
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
                     * 获取<p>开始位置</p><p>取值范围：[1, 100000]</p>
                     * @return Offset <p>开始位置</p><p>取值范围：[1, 100000]</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>开始位置</p><p>取值范围：[1, 100000]</p>
                     * @param _offset <p>开始位置</p><p>取值范围：[1, 100000]</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>实例 id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP服务 id</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>条数</p><p>取值范围：[1, 100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>开始位置</p><p>取值范围：[1, 100000]</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLLISTREQUEST_H_
