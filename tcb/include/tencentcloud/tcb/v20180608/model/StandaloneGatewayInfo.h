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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/BackendServiceInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 独立网关信息
                */
                class StandaloneGatewayInfo : public AbstractModel
                {
                public:
                    StandaloneGatewayInfo();
                    ~StandaloneGatewayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独立网关名称
                     * @return GatewayName 独立网关名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置独立网关名称
                     * @param _gatewayName 独立网关名称
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取CPU核心数
                     * @return CPU CPU核心数
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置CPU核心数
                     * @param _cPU CPU核心数
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存大小，单位MB
                     * @return Mem 内存大小，单位MB
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存大小，单位MB
                     * @param _mem 内存大小，单位MB
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取套餐包版本名称
                     * @return PackageVersion 套餐包版本名称
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置套餐包版本名称
                     * @param _packageVersion 套餐包版本名称
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取网关别名
                     * @return GatewayAlias 网关别名
                     * 
                     */
                    std::string GetGatewayAlias() const;

                    /**
                     * 设置网关别名
                     * @param _gatewayAlias 网关别名
                     * 
                     */
                    void SetGatewayAlias(const std::string& _gatewayAlias);

                    /**
                     * 判断参数 GatewayAlias 是否已赋值
                     * @return GatewayAlias 是否已赋值
                     * 
                     */
                    bool GatewayAliasHasBeenSet() const;

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
                     * 获取子网ID列表
                     * @return SubnetIds 子网ID列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID列表
                     * @param _subnetIds 子网ID列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取网关描述
                     * @return GatewayDesc 网关描述
                     * 
                     */
                    std::string GetGatewayDesc() const;

                    /**
                     * 设置网关描述
                     * @param _gatewayDesc 网关描述
                     * 
                     */
                    void SetGatewayDesc(const std::string& _gatewayDesc);

                    /**
                     * 判断参数 GatewayDesc 是否已赋值
                     * @return GatewayDesc 是否已赋值
                     * 
                     */
                    bool GatewayDescHasBeenSet() const;

                    /**
                     * 获取网关状态
                     * @return GateWayStatus 网关状态
                     * 
                     */
                    std::string GetGateWayStatus() const;

                    /**
                     * 设置网关状态
                     * @param _gateWayStatus 网关状态
                     * 
                     */
                    void SetGateWayStatus(const std::string& _gateWayStatus);

                    /**
                     * 判断参数 GateWayStatus 是否已赋值
                     * @return GateWayStatus 是否已赋值
                     * 
                     */
                    bool GateWayStatusHasBeenSet() const;

                    /**
                     * 获取服务信息
                     * @return ServiceInfo 服务信息
                     * 
                     */
                    BackendServiceInfo GetServiceInfo() const;

                    /**
                     * 设置服务信息
                     * @param _serviceInfo 服务信息
                     * 
                     */
                    void SetServiceInfo(const BackendServiceInfo& _serviceInfo);

                    /**
                     * 判断参数 ServiceInfo 是否已赋值
                     * @return ServiceInfo 是否已赋值
                     * 
                     */
                    bool ServiceInfoHasBeenSet() const;

                    /**
                     * 获取公网CLBIP
                     * @return PublicClbIp 公网CLBIP
                     * 
                     */
                    std::string GetPublicClbIp() const;

                    /**
                     * 设置公网CLBIP
                     * @param _publicClbIp 公网CLBIP
                     * 
                     */
                    void SetPublicClbIp(const std::string& _publicClbIp);

                    /**
                     * 判断参数 PublicClbIp 是否已赋值
                     * @return PublicClbIp 是否已赋值
                     * 
                     */
                    bool PublicClbIpHasBeenSet() const;

                    /**
                     * 获取内网CLBIP
                     * @return InternalClbIp 内网CLBIP
                     * 
                     */
                    std::string GetInternalClbIp() const;

                    /**
                     * 设置内网CLBIP
                     * @param _internalClbIp 内网CLBIP
                     * 
                     */
                    void SetInternalClbIp(const std::string& _internalClbIp);

                    /**
                     * 判断参数 InternalClbIp 是否已赋值
                     * @return InternalClbIp 是否已赋值
                     * 
                     */
                    bool InternalClbIpHasBeenSet() const;

                private:

                    /**
                     * 独立网关名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * CPU核心数
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位MB
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 套餐包版本名称
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 网关别名
                     */
                    std::string m_gatewayAlias;
                    bool m_gatewayAliasHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 网关描述
                     */
                    std::string m_gatewayDesc;
                    bool m_gatewayDescHasBeenSet;

                    /**
                     * 网关状态
                     */
                    std::string m_gateWayStatus;
                    bool m_gateWayStatusHasBeenSet;

                    /**
                     * 服务信息
                     */
                    BackendServiceInfo m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                    /**
                     * 公网CLBIP
                     */
                    std::string m_publicClbIp;
                    bool m_publicClbIpHasBeenSet;

                    /**
                     * 内网CLBIP
                     */
                    std::string m_internalClbIp;
                    bool m_internalClbIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYINFO_H_
