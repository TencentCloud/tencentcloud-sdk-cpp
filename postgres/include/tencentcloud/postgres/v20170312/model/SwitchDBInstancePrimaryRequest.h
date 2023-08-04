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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SWITCHDBINSTANCEPRIMARYREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SWITCHDBINSTANCEPRIMARYREQUEST_H_

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
                * SwitchDBInstancePrimary请求参数结构体
                */
                class SwitchDBInstancePrimaryRequest : public AbstractModel
                {
                public:
                    SwitchDBInstancePrimaryRequest();
                    ~SwitchDBInstancePrimaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _dBInstanceId 实例ID
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
                     * 获取是否强制切换。强制切换时只要备节点可访问，无论主备延迟多大都会发起切换。只有SwitchTag为0时，才可使用立即切换。
<li>默认：false
                     * @return Force 是否强制切换。强制切换时只要备节点可访问，无论主备延迟多大都会发起切换。只有SwitchTag为0时，才可使用立即切换。
<li>默认：false
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制切换。强制切换时只要备节点可访问，无论主备延迟多大都会发起切换。只有SwitchTag为0时，才可使用立即切换。
<li>默认：false
                     * @param _force 是否强制切换。强制切换时只要备节点可访问，无论主备延迟多大都会发起切换。只有SwitchTag为0时，才可使用立即切换。
<li>默认：false
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取指定实例配置完成变更后的切换时间。
<li>0：立即切换 
<li>1：指定时间切换
<li>2：维护时间窗口内切换
<li>默认值：0 
                     * @return SwitchTag 指定实例配置完成变更后的切换时间。
<li>0：立即切换 
<li>1：指定时间切换
<li>2：维护时间窗口内切换
<li>默认值：0 
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置指定实例配置完成变更后的切换时间。
<li>0：立即切换 
<li>1：指定时间切换
<li>2：维护时间窗口内切换
<li>默认值：0 
                     * @param _switchTag 指定实例配置完成变更后的切换时间。
<li>0：立即切换 
<li>1：指定时间切换
<li>2：维护时间窗口内切换
<li>默认值：0 
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

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 是否强制切换。强制切换时只要备节点可访问，无论主备延迟多大都会发起切换。只有SwitchTag为0时，才可使用立即切换。
<li>默认：false
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * 指定实例配置完成变更后的切换时间。
<li>0：立即切换 
<li>1：指定时间切换
<li>2：维护时间窗口内切换
<li>默认值：0 
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SWITCHDBINSTANCEPRIMARYREQUEST_H_
