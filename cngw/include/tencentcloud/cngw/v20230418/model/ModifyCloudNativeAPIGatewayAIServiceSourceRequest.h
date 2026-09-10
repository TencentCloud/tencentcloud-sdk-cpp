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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSourceInfo.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayAIServiceSource请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayAIServiceSourceRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayAIServiceSourceRequest();
                    ~ModifyCloudNativeAPIGatewayAIServiceSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
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
                     * 获取<p>服务来源名字</p>
                     * @return SourceName <p>服务来源名字</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>服务来源名字</p>
                     * @param _sourceName <p>服务来源名字</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务来源类型</p><p>枚举值：</p><ul><li>Registry： 普通注册中心</li><li>MCPRegistry： MCP注册中心</li><li>DNS： 域名服务</li></ul>
                     * @return SourceType <p>服务来源类型</p><p>枚举值：</p><ul><li>Registry： 普通注册中心</li><li>MCPRegistry： MCP注册中心</li><li>DNS： 域名服务</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>服务来源类型</p><p>枚举值：</p><ul><li>Registry： 普通注册中心</li><li>MCPRegistry： MCP注册中心</li><li>DNS： 域名服务</li></ul>
                     * @param _sourceType <p>服务来源类型</p><p>枚举值：</p><ul><li>Registry： 普通注册中心</li><li>MCPRegistry： MCP注册中心</li><li>DNS： 域名服务</li></ul>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务来源id</p>
                     * @return SourceId <p>服务来源id</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>服务来源id</p>
                     * @param _sourceId <p>服务来源id</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

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
                     * 获取<p>来源信息</p>
                     * @return SourceInfo <p>来源信息</p>
                     * 
                     */
                    CNAPIGwAIServiceSourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>来源信息</p>
                     * @param _sourceInfo <p>来源信息</p>
                     * 
                     */
                    void SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>服务来源名字</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>服务来源类型</p><p>枚举值：</p><ul><li>Registry： 普通注册中心</li><li>MCPRegistry： MCP注册中心</li><li>DNS： 域名服务</li></ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>服务来源id</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>来源信息</p>
                     */
                    CNAPIGwAIServiceSourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_
