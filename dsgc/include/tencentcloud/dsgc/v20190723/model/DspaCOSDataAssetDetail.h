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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETDETAIL_H_

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
                * COS对象存储数据资产详情
                */
                class DspaCOSDataAssetDetail : public AbstractModel
                {
                public:
                    DspaCOSDataAssetDetail();
                    ~DspaCOSDataAssetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象桶
                     * @return BucketName 对象桶
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置对象桶
                     * @param _bucketName 对象桶
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
                     * 获取对象名称
                     * @return FileName 对象名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置对象名称
                     * @param _fileName 对象名称
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
                     * 获取出现次数
                     * @return SensitiveDataCount 出现次数
                     * 
                     */
                    int64_t GetSensitiveDataCount() const;

                    /**
                     * 设置出现次数
                     * @param _sensitiveDataCount 出现次数
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
                     * 获取敏感数据分类
                     * @return CategoryName 敏感数据分类
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置敏感数据分类
                     * @param _categoryName 敏感数据分类
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
                     * 获取敏感等级
                     * @return LevelRiskName 敏感等级
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置敏感等级
                     * @param _levelRiskName 敏感等级
                     * 
                     */
                    void SetLevelRiskName(const std::string& _levelRiskName);

                    /**
                     * 判断参数 LevelRiskName 是否已赋值
                     * @return LevelRiskName 是否已赋值
                     * 
                     */
                    bool LevelRiskNameHasBeenSet() const;

                    /**
                     * 获取KMS加密
                     * @return KMSEncrypted KMS加密
                     * 
                     */
                    bool GetKMSEncrypted() const;

                    /**
                     * 设置KMS加密
                     * @param _kMSEncrypted KMS加密
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
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param _fileType 文件类型
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
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

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
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
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
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CategoryId 分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置分类ID
                     * @param _categoryId 分类ID
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
                     * 获取分级ID
                     * @return LevelId 分级ID
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置分级ID
                     * @param _levelId 分级ID
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
                     * 获取文件扫描结果ID
                     * @return FileResultId 文件扫描结果ID
                     * 
                     */
                    int64_t GetFileResultId() const;

                    /**
                     * 设置文件扫描结果ID
                     * @param _fileResultId 文件扫描结果ID
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
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取分类路径
                     * @return CategoryFullPath 分类路径
                     * 
                     */
                    std::string GetCategoryFullPath() const;

                    /**
                     * 设置分类路径
                     * @param _categoryFullPath 分类路径
                     * 
                     */
                    void SetCategoryFullPath(const std::string& _categoryFullPath);

                    /**
                     * 判断参数 CategoryFullPath 是否已赋值
                     * @return CategoryFullPath 是否已赋值
                     * 
                     */
                    bool CategoryFullPathHasBeenSet() const;

                    /**
                     * 获取0-系统识别
1-人工识别
                     * @return IdentifyType 0-系统识别
1-人工识别
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置0-系统识别
1-人工识别
                     * @param _identifyType 0-系统识别
1-人工识别
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取0-系统识别
1-人工识别
                     * @return CheckStatus 0-系统识别
1-人工识别
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0-系统识别
1-人工识别
                     * @param _checkStatus 0-系统识别
1-人工识别
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                private:

                    /**
                     * 对象桶
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 对象名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 出现次数
                     */
                    int64_t m_sensitiveDataCount;
                    bool m_sensitiveDataCountHasBeenSet;

                    /**
                     * 敏感数据分类
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 敏感等级
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * KMS加密
                     */
                    bool m_kMSEncrypted;
                    bool m_kMSEncryptedHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件大小
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 敏感数据分级分数
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 分级ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 文件扫描结果ID
                     */
                    int64_t m_fileResultId;
                    bool m_fileResultIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 分类路径
                     */
                    std::string m_categoryFullPath;
                    bool m_categoryFullPathHasBeenSet;

                    /**
                     * 0-系统识别
1-人工识别
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 0-系统识别
1-人工识别
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETDETAIL_H_
