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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSTASKRESULTDETAILREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSTASKRESULTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDSPACOSTaskResultDetail请求参数结构体
                */
                class DescribeDSPACOSTaskResultDetailRequest : public AbstractModel
                {
                public:
                    DescribeDSPACOSTaskResultDetailRequest();
                    ~DescribeDSPACOSTaskResultDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

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
                     * 获取扫描Bucket结果ID
                     * @return BucketResultId 扫描Bucket结果ID
                     * 
                     */
                    int64_t GetBucketResultId() const;

                    /**
                     * 设置扫描Bucket结果ID
                     * @param _bucketResultId 扫描Bucket结果ID
                     * 
                     */
                    void SetBucketResultId(const int64_t& _bucketResultId);

                    /**
                     * 判断参数 BucketResultId 是否已赋值
                     * @return BucketResultId 是否已赋值
                     * 
                     */
                    bool BucketResultIdHasBeenSet() const;

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
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认值为20，最大值为100
                     * @return Limit 返回数量，默认值为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值为20，最大值为100
                     * @param _limit 返回数量，默认值为20，最大值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取扫描桶名称。
                     * @return BucketName 扫描桶名称。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置扫描桶名称。
                     * @param _bucketName 扫描桶名称。
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
                     * 获取多级分类的分类ID集合
                     * @return CategoryIdList 多级分类的分类ID集合
                     * 
                     */
                    std::vector<int64_t> GetCategoryIdList() const;

                    /**
                     * 设置多级分类的分类ID集合
                     * @param _categoryIdList 多级分类的分类ID集合
                     * 
                     */
                    void SetCategoryIdList(const std::vector<int64_t>& _categoryIdList);

                    /**
                     * 判断参数 CategoryIdList 是否已赋值
                     * @return CategoryIdList 是否已赋值
                     * 
                     */
                    bool CategoryIdListHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 扫描Bucket结果ID
                     */
                    int64_t m_bucketResultId;
                    bool m_bucketResultIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 敏感数据分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 敏感数据分级ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 扫描桶名称。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 多级分类的分类ID集合
                     */
                    std::vector<int64_t> m_categoryIdList;
                    bool m_categoryIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSTASKRESULTDETAILREQUEST_H_
