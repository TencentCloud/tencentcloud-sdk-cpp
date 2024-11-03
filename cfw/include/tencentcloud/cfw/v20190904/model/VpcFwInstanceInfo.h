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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwCvmInsInfo.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwJoinInstanceType.h>
#include <tencentcloud/cfw/v20190904/model/FwGateway.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙实例卡片信息
                */
                class VpcFwInstanceInfo : public AbstractModel
                {
                public:
                    VpcFwInstanceInfo();
                    ~VpcFwInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC防火墙实例名称
                     * @return FwInsName VPC防火墙实例名称
                     * 
                     */
                    std::string GetFwInsName() const;

                    /**
                     * 设置VPC防火墙实例名称
                     * @param _fwInsName VPC防火墙实例名称
                     * 
                     */
                    void SetFwInsName(const std::string& _fwInsName);

                    /**
                     * 判断参数 FwInsName 是否已赋值
                     * @return FwInsName 是否已赋值
                     * 
                     */
                    bool FwInsNameHasBeenSet() const;

                    /**
                     * 获取VPC防火墙实例ID
                     * @return FwInsId VPC防火墙实例ID
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置VPC防火墙实例ID
                     * @param _fwInsId VPC防火墙实例ID
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
                     * @return FwMode VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
                     * @param _fwMode VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
                     * 
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     * 
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取VPC防火墙接入网络实例个数
                     * @return JoinInsNum VPC防火墙接入网络实例个数
                     * 
                     */
                    int64_t GetJoinInsNum() const;

                    /**
                     * 设置VPC防火墙接入网络实例个数
                     * @param _joinInsNum VPC防火墙接入网络实例个数
                     * 
                     */
                    void SetJoinInsNum(const int64_t& _joinInsNum);

                    /**
                     * 判断参数 JoinInsNum 是否已赋值
                     * @return JoinInsNum 是否已赋值
                     * 
                     */
                    bool JoinInsNumHasBeenSet() const;

                    /**
                     * 获取VPC防火墙开关个数
                     * @return FwSwitchNum VPC防火墙开关个数
                     * 
                     */
                    int64_t GetFwSwitchNum() const;

                    /**
                     * 设置VPC防火墙开关个数
                     * @param _fwSwitchNum VPC防火墙开关个数
                     * 
                     */
                    void SetFwSwitchNum(const int64_t& _fwSwitchNum);

                    /**
                     * 判断参数 FwSwitchNum 是否已赋值
                     * @return FwSwitchNum 是否已赋值
                     * 
                     */
                    bool FwSwitchNumHasBeenSet() const;

                    /**
                     * 获取VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
                     * @return Status VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
                     * @param _status VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取VPC防火墙创建时间
                     * @return Time VPC防火墙创建时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置VPC防火墙创建时间
                     * @param _time VPC防火墙创建时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取VPC 相关云联网ID列表
                     * @return CcnId VPC 相关云联网ID列表
                     * 
                     */
                    std::vector<std::string> GetCcnId() const;

                    /**
                     * 设置VPC 相关云联网ID列表
                     * @param _ccnId VPC 相关云联网ID列表
                     * 
                     */
                    void SetCcnId(const std::vector<std::string>& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取VPC 相关云联网名称列表
                     * @return CcnName VPC 相关云联网名称列表
                     * 
                     */
                    std::vector<std::string> GetCcnName() const;

                    /**
                     * 设置VPC 相关云联网名称列表
                     * @param _ccnName VPC 相关云联网名称列表
                     * 
                     */
                    void SetCcnName(const std::vector<std::string>& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     * 
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取VPC 相关对等连接ID列表
                     * @return PeerConnectionId VPC 相关对等连接ID列表
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionId() const;

                    /**
                     * 设置VPC 相关对等连接ID列表
                     * @param _peerConnectionId VPC 相关对等连接ID列表
                     * 
                     */
                    void SetPeerConnectionId(const std::vector<std::string>& _peerConnectionId);

                    /**
                     * 判断参数 PeerConnectionId 是否已赋值
                     * @return PeerConnectionId 是否已赋值
                     * 
                     */
                    bool PeerConnectionIdHasBeenSet() const;

                    /**
                     * 获取VPC 相关对等连接名称列表
                     * @return PeerConnectionName VPC 相关对等连接名称列表
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionName() const;

                    /**
                     * 设置VPC 相关对等连接名称列表
                     * @param _peerConnectionName VPC 相关对等连接名称列表
                     * 
                     */
                    void SetPeerConnectionName(const std::vector<std::string>& _peerConnectionName);

                    /**
                     * 判断参数 PeerConnectionName 是否已赋值
                     * @return PeerConnectionName 是否已赋值
                     * 
                     */
                    bool PeerConnectionNameHasBeenSet() const;

                    /**
                     * 获取VPC防火墙CVM的列表
                     * @return FwCvmLst VPC防火墙CVM的列表
                     * 
                     */
                    std::vector<VpcFwCvmInsInfo> GetFwCvmLst() const;

                    /**
                     * 设置VPC防火墙CVM的列表
                     * @param _fwCvmLst VPC防火墙CVM的列表
                     * 
                     */
                    void SetFwCvmLst(const std::vector<VpcFwCvmInsInfo>& _fwCvmLst);

                    /**
                     * 判断参数 FwCvmLst 是否已赋值
                     * @return FwCvmLst 是否已赋值
                     * 
                     */
                    bool FwCvmLstHasBeenSet() const;

                    /**
                     * 获取VPC防火墙接入网络实例类型列表
                     * @return JoinInsLst VPC防火墙接入网络实例类型列表
                     * 
                     */
                    std::vector<VpcFwJoinInstanceType> GetJoinInsLst() const;

                    /**
                     * 设置VPC防火墙接入网络实例类型列表
                     * @param _joinInsLst VPC防火墙接入网络实例类型列表
                     * 
                     */
                    void SetJoinInsLst(const std::vector<VpcFwJoinInstanceType>& _joinInsLst);

                    /**
                     * 判断参数 JoinInsLst 是否已赋值
                     * @return JoinInsLst 是否已赋值
                     * 
                     */
                    bool JoinInsLstHasBeenSet() const;

                    /**
                     * 获取防火墙网关信息
                     * @return FwGateway 防火墙网关信息
                     * 
                     */
                    std::vector<FwGateway> GetFwGateway() const;

                    /**
                     * 设置防火墙网关信息
                     * @param _fwGateway 防火墙网关信息
                     * 
                     */
                    void SetFwGateway(const std::vector<FwGateway>& _fwGateway);

                    /**
                     * 判断参数 FwGateway 是否已赋值
                     * @return FwGateway 是否已赋值
                     * 
                     */
                    bool FwGatewayHasBeenSet() const;

                    /**
                     * 获取防火墙(组)ID
                     * @return FwGroupId 防火墙(组)ID
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙(组)ID
                     * @param _fwGroupId 防火墙(组)ID
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取已使用规则数
                     * @return RuleUsed 已使用规则数
                     * 
                     */
                    int64_t GetRuleUsed() const;

                    /**
                     * 设置已使用规则数
                     * @param _ruleUsed 已使用规则数
                     * 
                     */
                    void SetRuleUsed(const int64_t& _ruleUsed);

                    /**
                     * 判断参数 RuleUsed 是否已赋值
                     * @return RuleUsed 是否已赋值
                     * 
                     */
                    bool RuleUsedHasBeenSet() const;

                    /**
                     * 获取最大规则数
                     * @return RuleMax 最大规则数
                     * 
                     */
                    int64_t GetRuleMax() const;

                    /**
                     * 设置最大规则数
                     * @param _ruleMax 最大规则数
                     * 
                     */
                    void SetRuleMax(const int64_t& _ruleMax);

                    /**
                     * 判断参数 RuleMax 是否已赋值
                     * @return RuleMax 是否已赋值
                     * 
                     */
                    bool RuleMaxHasBeenSet() const;

                    /**
                     * 获取防火墙实例带宽
                     * @return Width 防火墙实例带宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置防火墙实例带宽
                     * @param _width 防火墙实例带宽
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取用户VPC墙总带宽
                     * @return UserVpcWidth 用户VPC墙总带宽
                     * 
                     */
                    int64_t GetUserVpcWidth() const;

                    /**
                     * 设置用户VPC墙总带宽
                     * @param _userVpcWidth 用户VPC墙总带宽
                     * 
                     */
                    void SetUserVpcWidth(const int64_t& _userVpcWidth);

                    /**
                     * 判断参数 UserVpcWidth 是否已赋值
                     * @return UserVpcWidth 是否已赋值
                     * 
                     */
                    bool UserVpcWidthHasBeenSet() const;

                    /**
                     * 获取接入的vpc列表
                     * @return JoinInsIdLst 接入的vpc列表
                     * 
                     */
                    std::vector<std::string> GetJoinInsIdLst() const;

                    /**
                     * 设置接入的vpc列表
                     * @param _joinInsIdLst 接入的vpc列表
                     * 
                     */
                    void SetJoinInsIdLst(const std::vector<std::string>& _joinInsIdLst);

                    /**
                     * 判断参数 JoinInsIdLst 是否已赋值
                     * @return JoinInsIdLst 是否已赋值
                     * 
                     */
                    bool JoinInsIdLstHasBeenSet() const;

                    /**
                     * 获取内网间峰值带宽 (单位 bps )
                     * @return FlowMax 内网间峰值带宽 (单位 bps )
                     * 
                     */
                    int64_t GetFlowMax() const;

                    /**
                     * 设置内网间峰值带宽 (单位 bps )
                     * @param _flowMax 内网间峰值带宽 (单位 bps )
                     * 
                     */
                    void SetFlowMax(const int64_t& _flowMax);

                    /**
                     * 判断参数 FlowMax 是否已赋值
                     * @return FlowMax 是否已赋值
                     * 
                     */
                    bool FlowMaxHasBeenSet() const;

                    /**
                     * 获取实例引擎版本
                     * @return EngineVersion 实例引擎版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置实例引擎版本
                     * @param _engineVersion 实例引擎版本
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取引擎是否可升级：0，不可升级；1，可升级
                     * @return UpdateEnable 引擎是否可升级：0，不可升级；1，可升级
                     * 
                     */
                    int64_t GetUpdateEnable() const;

                    /**
                     * 设置引擎是否可升级：0，不可升级；1，可升级
                     * @param _updateEnable 引擎是否可升级：0，不可升级；1，可升级
                     * 
                     */
                    void SetUpdateEnable(const int64_t& _updateEnable);

                    /**
                     * 判断参数 UpdateEnable 是否已赋值
                     * @return UpdateEnable 是否已赋值
                     * 
                     */
                    bool UpdateEnableHasBeenSet() const;

                    /**
                     * 获取引擎运行模式，Normal:正常, OnlyRoute:透明模式
                     * @return TrafficMode 引擎运行模式，Normal:正常, OnlyRoute:透明模式
                     * 
                     */
                    std::string GetTrafficMode() const;

                    /**
                     * 设置引擎运行模式，Normal:正常, OnlyRoute:透明模式
                     * @param _trafficMode 引擎运行模式，Normal:正常, OnlyRoute:透明模式
                     * 
                     */
                    void SetTrafficMode(const std::string& _trafficMode);

                    /**
                     * 判断参数 TrafficMode 是否已赋值
                     * @return TrafficMode 是否已赋值
                     * 
                     */
                    bool TrafficModeHasBeenSet() const;

                    /**
                     * 获取引擎预约升级时间
                     * @return ReserveTime 引擎预约升级时间
                     * 
                     */
                    std::string GetReserveTime() const;

                    /**
                     * 设置引擎预约升级时间
                     * @param _reserveTime 引擎预约升级时间
                     * 
                     */
                    void SetReserveTime(const std::string& _reserveTime);

                    /**
                     * 判断参数 ReserveTime 是否已赋值
                     * @return ReserveTime 是否已赋值
                     * 
                     */
                    bool ReserveTimeHasBeenSet() const;

                    /**
                     * 获取预约引擎升级版本
                     * @return ReserveVersion 预约引擎升级版本
                     * 
                     */
                    std::string GetReserveVersion() const;

                    /**
                     * 设置预约引擎升级版本
                     * @param _reserveVersion 预约引擎升级版本
                     * 
                     */
                    void SetReserveVersion(const std::string& _reserveVersion);

                    /**
                     * 判断参数 ReserveVersion 是否已赋值
                     * @return ReserveVersion 是否已赋值
                     * 
                     */
                    bool ReserveVersionHasBeenSet() const;

                    /**
                     * 获取引擎预约升级版本状态
                     * @return ReserveVersionState 引擎预约升级版本状态
                     * 
                     */
                    std::string GetReserveVersionState() const;

                    /**
                     * 设置引擎预约升级版本状态
                     * @param _reserveVersionState 引擎预约升级版本状态
                     * 
                     */
                    void SetReserveVersionState(const std::string& _reserveVersionState);

                    /**
                     * 判断参数 ReserveVersionState 是否已赋值
                     * @return ReserveVersionState 是否已赋值
                     * 
                     */
                    bool ReserveVersionStateHasBeenSet() const;

                    /**
                     * 获取弹性开关 1打开 0关闭
                     * @return ElasticSwitch 弹性开关 1打开 0关闭
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置弹性开关 1打开 0关闭
                     * @param _elasticSwitch 弹性开关 1打开 0关闭
                     * 
                     */
                    void SetElasticSwitch(const int64_t& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取弹性带宽，单位Mbps
                     * @return ElasticBandwidth 弹性带宽，单位Mbps
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置弹性带宽，单位Mbps
                     * @param _elasticBandwidth 弹性带宽，单位Mbps
                     * 
                     */
                    void SetElasticBandwidth(const int64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取是否首次开通按量付费
1 是
0 不是
                     * @return IsFirstAfterPay 是否首次开通按量付费
1 是
0 不是
                     * 
                     */
                    int64_t GetIsFirstAfterPay() const;

                    /**
                     * 设置是否首次开通按量付费
1 是
0 不是
                     * @param _isFirstAfterPay 是否首次开通按量付费
1 是
0 不是
                     * 
                     */
                    void SetIsFirstAfterPay(const int64_t& _isFirstAfterPay);

                    /**
                     * 判断参数 IsFirstAfterPay 是否已赋值
                     * @return IsFirstAfterPay 是否已赋值
                     * 
                     */
                    bool IsFirstAfterPayHasBeenSet() const;

                private:

                    /**
                     * VPC防火墙实例名称
                     */
                    std::string m_fwInsName;
                    bool m_fwInsNameHasBeenSet;

                    /**
                     * VPC防火墙实例ID
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * VPC防火墙接入网络实例个数
                     */
                    int64_t m_joinInsNum;
                    bool m_joinInsNumHasBeenSet;

                    /**
                     * VPC防火墙开关个数
                     */
                    int64_t m_fwSwitchNum;
                    bool m_fwSwitchNumHasBeenSet;

                    /**
                     * VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC防火墙创建时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * VPC 相关云联网ID列表
                     */
                    std::vector<std::string> m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * VPC 相关云联网名称列表
                     */
                    std::vector<std::string> m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * VPC 相关对等连接ID列表
                     */
                    std::vector<std::string> m_peerConnectionId;
                    bool m_peerConnectionIdHasBeenSet;

                    /**
                     * VPC 相关对等连接名称列表
                     */
                    std::vector<std::string> m_peerConnectionName;
                    bool m_peerConnectionNameHasBeenSet;

                    /**
                     * VPC防火墙CVM的列表
                     */
                    std::vector<VpcFwCvmInsInfo> m_fwCvmLst;
                    bool m_fwCvmLstHasBeenSet;

                    /**
                     * VPC防火墙接入网络实例类型列表
                     */
                    std::vector<VpcFwJoinInstanceType> m_joinInsLst;
                    bool m_joinInsLstHasBeenSet;

                    /**
                     * 防火墙网关信息
                     */
                    std::vector<FwGateway> m_fwGateway;
                    bool m_fwGatewayHasBeenSet;

                    /**
                     * 防火墙(组)ID
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 已使用规则数
                     */
                    int64_t m_ruleUsed;
                    bool m_ruleUsedHasBeenSet;

                    /**
                     * 最大规则数
                     */
                    int64_t m_ruleMax;
                    bool m_ruleMaxHasBeenSet;

                    /**
                     * 防火墙实例带宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 用户VPC墙总带宽
                     */
                    int64_t m_userVpcWidth;
                    bool m_userVpcWidthHasBeenSet;

                    /**
                     * 接入的vpc列表
                     */
                    std::vector<std::string> m_joinInsIdLst;
                    bool m_joinInsIdLstHasBeenSet;

                    /**
                     * 内网间峰值带宽 (单位 bps )
                     */
                    int64_t m_flowMax;
                    bool m_flowMaxHasBeenSet;

                    /**
                     * 实例引擎版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 引擎是否可升级：0，不可升级；1，可升级
                     */
                    int64_t m_updateEnable;
                    bool m_updateEnableHasBeenSet;

                    /**
                     * 引擎运行模式，Normal:正常, OnlyRoute:透明模式
                     */
                    std::string m_trafficMode;
                    bool m_trafficModeHasBeenSet;

                    /**
                     * 引擎预约升级时间
                     */
                    std::string m_reserveTime;
                    bool m_reserveTimeHasBeenSet;

                    /**
                     * 预约引擎升级版本
                     */
                    std::string m_reserveVersion;
                    bool m_reserveVersionHasBeenSet;

                    /**
                     * 引擎预约升级版本状态
                     */
                    std::string m_reserveVersionState;
                    bool m_reserveVersionStateHasBeenSet;

                    /**
                     * 弹性开关 1打开 0关闭
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * 弹性带宽，单位Mbps
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * 是否首次开通按量付费
1 是
0 不是
                     */
                    int64_t m_isFirstAfterPay;
                    bool m_isFirstAfterPayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCEINFO_H_
