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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos审计资产数据识别详情
                */
                class CosAssetDataScanDetail : public AbstractModel
                {
                public:
                    CosAssetDataScanDetail();
                    ~CosAssetDataScanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败</p>
                     * @return Status <p>识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败</p>
                     * @param _status <p>识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败</p>
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
                     * 获取<p>识别进度</p>
                     * @return Progress <p>识别进度</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>识别进度</p>
                     * @param _progress <p>识别进度</p>
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
                     * 获取<p>最近扫描时间</p>
                     * @return LatestScanTime <p>最近扫描时间</p>
                     * 
                     */
                    uint64_t GetLatestScanTime() const;

                    /**
                     * 设置<p>最近扫描时间</p>
                     * @param _latestScanTime <p>最近扫描时间</p>
                     * 
                     */
                    void SetLatestScanTime(const uint64_t& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>识别失败信息</p>
                     * @return ErrorInfo <p>识别失败信息</p>
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置<p>识别失败信息</p>
                     * @param _errorInfo <p>识别失败信息</p>
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
                     * 获取<p>识别结果分类详情</p>
                     * @return CategoryDetails <p>识别结果分类详情</p>
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>识别结果分类详情</p>
                     * @param _categoryDetails <p>识别结果分类详情</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>识别任务状态 0:未识别 1:识别中 2:识别终止 3:识别成功 4:识别失败</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>识别进度</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>最近扫描时间</p>
                     */
                    uint64_t m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>识别失败信息</p>
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>识别结果分类详情</p>
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_
