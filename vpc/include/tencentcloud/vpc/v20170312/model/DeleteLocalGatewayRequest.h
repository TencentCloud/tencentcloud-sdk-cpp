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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETELOCALGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETELOCALGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteLocalGateway请求参数结构体
                */
                class DeleteLocalGatewayRequest : public AbstractModel
                {
                public:
                    DeleteLocalGatewayRequest();
                    ~DeleteLocalGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地网关实例ID。
                     * @return LocalGatewayId 本地网关实例ID。
                     * 
                     */
                    std::string GetLocalGatewayId() const;

                    /**
                     * 设置本地网关实例ID。
                     * @param _localGatewayId 本地网关实例ID。
                     * 
                     */
                    void SetLocalGatewayId(const std::string& _localGatewayId);

                    /**
                     * 判断参数 LocalGatewayId 是否已赋值
                     * @return LocalGatewayId 是否已赋值
                     * 
                     */
                    bool LocalGatewayIdHasBeenSet() const;

                    /**
                     * 获取CDC实例ID。
                     * @return CdcId CDC实例ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC实例ID。
                     * @param _cdcId CDC实例ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 本地网关实例ID。
                     */
                    std::string m_localGatewayId;
                    bool m_localGatewayIdHasBeenSet;

                    /**
                     * CDC实例ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETELOCALGATEWAYREQUEST_H_
