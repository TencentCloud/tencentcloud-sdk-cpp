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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_NATGATEWAYINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_NATGATEWAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * NAT详情
                */
                class NatGatewayInfo : public AbstractModel
                {
                public:
                    NatGatewayInfo();
                    ~NatGatewayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT网关ID
                     * @return NatId NAT网关ID
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关ID
                     * @param _natId NAT网关ID
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return NatName 网关名称
                     * 
                     */
                    std::string GetNatName() const;

                    /**
                     * 设置网关名称
                     * @param _natName 网关名称
                     * 
                     */
                    void SetNatName(const std::string& _natName);

                    /**
                     * 判断参数 NatName 是否已赋值
                     * @return NatName 是否已赋值
                     * 
                     */
                    bool NatNameHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取网关创建状态，其中0表示创建中，1表示运行中，2表示创建失败
                     * @return ProductionStatus 网关创建状态，其中0表示创建中，1表示运行中，2表示创建失败
                     * 
                     */
                    uint64_t GetProductionStatus() const;

                    /**
                     * 设置网关创建状态，其中0表示创建中，1表示运行中，2表示创建失败
                     * @param _productionStatus 网关创建状态，其中0表示创建中，1表示运行中，2表示创建失败
                     * 
                     */
                    void SetProductionStatus(const uint64_t& _productionStatus);

                    /**
                     * 判断参数 ProductionStatus 是否已赋值
                     * @return ProductionStatus 是否已赋值
                     * 
                     */
                    bool ProductionStatusHasBeenSet() const;

                    /**
                     * 获取EIP列表
                     * @return Eips EIP列表
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置EIP列表
                     * @param _eips EIP列表
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                    /**
                     * 获取并发连接数规格，取值为1000000, 3000000, 10000000
                     * @return MaxConcurrent 并发连接数规格，取值为1000000, 3000000, 10000000
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置并发连接数规格，取值为1000000, 3000000, 10000000
                     * @param _maxConcurrent 并发连接数规格，取值为1000000, 3000000, 10000000
                     * 
                     */
                    void SetMaxConcurrent(const uint64_t& _maxConcurrent);

                    /**
                     * 判断参数 MaxConcurrent 是否已赋值
                     * @return MaxConcurrent 是否已赋值
                     * 
                     */
                    bool MaxConcurrentHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取独占标识，其中0表示共享，1表示独占，默认值为0
                     * @return Exclusive 独占标识，其中0表示共享，1表示独占，默认值为0
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置独占标识，其中0表示共享，1表示独占，默认值为0
                     * @param _exclusive 独占标识，其中0表示共享，1表示独占，默认值为0
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取转发模式，其中0表示IP方式，1表示网段方式
                     * @return ForwardMode 转发模式，其中0表示IP方式，1表示网段方式
                     * 
                     */
                    uint64_t GetForwardMode() const;

                    /**
                     * 设置转发模式，其中0表示IP方式，1表示网段方式
                     * @param _forwardMode 转发模式，其中0表示IP方式，1表示网段方式
                     * 
                     */
                    void SetForwardMode(const uint64_t& _forwardMode);

                    /**
                     * 判断参数 ForwardMode 是否已赋值
                     * @return ForwardMode 是否已赋值
                     * 
                     */
                    bool ForwardModeHasBeenSet() const;

                    /**
                     * 获取私有网络网段
                     * @return VpcCidrBlock 私有网络网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置私有网络网段
                     * @param _vpcCidrBlock 私有网络网段
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取网关类型，取值为 small，middle，big，分别对应小型、中型、大型
                     * @return Type 网关类型，取值为 small，middle，big，分别对应小型、中型、大型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置网关类型，取值为 small，middle，big，分别对应小型、中型、大型
                     * @param _type 网关类型，取值为 small，middle，big，分别对应小型、中型、大型
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取网关启用状态，1为禁用，0为启用。
                     * @return State 网关启用状态，1为禁用，0为启用。
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置网关启用状态，1为禁用，0为启用。
                     * @param _state 网关启用状态，1为禁用，0为启用。
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取私有网络整型ID
                     * @return IntVpcId 私有网络整型ID
                     * 
                     */
                    uint64_t GetIntVpcId() const;

                    /**
                     * 设置私有网络整型ID
                     * @param _intVpcId 私有网络整型ID
                     * 
                     */
                    void SetIntVpcId(const uint64_t& _intVpcId);

                    /**
                     * 判断参数 IntVpcId 是否已赋值
                     * @return IntVpcId 是否已赋值
                     * 
                     */
                    bool IntVpcIdHasBeenSet() const;

                    /**
                     * 获取NAT资源ID
                     * @return NatResourceId NAT资源ID
                     * 
                     */
                    uint64_t GetNatResourceId() const;

                    /**
                     * 设置NAT资源ID
                     * @param _natResourceId NAT资源ID
                     * 
                     */
                    void SetNatResourceId(const uint64_t& _natResourceId);

                    /**
                     * 判断参数 NatResourceId 是否已赋值
                     * @return NatResourceId 是否已赋值
                     * 
                     */
                    bool NatResourceIdHasBeenSet() const;

                private:

                    /**
                     * NAT网关ID
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_natName;
                    bool m_natNameHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 网关创建状态，其中0表示创建中，1表示运行中，2表示创建失败
                     */
                    uint64_t m_productionStatus;
                    bool m_productionStatusHasBeenSet;

                    /**
                     * EIP列表
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                    /**
                     * 并发连接数规格，取值为1000000, 3000000, 10000000
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 独占标识，其中0表示共享，1表示独占，默认值为0
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 转发模式，其中0表示IP方式，1表示网段方式
                     */
                    uint64_t m_forwardMode;
                    bool m_forwardModeHasBeenSet;

                    /**
                     * 私有网络网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 网关类型，取值为 small，middle，big，分别对应小型、中型、大型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 网关启用状态，1为禁用，0为启用。
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 私有网络整型ID
                     */
                    uint64_t m_intVpcId;
                    bool m_intVpcIdHasBeenSet;

                    /**
                     * NAT资源ID
                     */
                    uint64_t m_natResourceId;
                    bool m_natResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_NATGATEWAYINFO_H_
