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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 查询nat路由的返回路由对象
                */
                class NatDirectConnectGatewayRoute : public AbstractModel
                {
                public:
                    NatDirectConnectGatewayRoute();
                    ~NatDirectConnectGatewayRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网的 `IPv4` `CIDR`
                     * @return DestinationCidrBlock 子网的 `IPv4` `CIDR`
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置子网的 `IPv4` `CIDR`
                     * @param _destinationCidrBlock 子网的 `IPv4` `CIDR`
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取下一跳网关的类型，目前此接口支持的类型有：
DIRECTCONNECT：专线网关
                     * @return GatewayType 下一跳网关的类型，目前此接口支持的类型有：
DIRECTCONNECT：专线网关
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳网关的类型，目前此接口支持的类型有：
DIRECTCONNECT：专线网关
                     * @param _gatewayType 下一跳网关的类型，目前此接口支持的类型有：
DIRECTCONNECT：专线网关
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取下一跳网关ID
                     * @return GatewayId 下一跳网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置下一跳网关ID
                     * @param _gatewayId 下一跳网关ID
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
                     * 获取路由的创建时间
                     * @return CreateTime 路由的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置路由的创建时间
                     * @param _createTime 路由的创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取路由的更新时间
                     * @return UpdateTime 路由的更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置路由的更新时间
                     * @param _updateTime 路由的更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 子网的 `IPv4` `CIDR`
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳网关的类型，目前此接口支持的类型有：
DIRECTCONNECT：专线网关
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 下一跳网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 路由的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 路由的更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATDIRECTCONNECTGATEWAYROUTE_H_
