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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_

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
                * ModifyReserveIpAddress请求参数结构体
                */
                class ModifyReserveIpAddressRequest : public AbstractModel
                {
                public:
                    ModifyReserveIpAddressRequest();
                    ~ModifyReserveIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一 ID。
                     * @return VpcId VPC唯一 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一 ID。
                     * @param _vpcId VPC唯一 ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取内网保留IP唯一ID。
                     * @return ReserveIpId 内网保留IP唯一ID。
                     * 
                     */
                    std::string GetReserveIpId() const;

                    /**
                     * 设置内网保留IP唯一ID。
                     * @param _reserveIpId 内网保留IP唯一ID。
                     * 
                     */
                    void SetReserveIpId(const std::string& _reserveIpId);

                    /**
                     * 判断参数 ReserveIpId 是否已赋值
                     * @return ReserveIpId 是否已赋值
                     * 
                     */
                    bool ReserveIpIdHasBeenSet() const;

                    /**
                     * 获取内网保留 IP名称。
                     * @return Name 内网保留 IP名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置内网保留 IP名称。
                     * @param _name 内网保留 IP名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取内网保留 IP描述。
                     * @return Description 内网保留 IP描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置内网保留 IP描述。
                     * @param _description 内网保留 IP描述。
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
                     * VPC唯一 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 内网保留IP唯一ID。
                     */
                    std::string m_reserveIpId;
                    bool m_reserveIpIdHasBeenSet;

                    /**
                     * 内网保留 IP名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 内网保留 IP描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_
