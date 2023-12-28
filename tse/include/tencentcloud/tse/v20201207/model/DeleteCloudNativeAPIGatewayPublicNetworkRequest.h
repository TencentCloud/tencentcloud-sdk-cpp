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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_

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
                * DeleteCloudNativeAPIGatewayPublicNetwork请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayPublicNetworkRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayPublicNetworkRequest();
                    ~DeleteCloudNativeAPIGatewayPublicNetworkRequest() = default;
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
                     * 获取分组id，kong类型时必填
                     * @return GroupId 分组id，kong类型时必填
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id，kong类型时必填
                     * @param _groupId 分组id，kong类型时必填
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
                     * 获取公网类型
- IPV4 （默认值）
- IPV6
                     * @return InternetAddressVersion 公网类型
- IPV4 （默认值）
- IPV6
                     * 
                     */
                    std::string GetInternetAddressVersion() const;

                    /**
                     * 设置公网类型
- IPV4 （默认值）
- IPV6
                     * @param _internetAddressVersion 公网类型
- IPV4 （默认值）
- IPV6
                     * 
                     */
                    void SetInternetAddressVersion(const std::string& _internetAddressVersion);

                    /**
                     * 判断参数 InternetAddressVersion 是否已赋值
                     * @return InternetAddressVersion 是否已赋值
                     * 
                     */
                    bool InternetAddressVersionHasBeenSet() const;

                    /**
                     * 获取公网ip，存在多个公网时必填
                     * @return Vip 公网ip，存在多个公网时必填
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置公网ip，存在多个公网时必填
                     * @param _vip 公网ip，存在多个公网时必填
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分组id，kong类型时必填
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 公网类型
- IPV4 （默认值）
- IPV6
                     */
                    std::string m_internetAddressVersion;
                    bool m_internetAddressVersionHasBeenSet;

                    /**
                     * 公网ip，存在多个公网时必填
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
