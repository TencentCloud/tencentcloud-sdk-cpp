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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamEntry.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSpec请求参数结构体
                */
                class ModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSpecRequest();
                    ~ModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，形如：postgres-6bwgamo3。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID，形如：postgres-6bwgamo3。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如：postgres-6bwgamo3。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID，形如：postgres-6bwgamo3。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>修改后的实例内存大小，单位GB。</p>
                     * @return Memory <p>修改后的实例内存大小，单位GB。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>修改后的实例内存大小，单位GB。</p>
                     * @param _memory <p>修改后的实例内存大小，单位GB。</p>
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>修改后的实例磁盘大小，单位GB。该参数的设置步长为10。</p>
                     * @return Storage <p>修改后的实例磁盘大小，单位GB。该参数的设置步长为10。</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>修改后的实例磁盘大小，单位GB。该参数的设置步长为10。</p>
                     * @param _storage <p>修改后的实例磁盘大小，单位GB。该参数的设置步长为10。</p>
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @return AutoVoucher <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @param _autoVoucher <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @return VoucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @param _voucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>活动ID。</p>
                     * @return ActivityId <p>活动ID。</p>
                     * 
                     */
                    uint64_t GetActivityId() const;

                    /**
                     * 设置<p>活动ID。</p>
                     * @param _activityId <p>活动ID。</p>
                     * 
                     */
                    void SetActivityId(const uint64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>指定实例配置完成变更后的切换时间。</p><li>0：立即切换 </li><li>1：指定时间切换</li><li>2：维护时间窗口内</li>切换默认值：0
                     * @return SwitchTag <p>指定实例配置完成变更后的切换时间。</p><li>0：立即切换 </li><li>1：指定时间切换</li><li>2：维护时间窗口内</li>切换默认值：0
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置<p>指定实例配置完成变更后的切换时间。</p><li>0：立即切换 </li><li>1：指定时间切换</li><li>2：维护时间窗口内</li>切换默认值：0
                     * @param _switchTag <p>指定实例配置完成变更后的切换时间。</p><li>0：立即切换 </li><li>1：指定时间切换</li><li>2：维护时间窗口内</li>切换默认值：0
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取<p>切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。</p>
                     * @return SwitchStartTime <p>切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。</p>
                     * @param _switchStartTime <p>切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。</p>
                     * @return SwitchEndTime <p>切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。</p>
                     * @param _switchEndTime <p>切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改后的实例CPU大小，单位Core。不填写该参数时，默认根据Memory确定Cpu大小。如Memory为2，支持的规格有1核2GB，则不传入Cpu时，Cpu默认为1。</p>
                     * @return Cpu <p>修改后的实例CPU大小，单位Core。不填写该参数时，默认根据Memory确定Cpu大小。如Memory为2，支持的规格有1核2GB，则不传入Cpu时，Cpu默认为1。</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>修改后的实例CPU大小，单位Core。不填写该参数时，默认根据Memory确定Cpu大小。如Memory为2，支持的规格有1核2GB，则不传入Cpu时，Cpu默认为1。</p>
                     * @param _cpu <p>修改后的实例CPU大小，单位Core。不填写该参数时，默认根据Memory确定Cpu大小。如Memory为2，支持的规格有1核2GB，则不传入Cpu时，Cpu默认为1。</p>
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>变配时同步修改的参数列表</p>
                     * @return SyncModifyParams <p>变配时同步修改的参数列表</p>
                     * 
                     */
                    std::vector<ParamEntry> GetSyncModifyParams() const;

                    /**
                     * 设置<p>变配时同步修改的参数列表</p>
                     * @param _syncModifyParams <p>变配时同步修改的参数列表</p>
                     * 
                     */
                    void SetSyncModifyParams(const std::vector<ParamEntry>& _syncModifyParams);

                    /**
                     * 判断参数 SyncModifyParams 是否已赋值
                     * @return SyncModifyParams 是否已赋值
                     * 
                     */
                    bool SyncModifyParamsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，形如：postgres-6bwgamo3。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>修改后的实例内存大小，单位GB。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>修改后的实例磁盘大小，单位GB。该参数的设置步长为10。</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>活动ID。</p>
                     */
                    uint64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>指定实例配置完成变更后的切换时间。</p><li>0：立即切换 </li><li>1：指定时间切换</li><li>2：维护时间窗口内</li>切换默认值：0
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * <p>切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>修改后的实例CPU大小，单位Core。不填写该参数时，默认根据Memory确定Cpu大小。如Memory为2，支持的规格有1核2GB，则不传入Cpu时，Cpu默认为1。</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>变配时同步修改的参数列表</p>
                     */
                    std::vector<ParamEntry> m_syncModifyParams;
                    bool m_syncModifyParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
