/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>VPC防火墙实例名称</p>
                     * @return FwInsName <p>VPC防火墙实例名称</p>
                     * 
                     */
                    std::string GetFwInsName() const;

                    /**
                     * 设置<p>VPC防火墙实例名称</p>
                     * @param _fwInsName <p>VPC防火墙实例名称</p>
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
                     * 获取<p>VPC防火墙实例ID</p>
                     * @return FwInsId <p>VPC防火墙实例ID</p>
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置<p>VPC防火墙实例ID</p>
                     * @param _fwInsId <p>VPC防火墙实例ID</p>
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
                     * 获取<p>VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙</p>
                     * @return FwMode <p>VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙</p>
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置<p>VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙</p>
                     * @param _fwMode <p>VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙</p>
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
                     * 获取<p>VPC防火墙接入网络实例个数</p>
                     * @return JoinInsNum <p>VPC防火墙接入网络实例个数</p>
                     * 
                     */
                    int64_t GetJoinInsNum() const;

                    /**
                     * 设置<p>VPC防火墙接入网络实例个数</p>
                     * @param _joinInsNum <p>VPC防火墙接入网络实例个数</p>
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
                     * 获取<p>VPC防火墙开关个数</p>
                     * @return FwSwitchNum <p>VPC防火墙开关个数</p>
                     * 
                     */
                    int64_t GetFwSwitchNum() const;

                    /**
                     * 设置<p>VPC防火墙开关个数</p>
                     * @param _fwSwitchNum <p>VPC防火墙开关个数</p>
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
                     * 获取<p>VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中</p>
                     * @return Status <p>VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中</p>
                     * @param _status <p>VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中</p>
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
                     * 获取<p>VPC防火墙创建时间</p>
                     * @return Time <p>VPC防火墙创建时间</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>VPC防火墙创建时间</p>
                     * @param _time <p>VPC防火墙创建时间</p>
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
                     * 获取<p>VPC 相关云联网ID列表</p>
                     * @return CcnId <p>VPC 相关云联网ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetCcnId() const;

                    /**
                     * 设置<p>VPC 相关云联网ID列表</p>
                     * @param _ccnId <p>VPC 相关云联网ID列表</p>
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
                     * 获取<p>VPC 相关云联网名称列表</p>
                     * @return CcnName <p>VPC 相关云联网名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetCcnName() const;

                    /**
                     * 设置<p>VPC 相关云联网名称列表</p>
                     * @param _ccnName <p>VPC 相关云联网名称列表</p>
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
                     * 获取<p>VPC 相关对等连接ID列表</p>
                     * @return PeerConnectionId <p>VPC 相关对等连接ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionId() const;

                    /**
                     * 设置<p>VPC 相关对等连接ID列表</p>
                     * @param _peerConnectionId <p>VPC 相关对等连接ID列表</p>
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
                     * 获取<p>VPC 相关对等连接名称列表</p>
                     * @return PeerConnectionName <p>VPC 相关对等连接名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionName() const;

                    /**
                     * 设置<p>VPC 相关对等连接名称列表</p>
                     * @param _peerConnectionName <p>VPC 相关对等连接名称列表</p>
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
                     * 获取<p>VPC防火墙CVM的列表</p>
                     * @return FwCvmLst <p>VPC防火墙CVM的列表</p>
                     * 
                     */
                    std::vector<VpcFwCvmInsInfo> GetFwCvmLst() const;

                    /**
                     * 设置<p>VPC防火墙CVM的列表</p>
                     * @param _fwCvmLst <p>VPC防火墙CVM的列表</p>
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
                     * 获取<p>VPC防火墙接入网络实例类型列表</p>
                     * @return JoinInsLst <p>VPC防火墙接入网络实例类型列表</p>
                     * 
                     */
                    std::vector<VpcFwJoinInstanceType> GetJoinInsLst() const;

                    /**
                     * 设置<p>VPC防火墙接入网络实例类型列表</p>
                     * @param _joinInsLst <p>VPC防火墙接入网络实例类型列表</p>
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
                     * 获取<p>防火墙网关信息</p>
                     * @return FwGateway <p>防火墙网关信息</p>
                     * 
                     */
                    std::vector<FwGateway> GetFwGateway() const;

                    /**
                     * 设置<p>防火墙网关信息</p>
                     * @param _fwGateway <p>防火墙网关信息</p>
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
                     * 获取<p>防火墙(组)ID</p>
                     * @return FwGroupId <p>防火墙(组)ID</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>防火墙(组)ID</p>
                     * @param _fwGroupId <p>防火墙(组)ID</p>
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
                     * 获取<p>已使用规则数</p>
                     * @return RuleUsed <p>已使用规则数</p>
                     * 
                     */
                    int64_t GetRuleUsed() const;

                    /**
                     * 设置<p>已使用规则数</p>
                     * @param _ruleUsed <p>已使用规则数</p>
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
                     * 获取<p>最大规则数</p>
                     * @return RuleMax <p>最大规则数</p>
                     * 
                     */
                    int64_t GetRuleMax() const;

                    /**
                     * 设置<p>最大规则数</p>
                     * @param _ruleMax <p>最大规则数</p>
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
                     * 获取<p>防火墙实例带宽</p>
                     * @return Width <p>防火墙实例带宽</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>防火墙实例带宽</p>
                     * @param _width <p>防火墙实例带宽</p>
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
                     * 获取<p>用户VPC墙总带宽</p>
                     * @return UserVpcWidth <p>用户VPC墙总带宽</p>
                     * 
                     */
                    int64_t GetUserVpcWidth() const;

                    /**
                     * 设置<p>用户VPC墙总带宽</p>
                     * @param _userVpcWidth <p>用户VPC墙总带宽</p>
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
                     * 获取<p>接入的vpc列表</p>
                     * @return JoinInsIdLst <p>接入的vpc列表</p>
                     * 
                     */
                    std::vector<std::string> GetJoinInsIdLst() const;

                    /**
                     * 设置<p>接入的vpc列表</p>
                     * @param _joinInsIdLst <p>接入的vpc列表</p>
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
                     * 获取<p>内网间峰值带宽 (单位 bps )</p>
                     * @return FlowMax <p>内网间峰值带宽 (单位 bps )</p>
                     * 
                     */
                    int64_t GetFlowMax() const;

                    /**
                     * 设置<p>内网间峰值带宽 (单位 bps )</p>
                     * @param _flowMax <p>内网间峰值带宽 (单位 bps )</p>
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
                     * 获取<p>实例引擎版本</p>
                     * @return EngineVersion <p>实例引擎版本</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>实例引擎版本</p>
                     * @param _engineVersion <p>实例引擎版本</p>
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
                     * 获取<p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * @return UpdateEnable <p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * 
                     */
                    int64_t GetUpdateEnable() const;

                    /**
                     * 设置<p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * @param _updateEnable <p>引擎是否可升级：0，不可升级；1，可升级</p>
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
                     * 获取<p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * @return TrafficMode <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * 
                     */
                    std::string GetTrafficMode() const;

                    /**
                     * 设置<p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * @param _trafficMode <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
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
                     * 获取<p>引擎预约升级时间</p>
                     * @return ReserveTime <p>引擎预约升级时间</p>
                     * 
                     */
                    std::string GetReserveTime() const;

                    /**
                     * 设置<p>引擎预约升级时间</p>
                     * @param _reserveTime <p>引擎预约升级时间</p>
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
                     * 获取<p>预约引擎升级版本</p>
                     * @return ReserveVersion <p>预约引擎升级版本</p>
                     * 
                     */
                    std::string GetReserveVersion() const;

                    /**
                     * 设置<p>预约引擎升级版本</p>
                     * @param _reserveVersion <p>预约引擎升级版本</p>
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
                     * 获取<p>引擎预约升级版本状态</p>
                     * @return ReserveVersionState <p>引擎预约升级版本状态</p>
                     * 
                     */
                    std::string GetReserveVersionState() const;

                    /**
                     * 设置<p>引擎预约升级版本状态</p>
                     * @param _reserveVersionState <p>引擎预约升级版本状态</p>
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
                     * 获取<p>弹性开关 1打开 0关闭</p>
                     * @return ElasticSwitch <p>弹性开关 1打开 0关闭</p>
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置<p>弹性开关 1打开 0关闭</p>
                     * @param _elasticSwitch <p>弹性开关 1打开 0关闭</p>
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
                     * 获取<p>弹性带宽，单位Mbps</p>
                     * @return ElasticBandwidth <p>弹性带宽，单位Mbps</p>
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置<p>弹性带宽，单位Mbps</p>
                     * @param _elasticBandwidth <p>弹性带宽，单位Mbps</p>
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
                     * 获取<p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * @return IsFirstAfterPay <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * 
                     */
                    int64_t GetIsFirstAfterPay() const;

                    /**
                     * 设置<p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * @param _isFirstAfterPay <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * 
                     */
                    void SetIsFirstAfterPay(const int64_t& _isFirstAfterPay);

                    /**
                     * 判断参数 IsFirstAfterPay 是否已赋值
                     * @return IsFirstAfterPay 是否已赋值
                     * 
                     */
                    bool IsFirstAfterPayHasBeenSet() const;

                    /**
                     * 获取<p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return ElasticTrafficSwitch <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetElasticTrafficSwitch() const;

                    /**
                     * 设置<p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _elasticTrafficSwitch <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetElasticTrafficSwitch(const int64_t& _elasticTrafficSwitch);

                    /**
                     * 判断参数 ElasticTrafficSwitch 是否已赋值
                     * @return ElasticTrafficSwitch 是否已赋值
                     * 
                     */
                    bool ElasticTrafficSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>VPC防火墙实例名称</p>
                     */
                    std::string m_fwInsName;
                    bool m_fwInsNameHasBeenSet;

                    /**
                     * <p>VPC防火墙实例ID</p>
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * <p>VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙</p>
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * <p>VPC防火墙接入网络实例个数</p>
                     */
                    int64_t m_joinInsNum;
                    bool m_joinInsNumHasBeenSet;

                    /**
                     * <p>VPC防火墙开关个数</p>
                     */
                    int64_t m_fwSwitchNum;
                    bool m_fwSwitchNumHasBeenSet;

                    /**
                     * <p>VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>VPC防火墙创建时间</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>VPC 相关云联网ID列表</p>
                     */
                    std::vector<std::string> m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>VPC 相关云联网名称列表</p>
                     */
                    std::vector<std::string> m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * <p>VPC 相关对等连接ID列表</p>
                     */
                    std::vector<std::string> m_peerConnectionId;
                    bool m_peerConnectionIdHasBeenSet;

                    /**
                     * <p>VPC 相关对等连接名称列表</p>
                     */
                    std::vector<std::string> m_peerConnectionName;
                    bool m_peerConnectionNameHasBeenSet;

                    /**
                     * <p>VPC防火墙CVM的列表</p>
                     */
                    std::vector<VpcFwCvmInsInfo> m_fwCvmLst;
                    bool m_fwCvmLstHasBeenSet;

                    /**
                     * <p>VPC防火墙接入网络实例类型列表</p>
                     */
                    std::vector<VpcFwJoinInstanceType> m_joinInsLst;
                    bool m_joinInsLstHasBeenSet;

                    /**
                     * <p>防火墙网关信息</p>
                     */
                    std::vector<FwGateway> m_fwGateway;
                    bool m_fwGatewayHasBeenSet;

                    /**
                     * <p>防火墙(组)ID</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>已使用规则数</p>
                     */
                    int64_t m_ruleUsed;
                    bool m_ruleUsedHasBeenSet;

                    /**
                     * <p>最大规则数</p>
                     */
                    int64_t m_ruleMax;
                    bool m_ruleMaxHasBeenSet;

                    /**
                     * <p>防火墙实例带宽</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>用户VPC墙总带宽</p>
                     */
                    int64_t m_userVpcWidth;
                    bool m_userVpcWidthHasBeenSet;

                    /**
                     * <p>接入的vpc列表</p>
                     */
                    std::vector<std::string> m_joinInsIdLst;
                    bool m_joinInsIdLstHasBeenSet;

                    /**
                     * <p>内网间峰值带宽 (单位 bps )</p>
                     */
                    int64_t m_flowMax;
                    bool m_flowMaxHasBeenSet;

                    /**
                     * <p>实例引擎版本</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>引擎是否可升级：0，不可升级；1，可升级</p>
                     */
                    int64_t m_updateEnable;
                    bool m_updateEnableHasBeenSet;

                    /**
                     * <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     */
                    std::string m_trafficMode;
                    bool m_trafficModeHasBeenSet;

                    /**
                     * <p>引擎预约升级时间</p>
                     */
                    std::string m_reserveTime;
                    bool m_reserveTimeHasBeenSet;

                    /**
                     * <p>预约引擎升级版本</p>
                     */
                    std::string m_reserveVersion;
                    bool m_reserveVersionHasBeenSet;

                    /**
                     * <p>引擎预约升级版本状态</p>
                     */
                    std::string m_reserveVersionState;
                    bool m_reserveVersionStateHasBeenSet;

                    /**
                     * <p>弹性开关 1打开 0关闭</p>
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * <p>弹性带宽，单位Mbps</p>
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     */
                    int64_t m_isFirstAfterPay;
                    bool m_isFirstAfterPayHasBeenSet;

                    /**
                     * <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    int64_t m_elasticTrafficSwitch;
                    bool m_elasticTrafficSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCEINFO_H_
