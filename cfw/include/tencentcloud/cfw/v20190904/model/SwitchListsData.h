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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 防火墙开关列表对象
                */
                class SwitchListsData : public AbstractModel
                {
                public:
                    SwitchListsData();
                    ~SwitchListsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return IntranetIp 内网IP
                     * 
                     */
                    std::string GetIntranetIp() const;

                    /**
                     * 设置内网IP
                     * @param _intranetIp 内网IP
                     * 
                     */
                    void SetIntranetIp(const std::string& _intranetIp);

                    /**
                     * 判断参数 IntranetIp 是否已赋值
                     * @return IntranetIp 是否已赋值
                     * 
                     */
                    bool IntranetIpHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
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
                     * 获取地域
                     * @return Area 地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域
                     * @param _area 地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取防火墙开关
                     * @return Switch 防火墙开关
                     * 
                     */
                    int64_t GetSwitch() const;

                    /**
                     * 设置防火墙开关
                     * @param _switch 防火墙开关
                     * 
                     */
                    void SetSwitch(const int64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取id值
                     * @return Id id值
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置id值
                     * @param _id id值
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公网 IP 类型
                     * @return PublicIpType 公网 IP 类型
                     * 
                     */
                    uint64_t GetPublicIpType() const;

                    /**
                     * 设置公网 IP 类型
                     * @param _publicIpType 公网 IP 类型
                     * 
                     */
                    void SetPublicIpType(const uint64_t& _publicIpType);

                    /**
                     * 判断参数 PublicIpType 是否已赋值
                     * @return PublicIpType 是否已赋值
                     * 
                     */
                    bool PublicIpTypeHasBeenSet() const;

                    /**
                     * 获取风险端口数
                     * @return PortTimes 风险端口数
                     * 
                     */
                    uint64_t GetPortTimes() const;

                    /**
                     * 设置风险端口数
                     * @param _portTimes 风险端口数
                     * 
                     */
                    void SetPortTimes(const uint64_t& _portTimes);

                    /**
                     * 判断参数 PortTimes 是否已赋值
                     * @return PortTimes 是否已赋值
                     * 
                     */
                    bool PortTimesHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastTime 最近扫描时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _lastTime 最近扫描时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取扫描深度
                     * @return ScanMode 扫描深度
                     * 
                     */
                    std::string GetScanMode() const;

                    /**
                     * 设置扫描深度
                     * @param _scanMode 扫描深度
                     * 
                     */
                    void SetScanMode(const std::string& _scanMode);

                    /**
                     * 判断参数 ScanMode 是否已赋值
                     * @return ScanMode 是否已赋值
                     * 
                     */
                    bool ScanModeHasBeenSet() const;

                    /**
                     * 获取扫描状态
                     * @return ScanStatus 扫描状态
                     * 
                     */
                    uint64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态
                     * @param _scanStatus 扫描状态
                     * 
                     */
                    void SetScanStatus(const uint64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                private:

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_intranetIp;
                    bool m_intranetIpHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 防火墙开关
                     */
                    int64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * id值
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公网 IP 类型
                     */
                    uint64_t m_publicIpType;
                    bool m_publicIpTypeHasBeenSet;

                    /**
                     * 风险端口数
                     */
                    uint64_t m_portTimes;
                    bool m_portTimesHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 扫描深度
                     */
                    std::string m_scanMode;
                    bool m_scanModeHasBeenSet;

                    /**
                     * 扫描状态
                     */
                    uint64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_
