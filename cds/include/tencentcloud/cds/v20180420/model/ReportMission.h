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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_REPORTMISSION_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_REPORTMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cds/v20180420/model/AssetsInfo.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * 任务对象
                */
                class ReportMission : public AbstractModel
                {
                public:
                    ReportMission();
                    ~ReportMission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报表任务id
                     * @return Id 报表任务id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置报表任务id
                     * @param _id 报表任务id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TplName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tplName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取报表类型 1:单次报表 2:周期报表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportType 报表类型 1:单次报表 2:周期报表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报表类型 1:单次报表 2:周期报表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportType 报表类型 1:单次报表 2:周期报表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取报告说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 报告说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置报告说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 报告说明
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取报表模板 1:综合分析报告 2:等保合规报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 报表模板 1:综合分析报告 2:等保合规报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置报表模板 1:综合分析报告 2:等保合规报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 报表模板 1:综合分析报告 2:等保合规报告
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取包含资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetsList 包含资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetsInfo> GetAssetsList() const;

                    /**
                     * 设置包含资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetsList 包含资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetsList(const std::vector<AssetsInfo>& _assetsList);

                    /**
                     * 判断参数 AssetsList 是否已赋值
                     * @return AssetsList 是否已赋值
                     * 
                     */
                    bool AssetsListHasBeenSet() const;

                    /**
                     * 获取下次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextStartTime 下次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNextStartTime() const;

                    /**
                     * 设置下次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextStartTime 下次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextStartTime(const int64_t& _nextStartTime);

                    /**
                     * 判断参数 NextStartTime 是否已赋值
                     * @return NextStartTime 是否已赋值
                     * 
                     */
                    bool NextStartTimeHasBeenSet() const;

                    /**
                     * 获取任务状态 1:生成中 2:待生成3:已生成4:生成失败5:已暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MissionStatus 任务状态 1:生成中 2:待生成3:已生成4:生成失败5:已暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMissionStatus() const;

                    /**
                     * 设置任务状态 1:生成中 2:待生成3:已生成4:生成失败5:已暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _missionStatus 任务状态 1:生成中 2:待生成3:已生成4:生成失败5:已暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMissionStatus(const int64_t& _missionStatus);

                    /**
                     * 判断参数 MissionStatus 是否已赋值
                     * @return MissionStatus 是否已赋值
                     * 
                     */
                    bool MissionStatusHasBeenSet() const;

                    /**
                     * 获取任务状态说明 仅生成中和生成失败有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MissionStatusMessage 任务状态说明 仅生成中和生成失败有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMissionStatusMessage() const;

                    /**
                     * 设置任务状态说明 仅生成中和生成失败有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _missionStatusMessage 任务状态说明 仅生成中和生成失败有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMissionStatusMessage(const std::string& _missionStatusMessage);

                    /**
                     * 判断参数 MissionStatusMessage 是否已赋值
                     * @return MissionStatusMessage 是否已赋值
                     * 
                     */
                    bool MissionStatusMessageHasBeenSet() const;

                    /**
                     * 获取已生成报表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportCount 已生成报表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReportCount() const;

                    /**
                     * 设置已生成报表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportCount 已生成报表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportCount(const int64_t& _reportCount);

                    /**
                     * 判断参数 ReportCount 是否已赋值
                     * @return ReportCount 是否已赋值
                     * 
                     */
                    bool ReportCountHasBeenSet() const;

                    /**
                     * 获取任务起停 1:关闭 2:开启 仅周期报表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MissionStart 任务起停 1:关闭 2:开启 仅周期报表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMissionStart() const;

                    /**
                     * 设置任务起停 1:关闭 2:开启 仅周期报表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _missionStart 任务起停 1:关闭 2:开启 仅周期报表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMissionStart(const int64_t& _missionStart);

                    /**
                     * 判断参数 MissionStart 是否已赋值
                     * @return MissionStart 是否已赋值
                     * 
                     */
                    bool MissionStartHasBeenSet() const;

                    /**
                     * 获取统计周期 1:24小时 7:近一周 30:近30天 90:近90天 180:
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CntDay 统计周期 1:24小时 7:近一周 30:近30天 90:近90天 180:
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCntDay() const;

                    /**
                     * 设置统计周期 1:24小时 7:近一周 30:近30天 90:近90天 180:
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cntDay 统计周期 1:24小时 7:近一周 30:近30天 90:近90天 180:
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取重复周期 1:每天 2:每周 3:每月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CntCycle 重复周期 1:每天 2:每周 3:每月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCntCycle() const;

                    /**
                     * 设置重复周期 1:每天 2:每周 3:每月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cntCycle 重复周期 1:每天 2:每周 3:每月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCntCycle(const uint64_t& _cntCycle);

                    /**
                     * 判断参数 CntCycle 是否已赋值
                     * @return CntCycle 是否已赋值
                     * 
                     */
                    bool CntCycleHasBeenSet() const;

                    /**
                     * 获取执行日期 重复周期为天：无意义 周：星期几 1-7  月每月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CntTime 执行日期 重复周期为天：无意义 周：星期几 1-7  月每月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCntTime() const;

                    /**
                     * 设置执行日期 重复周期为天：无意义 周：星期几 1-7  月每月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cntTime 执行日期 重复周期为天：无意义 周：星期几 1-7  月每月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCntTime(const uint64_t& _cntTime);

                    /**
                     * 判断参数 CntTime 是否已赋值
                     * @return CntTime 是否已赋值
                     * 
                     */
                    bool CntTimeHasBeenSet() const;

                    /**
                     * 获取执行时间 格式15:04 到分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CntDate 执行时间 格式15:04 到分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCntDate() const;

                    /**
                     * 设置执行时间 格式15:04 到分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cntDate 执行时间 格式15:04 到分钟
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建者 0:内置 其余存放用户(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers 创建者 0:内置 其余存放用户(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceivers() const;

                    /**
                     * 设置创建者 0:内置 其余存放用户(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers 创建者 0:内置 其余存放用户(uin)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Notification  int  1关闭 2开启 不变更为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notification Notification  int  1关闭 2开启 不变更为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotification() const;

                    /**
                     * 设置Notification  int  1关闭 2开启 不变更为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notification Notification  int  1关闭 2开启 不变更为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotification(const int64_t& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                private:

                    /**
                     * 报表任务id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 报表类型 1:单次报表 2:周期报表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 报告说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 报表模板 1:综合分析报告 2:等保合规报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 包含资产
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetsInfo> m_assetsList;
                    bool m_assetsListHasBeenSet;

                    /**
                     * 下次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nextStartTime;
                    bool m_nextStartTimeHasBeenSet;

                    /**
                     * 任务状态 1:生成中 2:待生成3:已生成4:生成失败5:已暂停
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_missionStatus;
                    bool m_missionStatusHasBeenSet;

                    /**
                     * 任务状态说明 仅生成中和生成失败有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_missionStatusMessage;
                    bool m_missionStatusMessageHasBeenSet;

                    /**
                     * 已生成报表数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reportCount;
                    bool m_reportCountHasBeenSet;

                    /**
                     * 任务起停 1:关闭 2:开启 仅周期报表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_missionStart;
                    bool m_missionStartHasBeenSet;

                    /**
                     * 统计周期 1:24小时 7:近一周 30:近30天 90:近90天 180:
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                    /**
                     * 重复周期 1:每天 2:每周 3:每月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cntCycle;
                    bool m_cntCycleHasBeenSet;

                    /**
                     * 执行日期 重复周期为天：无意义 周：星期几 1-7  月每月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cntTime;
                    bool m_cntTimeHasBeenSet;

                    /**
                     * 执行时间 格式15:04 到分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cntDate;
                    bool m_cntDateHasBeenSet;

                    /**
                     * 创建者 0:内置 其余存放用户(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Notification  int  1关闭 2开启 不变更为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notification;
                    bool m_notificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_REPORTMISSION_H_
