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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_UPDATECLOUDNATIVEAPIGATEWAYMCPTOOLSREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_UPDATECLOUDNATIVEAPIGATEWAYMCPTOOLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPTool.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * UpdateCloudNativeAPIGatewayMCPTools请求参数结构体
                */
                class UpdateCloudNativeAPIGatewayMCPToolsRequest : public AbstractModel
                {
                public:
                    UpdateCloudNativeAPIGatewayMCPToolsRequest();
                    ~UpdateCloudNativeAPIGatewayMCPToolsRequest() = default;
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

                    /**
                     * 获取<p>待导入的MCP Tools列表</p>
                     * @return Tools <p>待导入的MCP Tools列表</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPTool> GetTools() const;

                    /**
                     * 设置<p>待导入的MCP Tools列表</p>
                     * @param _tools <p>待导入的MCP Tools列表</p>
                     * 
                     */
                    void SetTools(const std::vector<CNAPIGwMCPTool>& _tools);

                    /**
                     * 判断参数 Tools 是否已赋值
                     * @return Tools 是否已赋值
                     * 
                     */
                    bool ToolsHasBeenSet() const;

                private:

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

                    /**
                     * <p>待导入的MCP Tools列表</p>
                     */
                    std::vector<CNAPIGwMCPTool> m_tools;
                    bool m_toolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_UPDATECLOUDNATIVEAPIGATEWAYMCPTOOLSREQUEST_H_
