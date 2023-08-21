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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateCloudNativeAPIGatewaySpec请求参数结构体
                */
                class UpdateCloudNativeAPIGatewaySpecRequest : public AbstractModel
                {
                public:
                    UpdateCloudNativeAPIGatewaySpecRequest();
                    ~UpdateCloudNativeAPIGatewaySpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
只支持后付费实例
                     * @return GatewayId 云原生API网关实例ID。
只支持后付费实例
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
只支持后付费实例
                     * @param _gatewayId 云原生API网关实例ID。
只支持后付费实例
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
                     * 获取网关分组id
                     * @return GroupId 网关分组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置网关分组id
                     * @param _groupId 网关分组id
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
                     * 获取网关分组节点规格配置。
                     * @return NodeConfig 网关分组节点规格配置。
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置网关分组节点规格配置。
                     * @param _nodeConfig 网关分组节点规格配置。
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
只支持后付费实例
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关分组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 网关分组节点规格配置。
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_
