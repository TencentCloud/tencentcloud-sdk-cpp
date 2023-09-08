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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwInsName VPC防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwInsName() const;

                    /**
                     * 设置VPC防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwInsName VPC防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwInsId VPC防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置VPC防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwInsId VPC防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwMode VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwMode VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinInsNum VPC防火墙接入网络实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJoinInsNum() const;

                    /**
                     * 设置VPC防火墙接入网络实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinInsNum VPC防火墙接入网络实例个数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwSwitchNum VPC防火墙开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFwSwitchNum() const;

                    /**
                     * 设置VPC防火墙开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwSwitchNum VPC防火墙开关个数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time VPC防火墙创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置VPC防火墙创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time VPC防火墙创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnId VPC 相关云联网ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCcnId() const;

                    /**
                     * 设置VPC 相关云联网ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnId VPC 相关云联网ID列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnName VPC 相关云联网名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCcnName() const;

                    /**
                     * 设置VPC 相关云联网名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnName VPC 相关云联网名称列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerConnectionId VPC 相关对等连接ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionId() const;

                    /**
                     * 设置VPC 相关对等连接ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerConnectionId VPC 相关对等连接ID列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerConnectionName VPC 相关对等连接名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPeerConnectionName() const;

                    /**
                     * 设置VPC 相关对等连接名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerConnectionName VPC 相关对等连接名称列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwCvmLst VPC防火墙CVM的列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcFwCvmInsInfo> GetFwCvmLst() const;

                    /**
                     * 设置VPC防火墙CVM的列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwCvmLst VPC防火墙CVM的列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinInsLst VPC防火墙接入网络实例类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcFwJoinInstanceType> GetJoinInsLst() const;

                    /**
                     * 设置VPC防火墙接入网络实例类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinInsLst VPC防火墙接入网络实例类型列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwGateway 防火墙网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FwGateway> GetFwGateway() const;

                    /**
                     * 设置防火墙网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwGateway 防火墙网关信息
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwGroupId 防火墙(组)ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙(组)ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwGroupId 防火墙(组)ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleUsed 已使用规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleUsed() const;

                    /**
                     * 设置已使用规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleUsed 已使用规则数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleMax 最大规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleMax() const;

                    /**
                     * 设置最大规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleMax 最大规则数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 防火墙实例带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置防火墙实例带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 防火墙实例带宽
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVpcWidth 用户VPC墙总带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserVpcWidth() const;

                    /**
                     * 设置用户VPC墙总带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVpcWidth 用户VPC墙总带宽
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinInsIdLst 接入的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetJoinInsIdLst() const;

                    /**
                     * 设置接入的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinInsIdLst 接入的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion 实例引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置实例引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineVersion 实例引擎版本
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateEnable 引擎是否可升级：0，不可升级；1，可升级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateEnable() const;

                    /**
                     * 设置引擎是否可升级：0，不可升级；1，可升级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateEnable 引擎是否可升级：0，不可升级；1，可升级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateEnable(const int64_t& _updateEnable);

                    /**
                     * 判断参数 UpdateEnable 是否已赋值
                     * @return UpdateEnable 是否已赋值
                     * 
                     */
                    bool UpdateEnableHasBeenSet() const;

                private:

                    /**
                     * VPC防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwInsName;
                    bool m_fwInsNameHasBeenSet;

                    /**
                     * VPC防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * VPC防火墙实例模式 0: 旧VPC模式防火墙 1: CCN模式防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * VPC防火墙接入网络实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_joinInsNum;
                    bool m_joinInsNumHasBeenSet;

                    /**
                     * VPC防火墙开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fwSwitchNum;
                    bool m_fwSwitchNumHasBeenSet;

                    /**
                     * VPC防火墙状态 0:正常 ， 1：创建中 2: 变更中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC防火墙创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * VPC 相关云联网ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * VPC 相关云联网名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * VPC 相关对等连接ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_peerConnectionId;
                    bool m_peerConnectionIdHasBeenSet;

                    /**
                     * VPC 相关对等连接名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_peerConnectionName;
                    bool m_peerConnectionNameHasBeenSet;

                    /**
                     * VPC防火墙CVM的列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcFwCvmInsInfo> m_fwCvmLst;
                    bool m_fwCvmLstHasBeenSet;

                    /**
                     * VPC防火墙接入网络实例类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcFwJoinInstanceType> m_joinInsLst;
                    bool m_joinInsLstHasBeenSet;

                    /**
                     * 防火墙网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FwGateway> m_fwGateway;
                    bool m_fwGatewayHasBeenSet;

                    /**
                     * 防火墙(组)ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 已使用规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleUsed;
                    bool m_ruleUsedHasBeenSet;

                    /**
                     * 最大规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleMax;
                    bool m_ruleMaxHasBeenSet;

                    /**
                     * 防火墙实例带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 用户VPC墙总带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userVpcWidth;
                    bool m_userVpcWidthHasBeenSet;

                    /**
                     * 接入的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 引擎是否可升级：0，不可升级；1，可升级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateEnable;
                    bool m_updateEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCEINFO_H_
