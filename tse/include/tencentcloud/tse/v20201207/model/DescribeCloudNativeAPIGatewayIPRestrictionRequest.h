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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayIPRestriction请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayIPRestrictionRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayIPRestrictionRequest();
                    ~DescribeCloudNativeAPIGatewayIPRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
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
                     * 获取访问控制插件绑定的资源类型：route|service
                     * @return SourceType 访问控制插件绑定的资源类型：route|service
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问控制插件绑定的资源类型：route|service
                     * @param _sourceType 访问控制插件绑定的资源类型：route|service
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
                     * 获取路由或服务的id
                     * @return SourceId 路由或服务的id
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置路由或服务的id
                     * @param _sourceId 路由或服务的id
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 访问控制插件绑定的资源类型：route|service
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 路由或服务的id
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_
