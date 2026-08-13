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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_REPORTS_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_REPORTS_H_

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
                * 报表列表字段数组
                */
                class Reports : public AbstractModel
                {
                public:
                    Reports();
                    ~Reports() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成时间
                     * @return AddTime 生成时间
                     * 
                     */
                    int64_t GetAddTime() const;

                    /**
                     * 设置生成时间
                     * @param _addTime 生成时间
                     * 
                     */
                    void SetAddTime(const int64_t& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取报告 ID
                     * @return Id 报告 ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置报告 ID
                     * @param _id 报告 ID
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
                     * 获取审计 ID
                     * @return InstanceId 审计 ID
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置审计 ID
                     * @param _instanceId 审计 ID
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取是否已删除
                     * @return IsDelete 是否已删除
                     * 
                     */
                    int64_t GetIsDelete() const;

                    /**
                     * 设置是否已删除
                     * @param _isDelete 是否已删除
                     * 
                     */
                    void SetIsDelete(const int64_t& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

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
                     * 获取报告文件
                     * @return ReportFile 报告文件
                     * 
                     */
                    std::string GetReportFile() const;

                    /**
                     * 设置报告文件
                     * @param _reportFile 报告文件
                     * 
                     */
                    void SetReportFile(const std::string& _reportFile);

                    /**
                     * 判断参数 ReportFile 是否已赋值
                     * @return ReportFile 是否已赋值
                     * 
                     */
                    bool ReportFileHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return ReportStatus 状态
                     * 
                     */
                    int64_t GetReportStatus() const;

                    /**
                     * 设置状态
                     * @param _reportStatus 状态
                     * 
                     */
                    void SetReportStatus(const int64_t& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return ReportTmpStatus 状态
                     * 
                     */
                    int64_t GetReportTmpStatus() const;

                    /**
                     * 设置状态
                     * @param _reportTmpStatus 状态
                     * 
                     */
                    void SetReportTmpStatus(const int64_t& _reportTmpStatus);

                    /**
                     * 判断参数 ReportTmpStatus 是否已赋值
                     * @return ReportTmpStatus 是否已赋值
                     * 
                     */
                    bool ReportTmpStatusHasBeenSet() const;

                    /**
                     * 获取报告类型
                     * @return ReportType 报告类型
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报告类型
                     * @param _reportType 报告类型
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
                     * 获取发送结果
                     * @return SendResult 发送结果
                     * 
                     */
                    std::string GetSendResult() const;

                    /**
                     * 设置发送结果
                     * @param _sendResult 发送结果
                     * 
                     */
                    void SetSendResult(const std::string& _sendResult);

                    /**
                     * 判断参数 SendResult 是否已赋值
                     * @return SendResult 是否已赋值
                     * 
                     */
                    bool SendResultHasBeenSet() const;

                    /**
                     * 获取发送类型
                     * @return SendType 发送类型
                     * 
                     */
                    std::string GetSendType() const;

                    /**
                     * 设置发送类型
                     * @param _sendType 发送类型
                     * 
                     */
                    void SetSendType(const std::string& _sendType);

                    /**
                     * 判断参数 SendType 是否已赋值
                     * @return SendType 是否已赋值
                     * 
                     */
                    bool SendTypeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取报告名称
                     * @return Title 报告名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置报告名称
                     * @param _title 报告名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取报表模板
                     * @return TemplateId 报表模板
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置报表模板
                     * @param _templateId 报表模板
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
                     * @return AssetsList 包含资产
                     * 
                     */
                    std::vector<AssetsInfo> GetAssetsList() const;

                    /**
                     * 设置包含资产
                     * @param _assetsList 包含资产
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

                private:

                    /**
                     * 生成时间
                     */
                    int64_t m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 报告 ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 审计 ID
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否已删除
                     */
                    int64_t m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * 发送目标
                     */
                    std::string m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 报告说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 报告文件
                     */
                    std::string m_reportFile;
                    bool m_reportFileHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_reportTmpStatus;
                    bool m_reportTmpStatusHasBeenSet;

                    /**
                     * 报告类型
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 发送结果
                     */
                    std::string m_sendResult;
                    bool m_sendResultHasBeenSet;

                    /**
                     * 发送类型
                     */
                    std::string m_sendType;
                    bool m_sendTypeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 报告名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 报表模板
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 包含资产
                     */
                    std::vector<AssetsInfo> m_assetsList;
                    bool m_assetsListHasBeenSet;

                    /**
                     * 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_REPORTS_H_
