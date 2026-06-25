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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLACLLISTREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLACLLISTREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayMCPToolACLList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayMCPToolACLListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayMCPToolACLListRequest();
                    ~DescribeCloudNativeAPIGatewayMCPToolACLListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例ID</p>
                     * @return GatewayId <p>网关实例ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例ID</p>
                     * @param _gatewayId <p>网关实例ID</p>
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
                     * 获取<p>MCP 服务ID</p>
                     * @return ServerId <p>MCP 服务ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP 服务ID</p>
                     * @param _serverId <p>MCP 服务ID</p>
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
                     * 获取<p>分页大小</p>
                     * @return Limit <p>分页大小</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _limit <p>分页大小</p>
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
                     * 获取<p>分页偏移</p>
                     * @return Offset <p>分页偏移</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移</p>
                     * @param _offset <p>分页偏移</p>
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
                     * 获取<p>搜索关键词</p>
                     * @return Keyword <p>搜索关键词</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>搜索关键词</p>
                     * @param _keyword <p>搜索关键词</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP 服务ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>搜索关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLACLLISTREQUEST_H_
