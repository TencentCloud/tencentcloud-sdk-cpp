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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyRuleDetail.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyLevelDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 对象存储审计文件数据识别信息
                */
                class CosAssetFileIdentifyInfo : public AbstractModel
                {
                public:
                    CosAssetFileIdentifyInfo();
                    ~CosAssetFileIdentifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件名称</p>
                     * @return FileName <p>文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
                     * @param _fileName <p>文件名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件路径</p>
                     * @return DirName <p>文件路径</p>
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置<p>文件路径</p>
                     * @param _dirName <p>文件路径</p>
                     * 
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     * 
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取<p>分类数据项详情</p>
                     * @return CategoryDetails <p>分类数据项详情</p>
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>分类数据项详情</p>
                     * @param _categoryDetails <p>分类数据项详情</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                    /**
                     * 获取<p>存储桶信息</p>
                     * @return BucketInfo <p>存储桶信息</p>
                     * 
                     */
                    CosBucketInfo GetBucketInfo() const;

                    /**
                     * 设置<p>存储桶信息</p>
                     * @param _bucketInfo <p>存储桶信息</p>
                     * 
                     */
                    void SetBucketInfo(const CosBucketInfo& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                    /**
                     * 获取<p>最后一次扫描时间</p>
                     * @return LastScanTime <p>最后一次扫描时间</p>
                     * 
                     */
                    uint64_t GetLastScanTime() const;

                    /**
                     * 设置<p>最后一次扫描时间</p>
                     * @param _lastScanTime <p>最后一次扫描时间</p>
                     * 
                     */
                    void SetLastScanTime(const uint64_t& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>处置状态</p>
                     * @return HandleStatus <p>处置状态</p>
                     * 
                     */
                    uint64_t GetHandleStatus() const;

                    /**
                     * 设置<p>处置状态</p>
                     * @param _handleStatus <p>处置状态</p>
                     * 
                     */
                    void SetHandleStatus(const uint64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取<p>结果唯一标识</p>
                     * @return ResultId <p>结果唯一标识</p>
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置<p>结果唯一标识</p>
                     * @param _resultId <p>结果唯一标识</p>
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取<p>规则详情</p>
                     * @return RuleDetails <p>规则详情</p>
                     * 
                     */
                    std::vector<CosIdentifyRuleDetail> GetRuleDetails() const;

                    /**
                     * 设置<p>规则详情</p>
                     * @param _ruleDetails <p>规则详情</p>
                     * 
                     */
                    void SetRuleDetails(const std::vector<CosIdentifyRuleDetail>& _ruleDetails);

                    /**
                     * 判断参数 RuleDetails 是否已赋值
                     * @return RuleDetails 是否已赋值
                     * 
                     */
                    bool RuleDetailsHasBeenSet() const;

                    /**
                     * 获取<p>级别详情</p>
                     * @return LevelDetails <p>级别详情</p>
                     * 
                     */
                    std::vector<CosIdentifyLevelDetail> GetLevelDetails() const;

                    /**
                     * 设置<p>级别详情</p>
                     * @param _levelDetails <p>级别详情</p>
                     * 
                     */
                    void SetLevelDetails(const std::vector<CosIdentifyLevelDetail>& _levelDetails);

                    /**
                     * 判断参数 LevelDetails 是否已赋值
                     * @return LevelDetails 是否已赋值
                     * 
                     */
                    bool LevelDetailsHasBeenSet() const;

                    /**
                     * 获取<p>模板ID</p>
                     * @return ComplianceId <p>模板ID</p>
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _complianceId <p>模板ID</p>
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * <p>文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件路径</p>
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * <p>分类数据项详情</p>
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>存储桶信息</p>
                     */
                    CosBucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                    /**
                     * <p>最后一次扫描时间</p>
                     */
                    uint64_t m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * <p>处置状态</p>
                     */
                    uint64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * <p>结果唯一标识</p>
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * <p>规则详情</p>
                     */
                    std::vector<CosIdentifyRuleDetail> m_ruleDetails;
                    bool m_ruleDetailsHasBeenSet;

                    /**
                     * <p>级别详情</p>
                     */
                    std::vector<CosIdentifyLevelDetail> m_levelDetails;
                    bool m_levelDetailsHasBeenSet;

                    /**
                     * <p>模板ID</p>
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
