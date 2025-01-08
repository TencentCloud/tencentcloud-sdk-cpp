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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 出参
                */
                class CdbInfo : public AbstractModel
                {
                public:
                    CdbInfo();
                    ~CdbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库实例
                     * @return InstanceName 数据库实例
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置数据库实例
                     * @param _instanceName 数据库实例
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
                     * 获取数据库IP
                     * @return Ip 数据库IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置数据库IP
                     * @param _ip 数据库IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取数据库端口
                     * @return Port 数据库端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置数据库端口
                     * @param _port 数据库端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取数据库内存规格
                     * @return MemSize 数据库内存规格
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置数据库内存规格
                     * @param _memSize 数据库内存规格
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取数据库磁盘规格
                     * @return Volume 数据库磁盘规格
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置数据库磁盘规格
                     * @param _volume 数据库磁盘规格
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取服务标识
                     * @return Service 服务标识
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务标识
                     * @param _service 服务标识
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取申请时间
                     * @return ApplyTime 申请时间
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置申请时间
                     * @param _applyTime 申请时间
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取付费类型
                     * @return PayType 付费类型
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置付费类型
                     * @param _payType 付费类型
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取过期标识
                     * @return ExpireFlag 过期标识
                     * 
                     */
                    bool GetExpireFlag() const;

                    /**
                     * 设置过期标识
                     * @param _expireFlag 过期标识
                     * 
                     */
                    void SetExpireFlag(const bool& _expireFlag);

                    /**
                     * 判断参数 ExpireFlag 是否已赋值
                     * @return ExpireFlag 是否已赋值
                     * 
                     */
                    bool ExpireFlagHasBeenSet() const;

                    /**
                     * 获取数据库状态
                     * @return Status 数据库状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置数据库状态
                     * @param _status 数据库状态
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
                     * 获取续费标识
                     * @return IsAutoRenew 续费标识
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置续费标识
                     * @param _isAutoRenew 续费标识
                     * 
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取数据库字符串
                     * @return SerialNo 数据库字符串
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置数据库字符串
                     * @param _serialNo 数据库字符串
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取ZoneId
                     * @return ZoneId ZoneId
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置ZoneId
                     * @param _zoneId ZoneId
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取RegionId
                     * @return RegionId RegionId
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置RegionId
                     * @param _regionId RegionId
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 数据库实例
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 数据库IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 数据库端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 数据库内存规格
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 数据库磁盘规格
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 服务标识
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 申请时间
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 付费类型
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 过期标识
                     */
                    bool m_expireFlag;
                    bool m_expireFlagHasBeenSet;

                    /**
                     * 数据库状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 续费标识
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * 数据库字符串
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * ZoneId
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * RegionId
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_
