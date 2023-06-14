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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_MAPPINGRESULT_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_MAPPINGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SecurityStatus.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 测绘记录
                */
                class MappingResult : public AbstractModel
                {
                public:
                    MappingResult();
                    ~MappingResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetIp() const;

                    /**
                     * 设置公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIp(const std::string& _assetIp);

                    /**
                     * 判断参数 AssetIp 是否已赋值
                     * @return AssetIp 是否已赋值
                     * 
                     */
                    bool AssetIpHasBeenSet() const;

                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _service 服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Component 组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _component 组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Process 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcess() const;

                    /**
                     * 设置进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _process 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcess(const std::string& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OS 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oS 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取测绘时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastMappingTime 测绘时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastMappingTime() const;

                    /**
                     * 设置测绘时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastMappingTime 测绘时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastMappingTime(const std::string& _lastMappingTime);

                    /**
                     * 判断参数 LastMappingTime 是否已赋值
                     * @return LastMappingTime 是否已赋值
                     * 
                     */
                    bool LastMappingTimeHasBeenSet() const;

                    /**
                     * 获取处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalRecommendations 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisposalRecommendations() const;

                    /**
                     * 设置处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disposalRecommendations 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisposalRecommendations(const std::string& _disposalRecommendations);

                    /**
                     * 判断参数 DisposalRecommendations 是否已赋值
                     * @return DisposalRecommendations 是否已赋值
                     * 
                     */
                    bool DisposalRecommendationsHasBeenSet() const;

                    /**
                     * 获取处置建议详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalRecommendationDetails 处置建议详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisposalRecommendationDetails() const;

                    /**
                     * 设置处置建议详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disposalRecommendationDetails 处置建议详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisposalRecommendationDetails(const std::string& _disposalRecommendationDetails);

                    /**
                     * 判断参数 DisposalRecommendationDetails 是否已赋值
                     * @return DisposalRecommendationDetails 是否已赋值
                     * 
                     */
                    bool DisposalRecommendationDetailsHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取测绘状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MappingStatus 测绘状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMappingStatus() const;

                    /**
                     * 设置测绘状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mappingStatus 测绘状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMappingStatus(const uint64_t& _mappingStatus);

                    /**
                     * 判断参数 MappingStatus 是否已赋值
                     * @return MappingStatus 是否已赋值
                     * 
                     */
                    bool MappingStatusHasBeenSet() const;

                    /**
                     * 获取区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取安全防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityStatus 安全防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecurityStatus> GetSecurityStatus() const;

                    /**
                     * 设置安全防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityStatus 安全防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityStatus(const std::vector<SecurityStatus>& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                    /**
                     * 获取处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalRecommendation 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDisposalRecommendation() const;

                    /**
                     * 设置处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disposalRecommendation 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisposalRecommendation(const int64_t& _disposalRecommendation);

                    /**
                     * 判断参数 DisposalRecommendation 是否已赋值
                     * @return DisposalRecommendation 是否已赋值
                     * 
                     */
                    bool DisposalRecommendationHasBeenSet() const;

                    /**
                     * 获取测绘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MappingType 测绘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMappingType() const;

                    /**
                     * 设置测绘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mappingType 测绘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMappingType(const std::string& _mappingType);

                    /**
                     * 判断参数 MappingType 是否已赋值
                     * @return MappingType 是否已赋值
                     * 
                     */
                    bool MappingTypeHasBeenSet() const;

                private:

                    /**
                     * 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetIp;
                    bool m_assetIpHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 组件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 进程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * 测绘时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastMappingTime;
                    bool m_lastMappingTimeHasBeenSet;

                    /**
                     * 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disposalRecommendations;
                    bool m_disposalRecommendationsHasBeenSet;

                    /**
                     * 处置建议详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disposalRecommendationDetails;
                    bool m_disposalRecommendationDetailsHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 测绘状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mappingStatus;
                    bool m_mappingStatusHasBeenSet;

                    /**
                     * 区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 安全防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityStatus> m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * 处置建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_disposalRecommendation;
                    bool m_disposalRecommendationHasBeenSet;

                    /**
                     * 测绘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mappingType;
                    bool m_mappingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_MAPPINGRESULT_H_
