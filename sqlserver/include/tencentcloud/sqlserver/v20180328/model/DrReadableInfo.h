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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 备机只读信息
                */
                class DrReadableInfo : public AbstractModel
                {
                public:
                    DrReadableInfo();
                    ~DrReadableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备机资源ID
                     * @return DrInstanceId 备机资源ID
                     * 
                     */
                    std::string GetDrInstanceId() const;

                    /**
                     * 设置备机资源ID
                     * @param _drInstanceId 备机资源ID
                     * 
                     */
                    void SetDrInstanceId(const std::string& _drInstanceId);

                    /**
                     * 判断参数 DrInstanceId 是否已赋值
                     * @return DrInstanceId 是否已赋值
                     * 
                     */
                    bool DrInstanceIdHasBeenSet() const;

                    /**
                     * 获取备机可用区
                     * @return Zone 备机可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置备机可用区
                     * @param _zone 备机可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取备机状态
DR_CREATING-备机创建中
DR_RUNNING-备机运行中
DR_UNAVAILABLE-备机不可用
DR_ISOLATED-备机已隔离
DR_RECYCLING-备机回收中
DR_RECYCLED-备机已回收
DR_JOB_RUNNING-备机执行任务中
DR_OFFLINE-备机已下线
DR_FAIL_OVER-备机只读故障转移中
                     * @return SlaveStatus 备机状态
DR_CREATING-备机创建中
DR_RUNNING-备机运行中
DR_UNAVAILABLE-备机不可用
DR_ISOLATED-备机已隔离
DR_RECYCLING-备机回收中
DR_RECYCLED-备机已回收
DR_JOB_RUNNING-备机执行任务中
DR_OFFLINE-备机已下线
DR_FAIL_OVER-备机只读故障转移中
                     * 
                     */
                    std::string GetSlaveStatus() const;

                    /**
                     * 设置备机状态
DR_CREATING-备机创建中
DR_RUNNING-备机运行中
DR_UNAVAILABLE-备机不可用
DR_ISOLATED-备机已隔离
DR_RECYCLING-备机回收中
DR_RECYCLED-备机已回收
DR_JOB_RUNNING-备机执行任务中
DR_OFFLINE-备机已下线
DR_FAIL_OVER-备机只读故障转移中
                     * @param _slaveStatus 备机状态
DR_CREATING-备机创建中
DR_RUNNING-备机运行中
DR_UNAVAILABLE-备机不可用
DR_ISOLATED-备机已隔离
DR_RECYCLING-备机回收中
DR_RECYCLED-备机已回收
DR_JOB_RUNNING-备机执行任务中
DR_OFFLINE-备机已下线
DR_FAIL_OVER-备机只读故障转移中
                     * 
                     */
                    void SetSlaveStatus(const std::string& _slaveStatus);

                    /**
                     * 判断参数 SlaveStatus 是否已赋值
                     * @return SlaveStatus 是否已赋值
                     * 
                     */
                    bool SlaveStatusHasBeenSet() const;

                    /**
                     * 获取备机可读状态，enable-已开启，disable-已关闭
                     * @return ReadableStatus 备机可读状态，enable-已开启，disable-已关闭
                     * 
                     */
                    std::string GetReadableStatus() const;

                    /**
                     * 设置备机可读状态，enable-已开启，disable-已关闭
                     * @param _readableStatus 备机可读状态，enable-已开启，disable-已关闭
                     * 
                     */
                    void SetReadableStatus(const std::string& _readableStatus);

                    /**
                     * 判断参数 ReadableStatus 是否已赋值
                     * @return ReadableStatus 是否已赋值
                     * 
                     */
                    bool ReadableStatusHasBeenSet() const;

                    /**
                     * 获取备机只读vip
                     * @return Vip 备机只读vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置备机只读vip
                     * @param _vip 备机只读vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取备机只读端口
                     * @return VPort 备机只读端口
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置备机只读端口
                     * @param _vPort 备机只读端口
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取备机所在私有网络ID
                     * @return UniqVpcId 备机所在私有网络ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置备机所在私有网络ID
                     * @param _uniqVpcId 备机所在私有网络ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取备机所在私有网络子网ID
                     * @return UniqSubnetId 备机所在私有网络子网ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置备机所在私有网络子网ID
                     * @param _uniqSubnetId 备机所在私有网络子网ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取备机只读权重
                     * @return RoWeight 备机只读权重
                     * 
                     */
                    uint64_t GetRoWeight() const;

                    /**
                     * 设置备机只读权重
                     * @param _roWeight 备机只读权重
                     * 
                     */
                    void SetRoWeight(const uint64_t& _roWeight);

                    /**
                     * 判断参数 RoWeight 是否已赋值
                     * @return RoWeight 是否已赋值
                     * 
                     */
                    bool RoWeightHasBeenSet() const;

                    /**
                     * 获取备机只读模式，BalancedReadOnly-多备一读模式，SingleReadOnly-一备一读模式
                     * @return ReadMode 备机只读模式，BalancedReadOnly-多备一读模式，SingleReadOnly-一备一读模式
                     * 
                     */
                    std::string GetReadMode() const;

                    /**
                     * 设置备机只读模式，BalancedReadOnly-多备一读模式，SingleReadOnly-一备一读模式
                     * @param _readMode 备机只读模式，BalancedReadOnly-多备一读模式，SingleReadOnly-一备一读模式
                     * 
                     */
                    void SetReadMode(const std::string& _readMode);

                    /**
                     * 判断参数 ReadMode 是否已赋值
                     * @return ReadMode 是否已赋值
                     * 
                     */
                    bool ReadModeHasBeenSet() const;

                private:

                    /**
                     * 备机资源ID
                     */
                    std::string m_drInstanceId;
                    bool m_drInstanceIdHasBeenSet;

                    /**
                     * 备机可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 备机状态
DR_CREATING-备机创建中
DR_RUNNING-备机运行中
DR_UNAVAILABLE-备机不可用
DR_ISOLATED-备机已隔离
DR_RECYCLING-备机回收中
DR_RECYCLED-备机已回收
DR_JOB_RUNNING-备机执行任务中
DR_OFFLINE-备机已下线
DR_FAIL_OVER-备机只读故障转移中
                     */
                    std::string m_slaveStatus;
                    bool m_slaveStatusHasBeenSet;

                    /**
                     * 备机可读状态，enable-已开启，disable-已关闭
                     */
                    std::string m_readableStatus;
                    bool m_readableStatusHasBeenSet;

                    /**
                     * 备机只读vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 备机只读端口
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 备机所在私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 备机所在私有网络子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 备机只读权重
                     */
                    uint64_t m_roWeight;
                    bool m_roWeightHasBeenSet;

                    /**
                     * 备机只读模式，BalancedReadOnly-多备一读模式，SingleReadOnly-一备一读模式
                     */
                    std::string m_readMode;
                    bool m_readModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
