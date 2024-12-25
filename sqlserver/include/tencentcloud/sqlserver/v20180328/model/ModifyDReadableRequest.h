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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDReadable请求参数结构体
                */
                class ModifyDReadableRequest : public AbstractModel
                {
                public:
                    ModifyDReadableRequest();
                    ~ModifyDReadableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取操作类型。enable-开启备机只读，disable-关闭备机只读
                     * @return Type 操作类型。enable-开启备机只读，disable-关闭备机只读
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型。enable-开启备机只读，disable-关闭备机只读
                     * @param _type 操作类型。enable-开启备机只读，disable-关闭备机只读
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取备机网络ID，不填默认和主实例保持一致
                     * @return VpcId 备机网络ID，不填默认和主实例保持一致
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置备机网络ID，不填默认和主实例保持一致
                     * @param _vpcId 备机网络ID，不填默认和主实例保持一致
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
                     * 获取备机网络子网ID，不填默认和主实例保持一致
                     * @return SubnetId 备机网络子网ID，不填默认和主实例保持一致
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置备机网络子网ID，不填默认和主实例保持一致
                     * @param _subnetId 备机网络子网ID，不填默认和主实例保持一致
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
                     * 获取指定的备机只读vip，不填自动分配。多节点SingleReadOnly模式不支持指定vip。
                     * @return Vip 指定的备机只读vip，不填自动分配。多节点SingleReadOnly模式不支持指定vip。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指定的备机只读vip，不填自动分配。多节点SingleReadOnly模式不支持指定vip。
                     * @param _vip 指定的备机只读vip，不填自动分配。多节点SingleReadOnly模式不支持指定vip。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取备机只读模式，多节点架构默认取值BalancedReadOnly。SingleReadOnly-每个备机各对应一个只读地址（多节点架构），BalancedReadOnly-所有备机共用一个只读地址。当实例是双节点架构时，固定取值SingleReadOnly。
                     * @return ReadMode 备机只读模式，多节点架构默认取值BalancedReadOnly。SingleReadOnly-每个备机各对应一个只读地址（多节点架构），BalancedReadOnly-所有备机共用一个只读地址。当实例是双节点架构时，固定取值SingleReadOnly。
                     * 
                     */
                    std::string GetReadMode() const;

                    /**
                     * 设置备机只读模式，多节点架构默认取值BalancedReadOnly。SingleReadOnly-每个备机各对应一个只读地址（多节点架构），BalancedReadOnly-所有备机共用一个只读地址。当实例是双节点架构时，固定取值SingleReadOnly。
                     * @param _readMode 备机只读模式，多节点架构默认取值BalancedReadOnly。SingleReadOnly-每个备机各对应一个只读地址（多节点架构），BalancedReadOnly-所有备机共用一个只读地址。当实例是双节点架构时，固定取值SingleReadOnly。
                     * 
                     */
                    void SetReadMode(const std::string& _readMode);

                    /**
                     * 判断参数 ReadMode 是否已赋值
                     * @return ReadMode 是否已赋值
                     * 
                     */
                    bool ReadModeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型。enable-开启备机只读，disable-关闭备机只读
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 备机网络ID，不填默认和主实例保持一致
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 备机网络子网ID，不填默认和主实例保持一致
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定的备机只读vip，不填自动分配。多节点SingleReadOnly模式不支持指定vip。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 备机只读模式，多节点架构默认取值BalancedReadOnly。SingleReadOnly-每个备机各对应一个只读地址（多节点架构），BalancedReadOnly-所有备机共用一个只读地址。当实例是双节点架构时，固定取值SingleReadOnly。
                     */
                    std::string m_readMode;
                    bool m_readModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_
