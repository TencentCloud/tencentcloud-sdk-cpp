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
                     * 获取<p>任务名称 不变更为&quot;&quot;</p>
                     * @return TplName <p>任务名称 不变更为&quot;&quot;</p>
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置<p>任务名称 不变更为&quot;&quot;</p>
                     * @param _tplName <p>任务名称 不变更为&quot;&quot;</p>
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
                     * 获取<p>执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31</p>
                     * @return CntTime <p>执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31</p>
                     * 
                     */
                    int64_t GetCntTime() const;

                    /**
                     * 设置<p>执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31</p>
                     * @param _cntTime <p>执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31</p>
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
                     * 获取<p>重复周期</p>
                     * @return CntCycle <p>重复周期</p>
                     * 
                     */
                    int64_t GetCntCycle() const;

                    /**
                     * 设置<p>重复周期</p>
                     * @param _cntCycle <p>重复周期</p>
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
                     * 获取<p>发送目标</p>
                     * @return Receivers <p>发送目标</p>
                     * 
                     */
                    std::string GetReceivers() const;

                    /**
                     * 设置<p>发送目标</p>
                     * @param _receivers <p>发送目标</p>
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
                     * 获取<p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * @return CntDay <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * 
                     */
                    int64_t GetCntDay() const;

                    /**
                     * 设置<p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * @param _cntDay <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
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
                     * 获取<p>执行时间 格式15:04 到分钟</p>
                     * @return CntDate <p>执行时间 格式15:04 到分钟</p>
                     * 
                     */
                    std::string GetCntDate() const;

                    /**
                     * 设置<p>执行时间 格式15:04 到分钟</p>
                     * @param _cntDate <p>执行时间 格式15:04 到分钟</p>
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
                     * 获取<p>报告说明</p>
                     * @return Remark <p>报告说明</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>报告说明</p>
                     * @param _remark <p>报告说明</p>
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
                     * 获取<p>模板Id</p>
                     * @return TemplateId <p>模板Id</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>模板Id</p>
                     * @param _templateId <p>模板Id</p>
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
                     * 获取<p>报表类型</p>
                     * @return ReportType <p>报表类型</p>
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置<p>报表类型</p>
                     * @param _reportType <p>报表类型</p>
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
                     * 获取<p>关联的资产数组</p>
                     * @return AssetsId <p>关联的资产数组</p>
                     * 
                     */
                    std::vector<int64_t> GetAssetsId() const;

                    /**
                     * 设置<p>关联的资产数组</p>
                     * @param _assetsId <p>关联的资产数组</p>
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
                     * 获取<p>报表通知 1关闭 2开启 不变更为0</p>
                     * @return Notification <p>报表通知 1关闭 2开启 不变更为0</p>
                     * 
                     */
                    int64_t GetNotification() const;

                    /**
                     * 设置<p>报表通知 1关闭 2开启 不变更为0</p>
                     * @param _notification <p>报表通知 1关闭 2开启 不变更为0</p>
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
                     * 获取<p>任务起停 1:关闭 2:开启 单次报表默认为2</p>
                     * @return MissionStart <p>任务起停 1:关闭 2:开启 单次报表默认为2</p>
                     * 
                     */
                    int64_t GetMissionStart() const;

                    /**
                     * 设置<p>任务起停 1:关闭 2:开启 单次报表默认为2</p>
                     * @param _missionStart <p>任务起停 1:关闭 2:开启 单次报表默认为2</p>
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
                     * <p>任务名称 不变更为&quot;&quot;</p>
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * <p>执行日期 重复周期为天：无意义周：星期几1-7月每月几号 1-31</p>
                     */
                    int64_t m_cntTime;
                    bool m_cntTimeHasBeenSet;

                    /**
                     * <p>重复周期</p>
                     */
                    int64_t m_cntCycle;
                    bool m_cntCycleHasBeenSet;

                    /**
                     * <p>发送目标</p>
                     */
                    std::string m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                    /**
                     * <p>执行时间 格式15:04 到分钟</p>
                     */
                    std::string m_cntDate;
                    bool m_cntDateHasBeenSet;

                    /**
                     * <p>报告说明</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>模板Id</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>报表类型</p>
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * <p>关联的资产数组</p>
                     */
                    std::vector<int64_t> m_assetsId;
                    bool m_assetsIdHasBeenSet;

                    /**
                     * <p>报表通知 1关闭 2开启 不变更为0</p>
                     */
                    int64_t m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * <p>任务起停 1:关闭 2:开启 单次报表默认为2</p>
                     */
                    int64_t m_missionStart;
                    bool m_missionStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_CREATETIMERREPORTREQUEST_H_
