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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmSensitiveScanTaskConfig.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm资产数据识别详情
                */
                class DspmAssetDataScanDetail : public AbstractModel
                {
                public:
                    DspmAssetDataScanDetail();
                    ~DspmAssetDataScanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * @return Status 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * @param _status 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * @return StatusInfo 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * 
                     */
                    std::string GetStatusInfo() const;

                    /**
                     * 设置识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * @param _statusInfo 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     * 
                     */
                    void SetStatusInfo(const std::string& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取识别进度
                     * @return Progress 识别进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置识别进度
                     * @param _progress 识别进度
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LatestScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _latestScanTime 最近扫描时间
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取识别失败信息
                     * @return ErrorInfo 识别失败信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置识别失败信息
                     * @param _errorInfo 识别失败信息
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
                     * 获取数据库数量
                     * @return DbCount 数据库数量
                     * 
                     */
                    uint64_t GetDbCount() const;

                    /**
                     * 设置数据库数量
                     * @param _dbCount 数据库数量
                     * 
                     */
                    void SetDbCount(const uint64_t& _dbCount);

                    /**
                     * 判断参数 DbCount 是否已赋值
                     * @return DbCount 是否已赋值
                     * 
                     */
                    bool DbCountHasBeenSet() const;

                    /**
                     * 获取分类id集合
                     * @return CategoryIds 分类id集合
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置分类id集合
                     * @param _categoryIds 分类id集合
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取分类名称集合
                     * @return CategoryNames 分类名称集合
                     * 
                     */
                    std::vector<std::string> GetCategoryNames() const;

                    /**
                     * 设置分类名称集合
                     * @param _categoryNames 分类名称集合
                     * 
                     */
                    void SetCategoryNames(const std::vector<std::string>& _categoryNames);

                    /**
                     * 判断参数 CategoryNames 是否已赋值
                     * @return CategoryNames 是否已赋值
                     * 
                     */
                    bool CategoryNamesHasBeenSet() const;

                    /**
                     * 获取扫描任务配置
                     * @return TaskConfig 扫描任务配置
                     * 
                     */
                    DspmSensitiveScanTaskConfig GetTaskConfig() const;

                    /**
                     * 设置扫描任务配置
                     * @param _taskConfig 扫描任务配置
                     * 
                     */
                    void SetTaskConfig(const DspmSensitiveScanTaskConfig& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                    /**
                     * 获取识别结果分类详情
                     * @return CategoryDetails 识别结果分类详情
                     * 
                     */
                    std::vector<DspmIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置识别结果分类详情
                     * @param _categoryDetails 识别结果分类详情
                     * 
                     */
                    void SetCategoryDetails(const std::vector<DspmIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败
                     */
                    std::string m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 识别进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * 识别失败信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 数据库数量
                     */
                    uint64_t m_dbCount;
                    bool m_dbCountHasBeenSet;

                    /**
                     * 分类id集合
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 分类名称集合
                     */
                    std::vector<std::string> m_categoryNames;
                    bool m_categoryNamesHasBeenSet;

                    /**
                     * 扫描任务配置
                     */
                    DspmSensitiveScanTaskConfig m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                    /**
                     * 识别结果分类详情
                     */
                    std::vector<DspmIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_
