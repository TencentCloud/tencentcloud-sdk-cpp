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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSTASKRESULTDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSTASKRESULTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * COS扫描任务结果详情
                */
                class DspaDiscoveryCOSTaskResultDetail : public AbstractModel
                {
                public:
                    DspaDiscoveryCOSTaskResultDetail();
                    ~DspaDiscoveryCOSTaskResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取扫描File结果详情ID
                     * @return FileResultId 扫描File结果详情ID
                     * 
                     */
                    int64_t GetFileResultId() const;

                    /**
                     * 设置扫描File结果详情ID
                     * @param _fileResultId 扫描File结果详情ID
                     * 
                     */
                    void SetFileResultId(const int64_t& _fileResultId);

                    /**
                     * 判断参数 FileResultId 是否已赋值
                     * @return FileResultId 是否已赋值
                     * 
                     */
                    bool FileResultIdHasBeenSet() const;

                    /**
                     * 获取所属桶名
                     * @return BucketName 所属桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置所属桶名
                     * @param _bucketName 所属桶名
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取所属文件名
                     * @return FileName 所属文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置所属文件名
                     * @param _fileName 所属文件名
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
                     * 获取敏感数据分类ID
                     * @return CategoryId 敏感数据分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置敏感数据分类ID
                     * @param _categoryId 敏感数据分类ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取敏感数据分类名称
                     * @return CategoryName 敏感数据分类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置敏感数据分类名称
                     * @param _categoryName 敏感数据分类名称
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取敏感数据分级ID
                     * @return LevelId 敏感数据分级ID
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置敏感数据分级ID
                     * @param _levelId 敏感数据分级ID
                     * 
                     */
                    void SetLevelId(const int64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取敏感数据分级名称
                     * @return LevelName 敏感数据分级名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置敏感数据分级名称
                     * @param _levelName 敏感数据分级名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取KMS加密，true or false
                     * @return KMSEncrypted KMS加密，true or false
                     * 
                     */
                    bool GetKMSEncrypted() const;

                    /**
                     * 设置KMS加密，true or false
                     * @param _kMSEncrypted KMS加密，true or false
                     * 
                     */
                    void SetKMSEncrypted(const bool& _kMSEncrypted);

                    /**
                     * 判断参数 KMSEncrypted 是否已赋值
                     * @return KMSEncrypted 是否已赋值
                     * 
                     */
                    bool KMSEncryptedHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取敏感数据分级分数
                     * @return LevelRiskScore 敏感数据分级分数
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置敏感数据分级分数
                     * @param _levelRiskScore 敏感数据分级分数
                     * 
                     */
                    void SetLevelRiskScore(const int64_t& _levelRiskScore);

                    /**
                     * 判断参数 LevelRiskScore 是否已赋值
                     * @return LevelRiskScore 是否已赋值
                     * 
                     */
                    bool LevelRiskScoreHasBeenSet() const;

                    /**
                     * 获取文件大小，单位为KB
                     * @return FileSize 文件大小，单位为KB
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位为KB
                     * @param _fileSize 文件大小，单位为KB
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件类型，如csv，txt
                     * @return FileType 文件类型，如csv，txt
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，如csv，txt
                     * @param _fileType 文件类型，如csv，txt
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取敏感数据出现次数
                     * @return SensitiveDataCount 敏感数据出现次数
                     * 
                     */
                    int64_t GetSensitiveDataCount() const;

                    /**
                     * 设置敏感数据出现次数
                     * @param _sensitiveDataCount 敏感数据出现次数
                     * 
                     */
                    void SetSensitiveDataCount(const int64_t& _sensitiveDataCount);

                    /**
                     * 判断参数 SensitiveDataCount 是否已赋值
                     * @return SensitiveDataCount 是否已赋值
                     * 
                     */
                    bool SensitiveDataCountHasBeenSet() const;

                    /**
                     * 获取分类树路径
                     * @return CategoryFullPath 分类树路径
                     * 
                     */
                    std::vector<std::string> GetCategoryFullPath() const;

                    /**
                     * 设置分类树路径
                     * @param _categoryFullPath 分类树路径
                     * 
                     */
                    void SetCategoryFullPath(const std::vector<std::string>& _categoryFullPath);

                    /**
                     * 判断参数 CategoryFullPath 是否已赋值
                     * @return CategoryFullPath 是否已赋值
                     * 
                     */
                    bool CategoryFullPathHasBeenSet() const;

                    /**
                     * 获取分类树路径
                     * @return CategoryArr 分类树路径
                     * 
                     */
                    std::vector<std::string> GetCategoryArr() const;

                    /**
                     * 设置分类树路径
                     * @param _categoryArr 分类树路径
                     * 
                     */
                    void SetCategoryArr(const std::vector<std::string>& _categoryArr);

                    /**
                     * 判断参数 CategoryArr 是否已赋值
                     * @return CategoryArr 是否已赋值
                     * 
                     */
                    bool CategoryArrHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceId 合规组ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceId 合规组ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取结果id
                     * @return ResultId 结果id
                     * 
                     */
                    int64_t GetResultId() const;

                    /**
                     * 设置结果id
                     * @param _resultId 结果id
                     * 
                     */
                    void SetResultId(const int64_t& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 扫描File结果详情ID
                     */
                    int64_t m_fileResultId;
                    bool m_fileResultIdHasBeenSet;

                    /**
                     * 所属桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 所属文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 敏感数据分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 敏感数据分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 敏感数据分级ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 敏感数据分级名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * KMS加密，true or false
                     */
                    bool m_kMSEncrypted;
                    bool m_kMSEncryptedHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 敏感数据分级分数
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                    /**
                     * 文件大小，单位为KB
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件类型，如csv，txt
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 敏感数据出现次数
                     */
                    int64_t m_sensitiveDataCount;
                    bool m_sensitiveDataCountHasBeenSet;

                    /**
                     * 分类树路径
                     */
                    std::vector<std::string> m_categoryFullPath;
                    bool m_categoryFullPathHasBeenSet;

                    /**
                     * 分类树路径
                     */
                    std::vector<std::string> m_categoryArr;
                    bool m_categoryArrHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 结果id
                     */
                    int64_t m_resultId;
                    bool m_resultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSTASKRESULTDETAIL_H_
