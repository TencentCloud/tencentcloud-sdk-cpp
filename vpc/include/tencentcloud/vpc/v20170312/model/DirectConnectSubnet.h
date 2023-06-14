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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTSUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTSUBNET_H_

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
                * IDC子网信息
                */
                class DirectConnectSubnet : public AbstractModel
                {
                public:
                    DirectConnectSubnet();
                    ~DirectConnectSubnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专线网关ID
                     * @return DirectConnectGatewayId 专线网关ID
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关ID
                     * @param _directConnectGatewayId 专线网关ID
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取IDC子网网段
                     * @return CidrBlock IDC子网网段
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IDC子网网段
                     * @param _cidrBlock IDC子网网段
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 专线网关ID
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * IDC子网网段
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTSUBNET_H_
