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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETRIALREPORTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETRIALREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CloudFromCnt.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeTrialReport返回参数结构体
                */
                class DescribeTrialReportResponse : public AbstractModel
                {
                public:
                    DescribeTrialReportResponse();
                    ~DescribeTrialReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否展示</p>
                     * @return IsShow <p>是否展示</p>
                     * 
                     */
                    bool GetIsShow() const;

                    /**
                     * 判断参数 IsShow 是否已赋值
                     * @return IsShow 是否已赋值
                     * 
                     */
                    bool IsShowHasBeenSet() const;

                    /**
                     * 获取<p>新增机器数</p>
                     * @return AddMachineCnt <p>新增机器数</p>
                     * 
                     */
                    int64_t GetAddMachineCnt() const;

                    /**
                     * 判断参数 AddMachineCnt 是否已赋值
                     * @return AddMachineCnt 是否已赋值
                     * 
                     */
                    bool AddMachineCntHasBeenSet() const;

                    /**
                     * 获取<p>基线风险数(检测项)</p>
                     * @return BaselineRiskCnt <p>基线风险数(检测项)</p>
                     * 
                     */
                    int64_t GetBaselineRiskCnt() const;

                    /**
                     * 判断参数 BaselineRiskCnt 是否已赋值
                     * @return BaselineRiskCnt 是否已赋值
                     * 
                     */
                    bool BaselineRiskCntHasBeenSet() const;

                    /**
                     * 获取<p>漏洞数</p>
                     * @return VulCnt <p>漏洞数</p>
                     * 
                     */
                    int64_t GetVulCnt() const;

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取<p>木马告警成功数</p>
                     * @return MalwareAlarmCnt <p>木马告警成功数</p>
                     * 
                     */
                    int64_t GetMalwareAlarmCnt() const;

                    /**
                     * 判断参数 MalwareAlarmCnt 是否已赋值
                     * @return MalwareAlarmCnt 是否已赋值
                     * 
                     */
                    bool MalwareAlarmCntHasBeenSet() const;

                    /**
                     * 获取<p>爆破告警成功数</p>
                     * @return BruteAlarmCnt <p>爆破告警成功数</p>
                     * 
                     */
                    int64_t GetBruteAlarmCnt() const;

                    /**
                     * 判断参数 BruteAlarmCnt 是否已赋值
                     * @return BruteAlarmCnt 是否已赋值
                     * 
                     */
                    bool BruteAlarmCntHasBeenSet() const;

                    /**
                     * 获取<p>自动隔离木马数(成功)</p>
                     * @return AutoIsolateMalwareCnt <p>自动隔离木马数(成功)</p>
                     * 
                     */
                    int64_t GetAutoIsolateMalwareCnt() const;

                    /**
                     * 判断参数 AutoIsolateMalwareCnt 是否已赋值
                     * @return AutoIsolateMalwareCnt 是否已赋值
                     * 
                     */
                    bool AutoIsolateMalwareCntHasBeenSet() const;

                    /**
                     * 获取<p>自动阻断数(成功)</p>
                     * @return AutoBlockBruteCnt <p>自动阻断数(成功)</p>
                     * 
                     */
                    int64_t GetAutoBlockBruteCnt() const;

                    /**
                     * 判断参数 AutoBlockBruteCnt 是否已赋值
                     * @return AutoBlockBruteCnt 是否已赋值
                     * 
                     */
                    bool AutoBlockBruteCntHasBeenSet() const;

                    /**
                     * 获取<p>自动防御漏洞数(成功)</p>
                     * @return AutoDefenceCnt <p>自动防御漏洞数(成功)</p>
                     * 
                     */
                    int64_t GetAutoDefenceCnt() const;

                    /**
                     * 判断参数 AutoDefenceCnt 是否已赋值
                     * @return AutoDefenceCnt 是否已赋值
                     * 
                     */
                    bool AutoDefenceCntHasBeenSet() const;

                    /**
                     * 获取<p>漏洞自动修复数</p>
                     * @return AutoVulFixCnt <p>漏洞自动修复数</p>
                     * 
                     */
                    int64_t GetAutoVulFixCnt() const;

                    /**
                     * 判断参数 AutoVulFixCnt 是否已赋值
                     * @return AutoVulFixCnt 是否已赋值
                     * 
                     */
                    bool AutoVulFixCntHasBeenSet() const;

                    /**
                     * 获取<p>java内存码告警数</p>
                     * @return JavaShellCnt <p>java内存码告警数</p>
                     * 
                     */
                    int64_t GetJavaShellCnt() const;

                    /**
                     * 判断参数 JavaShellCnt 是否已赋值
                     * @return JavaShellCnt 是否已赋值
                     * 
                     */
                    bool JavaShellCntHasBeenSet() const;

                    /**
                     * 获取<p>核心文件监控告警数</p>
                     * @return FileTamperCnt <p>核心文件监控告警数</p>
                     * 
                     */
                    int64_t GetFileTamperCnt() const;

                    /**
                     * 判断参数 FileTamperCnt 是否已赋值
                     * @return FileTamperCnt 是否已赋值
                     * 
                     */
                    bool FileTamperCntHasBeenSet() const;

                    /**
                     * 获取<p>事件调查数</p>
                     * @return EventCnt <p>事件调查数</p>
                     * 
                     */
                    int64_t GetEventCnt() const;

                    /**
                     * 判断参数 EventCnt 是否已赋值
                     * @return EventCnt 是否已赋值
                     * 
                     */
                    bool EventCntHasBeenSet() const;

                    /**
                     * 获取<p>恶意请求事件数</p>
                     * @return DnsCnt <p>恶意请求事件数</p>
                     * 
                     */
                    int64_t GetDnsCnt() const;

                    /**
                     * 判断参数 DnsCnt 是否已赋值
                     * @return DnsCnt 是否已赋值
                     * 
                     */
                    bool DnsCntHasBeenSet() const;

                    /**
                     * 获取<p>高危命令事件数</p>
                     * @return BashCnt <p>高危命令事件数</p>
                     * 
                     */
                    int64_t GetBashCnt() const;

                    /**
                     * 判断参数 BashCnt 是否已赋值
                     * @return BashCnt 是否已赋值
                     * 
                     */
                    bool BashCntHasBeenSet() const;

                    /**
                     * 获取<p>云服务器厂商类型</p>
                     * @return CloudFrom <p>云服务器厂商类型</p>
                     * 
                     */
                    std::vector<CloudFromCnt> GetCloudFrom() const;

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                private:

                    /**
                     * <p>是否展示</p>
                     */
                    bool m_isShow;
                    bool m_isShowHasBeenSet;

                    /**
                     * <p>新增机器数</p>
                     */
                    int64_t m_addMachineCnt;
                    bool m_addMachineCntHasBeenSet;

                    /**
                     * <p>基线风险数(检测项)</p>
                     */
                    int64_t m_baselineRiskCnt;
                    bool m_baselineRiskCntHasBeenSet;

                    /**
                     * <p>漏洞数</p>
                     */
                    int64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>木马告警成功数</p>
                     */
                    int64_t m_malwareAlarmCnt;
                    bool m_malwareAlarmCntHasBeenSet;

                    /**
                     * <p>爆破告警成功数</p>
                     */
                    int64_t m_bruteAlarmCnt;
                    bool m_bruteAlarmCntHasBeenSet;

                    /**
                     * <p>自动隔离木马数(成功)</p>
                     */
                    int64_t m_autoIsolateMalwareCnt;
                    bool m_autoIsolateMalwareCntHasBeenSet;

                    /**
                     * <p>自动阻断数(成功)</p>
                     */
                    int64_t m_autoBlockBruteCnt;
                    bool m_autoBlockBruteCntHasBeenSet;

                    /**
                     * <p>自动防御漏洞数(成功)</p>
                     */
                    int64_t m_autoDefenceCnt;
                    bool m_autoDefenceCntHasBeenSet;

                    /**
                     * <p>漏洞自动修复数</p>
                     */
                    int64_t m_autoVulFixCnt;
                    bool m_autoVulFixCntHasBeenSet;

                    /**
                     * <p>java内存码告警数</p>
                     */
                    int64_t m_javaShellCnt;
                    bool m_javaShellCntHasBeenSet;

                    /**
                     * <p>核心文件监控告警数</p>
                     */
                    int64_t m_fileTamperCnt;
                    bool m_fileTamperCntHasBeenSet;

                    /**
                     * <p>事件调查数</p>
                     */
                    int64_t m_eventCnt;
                    bool m_eventCntHasBeenSet;

                    /**
                     * <p>恶意请求事件数</p>
                     */
                    int64_t m_dnsCnt;
                    bool m_dnsCntHasBeenSet;

                    /**
                     * <p>高危命令事件数</p>
                     */
                    int64_t m_bashCnt;
                    bool m_bashCntHasBeenSet;

                    /**
                     * <p>云服务器厂商类型</p>
                     */
                    std::vector<CloudFromCnt> m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETRIALREPORTRESPONSE_H_
