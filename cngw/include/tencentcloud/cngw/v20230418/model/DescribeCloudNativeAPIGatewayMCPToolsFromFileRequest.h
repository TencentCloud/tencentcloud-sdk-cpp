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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLSFROMFILEREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLSFROMFILEREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayMCPToolsFromFile请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest();
                    ~DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>OpenAPI文件内容</p>
                     * @return Content <p>OpenAPI文件内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>OpenAPI文件内容</p>
                     * @param _content <p>OpenAPI文件内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>文件内容格式</p>
                     * @return Format <p>文件内容格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>文件内容格式</p>
                     * @param _format <p>文件内容格式</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

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
                     * 获取<p>MCP Server ID</p>
                     * @return MCPServerId <p>MCP Server ID</p>
                     * 
                     */
                    std::string GetMCPServerId() const;

                    /**
                     * 设置<p>MCP Server ID</p>
                     * @param _mCPServerId <p>MCP Server ID</p>
                     * 
                     */
                    void SetMCPServerId(const std::string& _mCPServerId);

                    /**
                     * 判断参数 MCPServerId 是否已赋值
                     * @return MCPServerId 是否已赋值
                     * 
                     */
                    bool MCPServerIdHasBeenSet() const;

                private:

                    /**
                     * <p>OpenAPI文件内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>文件内容格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>网关实例ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP Server ID</p>
                     */
                    std::string m_mCPServerId;
                    bool m_mCPServerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPTOOLSFROMFILEREQUEST_H_
