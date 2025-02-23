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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 流量包信息
                */
                class FlowPackageInfo : public AbstractModel
                {
                public:
                    FlowPackageInfo();
                    ~FlowPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包的唯一资源ID
                     * @return ResourceId 流量包的唯一资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置流量包的唯一资源ID
                     * @param _resourceId 流量包的唯一资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取流量包所属的用户AppId
                     * @return AppId 流量包所属的用户AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置流量包所属的用户AppId
                     * @param _appId 流量包所属的用户AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取流量包规格类型。可取值如下：
DEVICE_1_FLOW_20G、DEVICE_2_FLOW_50G、
DEVICE_3_FLOW_100G、
DEVICE_5_FLOW_500G，分别代表20G、50G、100G、500G档位的流量包。
档位也影响流量包可绑定的设备数量上限：
20G：最多绑定1个设备
50G：最多绑定2个设备
100G：最多绑定3个设备
500G：最多绑定5个设备
                     * @return PackageType 流量包规格类型。可取值如下：
DEVICE_1_FLOW_20G、DEVICE_2_FLOW_50G、
DEVICE_3_FLOW_100G、
DEVICE_5_FLOW_500G，分别代表20G、50G、100G、500G档位的流量包。
档位也影响流量包可绑定的设备数量上限：
20G：最多绑定1个设备
50G：最多绑定2个设备
100G：最多绑定3个设备
500G：最多绑定5个设备
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置流量包规格类型。可取值如下：
DEVICE_1_FLOW_20G、DEVICE_2_FLOW_50G、
DEVICE_3_FLOW_100G、
DEVICE_5_FLOW_500G，分别代表20G、50G、100G、500G档位的流量包。
档位也影响流量包可绑定的设备数量上限：
20G：最多绑定1个设备
50G：最多绑定2个设备
100G：最多绑定3个设备
500G：最多绑定5个设备
                     * @param _packageType 流量包规格类型。可取值如下：
DEVICE_1_FLOW_20G、DEVICE_2_FLOW_50G、
DEVICE_3_FLOW_100G、
DEVICE_5_FLOW_500G，分别代表20G、50G、100G、500G档位的流量包。
档位也影响流量包可绑定的设备数量上限：
20G：最多绑定1个设备
50G：最多绑定2个设备
100G：最多绑定3个设备
500G：最多绑定5个设备
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取流量包状态，0：未生效，1：有效期内，2：已过期
                     * @return Status 流量包状态，0：未生效，1：有效期内，2：已过期
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置流量包状态，0：未生效，1：有效期内，2：已过期
                     * @param _status 流量包状态，0：未生效，1：有效期内，2：已过期
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
                     * 获取购买时间，Unix时间戳格式，单位：秒
                     * @return CreateTime 购买时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置购买时间，Unix时间戳格式，单位：秒
                     * @param _createTime 购买时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取生效时间，Unix时间戳格式，单位：秒
                     * @return ActiveTime 生效时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    int64_t GetActiveTime() const;

                    /**
                     * 设置生效时间，Unix时间戳格式，单位：秒
                     * @param _activeTime 生效时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    void SetActiveTime(const int64_t& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取过期时间，Unix时间戳格式，单位：秒
                     * @return ExpireTime 过期时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，Unix时间戳格式，单位：秒
                     * @param _expireTime 过期时间，Unix时间戳格式，单位：秒
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取流量包绑定的设备ID列表
                     * @return DeviceList 流量包绑定的设备ID列表
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置流量包绑定的设备ID列表
                     * @param _deviceList 流量包绑定的设备ID列表
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取流量包总容量，单位：MB
                     * @return CapacitySize 流量包总容量，单位：MB
                     * 
                     */
                    uint64_t GetCapacitySize() const;

                    /**
                     * 设置流量包总容量，单位：MB
                     * @param _capacitySize 流量包总容量，单位：MB
                     * 
                     */
                    void SetCapacitySize(const uint64_t& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取流量包余量，单位：MB
                     * @return CapacityRemain 流量包余量，单位：MB
                     * 
                     */
                    uint64_t GetCapacityRemain() const;

                    /**
                     * 设置流量包余量，单位：MB
                     * @param _capacityRemain 流量包余量，单位：MB
                     * 
                     */
                    void SetCapacityRemain(const uint64_t& _capacityRemain);

                    /**
                     * 判断参数 CapacityRemain 是否已赋值
                     * @return CapacityRemain 是否已赋值
                     * 
                     */
                    bool CapacityRemainHasBeenSet() const;

                    /**
                     * 获取自动续费标识。true代表自动续费，false代表不自动续费
                     * @return RenewFlag 自动续费标识。true代表自动续费，false代表不自动续费
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。true代表自动续费，false代表不自动续费
                     * @param _renewFlag 自动续费标识。true代表自动续费，false代表不自动续费
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取资源包变更状态，0：未发生变配；1：变配中；2：已变配或已续费
                     * @return ModifyStatus 资源包变更状态，0：未发生变配；1：变配中；2：已变配或已续费
                     * 
                     */
                    int64_t GetModifyStatus() const;

                    /**
                     * 设置资源包变更状态，0：未发生变配；1：变配中；2：已变配或已续费
                     * @param _modifyStatus 资源包变更状态，0：未发生变配；1：变配中；2：已变配或已续费
                     * 
                     */
                    void SetModifyStatus(const int64_t& _modifyStatus);

                    /**
                     * 判断参数 ModifyStatus 是否已赋值
                     * @return ModifyStatus 是否已赋值
                     * 
                     */
                    bool ModifyStatusHasBeenSet() const;

                    /**
                     * 获取流量截断标识。true代表开启流量截断，false代表不开启流量截断
                     * @return TruncFlag 流量截断标识。true代表开启流量截断，false代表不开启流量截断
                     * 
                     */
                    bool GetTruncFlag() const;

                    /**
                     * 设置流量截断标识。true代表开启流量截断，false代表不开启流量截断
                     * @param _truncFlag 流量截断标识。true代表开启流量截断，false代表不开启流量截断
                     * 
                     */
                    void SetTruncFlag(const bool& _truncFlag);

                    /**
                     * 判断参数 TruncFlag 是否已赋值
                     * @return TruncFlag 是否已赋值
                     * 
                     */
                    bool TruncFlagHasBeenSet() const;

                    /**
                     * 获取流量包精确余量，单位：MB
                     * @return CapacityRemainPrecise 流量包精确余量，单位：MB
                     * 
                     */
                    uint64_t GetCapacityRemainPrecise() const;

                    /**
                     * 设置流量包精确余量，单位：MB
                     * @param _capacityRemainPrecise 流量包精确余量，单位：MB
                     * 
                     */
                    void SetCapacityRemainPrecise(const uint64_t& _capacityRemainPrecise);

                    /**
                     * 判断参数 CapacityRemainPrecise 是否已赋值
                     * @return CapacityRemainPrecise 是否已赋值
                     * 
                     */
                    bool CapacityRemainPreciseHasBeenSet() const;

                private:

                    /**
                     * 流量包的唯一资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 流量包所属的用户AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 流量包规格类型。可取值如下：
DEVICE_1_FLOW_20G、DEVICE_2_FLOW_50G、
DEVICE_3_FLOW_100G、
DEVICE_5_FLOW_500G，分别代表20G、50G、100G、500G档位的流量包。
档位也影响流量包可绑定的设备数量上限：
20G：最多绑定1个设备
50G：最多绑定2个设备
100G：最多绑定3个设备
500G：最多绑定5个设备
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 流量包状态，0：未生效，1：有效期内，2：已过期
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 购买时间，Unix时间戳格式，单位：秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生效时间，Unix时间戳格式，单位：秒
                     */
                    int64_t m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 过期时间，Unix时间戳格式，单位：秒
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 流量包绑定的设备ID列表
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * 流量包总容量，单位：MB
                     */
                    uint64_t m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * 流量包余量，单位：MB
                     */
                    uint64_t m_capacityRemain;
                    bool m_capacityRemainHasBeenSet;

                    /**
                     * 自动续费标识。true代表自动续费，false代表不自动续费
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 资源包变更状态，0：未发生变配；1：变配中；2：已变配或已续费
                     */
                    int64_t m_modifyStatus;
                    bool m_modifyStatusHasBeenSet;

                    /**
                     * 流量截断标识。true代表开启流量截断，false代表不开启流量截断
                     */
                    bool m_truncFlag;
                    bool m_truncFlagHasBeenSet;

                    /**
                     * 流量包精确余量，单位：MB
                     */
                    uint64_t m_capacityRemainPrecise;
                    bool m_capacityRemainPreciseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_
