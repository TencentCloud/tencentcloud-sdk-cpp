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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeApplications请求参数结构体
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，用于获取指定集群的单据
                     * @return ClusterId 集群ID，用于获取指定集群的单据
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，用于获取指定集群的单据
                     * @param _clusterId 集群ID，用于获取指定集群的单据
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取分页，限制当前返回多少条记录，大于等于10
                     * @return Limit 分页，限制当前返回多少条记录，大于等于10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页，限制当前返回多少条记录，大于等于10
                     * @param _limit 分页，限制当前返回多少条记录，大于等于10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页，从多少条数据开始返回
                     * @return Offset 分页，从多少条数据开始返回
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页，从多少条数据开始返回
                     * @param _offset 分页，从多少条数据开始返回
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取申请单状态，用于过滤，0-待审核 1-已经审核并提交任务 2-已驳回
                     * @return CensorStatus 申请单状态，用于过滤，0-待审核 1-已经审核并提交任务 2-已驳回
                     * 
                     */
                    int64_t GetCensorStatus() const;

                    /**
                     * 设置申请单状态，用于过滤，0-待审核 1-已经审核并提交任务 2-已驳回
                     * @param _censorStatus 申请单状态，用于过滤，0-待审核 1-已经审核并提交任务 2-已驳回
                     * 
                     */
                    void SetCensorStatus(const int64_t& _censorStatus);

                    /**
                     * 判断参数 CensorStatus 是否已赋值
                     * @return CensorStatus 是否已赋值
                     * 
                     */
                    bool CensorStatusHasBeenSet() const;

                    /**
                     * 获取表格组id，用于过滤
                     * @return TableGroupId 表格组id，用于过滤
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组id，用于过滤
                     * @param _tableGroupId 表格组id，用于过滤
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格名，用于过滤
                     * @return TableName 表格名，用于过滤
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名，用于过滤
                     * @param _tableName 表格名，用于过滤
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
                     * 获取申请人uin，用于过滤
                     * @return Applicant 申请人uin，用于过滤
                     * 
                     */
                    std::string GetApplicant() const;

                    /**
                     * 设置申请人uin，用于过滤
                     * @param _applicant 申请人uin，用于过滤
                     * 
                     */
                    void SetApplicant(const std::string& _applicant);

                    /**
                     * 判断参数 Applicant 是否已赋值
                     * @return Applicant 是否已赋值
                     * 
                     */
                    bool ApplicantHasBeenSet() const;

                    /**
                     * 获取申请类型，用于过滤，0加表 1删除表 2清理表 3修改表 4表重建 5存储层扩缩容 6接入层扩缩容 7复制表数据 8key回档
                     * @return ApplyType 申请类型，用于过滤，0加表 1删除表 2清理表 3修改表 4表重建 5存储层扩缩容 6接入层扩缩容 7复制表数据 8key回档
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置申请类型，用于过滤，0加表 1删除表 2清理表 3修改表 4表重建 5存储层扩缩容 6接入层扩缩容 7复制表数据 8key回档
                     * @param _applyType 申请类型，用于过滤，0加表 1删除表 2清理表 3修改表 4表重建 5存储层扩缩容 6接入层扩缩容 7复制表数据 8key回档
                     * 
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID，用于获取指定集群的单据
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 分页，限制当前返回多少条记录，大于等于10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页，从多少条数据开始返回
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 申请单状态，用于过滤，0-待审核 1-已经审核并提交任务 2-已驳回
                     */
                    int64_t m_censorStatus;
                    bool m_censorStatusHasBeenSet;

                    /**
                     * 表格组id，用于过滤
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格名，用于过滤
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 申请人uin，用于过滤
                     */
                    std::string m_applicant;
                    bool m_applicantHasBeenSet;

                    /**
                     * 申请类型，用于过滤，0加表 1删除表 2清理表 3修改表 4表重建 5存储层扩缩容 6接入层扩缩容 7复制表数据 8key回档
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
