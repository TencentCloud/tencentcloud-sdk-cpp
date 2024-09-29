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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCPEERINGCONNECTIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCPEERINGCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tags.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpcPeeringConnection请求参数结构体
                */
                class CreateVpcPeeringConnectionRequest : public AbstractModel
                {
                public:
                    CreateVpcPeeringConnectionRequest();
                    ~CreateVpcPeeringConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本端VPC唯一ID。
                     * @return SourceVpcId 本端VPC唯一ID。
                     * 
                     */
                    std::string GetSourceVpcId() const;

                    /**
                     * 设置本端VPC唯一ID。
                     * @param _sourceVpcId 本端VPC唯一ID。
                     * 
                     */
                    void SetSourceVpcId(const std::string& _sourceVpcId);

                    /**
                     * 判断参数 SourceVpcId 是否已赋值
                     * @return SourceVpcId 是否已赋值
                     * 
                     */
                    bool SourceVpcIdHasBeenSet() const;

                    /**
                     * 获取对等连接名称。
                     * @return PeeringConnectionName 对等连接名称。
                     * 
                     */
                    std::string GetPeeringConnectionName() const;

                    /**
                     * 设置对等连接名称。
                     * @param _peeringConnectionName 对等连接名称。
                     * 
                     */
                    void SetPeeringConnectionName(const std::string& _peeringConnectionName);

                    /**
                     * 判断参数 PeeringConnectionName 是否已赋值
                     * @return PeeringConnectionName 是否已赋值
                     * 
                     */
                    bool PeeringConnectionNameHasBeenSet() const;

                    /**
                     * 获取对端VPC唯一ID。
                     * @return DestinationVpcId 对端VPC唯一ID。
                     * 
                     */
                    std::string GetDestinationVpcId() const;

                    /**
                     * 设置对端VPC唯一ID。
                     * @param _destinationVpcId 对端VPC唯一ID。
                     * 
                     */
                    void SetDestinationVpcId(const std::string& _destinationVpcId);

                    /**
                     * 判断参数 DestinationVpcId 是否已赋值
                     * @return DestinationVpcId 是否已赋值
                     * 
                     */
                    bool DestinationVpcIdHasBeenSet() const;

                    /**
                     * 获取对端用户UIN。
                     * @return DestinationUin 对端用户UIN。
                     * 
                     */
                    std::string GetDestinationUin() const;

                    /**
                     * 设置对端用户UIN。
                     * @param _destinationUin 对端用户UIN。
                     * 
                     */
                    void SetDestinationUin(const std::string& _destinationUin);

                    /**
                     * 判断参数 DestinationUin 是否已赋值
                     * @return DestinationUin 是否已赋值
                     * 
                     */
                    bool DestinationUinHasBeenSet() const;

                    /**
                     * 获取对端地域。
                     * @return DestinationRegion 对端地域。
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置对端地域。
                     * @param _destinationRegion 对端地域。
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                    /**
                     * 获取带宽上限，单位Mbps。
                     * @return Bandwidth 带宽上限，单位Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽上限，单位Mbps。
                     * @param _bandwidth 带宽上限，单位Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
                     * @return Type 互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
                     * @param _type 互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
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
                     * 获取计费模式，日峰值POSTPAID_BY_DAY_MAX，月95POSTPAID_BY_MONTH_95。
                     * @return ChargeType 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95POSTPAID_BY_MONTH_95。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式，日峰值POSTPAID_BY_DAY_MAX，月95POSTPAID_BY_MONTH_95。
                     * @param _chargeType 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95POSTPAID_BY_MONTH_95。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取服务分级：PT、AU、AG。
                     * @return QosLevel 服务分级：PT、AU、AG。
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置服务分级：PT、AU、AG。
                     * @param _qosLevel 服务分级：PT、AU、AG。
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取标签键值对
                     * @return Tags 标签键值对
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签键值对
                     * @param _tags 标签键值对
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 本端VPC唯一ID。
                     */
                    std::string m_sourceVpcId;
                    bool m_sourceVpcIdHasBeenSet;

                    /**
                     * 对等连接名称。
                     */
                    std::string m_peeringConnectionName;
                    bool m_peeringConnectionNameHasBeenSet;

                    /**
                     * 对端VPC唯一ID。
                     */
                    std::string m_destinationVpcId;
                    bool m_destinationVpcIdHasBeenSet;

                    /**
                     * 对端用户UIN。
                     */
                    std::string m_destinationUin;
                    bool m_destinationUinHasBeenSet;

                    /**
                     * 对端地域。
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * 带宽上限，单位Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95POSTPAID_BY_MONTH_95。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 服务分级：PT、AU、AG。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCPEERINGCONNECTIONREQUEST_H_
