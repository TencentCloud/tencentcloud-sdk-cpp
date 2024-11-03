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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCHSHOW_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCHSHOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NetInstancesInfo.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwInstanceShow.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙(组)四种开关展示
                */
                class FwGroupSwitchShow : public AbstractModel
                {
                public:
                    FwGroupSwitchShow();
                    ~FwGroupSwitchShow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙开关ID
                     * @return SwitchId 防火墙开关ID
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置防火墙开关ID
                     * @param _switchId 防火墙开关ID
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                    /**
                     * 获取防火墙开关NAME
                     * @return SwitchName 防火墙开关NAME
                     * 
                     */
                    std::string GetSwitchName() const;

                    /**
                     * 设置防火墙开关NAME
                     * @param _switchName 防火墙开关NAME
                     * 
                     */
                    void SetSwitchName(const std::string& _switchName);

                    /**
                     * 判断参数 SwitchName 是否已赋值
                     * @return SwitchName 是否已赋值
                     * 
                     */
                    bool SwitchNameHasBeenSet() const;

                    /**
                     * 获取互通模式
                     * @return SwitchMode 互通模式
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置互通模式
                     * @param _switchMode 互通模式
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取开关边连接类型 0：对等连接， 1：云连网
                     * @return ConnectType 开关边连接类型 0：对等连接， 1：云连网
                     * 
                     */
                    int64_t GetConnectType() const;

                    /**
                     * 设置开关边连接类型 0：对等连接， 1：云连网
                     * @param _connectType 开关边连接类型 0：对等连接， 1：云连网
                     * 
                     */
                    void SetConnectType(const int64_t& _connectType);

                    /**
                     * 判断参数 ConnectType 是否已赋值
                     * @return ConnectType 是否已赋值
                     * 
                     */
                    bool ConnectTypeHasBeenSet() const;

                    /**
                     * 获取连接ID
                     * @return ConnectId 连接ID
                     * 
                     */
                    std::string GetConnectId() const;

                    /**
                     * 设置连接ID
                     * @param _connectId 连接ID
                     * 
                     */
                    void SetConnectId(const std::string& _connectId);

                    /**
                     * 判断参数 ConnectId 是否已赋值
                     * @return ConnectId 是否已赋值
                     * 
                     */
                    bool ConnectIdHasBeenSet() const;

                    /**
                     * 获取连接名称
                     * @return ConnectName 连接名称
                     * 
                     */
                    std::string GetConnectName() const;

                    /**
                     * 设置连接名称
                     * @param _connectName 连接名称
                     * 
                     */
                    void SetConnectName(const std::string& _connectName);

                    /**
                     * 判断参数 ConnectName 是否已赋值
                     * @return ConnectName 是否已赋值
                     * 
                     */
                    bool ConnectNameHasBeenSet() const;

                    /**
                     * 获取源实例信息
                     * @return SrcInstancesInfo 源实例信息
                     * 
                     */
                    std::vector<NetInstancesInfo> GetSrcInstancesInfo() const;

                    /**
                     * 设置源实例信息
                     * @param _srcInstancesInfo 源实例信息
                     * 
                     */
                    void SetSrcInstancesInfo(const std::vector<NetInstancesInfo>& _srcInstancesInfo);

                    /**
                     * 判断参数 SrcInstancesInfo 是否已赋值
                     * @return SrcInstancesInfo 是否已赋值
                     * 
                     */
                    bool SrcInstancesInfoHasBeenSet() const;

                    /**
                     * 获取目的实例信息
                     * @return DstInstancesInfo 目的实例信息
                     * 
                     */
                    std::vector<NetInstancesInfo> GetDstInstancesInfo() const;

                    /**
                     * 设置目的实例信息
                     * @param _dstInstancesInfo 目的实例信息
                     * 
                     */
                    void SetDstInstancesInfo(const std::vector<NetInstancesInfo>& _dstInstancesInfo);

                    /**
                     * 判断参数 DstInstancesInfo 是否已赋值
                     * @return DstInstancesInfo 是否已赋值
                     * 
                     */
                    bool DstInstancesInfoHasBeenSet() const;

                    /**
                     * 获取防火墙(组)数据
                     * @return FwGroupId 防火墙(组)数据
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙(组)数据
                     * @param _fwGroupId 防火墙(组)数据
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
                     * 获取防火墙(组)名称
                     * @return FwGroupName 防火墙(组)名称
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置防火墙(组)名称
                     * @param _fwGroupName 防火墙(组)名称
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取开关状态 0：关 ， 1：开
                     * @return Enable 开关状态 0：关 ， 1：开
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开关状态 0：关 ， 1：开
                     * @param _enable 开关状态 0：关 ， 1：开
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取开关的状态 0：正常， 1：转换中
                     * @return Status 开关的状态 0：正常， 1：转换中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关的状态 0：正常， 1：转换中
                     * @param _status 开关的状态 0：正常， 1：转换中
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
                     * 获取0-非sase实例，忽略，1-未绑定状态，2-已绑定
                     * @return AttachWithEdge 0-非sase实例，忽略，1-未绑定状态，2-已绑定
                     * 
                     */
                    int64_t GetAttachWithEdge() const;

                    /**
                     * 设置0-非sase实例，忽略，1-未绑定状态，2-已绑定
                     * @param _attachWithEdge 0-非sase实例，忽略，1-未绑定状态，2-已绑定
                     * 
                     */
                    void SetAttachWithEdge(const int64_t& _attachWithEdge);

                    /**
                     * 判断参数 AttachWithEdge 是否已赋值
                     * @return AttachWithEdge 是否已赋值
                     * 
                     */
                    bool AttachWithEdgeHasBeenSet() const;

                    /**
                     * 获取对等防火墙和开关状态 0：正常， 1：对等未创建防火墙，2：对等已创建防火墙，未打开开关
                     * @return CrossEdgeStatus 对等防火墙和开关状态 0：正常， 1：对等未创建防火墙，2：对等已创建防火墙，未打开开关
                     * 
                     */
                    int64_t GetCrossEdgeStatus() const;

                    /**
                     * 设置对等防火墙和开关状态 0：正常， 1：对等未创建防火墙，2：对等已创建防火墙，未打开开关
                     * @param _crossEdgeStatus 对等防火墙和开关状态 0：正常， 1：对等未创建防火墙，2：对等已创建防火墙，未打开开关
                     * 
                     */
                    void SetCrossEdgeStatus(const int64_t& _crossEdgeStatus);

                    /**
                     * 判断参数 CrossEdgeStatus 是否已赋值
                     * @return CrossEdgeStatus 是否已赋值
                     * 
                     */
                    bool CrossEdgeStatusHasBeenSet() const;

                    /**
                     * 获取网络经过VPC防火墙CVM所在地域
                     * @return FwInsRegion 网络经过VPC防火墙CVM所在地域
                     * 
                     */
                    std::vector<std::string> GetFwInsRegion() const;

                    /**
                     * 设置网络经过VPC防火墙CVM所在地域
                     * @param _fwInsRegion 网络经过VPC防火墙CVM所在地域
                     * 
                     */
                    void SetFwInsRegion(const std::vector<std::string>& _fwInsRegion);

                    /**
                     * 判断参数 FwInsRegion 是否已赋值
                     * @return FwInsRegion 是否已赋值
                     * 
                     */
                    bool FwInsRegionHasBeenSet() const;

                    /**
                     * 获取0 观察 1 拦截 2 严格 3 关闭 4 不支持ips 前端展示tag
                     * @return IpsAction 0 观察 1 拦截 2 严格 3 关闭 4 不支持ips 前端展示tag
                     * 
                     */
                    int64_t GetIpsAction() const;

                    /**
                     * 设置0 观察 1 拦截 2 严格 3 关闭 4 不支持ips 前端展示tag
                     * @param _ipsAction 0 观察 1 拦截 2 严格 3 关闭 4 不支持ips 前端展示tag
                     * 
                     */
                    void SetIpsAction(const int64_t& _ipsAction);

                    /**
                     * 判断参数 IpsAction 是否已赋值
                     * @return IpsAction 是否已赋值
                     * 
                     */
                    bool IpsActionHasBeenSet() const;

                    /**
                     * 获取开关关联的防火墙实例列表
                     * @return FwInsLst 开关关联的防火墙实例列表
                     * 
                     */
                    std::vector<VpcFwInstanceShow> GetFwInsLst() const;

                    /**
                     * 设置开关关联的防火墙实例列表
                     * @param _fwInsLst 开关关联的防火墙实例列表
                     * 
                     */
                    void SetFwInsLst(const std::vector<VpcFwInstanceShow>& _fwInsLst);

                    /**
                     * 判断参数 FwInsLst 是否已赋值
                     * @return FwInsLst 是否已赋值
                     * 
                     */
                    bool FwInsLstHasBeenSet() const;

                    /**
                     * 获取开关是否处于bypass状态
0：正常状态
1：bypass状态
                     * @return BypassStatus 开关是否处于bypass状态
0：正常状态
1：bypass状态
                     * 
                     */
                    int64_t GetBypassStatus() const;

                    /**
                     * 设置开关是否处于bypass状态
0：正常状态
1：bypass状态
                     * @param _bypassStatus 开关是否处于bypass状态
0：正常状态
1：bypass状态
                     * 
                     */
                    void SetBypassStatus(const int64_t& _bypassStatus);

                    /**
                     * 判断参数 BypassStatus 是否已赋值
                     * @return BypassStatus 是否已赋值
                     * 
                     */
                    bool BypassStatusHasBeenSet() const;

                    /**
                     * 获取0: ipv4 , 1:ipv6
                     * @return IpVersion 0: ipv4 , 1:ipv6
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置0: ipv4 , 1:ipv6
                     * @param _ipVersion 0: ipv4 , 1:ipv6
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * 防火墙开关ID
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                    /**
                     * 防火墙开关NAME
                     */
                    std::string m_switchName;
                    bool m_switchNameHasBeenSet;

                    /**
                     * 互通模式
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * 开关边连接类型 0：对等连接， 1：云连网
                     */
                    int64_t m_connectType;
                    bool m_connectTypeHasBeenSet;

                    /**
                     * 连接ID
                     */
                    std::string m_connectId;
                    bool m_connectIdHasBeenSet;

                    /**
                     * 连接名称
                     */
                    std::string m_connectName;
                    bool m_connectNameHasBeenSet;

                    /**
                     * 源实例信息
                     */
                    std::vector<NetInstancesInfo> m_srcInstancesInfo;
                    bool m_srcInstancesInfoHasBeenSet;

                    /**
                     * 目的实例信息
                     */
                    std::vector<NetInstancesInfo> m_dstInstancesInfo;
                    bool m_dstInstancesInfoHasBeenSet;

                    /**
                     * 防火墙(组)数据
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 防火墙(组)名称
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * 开关状态 0：关 ， 1：开
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 开关的状态 0：正常， 1：转换中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0-非sase实例，忽略，1-未绑定状态，2-已绑定
                     */
                    int64_t m_attachWithEdge;
                    bool m_attachWithEdgeHasBeenSet;

                    /**
                     * 对等防火墙和开关状态 0：正常， 1：对等未创建防火墙，2：对等已创建防火墙，未打开开关
                     */
                    int64_t m_crossEdgeStatus;
                    bool m_crossEdgeStatusHasBeenSet;

                    /**
                     * 网络经过VPC防火墙CVM所在地域
                     */
                    std::vector<std::string> m_fwInsRegion;
                    bool m_fwInsRegionHasBeenSet;

                    /**
                     * 0 观察 1 拦截 2 严格 3 关闭 4 不支持ips 前端展示tag
                     */
                    int64_t m_ipsAction;
                    bool m_ipsActionHasBeenSet;

                    /**
                     * 开关关联的防火墙实例列表
                     */
                    std::vector<VpcFwInstanceShow> m_fwInsLst;
                    bool m_fwInsLstHasBeenSet;

                    /**
                     * 开关是否处于bypass状态
0：正常状态
1：bypass状态
                     */
                    int64_t m_bypassStatus;
                    bool m_bypassStatusHasBeenSet;

                    /**
                     * 0: ipv4 , 1:ipv6
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCHSHOW_H_
