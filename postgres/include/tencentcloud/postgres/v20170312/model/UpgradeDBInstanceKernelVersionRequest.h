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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceKernelVersion请求参数结构体
                */
                class UpgradeDBInstanceKernelVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceKernelVersionRequest();
                    ~UpgradeDBInstanceKernelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _dBInstanceId 实例ID。
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
                     * 获取升级的目标内核版本号。可以通过接口[DescribeDBVersions](https://cloud.tencent.com/document/api/409/89018)的返回字段AvailableUpgradeTarget获取。

                     * @return TargetDBKernelVersion 升级的目标内核版本号。可以通过接口[DescribeDBVersions](https://cloud.tencent.com/document/api/409/89018)的返回字段AvailableUpgradeTarget获取。

                     * 
                     */
                    std::string GetTargetDBKernelVersion() const;

                    /**
                     * 设置升级的目标内核版本号。可以通过接口[DescribeDBVersions](https://cloud.tencent.com/document/api/409/89018)的返回字段AvailableUpgradeTarget获取。

                     * @param _targetDBKernelVersion 升级的目标内核版本号。可以通过接口[DescribeDBVersions](https://cloud.tencent.com/document/api/409/89018)的返回字段AvailableUpgradeTarget获取。

                     * 
                     */
                    void SetTargetDBKernelVersion(const std::string& _targetDBKernelVersion);

                    /**
                     * 判断参数 TargetDBKernelVersion 是否已赋值
                     * @return TargetDBKernelVersion 是否已赋值
                     * 
                     */
                    bool TargetDBKernelVersionHasBeenSet() const;

                    /**
                     * 获取指定实例升级内核版本号完成后的切换时间。可选值:
<li>0：立即切换
<li>1：指定时间切换
<li>2：维护时间窗口内切换
默认值：0 
                     * @return SwitchTag 指定实例升级内核版本号完成后的切换时间。可选值:
<li>0：立即切换
<li>1：指定时间切换
<li>2：维护时间窗口内切换
默认值：0 
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置指定实例升级内核版本号完成后的切换时间。可选值:
<li>0：立即切换
<li>1：指定时间切换
<li>2：维护时间窗口内切换
默认值：0 
                     * @param _switchTag 指定实例升级内核版本号完成后的切换时间。可选值:
<li>0：立即切换
<li>1：指定时间切换
<li>2：维护时间窗口内切换
默认值：0 
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
                     * 获取切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。
                     * @return SwitchStartTime 切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。
                     * @param _switchStartTime 切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。
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
                     * 获取切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。SwitchStartTime和SwitchEndTime时间窗口不能小于30分钟。
                     * @return SwitchEndTime 切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。SwitchStartTime和SwitchEndTime时间窗口不能小于30分钟。
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。SwitchStartTime和SwitchEndTime时间窗口不能小于30分钟。
                     * @param _switchEndTime 切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。SwitchStartTime和SwitchEndTime时间窗口不能小于30分钟。
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
                     * 获取是否对本次升级实例内核版本号操作执行预检查。
<li>true：执行预检查操作，不升级内核版本号。检查项目包含请求参数、内核版本号兼容性、实例参数等。
<li>false：发送正常请求（默认值），通过检查后直接升级内核版本号。
默认值：false
                     * @return DryRun 是否对本次升级实例内核版本号操作执行预检查。
<li>true：执行预检查操作，不升级内核版本号。检查项目包含请求参数、内核版本号兼容性、实例参数等。
<li>false：发送正常请求（默认值），通过检查后直接升级内核版本号。
默认值：false
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否对本次升级实例内核版本号操作执行预检查。
<li>true：执行预检查操作，不升级内核版本号。检查项目包含请求参数、内核版本号兼容性、实例参数等。
<li>false：发送正常请求（默认值），通过检查后直接升级内核版本号。
默认值：false
                     * @param _dryRun 是否对本次升级实例内核版本号操作执行预检查。
<li>true：执行预检查操作，不升级内核版本号。检查项目包含请求参数、内核版本号兼容性、实例参数等。
<li>false：发送正常请求（默认值），通过检查后直接升级内核版本号。
默认值：false
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 升级的目标内核版本号。可以通过接口[DescribeDBVersions](https://cloud.tencent.com/document/api/409/89018)的返回字段AvailableUpgradeTarget获取。

                     */
                    std::string m_targetDBKernelVersion;
                    bool m_targetDBKernelVersionHasBeenSet;

                    /**
                     * 指定实例升级内核版本号完成后的切换时间。可选值:
<li>0：立即切换
<li>1：指定时间切换
<li>2：维护时间窗口内切换
默认值：0 
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * 切换开始时间，时间格式：HH:MM:SS，例如：01:00:00。当SwitchTag为0或2时，该参数失效。
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * 切换截止时间，时间格式：HH:MM:SS，例如：01:30:00。当SwitchTag为0或2时，该参数失效。SwitchStartTime和SwitchEndTime时间窗口不能小于30分钟。
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * 是否对本次升级实例内核版本号操作执行预检查。
<li>true：执行预检查操作，不升级内核版本号。检查项目包含请求参数、内核版本号兼容性、实例参数等。
<li>false：发送正常请求（默认值），通过检查后直接升级内核版本号。
默认值：false
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
