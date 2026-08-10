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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_CREATETIMERREPORTREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_CREATETIMERREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * CreateTimerReport请求参数结构体
                */
                class CreateTimerReportRequest : public AbstractModel
                {
                public:
                    CreateTimerReportRequest();
                    ~CreateTimerReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称 不变更为""
                     * @return TplName 任务名称 不变更为""
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置任务名称 不变更为""
                     * @param _tplName 任务名称 不变更为""
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31
                     * @return CntTime 执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31
                     * 
                     */
                    int64_t GetCntTime() const;

                    /**
                     * 设置执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31
                     * @param _cntTime 执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31
                     * 
                     */
                    void SetCntTime(const int64_t& _cntTime);

                    /**
                     * 判断参数 CntTime 是否已赋值
                     * @return CntTime 是否已赋值
                     * 
                     */
                    bool CntTimeHasBeenSet() const;

                    /**
                     * 获取重复周期
                     * @return CntCycle 重复周期
                     * 
                     */
                    int64_t GetCntCycle() const;

                    /**
                     * 设置重复周期
                     * @param _cntCycle 重复周期
                     * 
                     */
                    void SetCntCycle(const int64_t& _cntCycle);

                    /**
                     * 判断参数 CntCycle 是否已赋值
                     * @return CntCycle 是否已赋值
                     * 
                     */
                    bool CntCycleHasBeenSet() const;

                    /**
                     * 获取发送目标
                     * @return Receivers 发送目标
                     * 
                     */
                    std::string GetReceivers() const;

                    /**
                     * 设置发送目标
                     * @param _receivers 发送目标
                     * 
                     */
                    void SetReceivers(const std::string& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * @return CntDay 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * 
                     */
                    int64_t GetCntDay() const;

                    /**
                     * 设置时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * @param _cntDay 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * 
                     */
                    void SetCntDay(const int64_t& _cntDay);

                    /**
                     * 判断参数 CntDay 是否已赋值
                     * @return CntDay 是否已赋值
                     * 
                     */
                    bool CntDayHasBeenSet() const;

                    /**
                     * 获取执行时间 格式15:04 到分钟
                     * @return CntDate 执行时间 格式15:04 到分钟
                     * 
                     */
                    std::string GetCntDate() const;

                    /**
                     * 设置执行时间 格式15:04 到分钟
                     * @param _cntDate 执行时间 格式15:04 到分钟
                     * 
                     */
                    void SetCntDate(const std::string& _cntDate);

                    /**
                     * 判断参数 CntDate 是否已赋值
                     * @return CntDate 是否已赋值
                     * 
                     */
                    bool CntDateHasBeenSet() const;

                    /**
                     * 获取报告说明
                     * @return Remark 报告说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置报告说明
                     * @param _remark 报告说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取模版Id
                     * @return TemplateId 模版Id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模版Id
                     * @param _templateId 模版Id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取报表类型
                     * @return ReportType 报表类型
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报表类型
                     * @param _reportType 报表类型
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取关联的资产数组
                     * @return AssetsId 关联的资产数组
                     * 
                     */
                    std::vector<int64_t> GetAssetsId() const;

                    /**
                     * 设置关联的资产数组
                     * @param _assetsId 关联的资产数组
                     * 
                     */
                    void SetAssetsId(const std::vector<int64_t>& _assetsId);

                    /**
                     * 判断参数 AssetsId 是否已赋值
                     * @return AssetsId 是否已赋值
                     * 
                     */
                    bool AssetsIdHasBeenSet() const;

                    /**
                     * 获取报表通知 1关闭 2开启 不变更为0
                     * @return Notification 报表通知 1关闭 2开启 不变更为0
                     * 
                     */
                    int64_t GetNotification() const;

                    /**
                     * 设置报表通知 1关闭 2开启 不变更为0
                     * @param _notification 报表通知 1关闭 2开启 不变更为0
                     * 
                     */
                    void SetNotification(const int64_t& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                    /**
                     * 获取任务起停 1:关闭 2:开启 单次报表默认为2
                     * @return MissionStart 任务起停 1:关闭 2:开启 单次报表默认为2
                     * 
                     */
                    int64_t GetMissionStart() const;

                    /**
                     * 设置任务起停 1:关闭 2:开启 单次报表默认为2
                     * @param _missionStart 任务起停 1:关闭 2:开启 单次报表默认为2
                     * 
                     */
                    void SetMissionStart(const int64_t& _missionStart);

                    /**
                     * 判断参数 MissionStart 是否已赋值
                     * @return MissionStart 是否已赋值
                     * 
                     */
                    bool MissionStartHasBeenSet() const;

                private:

                    /**
                     * 任务名称 不变更为""
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31
                     */
                    int64_t m_cntTime;
                    bool m_cntTimeHasBeenSet;

                    /**
                     * 重复周期
                     */
                    int64_t m_cntCycle;
                    bool m_cntCycleHasBeenSet;

                    /**
                     * 发送目标
                     */
                    std::string m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                    /**
                     * 执行时间 格式15:04 到分钟
                     */
                    std::string m_cntDate;
                    bool m_cntDateHasBeenSet;

                    /**
                     * 报告说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 模版Id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 报表类型
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 关联的资产数组
                     */
                    std::vector<int64_t> m_assetsId;
                    bool m_assetsIdHasBeenSet;

                    /**
                     * 报表通知 1关闭 2开启 不变更为0
                     */
                    int64_t m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * 任务起停 1:关闭 2:开启 单次报表默认为2
                     */
                    int64_t m_missionStart;
                    bool m_missionStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_CREATETIMERREPORTREQUEST_H_
