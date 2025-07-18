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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/InternetConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayPublicNetwork请求参数结构体
                */
                class CreateCloudNativeAPIGatewayPublicNetworkRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayPublicNetworkRequest();
                    ~CreateCloudNativeAPIGatewayPublicNetworkRequest() = default;
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
                     * 获取分组id。
                     * @return GroupId 分组id。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id。
                     * @param _groupId 分组id。
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
                     * 获取公网负载均衡配置。
                     * @return InternetConfig 公网负载均衡配置。
                     * 
                     */
                    InternetConfig GetInternetConfig() const;

                    /**
                     * 设置公网负载均衡配置。
                     * @param _internetConfig 公网负载均衡配置。
                     * 
                     */
                    void SetInternetConfig(const InternetConfig& _internetConfig);

                    /**
                     * 判断参数 InternetConfig 是否已赋值
                     * @return InternetConfig 是否已赋值
                     * 
                     */
                    bool InternetConfigHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分组id。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 公网负载均衡配置。
                     */
                    InternetConfig m_internetConfig;
                    bool m_internetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
