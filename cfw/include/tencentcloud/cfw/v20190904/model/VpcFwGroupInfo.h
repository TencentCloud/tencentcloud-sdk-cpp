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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWGROUPINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙(组)及防火墙实例详情信息
                */
                class VpcFwGroupInfo : public AbstractModel
                {
                public:
                    VpcFwGroupInfo();
                    ~VpcFwGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取防火墙组涉及到的开关个数
                     * @return FwSwitchNum 防火墙组涉及到的开关个数
                     * 
                     */
                    int64_t GetFwSwitchNum() const;

                    /**
                     * 设置防火墙组涉及到的开关个数
                     * @param _fwSwitchNum 防火墙组涉及到的开关个数
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
                     * 获取防火墙(组)部署的地域
                     * @return RegionLst 防火墙(组)部署的地域
                     * 
                     */
                    std::vector<std::string> GetRegionLst() const;

                    /**
                     * 设置防火墙(组)部署的地域
                     * @param _regionLst 防火墙(组)部署的地域
                     * 
                     */
                    void SetRegionLst(const std::vector<std::string>& _regionLst);

                    /**
                     * 判断参数 RegionLst 是否已赋值
                     * @return RegionLst 是否已赋值
                     * 
                     */
                    bool RegionLstHasBeenSet() const;

                    /**
                     * 获取模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * @return Mode 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * @param _mode 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * @return SwitchMode 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * @param _switchMode 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
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
                     * 获取VPC防火墙实例卡片信息数组
                     * @return FwInstanceLst VPC防火墙实例卡片信息数组
                     * 
                     */
                    std::vector<VpcFwInstanceInfo> GetFwInstanceLst() const;

                    /**
                     * 设置VPC防火墙实例卡片信息数组
                     * @param _fwInstanceLst VPC防火墙实例卡片信息数组
                     * 
                     */
                    void SetFwInstanceLst(const std::vector<VpcFwInstanceInfo>& _fwInstanceLst);

                    /**
                     * 判断参数 FwInstanceLst 是否已赋值
                     * @return FwInstanceLst 是否已赋值
                     * 
                     */
                    bool FwInstanceLstHasBeenSet() const;

                    /**
                     * 获取防火墙(状态) 0：正常 1: 初始化或操作中
                     * @return Status 防火墙(状态) 0：正常 1: 初始化或操作中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置防火墙(状态) 0：正常 1: 初始化或操作中
                     * @param _status 防火墙(状态) 0：正常 1: 初始化或操作中
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
                     * 获取auto :自动选择
如果为网段，则为用户自定义 192.168.0.0/20 
                     * @return FwVpcCidr auto :自动选择
如果为网段，则为用户自定义 192.168.0.0/20 
                     * 
                     */
                    std::string GetFwVpcCidr() const;

                    /**
                     * 设置auto :自动选择
如果为网段，则为用户自定义 192.168.0.0/20 
                     * @param _fwVpcCidr auto :自动选择
如果为网段，则为用户自定义 192.168.0.0/20 
                     * 
                     */
                    void SetFwVpcCidr(const std::string& _fwVpcCidr);

                    /**
                     * 判断参数 FwVpcCidr 是否已赋值
                     * @return FwVpcCidr 是否已赋值
                     * 
                     */
                    bool FwVpcCidrHasBeenSet() const;

                    /**
                     * 获取cdc专用集群场景时表示部署所属的cdc
                     * @return CdcId cdc专用集群场景时表示部署所属的cdc
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置cdc专用集群场景时表示部署所属的cdc
                     * @param _cdcId cdc专用集群场景时表示部署所属的cdc
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取cdc专用集群场景时表示cdc名称
                     * @return CdcName cdc专用集群场景时表示cdc名称
                     * 
                     */
                    std::string GetCdcName() const;

                    /**
                     * 设置cdc专用集群场景时表示cdc名称
                     * @param _cdcName cdc专用集群场景时表示cdc名称
                     * 
                     */
                    void SetCdcName(const std::string& _cdcName);

                    /**
                     * 判断参数 CdcName 是否已赋值
                     * @return CdcName 是否已赋值
                     * 
                     */
                    bool CdcNameHasBeenSet() const;

                    /**
                     * 获取跨租户模式 1管理员 2单边 0 非跨租户
                     * @return CrossUserMode 跨租户模式 1管理员 2单边 0 非跨租户
                     * 
                     */
                    std::string GetCrossUserMode() const;

                    /**
                     * 设置跨租户模式 1管理员 2单边 0 非跨租户
                     * @param _crossUserMode 跨租户模式 1管理员 2单边 0 非跨租户
                     * 
                     */
                    void SetCrossUserMode(const std::string& _crossUserMode);

                    /**
                     * 判断参数 CrossUserMode 是否已赋值
                     * @return CrossUserMode 是否已赋值
                     * 
                     */
                    bool CrossUserModeHasBeenSet() const;

                    /**
                     * 获取云联网模式下，当前实例是否需要开启重叠路由开关，1：需要开启，0：不需要开启
                     * @return NeedSwitchCcnOverlap 云联网模式下，当前实例是否需要开启重叠路由开关，1：需要开启，0：不需要开启
                     * 
                     */
                    int64_t GetNeedSwitchCcnOverlap() const;

                    /**
                     * 设置云联网模式下，当前实例是否需要开启重叠路由开关，1：需要开启，0：不需要开启
                     * @param _needSwitchCcnOverlap 云联网模式下，当前实例是否需要开启重叠路由开关，1：需要开启，0：不需要开启
                     * 
                     */
                    void SetNeedSwitchCcnOverlap(const int64_t& _needSwitchCcnOverlap);

                    /**
                     * 判断参数 NeedSwitchCcnOverlap 是否已赋值
                     * @return NeedSwitchCcnOverlap 是否已赋值
                     * 
                     */
                    bool NeedSwitchCcnOverlapHasBeenSet() const;

                    /**
                     * 获取云联网模式下，实例关联的云联网id
                     * @return CcnId 云联网模式下，实例关联的云联网id
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网模式下，实例关联的云联网id
                     * @param _ccnId 云联网模式下，实例关联的云联网id
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙(组)ID
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 防火墙(组)名称
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * 防火墙组涉及到的开关个数
                     */
                    int64_t m_fwSwitchNum;
                    bool m_fwSwitchNumHasBeenSet;

                    /**
                     * 防火墙(组)部署的地域
                     */
                    std::vector<std::string> m_regionLst;
                    bool m_regionLstHasBeenSet;

                    /**
                     * 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * VPC防火墙实例卡片信息数组
                     */
                    std::vector<VpcFwInstanceInfo> m_fwInstanceLst;
                    bool m_fwInstanceLstHasBeenSet;

                    /**
                     * 防火墙(状态) 0：正常 1: 初始化或操作中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * auto :自动选择
如果为网段，则为用户自定义 192.168.0.0/20 
                     */
                    std::string m_fwVpcCidr;
                    bool m_fwVpcCidrHasBeenSet;

                    /**
                     * cdc专用集群场景时表示部署所属的cdc
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * cdc专用集群场景时表示cdc名称
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * 跨租户模式 1管理员 2单边 0 非跨租户
                     */
                    std::string m_crossUserMode;
                    bool m_crossUserModeHasBeenSet;

                    /**
                     * 云联网模式下，当前实例是否需要开启重叠路由开关，1：需要开启，0：不需要开启
                     */
                    int64_t m_needSwitchCcnOverlap;
                    bool m_needSwitchCcnOverlapHasBeenSet;

                    /**
                     * 云联网模式下，实例关联的云联网id
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWGROUPINFO_H_
