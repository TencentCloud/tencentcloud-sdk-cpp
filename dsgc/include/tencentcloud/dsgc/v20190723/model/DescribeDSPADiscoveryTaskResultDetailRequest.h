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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKRESULTDETAILREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKRESULTDETAILREQUEST_H_

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
                * DescribeDSPADiscoveryTaskResultDetail请求参数结构体
                */
                class DescribeDSPADiscoveryTaskResultDetailRequest : public AbstractModel
                {
                public:
                    DescribeDSPADiscoveryTaskResultDetailRequest();
                    ~DescribeDSPADiscoveryTaskResultDetailRequest() = default;
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
                     * 获取扫描数据库结果ID
                     * @return DbResultId 扫描数据库结果ID
                     * 
                     */
                    int64_t GetDbResultId() const;

                    /**
                     * 设置扫描数据库结果ID
                     * @param _dbResultId 扫描数据库结果ID
                     * 
                     */
                    void SetDbResultId(const int64_t& _dbResultId);

                    /**
                     * 判断参数 DbResultId 是否已赋值
                     * @return DbResultId 是否已赋值
                     * 
                     */
                    bool DbResultIdHasBeenSet() const;

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
                     * 获取数据库名
                     * @return DbName 数据库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名
                     * @param _dbName 数据库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取所属数据表名
                     * @return TableName 所属数据表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置所属数据表名
                     * @param _tableName 所属数据表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

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

                    /**
                     * 获取任务扫描id
                     * @return ScanResultId 任务扫描id
                     * 
                     */
                    int64_t GetScanResultId() const;

                    /**
                     * 设置任务扫描id
                     * @param _scanResultId 任务扫描id
                     * 
                     */
                    void SetScanResultId(const int64_t& _scanResultId);

                    /**
                     * 判断参数 ScanResultId 是否已赋值
                     * @return ScanResultId 是否已赋值
                     * 
                     */
                    bool ScanResultIdHasBeenSet() const;

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
                     * 扫描数据库结果ID
                     */
                    int64_t m_dbResultId;
                    bool m_dbResultIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 所属数据表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

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
                     * 多级分类的分类ID集合
                     */
                    std::vector<int64_t> m_categoryIdList;
                    bool m_categoryIdListHasBeenSet;

                    /**
                     * 任务扫描id
                     */
                    int64_t m_scanResultId;
                    bool m_scanResultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKRESULTDETAILREQUEST_H_
