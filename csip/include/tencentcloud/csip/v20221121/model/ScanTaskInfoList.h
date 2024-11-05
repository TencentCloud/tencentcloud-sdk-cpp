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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskAssetObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 扫描任务列表展示信息
                */
                class ScanTaskInfoList : public AbstractModel
                {
                public:
                    ScanTaskInfoList();
                    ~ScanTaskInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务开始时间
                     * @return StartTime 任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _startTime 任务开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取cron格式
                     * @return ScanPlanContent cron格式
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置cron格式
                     * @param _scanPlanContent cron格式
                     * 
                     */
                    void SetScanPlanContent(const std::string& _scanPlanContent);

                    /**
                     * 判断参数 ScanPlanContent 是否已赋值
                     * @return ScanPlanContent 是否已赋值
                     * 
                     */
                    bool ScanPlanContentHasBeenSet() const;

                    /**
                     * 获取0-周期任务,1-立即扫描,2-定时扫描,3-自定义
                     * @return TaskType 0-周期任务,1-立即扫描,2-定时扫描,3-自定义
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置0-周期任务,1-立即扫描,2-定时扫描,3-自定义
                     * @param _taskType 0-周期任务,1-立即扫描,2-定时扫描,3-自定义
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param _insertTime 创建时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取自定义指定扫描资产信息
                     * @return SelfDefiningAssets 自定义指定扫描资产信息
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置自定义指定扫描资产信息
                     * @param _selfDefiningAssets 自定义指定扫描资产信息
                     * 
                     */
                    void SetSelfDefiningAssets(const std::vector<std::string>& _selfDefiningAssets);

                    /**
                     * 判断参数 SelfDefiningAssets 是否已赋值
                     * @return SelfDefiningAssets 是否已赋值
                     * 
                     */
                    bool SelfDefiningAssetsHasBeenSet() const;

                    /**
                     * 获取预估时间
                     * @return PredictTime 预估时间
                     * 
                     */
                    int64_t GetPredictTime() const;

                    /**
                     * 设置预估时间
                     * @param _predictTime 预估时间
                     * 
                     */
                    void SetPredictTime(const int64_t& _predictTime);

                    /**
                     * 判断参数 PredictTime 是否已赋值
                     * @return PredictTime 是否已赋值
                     * 
                     */
                    bool PredictTimeHasBeenSet() const;

                    /**
                     * 获取预估完成时间
                     * @return PredictEndTime 预估完成时间
                     * 
                     */
                    std::string GetPredictEndTime() const;

                    /**
                     * 设置预估完成时间
                     * @param _predictEndTime 预估完成时间
                     * 
                     */
                    void SetPredictEndTime(const std::string& _predictEndTime);

                    /**
                     * 判断参数 PredictEndTime 是否已赋值
                     * @return PredictEndTime 是否已赋值
                     * 
                     */
                    bool PredictEndTimeHasBeenSet() const;

                    /**
                     * 获取报告数量
                     * @return ReportNumber 报告数量
                     * 
                     */
                    int64_t GetReportNumber() const;

                    /**
                     * 设置报告数量
                     * @param _reportNumber 报告数量
                     * 
                     */
                    void SetReportNumber(const int64_t& _reportNumber);

                    /**
                     * 判断参数 ReportNumber 是否已赋值
                     * @return ReportNumber 是否已赋值
                     * 
                     */
                    bool ReportNumberHasBeenSet() const;

                    /**
                     * 获取资产数量
                     * @return AssetNumber 资产数量
                     * 
                     */
                    int64_t GetAssetNumber() const;

                    /**
                     * 设置资产数量
                     * @param _assetNumber 资产数量
                     * 
                     */
                    void SetAssetNumber(const int64_t& _assetNumber);

                    /**
                     * 判断参数 AssetNumber 是否已赋值
                     * @return AssetNumber 是否已赋值
                     * 
                     */
                    bool AssetNumberHasBeenSet() const;

                    /**
                     * 获取扫描状态, 0-初始值，1-正在扫描，2-扫描完成，3-扫描出错，4-停止扫描
                     * @return ScanStatus 扫描状态, 0-初始值，1-正在扫描，2-扫描完成，3-扫描出错，4-停止扫描
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态, 0-初始值，1-正在扫描，2-扫描完成，3-扫描出错，4-停止扫描
                     * @param _scanStatus 扫描状态, 0-初始值，1-正在扫描，2-扫描完成，3-扫描出错，4-停止扫描
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取任务进度
                     * @return Percent 任务进度
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置任务进度
                     * @param _percent 任务进度
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取port/poc/weakpass/webcontent/configrisk
                     * @return ScanItem port/poc/weakpass/webcontent/configrisk
                     * 
                     */
                    std::string GetScanItem() const;

                    /**
                     * 设置port/poc/weakpass/webcontent/configrisk
                     * @param _scanItem port/poc/weakpass/webcontent/configrisk
                     * 
                     */
                    void SetScanItem(const std::string& _scanItem);

                    /**
                     * 判断参数 ScanItem 是否已赋值
                     * @return ScanItem 是否已赋值
                     * 
                     */
                    bool ScanItemHasBeenSet() const;

                    /**
                     * 获取0-全扫，1-指定资产扫，2-排除资产扫，3-自定义指定资产扫描
                     * @return ScanAssetType 0-全扫，1-指定资产扫，2-排除资产扫，3-自定义指定资产扫描
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置0-全扫，1-指定资产扫，2-排除资产扫，3-自定义指定资产扫描
                     * @param _scanAssetType 0-全扫，1-指定资产扫，2-排除资产扫，3-自定义指定资产扫描
                     * 
                     */
                    void SetScanAssetType(const int64_t& _scanAssetType);

                    /**
                     * 判断参数 ScanAssetType 是否已赋值
                     * @return ScanAssetType 是否已赋值
                     * 
                     */
                    bool ScanAssetTypeHasBeenSet() const;

                    /**
                     * 获取vss子任务id
                     * @return VSSTaskId vss子任务id
                     * 
                     */
                    std::string GetVSSTaskId() const;

                    /**
                     * 设置vss子任务id
                     * @param _vSSTaskId vss子任务id
                     * 
                     */
                    void SetVSSTaskId(const std::string& _vSSTaskId);

                    /**
                     * 判断参数 VSSTaskId 是否已赋值
                     * @return VSSTaskId 是否已赋值
                     * 
                     */
                    bool VSSTaskIdHasBeenSet() const;

                    /**
                     * 获取cspm子任务id
                     * @return CSPMTaskId cspm子任务id
                     * 
                     */
                    std::string GetCSPMTaskId() const;

                    /**
                     * 设置cspm子任务id
                     * @param _cSPMTaskId cspm子任务id
                     * 
                     */
                    void SetCSPMTaskId(const std::string& _cSPMTaskId);

                    /**
                     * 判断参数 CSPMTaskId 是否已赋值
                     * @return CSPMTaskId 是否已赋值
                     * 
                     */
                    bool CSPMTaskIdHasBeenSet() const;

                    /**
                     * 获取主机漏扫子任务id
                     * @return CWPPOCId 主机漏扫子任务id
                     * 
                     */
                    std::string GetCWPPOCId() const;

                    /**
                     * 设置主机漏扫子任务id
                     * @param _cWPPOCId 主机漏扫子任务id
                     * 
                     */
                    void SetCWPPOCId(const std::string& _cWPPOCId);

                    /**
                     * 判断参数 CWPPOCId 是否已赋值
                     * @return CWPPOCId 是否已赋值
                     * 
                     */
                    bool CWPPOCIdHasBeenSet() const;

                    /**
                     * 获取主机基线子任务id
                     * @return CWPBlId 主机基线子任务id
                     * 
                     */
                    std::string GetCWPBlId() const;

                    /**
                     * 设置主机基线子任务id
                     * @param _cWPBlId 主机基线子任务id
                     * 
                     */
                    void SetCWPBlId(const std::string& _cWPBlId);

                    /**
                     * 判断参数 CWPBlId 是否已赋值
                     * @return CWPBlId 是否已赋值
                     * 
                     */
                    bool CWPBlIdHasBeenSet() const;

                    /**
                     * 获取vss子任务进度
                     * @return VSSTaskProcess vss子任务进度
                     * 
                     */
                    int64_t GetVSSTaskProcess() const;

                    /**
                     * 设置vss子任务进度
                     * @param _vSSTaskProcess vss子任务进度
                     * 
                     */
                    void SetVSSTaskProcess(const int64_t& _vSSTaskProcess);

                    /**
                     * 判断参数 VSSTaskProcess 是否已赋值
                     * @return VSSTaskProcess 是否已赋值
                     * 
                     */
                    bool VSSTaskProcessHasBeenSet() const;

                    /**
                     * 获取cspm子任务进度
                     * @return CSPMTaskProcess cspm子任务进度
                     * 
                     */
                    uint64_t GetCSPMTaskProcess() const;

                    /**
                     * 设置cspm子任务进度
                     * @param _cSPMTaskProcess cspm子任务进度
                     * 
                     */
                    void SetCSPMTaskProcess(const uint64_t& _cSPMTaskProcess);

                    /**
                     * 判断参数 CSPMTaskProcess 是否已赋值
                     * @return CSPMTaskProcess 是否已赋值
                     * 
                     */
                    bool CSPMTaskProcessHasBeenSet() const;

                    /**
                     * 获取主机漏扫子任务进度
                     * @return CWPPOCProcess 主机漏扫子任务进度
                     * 
                     */
                    int64_t GetCWPPOCProcess() const;

                    /**
                     * 设置主机漏扫子任务进度
                     * @param _cWPPOCProcess 主机漏扫子任务进度
                     * 
                     */
                    void SetCWPPOCProcess(const int64_t& _cWPPOCProcess);

                    /**
                     * 判断参数 CWPPOCProcess 是否已赋值
                     * @return CWPPOCProcess 是否已赋值
                     * 
                     */
                    bool CWPPOCProcessHasBeenSet() const;

                    /**
                     * 获取主机基线子任务进度
                     * @return CWPBlProcess 主机基线子任务进度
                     * 
                     */
                    uint64_t GetCWPBlProcess() const;

                    /**
                     * 设置主机基线子任务进度
                     * @param _cWPBlProcess 主机基线子任务进度
                     * 
                     */
                    void SetCWPBlProcess(const uint64_t& _cWPBlProcess);

                    /**
                     * 判断参数 CWPBlProcess 是否已赋值
                     * @return CWPBlProcess 是否已赋值
                     * 
                     */
                    bool CWPBlProcessHasBeenSet() const;

                    /**
                     * 获取异常状态码
                     * @return ErrorCode 异常状态码
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置异常状态码
                     * @param _errorCode 异常状态码
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取异常信息
                     * @return ErrorInfo 异常信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置异常信息
                     * @param _errorInfo 异常信息
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取周期任务开始的天数
                     * @return StartDay 周期任务开始的天数
                     * 
                     */
                    int64_t GetStartDay() const;

                    /**
                     * 设置周期任务开始的天数
                     * @param _startDay 周期任务开始的天数
                     * 
                     */
                    void SetStartDay(const int64_t& _startDay);

                    /**
                     * 判断参数 StartDay 是否已赋值
                     * @return StartDay 是否已赋值
                     * 
                     */
                    bool StartDayHasBeenSet() const;

                    /**
                     * 获取扫描频率,单位天,1-每天,7-每周,30-月,0-扫描一次
                     * @return Frequency 扫描频率,单位天,1-每天,7-每周,30-月,0-扫描一次
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置扫描频率,单位天,1-每天,7-每周,30-月,0-扫描一次
                     * @param _frequency 扫描频率,单位天,1-每天,7-每周,30-月,0-扫描一次
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取完成次数
                     * @return CompleteNumber 完成次数
                     * 
                     */
                    int64_t GetCompleteNumber() const;

                    /**
                     * 设置完成次数
                     * @param _completeNumber 完成次数
                     * 
                     */
                    void SetCompleteNumber(const int64_t& _completeNumber);

                    /**
                     * 判断参数 CompleteNumber 是否已赋值
                     * @return CompleteNumber 是否已赋值
                     * 
                     */
                    bool CompleteNumberHasBeenSet() const;

                    /**
                     * 获取已完成资产个数
                     * @return CompleteAssetNumber 已完成资产个数
                     * 
                     */
                    int64_t GetCompleteAssetNumber() const;

                    /**
                     * 设置已完成资产个数
                     * @param _completeAssetNumber 已完成资产个数
                     * 
                     */
                    void SetCompleteAssetNumber(const int64_t& _completeAssetNumber);

                    /**
                     * 判断参数 CompleteAssetNumber 是否已赋值
                     * @return CompleteAssetNumber 是否已赋值
                     * 
                     */
                    bool CompleteAssetNumberHasBeenSet() const;

                    /**
                     * 获取风险数
                     * @return RiskCount 风险数
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险数
                     * @param _riskCount 风险数
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取资产
                     * @return Assets 资产
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置资产
                     * @param _assets 资产
                     * 
                     */
                    void SetAssets(const std::vector<TaskAssetObject>& _assets);

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取用户Appid
                     * @return AppId 用户Appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户Appid
                     * @param _appId 用户Appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户主账户ID
                     * @return UIN 用户主账户ID
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置用户主账户ID
                     * @param _uIN 用户主账户ID
                     * 
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     * 
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取体检模式，0-标准模式，1-快速模式，2-高级模式
                     * @return TaskMode 体检模式，0-标准模式，1-快速模式，2-高级模式
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置体检模式，0-标准模式，1-快速模式，2-高级模式
                     * @param _taskMode 体检模式，0-标准模式，1-快速模式，2-高级模式
                     * 
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取扫描来源
                     * @return ScanFrom 扫描来源
                     * 
                     */
                    std::string GetScanFrom() const;

                    /**
                     * 设置扫描来源
                     * @param _scanFrom 扫描来源
                     * 
                     */
                    void SetScanFrom(const std::string& _scanFrom);

                    /**
                     * 判断参数 ScanFrom 是否已赋值
                     * @return ScanFrom 是否已赋值
                     * 
                     */
                    bool ScanFromHasBeenSet() const;

                    /**
                     * 获取是否限免体检0不是，1是
                     * @return IsFree 是否限免体检0不是，1是
                     * 
                     */
                    int64_t GetIsFree() const;

                    /**
                     * 设置是否限免体检0不是，1是
                     * @param _isFree 是否限免体检0不是，1是
                     * 
                     */
                    void SetIsFree(const int64_t& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取是否可以删除，1-可以，0-不可以，对应多账户管理使用
                     * @return IsDelete 是否可以删除，1-可以，0-不可以，对应多账户管理使用
                     * 
                     */
                    int64_t GetIsDelete() const;

                    /**
                     * 设置是否可以删除，1-可以，0-不可以，对应多账户管理使用
                     * @param _isDelete 是否可以删除，1-可以，0-不可以，对应多账户管理使用
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
                     * 获取任务源类型，0-默认，1-小助手，2-体检项
                     * @return SourceType 任务源类型，0-默认，1-小助手，2-体检项
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置任务源类型，0-默认，1-小助手，2-体检项
                     * @param _sourceType 任务源类型，0-默认，1-小助手，2-体检项
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * cron格式
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * 0-周期任务,1-立即扫描,2-定时扫描,3-自定义
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 自定义指定扫描资产信息
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * 预估时间
                     */
                    int64_t m_predictTime;
                    bool m_predictTimeHasBeenSet;

                    /**
                     * 预估完成时间
                     */
                    std::string m_predictEndTime;
                    bool m_predictEndTimeHasBeenSet;

                    /**
                     * 报告数量
                     */
                    int64_t m_reportNumber;
                    bool m_reportNumberHasBeenSet;

                    /**
                     * 资产数量
                     */
                    int64_t m_assetNumber;
                    bool m_assetNumberHasBeenSet;

                    /**
                     * 扫描状态, 0-初始值，1-正在扫描，2-扫描完成，3-扫描出错，4-停止扫描
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 任务进度
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * port/poc/weakpass/webcontent/configrisk
                     */
                    std::string m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * 0-全扫，1-指定资产扫，2-排除资产扫，3-自定义指定资产扫描
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * vss子任务id
                     */
                    std::string m_vSSTaskId;
                    bool m_vSSTaskIdHasBeenSet;

                    /**
                     * cspm子任务id
                     */
                    std::string m_cSPMTaskId;
                    bool m_cSPMTaskIdHasBeenSet;

                    /**
                     * 主机漏扫子任务id
                     */
                    std::string m_cWPPOCId;
                    bool m_cWPPOCIdHasBeenSet;

                    /**
                     * 主机基线子任务id
                     */
                    std::string m_cWPBlId;
                    bool m_cWPBlIdHasBeenSet;

                    /**
                     * vss子任务进度
                     */
                    int64_t m_vSSTaskProcess;
                    bool m_vSSTaskProcessHasBeenSet;

                    /**
                     * cspm子任务进度
                     */
                    uint64_t m_cSPMTaskProcess;
                    bool m_cSPMTaskProcessHasBeenSet;

                    /**
                     * 主机漏扫子任务进度
                     */
                    int64_t m_cWPPOCProcess;
                    bool m_cWPPOCProcessHasBeenSet;

                    /**
                     * 主机基线子任务进度
                     */
                    uint64_t m_cWPBlProcess;
                    bool m_cWPBlProcessHasBeenSet;

                    /**
                     * 异常状态码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 异常信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 周期任务开始的天数
                     */
                    int64_t m_startDay;
                    bool m_startDayHasBeenSet;

                    /**
                     * 扫描频率,单位天,1-每天,7-每周,30-月,0-扫描一次
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 完成次数
                     */
                    int64_t m_completeNumber;
                    bool m_completeNumberHasBeenSet;

                    /**
                     * 已完成资产个数
                     */
                    int64_t m_completeAssetNumber;
                    bool m_completeAssetNumberHasBeenSet;

                    /**
                     * 风险数
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 资产
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * 用户Appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户主账户ID
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 体检模式，0-标准模式，1-快速模式，2-高级模式
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 扫描来源
                     */
                    std::string m_scanFrom;
                    bool m_scanFromHasBeenSet;

                    /**
                     * 是否限免体检0不是，1是
                     */
                    int64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * 是否可以删除，1-可以，0-不可以，对应多账户管理使用
                     */
                    int64_t m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * 任务源类型，0-默认，1-小助手，2-体检项
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_
