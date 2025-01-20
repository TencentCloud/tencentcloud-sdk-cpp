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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PEERCONNECTION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PEERCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 对等连接实例信息。
                */
                class PeerConnection : public AbstractModel
                {
                public:
                    PeerConnection();
                    ~PeerConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取对端VPC唯一ID。
                     * @return PeerVpcId 对端VPC唯一ID。
                     * 
                     */
                    std::string GetPeerVpcId() const;

                    /**
                     * 设置对端VPC唯一ID。
                     * @param _peerVpcId 对端VPC唯一ID。
                     * 
                     */
                    void SetPeerVpcId(const std::string& _peerVpcId);

                    /**
                     * 判断参数 PeerVpcId 是否已赋值
                     * @return PeerVpcId 是否已赋值
                     * 
                     */
                    bool PeerVpcIdHasBeenSet() const;

                    /**
                     * 获取对等连接唯一ID。
                     * @return PeeringConnectionId 对等连接唯一ID。
                     * 
                     */
                    std::string GetPeeringConnectionId() const;

                    /**
                     * 设置对等连接唯一ID。
                     * @param _peeringConnectionId 对等连接唯一ID。
                     * 
                     */
                    void SetPeeringConnectionId(const std::string& _peeringConnectionId);

                    /**
                     * 判断参数 PeeringConnectionId 是否已赋值
                     * @return PeeringConnectionId 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdHasBeenSet() const;

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
                     * 获取对等连接状态，PENDING，投放中；ACTIVE，使用中；REJECTED，已拒绝‘DELETED，已删除；FAILED，失败；EXPIRED，已过期；ISOLATED，隔离中。
                     * @return State 对等连接状态，PENDING，投放中；ACTIVE，使用中；REJECTED，已拒绝‘DELETED，已删除；FAILED，失败；EXPIRED，已过期；ISOLATED，隔离中。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置对等连接状态，PENDING，投放中；ACTIVE，使用中；REJECTED，已拒绝‘DELETED，已删除；FAILED，失败；EXPIRED，已过期；ISOLATED，隔离中。
                     * @param _state 对等连接状态，PENDING，投放中；ACTIVE，使用中；REJECTED，已拒绝‘DELETED，已删除；FAILED，失败；EXPIRED，已过期；ISOLATED，隔离中。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取是否是新控制器，true: 是NewAfc；false:不是。
                     * @return IsNgw 是否是新控制器，true: 是NewAfc；false:不是。
                     * 
                     */
                    bool GetIsNgw() const;

                    /**
                     * 设置是否是新控制器，true: 是NewAfc；false:不是。
                     * @param _isNgw 是否是新控制器，true: 是NewAfc；false:不是。
                     * 
                     */
                    void SetIsNgw(const bool& _isNgw);

                    /**
                     * 判断参数 IsNgw 是否已赋值
                     * @return IsNgw 是否已赋值
                     * 
                     */
                    bool IsNgwHasBeenSet() const;

                    /**
                     * 获取对等连接带宽值。
                     * @return Bandwidth 对等连接带宽值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置对等连接带宽值。
                     * @param _bandwidth 对等连接带宽值。
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
                     * 获取本端地域。
                     * @return SourceRegion 本端地域。
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置本端地域。
                     * @param _sourceRegion 本端地域。
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取本端APPID。
                     * @return AppId 本端APPID。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置本端APPID。
                     * @param _appId 本端APPID。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取对端APPID。
                     * @return PeerAppId 对端APPID。
                     * 
                     */
                    int64_t GetPeerAppId() const;

                    /**
                     * 设置对端APPID。
                     * @param _peerAppId 对端APPID。
                     * 
                     */
                    void SetPeerAppId(const int64_t& _peerAppId);

                    /**
                     * 判断参数 PeerAppId 是否已赋值
                     * @return PeerAppId 是否已赋值
                     * 
                     */
                    bool PeerAppIdHasBeenSet() const;

                    /**
                     * 获取计费类型，POSTPAID_BY_DAY_MAX：日峰值计费；POSTPAID_BY_MONTH_95：月95计费。
                     * @return ChargeType 计费类型，POSTPAID_BY_DAY_MAX：日峰值计费；POSTPAID_BY_MONTH_95：月95计费。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型，POSTPAID_BY_DAY_MAX：日峰值计费；POSTPAID_BY_MONTH_95：月95计费。
                     * @param _chargeType 计费类型，POSTPAID_BY_DAY_MAX：日峰值计费；POSTPAID_BY_MONTH_95：月95计费。
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
                     * 获取本端UIN。
                     * @return SourceUin 本端UIN。
                     * 
                     */
                    int64_t GetSourceUin() const;

                    /**
                     * 设置本端UIN。
                     * @param _sourceUin 本端UIN。
                     * 
                     */
                    void SetSourceUin(const int64_t& _sourceUin);

                    /**
                     * 判断参数 SourceUin 是否已赋值
                     * @return SourceUin 是否已赋值
                     * 
                     */
                    bool SourceUinHasBeenSet() const;

                    /**
                     * 获取对端UIN。
                     * @return DestinationUin 对端UIN。
                     * 
                     */
                    int64_t GetDestinationUin() const;

                    /**
                     * 设置对端UIN。
                     * @param _destinationUin 对端UIN。
                     * 
                     */
                    void SetDestinationUin(const int64_t& _destinationUin);

                    /**
                     * 判断参数 DestinationUin 是否已赋值
                     * @return DestinationUin 是否已赋值
                     * 
                     */
                    bool DestinationUinHasBeenSet() const;

                    /**
                     * 获取资源标签数据。
                     * @return TagSet 资源标签数据。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置资源标签数据。
                     * @param _tagSet 资源标签数据。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

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

                private:

                    /**
                     * 本端VPC唯一ID。
                     */
                    std::string m_sourceVpcId;
                    bool m_sourceVpcIdHasBeenSet;

                    /**
                     * 对端VPC唯一ID。
                     */
                    std::string m_peerVpcId;
                    bool m_peerVpcIdHasBeenSet;

                    /**
                     * 对等连接唯一ID。
                     */
                    std::string m_peeringConnectionId;
                    bool m_peeringConnectionIdHasBeenSet;

                    /**
                     * 对等连接名称。
                     */
                    std::string m_peeringConnectionName;
                    bool m_peeringConnectionNameHasBeenSet;

                    /**
                     * 对等连接状态，PENDING，投放中；ACTIVE，使用中；REJECTED，已拒绝‘DELETED，已删除；FAILED，失败；EXPIRED，已过期；ISOLATED，隔离中。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 是否是新控制器，true: 是NewAfc；false:不是。
                     */
                    bool m_isNgw;
                    bool m_isNgwHasBeenSet;

                    /**
                     * 对等连接带宽值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 本端地域。
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 对端地域。
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 本端APPID。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 对端APPID。
                     */
                    int64_t m_peerAppId;
                    bool m_peerAppIdHasBeenSet;

                    /**
                     * 计费类型，POSTPAID_BY_DAY_MAX：日峰值计费；POSTPAID_BY_MONTH_95：月95计费。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 本端UIN。
                     */
                    int64_t m_sourceUin;
                    bool m_sourceUinHasBeenSet;

                    /**
                     * 对端UIN。
                     */
                    int64_t m_destinationUin;
                    bool m_destinationUinHasBeenSet;

                    /**
                     * 资源标签数据。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 服务分级：PT、AU、AG。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 互通类型，VPC_PEER：VPC间互通；VPC_BM_PEER：VPC与黑石网络互通。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对端VPC唯一ID。
                     */
                    std::string m_destinationVpcId;
                    bool m_destinationVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PEERCONNECTION_H_
