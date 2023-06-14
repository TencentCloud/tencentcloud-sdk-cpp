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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateHaVip请求参数结构体
                */
                class CreateHaVipRequest : public AbstractModel
                {
                public:
                    CreateHaVipRequest();
                    ~CreateHaVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HAVIP所在私有网络ID。
                     * @return VpcId HAVIP所在私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置HAVIP所在私有网络ID。
                     * @param _vpcId HAVIP所在私有网络ID。
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
                     * 获取HAVIP所在子网ID。
                     * @return SubnetId HAVIP所在子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置HAVIP所在子网ID。
                     * @param _subnetId HAVIP所在子网ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取HAVIP名称。
                     * @return HaVipName HAVIP名称。
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置HAVIP名称。
                     * @param _haVipName HAVIP名称。
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取指定虚拟IP地址，必须在VPC网段内且未被占用。不指定则自动分配。
                     * @return Vip 指定虚拟IP地址，必须在VPC网段内且未被占用。不指定则自动分配。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指定虚拟IP地址，必须在VPC网段内且未被占用。不指定则自动分配。
                     * @param _vip 指定虚拟IP地址，必须在VPC网段内且未被占用。不指定则自动分配。
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
                     * HAVIP所在私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * HAVIP所在子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * HAVIP名称。
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * 指定虚拟IP地址，必须在VPC网段内且未被占用。不指定则自动分配。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_
