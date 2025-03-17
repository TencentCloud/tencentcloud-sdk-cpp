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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防勒索主机列表
                */
                class RansomDefenseStrategyMachineDetail : public AbstractModel
                {
                public:
                    RansomDefenseStrategyMachineDetail();
                    ~RansomDefenseStrategyMachineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取主机实例id
                     * @return InstanceId 主机实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机实例id
                     * @param _instanceId 主机实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return MachineIp 内网ip
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置内网ip
                     * @param _machineIp 内网ip
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return MachineWanIp 外网ip
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置外网ip
                     * @param _machineWanIp 外网ip
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取云标签
                     * @return CloudTags 云标签
                     * 
                     */
                    std::vector<Tag> GetCloudTags() const;

                    /**
                     * 设置云标签
                     * @param _cloudTags 云标签
                     * 
                     */
                    void SetCloudTags(const std::vector<Tag>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return RegionInfo 可用区信息
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置可用区信息
                     * @param _regionInfo 可用区信息
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取主机安全标签
                     * @return Tag 主机安全标签
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置主机安全标签
                     * @param _tag 主机安全标签
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取防护状态：0关闭，1开启
                     * @return Status 防护状态：0关闭，1开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置防护状态：0关闭，1开启
                     * @param _status 防护状态：0关闭，1开启
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取策略id，为0时未绑定策略
                     * @return StrategyId 策略id，为0时未绑定策略
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id，为0时未绑定策略
                     * @param _strategyId 策略id，为0时未绑定策略
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * @return DiskInfo 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * @param _diskInfo 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

                    /**
                     * 获取版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * @return HostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * 
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * @param _hostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * 
                     */
                    void SetHostVersion(const uint64_t& _hostVersion);

                    /**
                     * 判断参数 HostVersion 是否已赋值
                     * @return HostVersion 是否已赋值
                     * 
                     */
                    bool HostVersionHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @return MachineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @param _machineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 云标签
                     */
                    std::vector<Tag> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * 主机安全标签
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 防护状态：0关闭，1开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 策略id，为0时未绑定策略
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                    /**
                     * 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_
