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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanScheduleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * BatchModifyImageRegistryTimedScanTaskConfig请求参数结构体
                */
                class BatchModifyImageRegistryTimedScanTaskConfigRequest : public AbstractModel
                {
                public:
                    BatchModifyImageRegistryTimedScanTaskConfigRequest();
                    ~BatchModifyImageRegistryTimedScanTaskConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>任务id</p>
                     * @return Id <p>任务id</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _id <p>任务id</p>
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return Enable <p>是否启用</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enable <p>是否启用</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * @return ScanType <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * @param _scanType <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>定时任务调度配置</p>
                     * @return Schedule <p>定时任务调度配置</p>
                     * 
                     */
                    ImageScanScheduleConfig GetSchedule() const;

                    /**
                     * 设置<p>定时任务调度配置</p>
                     * @param _schedule <p>定时任务调度配置</p>
                     * 
                     */
                    void SetSchedule(const ImageScanScheduleConfig& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位秒</p>
                     * @return Timeout <p>超时时间，单位秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，单位秒</p>
                     * @param _timeout <p>超时时间，单位秒</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>定时任务调度配置</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>超时时间，单位秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEREGISTRYTIMEDSCANTASKCONFIGREQUEST_H_
