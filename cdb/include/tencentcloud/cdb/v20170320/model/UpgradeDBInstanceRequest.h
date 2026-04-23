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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * UpgradeDBInstance请求参数结构体
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
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
                     * 获取<p>升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的内存规格。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * @return Memory <p>升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的内存规格。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的内存规格。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * @param _memory <p>升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的内存规格。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的硬盘范围。</p>
                     * @return Volume <p>升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的硬盘范围。</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的硬盘范围。</p>
                     * @param _volume <p>升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的硬盘范围。</p>
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
                     * 获取<p>数据复制方式，支持值包括：0 - 异步复制，1 - 半同步复制，2 - 强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * @return ProtectMode <p>数据复制方式，支持值包括：0 - 异步复制，1 - 半同步复制，2 - 强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>数据复制方式，支持值包括：0 - 异步复制，1 - 半同步复制，2 - 强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * @param _protectMode <p>数据复制方式，支持值包括：0 - 异步复制，1 - 半同步复制，2 - 强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取<p>部署模式，默认为 0，支持值包括：0 - 单可用区部署，1 - 多可用区部署，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * @return DeployMode <p>部署模式，默认为 0，支持值包括：0 - 单可用区部署，1 - 多可用区部署，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>部署模式，默认为 0，支持值包括：0 - 单可用区部署，1 - 多可用区部署，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * @param _deployMode <p>部署模式，默认为 0，支持值包括：0 - 单可用区部署，1 - 多可用区部署，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>备库1的可用区信息，默认和实例的 Zone 参数一致，升级主实例为多可用区部署时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。</p>
                     * @return SlaveZone <p>备库1的可用区信息，默认和实例的 Zone 参数一致，升级主实例为多可用区部署时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>备库1的可用区信息，默认和实例的 Zone 参数一致，升级主实例为多可用区部署时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。</p>
                     * @param _slaveZone <p>备库1的可用区信息，默认和实例的 Zone 参数一致，升级主实例为多可用区部署时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。</p>
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>主实例数据库引擎版本，支持值包括：5.5、5.6、5.7、8.0。<br>说明：升级数据库版本请使用 <a href="https://cloud.tencent.com/document/api/236/15870">UpgradeDBInstanceEngineVersion</a> 接口。</p>
                     * @return EngineVersion <p>主实例数据库引擎版本，支持值包括：5.5、5.6、5.7、8.0。<br>说明：升级数据库版本请使用 <a href="https://cloud.tencent.com/document/api/236/15870">UpgradeDBInstanceEngineVersion</a> 接口。</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>主实例数据库引擎版本，支持值包括：5.5、5.6、5.7、8.0。<br>说明：升级数据库版本请使用 <a href="https://cloud.tencent.com/document/api/236/15870">UpgradeDBInstanceEngineVersion</a> 接口。</p>
                     * @param _engineVersion <p>主实例数据库引擎版本，支持值包括：5.5、5.6、5.7、8.0。<br>说明：升级数据库版本请使用 <a href="https://cloud.tencent.com/document/api/236/15870">UpgradeDBInstanceEngineVersion</a> 接口。</p>
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
                     * 获取<p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * @return WaitSwitch <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置<p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * @param _waitSwitch <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取<p>备库2的可用区信息，默认为空，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。<br>备注：如您要将三节点降级至双节点，将该参数设置为空值即可实现。</p>
                     * @return BackupZone <p>备库2的可用区信息，默认为空，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。<br>备注：如您要将三节点降级至双节点，将该参数设置为空值即可实现。</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>备库2的可用区信息，默认为空，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。<br>备注：如您要将三节点降级至双节点，将该参数设置为空值即可实现。</p>
                     * @param _backupZone <p>备库2的可用区信息，默认为空，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。<br>备注：如您要将三节点降级至双节点，将该参数设置为空值即可实现。</p>
                     * 
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     * 
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取<p>实例类型，默认为 master，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。</p>
                     * @return InstanceRole <p>实例类型，默认为 master，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>实例类型，默认为 master，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。</p>
                     * @param _instanceRole <p>实例类型，默认为 master，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。</p>
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离类型。支持值包括： &quot;UNIVERSAL&quot; - 通用型实例， &quot;EXCLUSIVE&quot; - 独享型实例， &quot;BASIC&quot; - 基础版实例。</p>
                     * @return DeviceType <p>实例隔离类型。支持值包括： &quot;UNIVERSAL&quot; - 通用型实例， &quot;EXCLUSIVE&quot; - 独享型实例， &quot;BASIC&quot; - 基础版实例。</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例隔离类型。支持值包括： &quot;UNIVERSAL&quot; - 通用型实例， &quot;EXCLUSIVE&quot; - 独享型实例， &quot;BASIC&quot; - 基础版实例。</p>
                     * @param _deviceType <p>实例隔离类型。支持值包括： &quot;UNIVERSAL&quot; - 通用型实例， &quot;EXCLUSIVE&quot; - 独享型实例， &quot;BASIC&quot; - 基础版实例。</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>升级后的实例cpu核数，如果不传将根据 Memory 指定的内存值自动填充最小允许规格的cpu值。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * @return Cpu <p>升级后的实例cpu核数，如果不传将根据 Memory 指定的内存值自动填充最小允许规格的cpu值。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>升级后的实例cpu核数，如果不传将根据 Memory 指定的内存值自动填充最小允许规格的cpu值。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * @param _cpu <p>升级后的实例cpu核数，如果不传将根据 Memory 指定的内存值自动填充最小允许规格的cpu值。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>是否极速变配。0-普通升级，1-极速变配，2 极速优先。选择极速变配会根据资源状况校验是否可以进行极速变配，满足条件则进行极速变配，不满足条件会返回报错信息。</p>
                     * @return FastUpgrade <p>是否极速变配。0-普通升级，1-极速变配，2 极速优先。选择极速变配会根据资源状况校验是否可以进行极速变配，满足条件则进行极速变配，不满足条件会返回报错信息。</p>
                     * 
                     */
                    int64_t GetFastUpgrade() const;

                    /**
                     * 设置<p>是否极速变配。0-普通升级，1-极速变配，2 极速优先。选择极速变配会根据资源状况校验是否可以进行极速变配，满足条件则进行极速变配，不满足条件会返回报错信息。</p>
                     * @param _fastUpgrade <p>是否极速变配。0-普通升级，1-极速变配，2 极速优先。选择极速变配会根据资源状况校验是否可以进行极速变配，满足条件则进行极速变配，不满足条件会返回报错信息。</p>
                     * 
                     */
                    void SetFastUpgrade(const int64_t& _fastUpgrade);

                    /**
                     * 判断参数 FastUpgrade 是否已赋值
                     * @return FastUpgrade 是否已赋值
                     * 
                     */
                    bool FastUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>延迟阈值。取值范围1~10，默认值为10。</p>
                     * @return MaxDelayTime <p>延迟阈值。取值范围1~10，默认值为10。</p>
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置<p>延迟阈值。取值范围1~10，默认值为10。</p>
                     * @param _maxDelayTime <p>延迟阈值。取值范围1~10，默认值为10。</p>
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否跨区迁移。0-普通迁移，1-跨区迁移，默认值为0。该值为1时支持变更实例主节点可用区。</p>
                     * @return CrossCluster <p>是否跨区迁移。0-普通迁移，1-跨区迁移，默认值为0。该值为1时支持变更实例主节点可用区。</p>
                     * 
                     */
                    int64_t GetCrossCluster() const;

                    /**
                     * 设置<p>是否跨区迁移。0-普通迁移，1-跨区迁移，默认值为0。该值为1时支持变更实例主节点可用区。</p>
                     * @param _crossCluster <p>是否跨区迁移。0-普通迁移，1-跨区迁移，默认值为0。该值为1时支持变更实例主节点可用区。</p>
                     * 
                     */
                    void SetCrossCluster(const int64_t& _crossCluster);

                    /**
                     * 判断参数 CrossCluster 是否已赋值
                     * @return CrossCluster 是否已赋值
                     * 
                     */
                    bool CrossClusterHasBeenSet() const;

                    /**
                     * 获取<p>主节点可用区，该值仅在跨区迁移时生效。仅支持同地域下的可用区进行迁移。</p>
                     * @return ZoneId <p>主节点可用区，该值仅在跨区迁移时生效。仅支持同地域下的可用区进行迁移。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>主节点可用区，该值仅在跨区迁移时生效。仅支持同地域下的可用区进行迁移。</p>
                     * @param _zoneId <p>主节点可用区，该值仅在跨区迁移时生效。仅支持同地域下的可用区进行迁移。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>针对跨集群搬迁场景，选择同可用区RO的处理逻辑。together-同可用区RO跟随主实例迁移至目标可用区（默认选项），severally-同可用区RO保持原部署模式、不迁移至目标可用区。</p>
                     * @return RoTransType <p>针对跨集群搬迁场景，选择同可用区RO的处理逻辑。together-同可用区RO跟随主实例迁移至目标可用区（默认选项），severally-同可用区RO保持原部署模式、不迁移至目标可用区。</p>
                     * 
                     */
                    std::string GetRoTransType() const;

                    /**
                     * 设置<p>针对跨集群搬迁场景，选择同可用区RO的处理逻辑。together-同可用区RO跟随主实例迁移至目标可用区（默认选项），severally-同可用区RO保持原部署模式、不迁移至目标可用区。</p>
                     * @param _roTransType <p>针对跨集群搬迁场景，选择同可用区RO的处理逻辑。together-同可用区RO跟随主实例迁移至目标可用区（默认选项），severally-同可用区RO保持原部署模式、不迁移至目标可用区。</p>
                     * 
                     */
                    void SetRoTransType(const std::string& _roTransType);

                    /**
                     * 判断参数 RoTransType 是否已赋值
                     * @return RoTransType 是否已赋值
                     * 
                     */
                    bool RoTransTypeHasBeenSet() const;

                    /**
                     * 获取<p>云盘版节点拓扑配置。</p>
                     * @return ClusterTopology <p>云盘版节点拓扑配置。</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>云盘版节点拓扑配置。</p>
                     * @param _clusterTopology <p>云盘版节点拓扑配置。</p>
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                    /**
                     * 获取<p>检查原地升级是否需要重启，1 检查， 0 不检查。如果值为1，检查为原地升级需要重启，则会停止升级并进行返回提示，如果为原地升级不重启，则正常执行升级流程。</p>
                     * @return CheckFastUpgradeReboot <p>检查原地升级是否需要重启，1 检查， 0 不检查。如果值为1，检查为原地升级需要重启，则会停止升级并进行返回提示，如果为原地升级不重启，则正常执行升级流程。</p>
                     * 
                     */
                    int64_t GetCheckFastUpgradeReboot() const;

                    /**
                     * 设置<p>检查原地升级是否需要重启，1 检查， 0 不检查。如果值为1，检查为原地升级需要重启，则会停止升级并进行返回提示，如果为原地升级不重启，则正常执行升级流程。</p>
                     * @param _checkFastUpgradeReboot <p>检查原地升级是否需要重启，1 检查， 0 不检查。如果值为1，检查为原地升级需要重启，则会停止升级并进行返回提示，如果为原地升级不重启，则正常执行升级流程。</p>
                     * 
                     */
                    void SetCheckFastUpgradeReboot(const int64_t& _checkFastUpgradeReboot);

                    /**
                     * 判断参数 CheckFastUpgradeReboot 是否已赋值
                     * @return CheckFastUpgradeReboot 是否已赋值
                     * 
                     */
                    bool CheckFastUpgradeRebootHasBeenSet() const;

                    /**
                     * 获取<p>数据校验敏感度，非极速变配时使用此参数，敏感度根据当前实例规格计算迁移过程中的数据对比使用的cpu资源<br>对应的选项为: &quot;high&quot;、&quot;normal&quot;、&quot;low&quot;，默认为空<br>参数详解，：<br>&quot;high&quot;: 对应控制台中的高，数据库负载过高不建议使用<br>&quot;normal&quot;：对应控制台中的标准<br>&quot;low&quot;：对应控制台中的低</p>
                     * @return DataCheckSensitive <p>数据校验敏感度，非极速变配时使用此参数，敏感度根据当前实例规格计算迁移过程中的数据对比使用的cpu资源<br>对应的选项为: &quot;high&quot;、&quot;normal&quot;、&quot;low&quot;，默认为空<br>参数详解，：<br>&quot;high&quot;: 对应控制台中的高，数据库负载过高不建议使用<br>&quot;normal&quot;：对应控制台中的标准<br>&quot;low&quot;：对应控制台中的低</p>
                     * 
                     */
                    std::string GetDataCheckSensitive() const;

                    /**
                     * 设置<p>数据校验敏感度，非极速变配时使用此参数，敏感度根据当前实例规格计算迁移过程中的数据对比使用的cpu资源<br>对应的选项为: &quot;high&quot;、&quot;normal&quot;、&quot;low&quot;，默认为空<br>参数详解，：<br>&quot;high&quot;: 对应控制台中的高，数据库负载过高不建议使用<br>&quot;normal&quot;：对应控制台中的标准<br>&quot;low&quot;：对应控制台中的低</p>
                     * @param _dataCheckSensitive <p>数据校验敏感度，非极速变配时使用此参数，敏感度根据当前实例规格计算迁移过程中的数据对比使用的cpu资源<br>对应的选项为: &quot;high&quot;、&quot;normal&quot;、&quot;low&quot;，默认为空<br>参数详解，：<br>&quot;high&quot;: 对应控制台中的高，数据库负载过高不建议使用<br>&quot;normal&quot;：对应控制台中的标准<br>&quot;low&quot;：对应控制台中的低</p>
                     * 
                     */
                    void SetDataCheckSensitive(const std::string& _dataCheckSensitive);

                    /**
                     * 判断参数 DataCheckSensitive 是否已赋值
                     * @return DataCheckSensitive 是否已赋值
                     * 
                     */
                    bool DataCheckSensitiveHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的内存规格。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可升级的硬盘范围。</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>数据复制方式，支持值包括：0 - 异步复制，1 - 半同步复制，2 - 强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>部署模式，默认为 0，支持值包括：0 - 单可用区部署，1 - 多可用区部署，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>备库1的可用区信息，默认和实例的 Zone 参数一致，升级主实例为多可用区部署时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>主实例数据库引擎版本，支持值包括：5.5、5.6、5.7、8.0。<br>说明：升级数据库版本请使用 <a href="https://cloud.tencent.com/document/api/236/15870">UpgradeDBInstanceEngineVersion</a> 接口。</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * <p>备库2的可用区信息，默认为空，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义。可通过 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口查询支持的可用区。<br>备注：如您要将三节点降级至双节点，将该参数设置为空值即可实现。</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>实例类型，默认为 master，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>实例隔离类型。支持值包括： &quot;UNIVERSAL&quot; - 通用型实例， &quot;EXCLUSIVE&quot; - 独享型实例， &quot;BASIC&quot; - 基础版实例。</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>升级后的实例cpu核数，如果不传将根据 Memory 指定的内存值自动填充最小允许规格的cpu值。<br>说明：如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>是否极速变配。0-普通升级，1-极速变配，2 极速优先。选择极速变配会根据资源状况校验是否可以进行极速变配，满足条件则进行极速变配，不满足条件会返回报错信息。</p>
                     */
                    int64_t m_fastUpgrade;
                    bool m_fastUpgradeHasBeenSet;

                    /**
                     * <p>延迟阈值。取值范围1~10，默认值为10。</p>
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * <p>是否跨区迁移。0-普通迁移，1-跨区迁移，默认值为0。该值为1时支持变更实例主节点可用区。</p>
                     */
                    int64_t m_crossCluster;
                    bool m_crossClusterHasBeenSet;

                    /**
                     * <p>主节点可用区，该值仅在跨区迁移时生效。仅支持同地域下的可用区进行迁移。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>针对跨集群搬迁场景，选择同可用区RO的处理逻辑。together-同可用区RO跟随主实例迁移至目标可用区（默认选项），severally-同可用区RO保持原部署模式、不迁移至目标可用区。</p>
                     */
                    std::string m_roTransType;
                    bool m_roTransTypeHasBeenSet;

                    /**
                     * <p>云盘版节点拓扑配置。</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>检查原地升级是否需要重启，1 检查， 0 不检查。如果值为1，检查为原地升级需要重启，则会停止升级并进行返回提示，如果为原地升级不重启，则正常执行升级流程。</p>
                     */
                    int64_t m_checkFastUpgradeReboot;
                    bool m_checkFastUpgradeRebootHasBeenSet;

                    /**
                     * <p>数据校验敏感度，非极速变配时使用此参数，敏感度根据当前实例规格计算迁移过程中的数据对比使用的cpu资源<br>对应的选项为: &quot;high&quot;、&quot;normal&quot;、&quot;low&quot;，默认为空<br>参数详解，：<br>&quot;high&quot;: 对应控制台中的高，数据库负载过高不建议使用<br>&quot;normal&quot;：对应控制台中的标准<br>&quot;low&quot;：对应控制台中的低</p>
                     */
                    std::string m_dataCheckSensitive;
                    bool m_dataCheckSensitiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEREQUEST_H_
