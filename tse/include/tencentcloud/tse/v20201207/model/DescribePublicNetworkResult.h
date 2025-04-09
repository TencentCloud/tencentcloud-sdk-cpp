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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICNETWORKRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICNETWORKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 查询客户端公网信息
                */
                class DescribePublicNetworkResult : public AbstractModel
                {
                public:
                    DescribePublicNetworkResult();
                    ~DescribePublicNetworkResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关实例ID
                     * @return GatewayId 网关实例ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayId 网关实例ID
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
                     * 获取网关分组ID
                     * @return GroupId 网关分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置网关分组ID
                     * @param _groupId 网关分组ID
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
                     * 获取客户端公网信息
                     * @return PublicNetwork 客户端公网信息
                     * 
                     */
                    CloudNativeAPIGatewayConfig GetPublicNetwork() const;

                    /**
                     * 设置客户端公网信息
                     * @param _publicNetwork 客户端公网信息
                     * 
                     */
                    void SetPublicNetwork(const CloudNativeAPIGatewayConfig& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 客户端公网信息
                     */
                    CloudNativeAPIGatewayConfig m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICNETWORKRESULT_H_
