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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteReadOnlyGroupNetworkAccess请求参数结构体
                */
                class DeleteReadOnlyGroupNetworkAccessRequest : public AbstractModel
                {
                public:
                    DeleteReadOnlyGroupNetworkAccessRequest();
                    ~DeleteReadOnlyGroupNetworkAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO组ID，形如：pgro-4t9c6g7k。
                     * @return ReadOnlyGroupId RO组ID，形如：pgro-4t9c6g7k。
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO组ID，形如：pgro-4t9c6g7k。
                     * @param _readOnlyGroupId RO组ID，形如：pgro-4t9c6g7k。
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取私有网络统一 ID，若是基础网络则传"0"。
                     * @return VpcId 私有网络统一 ID，若是基础网络则传"0"。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络统一 ID，若是基础网络则传"0"。
                     * @param _vpcId 私有网络统一 ID，若是基础网络则传"0"。
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
                     * 获取子网ID，若是基础网络则传"0"。
                     * @return SubnetId 子网ID，若是基础网络则传"0"。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID，若是基础网络则传"0"。
                     * @param _subnetId 子网ID，若是基础网络则传"0"。
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
                     * 获取目标VIP地址。
                     * @return Vip 目标VIP地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置目标VIP地址。
                     * @param _vip 目标VIP地址。
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
                     * RO组ID，形如：pgro-4t9c6g7k。
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 私有网络统一 ID，若是基础网络则传"0"。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID，若是基础网络则传"0"。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 目标VIP地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_
