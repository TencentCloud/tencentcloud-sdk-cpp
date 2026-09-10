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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_

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
                * CreateCloudNativeAPIGatewayAIServiceSource请求参数结构体
                */
                class CreateCloudNativeAPIGatewayAIServiceSourceRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayAIServiceSourceRequest();
                    ~CreateCloudNativeAPIGatewayAIServiceSourceRequest() = default;
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
                     * 获取<p>来源类型:</p><ul><li>MCPRegistry:  mcp 注册中心</li></ul>
                     * @return SourceType <p>来源类型:</p><ul><li>MCPRegistry:  mcp 注册中心</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>来源类型:</p><ul><li>MCPRegistry:  mcp 注册中心</li></ul>
                     * @param _sourceType <p>来源类型:</p><ul><li>MCPRegistry:  mcp 注册中心</li></ul>
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
                     * 获取<p>来源产品：- TSFNacos：TSF Nacos</p>
                     * @return SourceProduct <p>来源产品：- TSFNacos：TSF Nacos</p>
                     * 
                     */
                    std::string GetSourceProduct() const;

                    /**
                     * 设置<p>来源产品：- TSFNacos：TSF Nacos</p>
                     * @param _sourceProduct <p>来源产品：- TSFNacos：TSF Nacos</p>
                     * 
                     */
                    void SetSourceProduct(const std::string& _sourceProduct);

                    /**
                     * 判断参数 SourceProduct 是否已赋值
                     * @return SourceProduct 是否已赋值
                     * 
                     */
                    bool SourceProductHasBeenSet() const;

                    /**
                     * 获取<p>来源详情</p>
                     * @return SourceInfo <p>来源详情</p>
                     * 
                     */
                    CNAPIGwAIServiceSourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>来源详情</p>
                     * @param _sourceInfo <p>来源详情</p>
                     * 
                     */
                    void SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

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

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>来源类型:</p><ul><li>MCPRegistry:  mcp 注册中心</li></ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>服务来源名字</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>来源产品：- TSFNacos：TSF Nacos</p>
                     */
                    std::string m_sourceProduct;
                    bool m_sourceProductHasBeenSet;

                    /**
                     * <p>来源详情</p>
                     */
                    CNAPIGwAIServiceSourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYAISERVICESOURCEREQUEST_H_
