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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolParam.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayMCPTool请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayMCPToolRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayMCPToolRequest();
                    ~ModifyCloudNativeAPIGatewayMCPToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 id</p>
                     * @return GatewayId <p>网关实例 id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 id</p>
                     * @param _gatewayId <p>网关实例 id</p>
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
                     * 获取<p>MCPserverId</p>
                     * @return ServerId <p>MCPserverId</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCPserverId</p>
                     * @param _serverId <p>MCPserverId</p>
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
                     * 获取<p>工具 id</p>
                     * @return ToolId <p>工具 id</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>工具 id</p>
                     * @param _toolId <p>工具 id</p>
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取<p>工具名字</p>
                     * @return Name <p>工具名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工具名字</p>
                     * @param _name <p>工具名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>路径</p>
                     * @return Path <p>路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
                     * @param _path <p>路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>报文格式</p>
                     * @return ContentType <p>报文格式</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>报文格式</p>
                     * @param _contentType <p>报文格式</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>请求方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>PUT： PUT</li><li>POST： POST</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * @return Method <p>请求方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>PUT： PUT</li><li>POST： POST</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>请求方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>PUT： PUT</li><li>POST： POST</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * @param _method <p>请求方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>PUT： PUT</li><li>POST： POST</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>展示</p>
                     * @return DisplayName <p>展示</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示</p>
                     * @param _displayName <p>展示</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>输入参数</p>
                     * @return InputParams <p>输入参数</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPToolParam> GetInputParams() const;

                    /**
                     * 设置<p>输入参数</p>
                     * @param _inputParams <p>输入参数</p>
                     * 
                     */
                    void SetInputParams(const std::vector<CNAPIGwMCPToolParam>& _inputParams);

                    /**
                     * 判断参数 InputParams 是否已赋值
                     * @return InputParams 是否已赋值
                     * 
                     */
                    bool InputParamsHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>tool版本</p>
                     * @return ToolVersion <p>tool版本</p>
                     * 
                     */
                    std::string GetToolVersion() const;

                    /**
                     * 设置<p>tool版本</p>
                     * @param _toolVersion <p>tool版本</p>
                     * 
                     */
                    void SetToolVersion(const std::string& _toolVersion);

                    /**
                     * 判断参数 ToolVersion 是否已赋值
                     * @return ToolVersion 是否已赋值
                     * 
                     */
                    bool ToolVersionHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCPserverId</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>工具 id</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>工具名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>报文格式</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>请求方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>PUT： PUT</li><li>POST： POST</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>展示</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>输入参数</p>
                     */
                    std::vector<CNAPIGwMCPToolParam> m_inputParams;
                    bool m_inputParamsHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>tool版本</p>
                     */
                    std::string m_toolVersion;
                    bool m_toolVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_
