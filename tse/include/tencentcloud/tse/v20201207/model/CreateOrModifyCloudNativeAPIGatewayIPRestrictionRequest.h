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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_

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
                * CreateOrModifyCloudNativeAPIGatewayIPRestriction请求参数结构体
                */
                class CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest : public AbstractModel
                {
                public:
                    CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest();
                    ~CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest() = default;
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

                    /**
                     * 获取是否启用插件
                     * @return Enabled 是否启用插件
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用插件
                     * @param _enabled 是否启用插件
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取访问控制类型：whiteList｜blackList
                     * @return RestrictionType 访问控制类型：whiteList｜blackList
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 设置访问控制类型：whiteList｜blackList
                     * @param _restrictionType 访问控制类型：whiteList｜blackList
                     * 
                     */
                    void SetRestrictionType(const std::string& _restrictionType);

                    /**
                     * 判断参数 RestrictionType 是否已赋值
                     * @return RestrictionType 是否已赋值
                     * 
                     */
                    bool RestrictionTypeHasBeenSet() const;

                    /**
                     * 获取cidr｜ip
                     * @return AddressList cidr｜ip
                     * 
                     */
                    std::vector<std::string> GetAddressList() const;

                    /**
                     * 设置cidr｜ip
                     * @param _addressList cidr｜ip
                     * 
                     */
                    void SetAddressList(const std::vector<std::string>& _addressList);

                    /**
                     * 判断参数 AddressList 是否已赋值
                     * @return AddressList 是否已赋值
                     * 
                     */
                    bool AddressListHasBeenSet() const;

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

                    /**
                     * 是否启用插件
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 访问控制类型：whiteList｜blackList
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * cidr｜ip
                     */
                    std::vector<std::string> m_addressList;
                    bool m_addressListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYIPRESTRICTIONREQUEST_H_
