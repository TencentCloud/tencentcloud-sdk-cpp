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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EXPORTLOGSOFFLINEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EXPORTLOGSOFFLINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ExportLogsOffline请求参数结构体
                */
                class ExportLogsOfflineRequest : public AbstractModel
                {
                public:
                    ExportLogsOfflineRequest();
                    ~ExportLogsOfflineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志类型标识</p><p>枚举值：</p><ul><li>cfw_netflow_border： 流量日志-互联网边界</li><li>cfw_netflow_vpc： 流量日志-VPC边界</li><li>cfw_netflow_nat： 流量日志-NAT边界</li><li>cfw_rule_acl： 访问控制-互联网边界</li><li>cfw_rule_vpc_acl： 访问控制-VPC边界</li><li>cfw_rule_nat_acl： 访问控制-NAT边界</li><li>cfw_rule_threatinfo： 入侵防御-入侵防御</li><li>cfw_netflow_nta： 全流量检测与响应-流量分析</li><li>cfw_ndr_subject_risk： 全流量检测与响应-流量风险</li><li>cfw_ndr_ai_audit： 全流量检测与响应-AI流量风险</li><li>operate_log_all： 操作日志</li></ul>
                     * @return Index <p>日志类型标识</p><p>枚举值：</p><ul><li>cfw_netflow_border： 流量日志-互联网边界</li><li>cfw_netflow_vpc： 流量日志-VPC边界</li><li>cfw_netflow_nat： 流量日志-NAT边界</li><li>cfw_rule_acl： 访问控制-互联网边界</li><li>cfw_rule_vpc_acl： 访问控制-VPC边界</li><li>cfw_rule_nat_acl： 访问控制-NAT边界</li><li>cfw_rule_threatinfo： 入侵防御-入侵防御</li><li>cfw_netflow_nta： 全流量检测与响应-流量分析</li><li>cfw_ndr_subject_risk： 全流量检测与响应-流量风险</li><li>cfw_ndr_ai_audit： 全流量检测与响应-AI流量风险</li><li>operate_log_all： 操作日志</li></ul>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>日志类型标识</p><p>枚举值：</p><ul><li>cfw_netflow_border： 流量日志-互联网边界</li><li>cfw_netflow_vpc： 流量日志-VPC边界</li><li>cfw_netflow_nat： 流量日志-NAT边界</li><li>cfw_rule_acl： 访问控制-互联网边界</li><li>cfw_rule_vpc_acl： 访问控制-VPC边界</li><li>cfw_rule_nat_acl： 访问控制-NAT边界</li><li>cfw_rule_threatinfo： 入侵防御-入侵防御</li><li>cfw_netflow_nta： 全流量检测与响应-流量分析</li><li>cfw_ndr_subject_risk： 全流量检测与响应-流量风险</li><li>cfw_ndr_ai_audit： 全流量检测与响应-AI流量风险</li><li>operate_log_all： 操作日志</li></ul>
                     * @param _index <p>日志类型标识</p><p>枚举值：</p><ul><li>cfw_netflow_border： 流量日志-互联网边界</li><li>cfw_netflow_vpc： 流量日志-VPC边界</li><li>cfw_netflow_nat： 流量日志-NAT边界</li><li>cfw_rule_acl： 访问控制-互联网边界</li><li>cfw_rule_vpc_acl： 访问控制-VPC边界</li><li>cfw_rule_nat_acl： 访问控制-NAT边界</li><li>cfw_rule_threatinfo： 入侵防御-入侵防御</li><li>cfw_netflow_nta： 全流量检测与响应-流量分析</li><li>cfw_ndr_subject_risk： 全流量检测与响应-流量风险</li><li>cfw_ndr_ai_audit： 全流量检测与响应-AI流量风险</li><li>operate_log_all： 操作日志</li></ul>
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>筛选开始时间</p>
                     * @return StartTime <p>筛选开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>筛选开始时间</p>
                     * @param _startTime <p>筛选开始时间</p>
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
                     * 获取<p>筛选结束时间</p>
                     * @return EndTime <p>筛选结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>筛选结束时间</p>
                     * @param _endTime <p>筛选结束时间</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>数据格式</p><p>枚举值：</p><ul><li>.json： JSON格式</li><li>.csv： CSV格式</li></ul>
                     * @return DataFormat <p>数据格式</p><p>枚举值：</p><ul><li>.json： JSON格式</li><li>.csv： CSV格式</li></ul>
                     * 
                     */
                    std::string GetDataFormat() const;

                    /**
                     * 设置<p>数据格式</p><p>枚举值：</p><ul><li>.json： JSON格式</li><li>.csv： CSV格式</li></ul>
                     * @param _dataFormat <p>数据格式</p><p>枚举值：</p><ul><li>.json： JSON格式</li><li>.csv： CSV格式</li></ul>
                     * 
                     */
                    void SetDataFormat(const std::string& _dataFormat);

                    /**
                     * 判断参数 DataFormat 是否已赋值
                     * @return DataFormat 是否已赋值
                     * 
                     */
                    bool DataFormatHasBeenSet() const;

                    /**
                     * 获取<p>压缩方式，.zip、.tar.gz、.tar.zst、.tar.lz4、传空不压缩</p>
                     * @return CompressionFormat <p>压缩方式，.zip、.tar.gz、.tar.zst、.tar.lz4、传空不压缩</p>
                     * 
                     */
                    std::string GetCompressionFormat() const;

                    /**
                     * 设置<p>压缩方式，.zip、.tar.gz、.tar.zst、.tar.lz4、传空不压缩</p>
                     * @param _compressionFormat <p>压缩方式，.zip、.tar.gz、.tar.zst、.tar.lz4、传空不压缩</p>
                     * 
                     */
                    void SetCompressionFormat(const std::string& _compressionFormat);

                    /**
                     * 判断参数 CompressionFormat 是否已赋值
                     * @return CompressionFormat 是否已赋值
                     * 
                     */
                    bool CompressionFormatHasBeenSet() const;

                    /**
                     * 获取<p>日志排序，desc时间降序，asc时间升序</p>
                     * @return Order <p>日志排序，desc时间降序，asc时间升序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>日志排序，desc时间降序，asc时间升序</p>
                     * @param _order <p>日志排序，desc时间降序，asc时间升序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>日志数量，传0按单次上限导出</p>
                     * @return Length <p>日志数量，传0按单次上限导出</p>
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置<p>日志数量，传0按单次上限导出</p>
                     * @param _length <p>日志数量，传0按单次上限导出</p>
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件组合</p>
                     * @return Filters <p>过滤条件组合</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件组合</p>
                     * @param _filters <p>过滤条件组合</p>
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>COS存储桶名称</p>
                     * @return BucketName <p>COS存储桶名称</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>COS存储桶名称</p>
                     * @param _bucketName <p>COS存储桶名称</p>
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
                     * 获取<p>COS存储桶地域</p>
                     * @return BucketRegion <p>COS存储桶地域</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>COS存储桶地域</p>
                     * @param _bucketRegion <p>COS存储桶地域</p>
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>文件过期时长，1一天，7七天，-1永久</p>
                     * @return StorageDays <p>文件过期时长，1一天，7七天，-1永久</p>
                     * 
                     */
                    int64_t GetStorageDays() const;

                    /**
                     * 设置<p>文件过期时长，1一天，7七天，-1永久</p>
                     * @param _storageDays <p>文件过期时长，1一天，7七天，-1永久</p>
                     * 
                     */
                    void SetStorageDays(const int64_t& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     * 
                     */
                    bool StorageDaysHasBeenSet() const;

                    /**
                     * 获取<p>日志分析查询语句，Query和Filters不能同时使用，在一次请求中有且只能选择一个</p>
                     * @return Query <p>日志分析查询语句，Query和Filters不能同时使用，在一次请求中有且只能选择一个</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>日志分析查询语句，Query和Filters不能同时使用，在一次请求中有且只能选择一个</p>
                     * @param _query <p>日志分析查询语句，Query和Filters不能同时使用，在一次请求中有且只能选择一个</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>导出任务类型，LogAnalysis日志分析导出，LogSearch日志审计导出</p>
                     * @return TaskType <p>导出任务类型，LogAnalysis日志分析导出，LogSearch日志审计导出</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>导出任务类型，LogAnalysis日志分析导出，LogSearch日志审计导出</p>
                     * @param _taskType <p>导出任务类型，LogAnalysis日志分析导出，LogSearch日志审计导出</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>日志类型标识</p><p>枚举值：</p><ul><li>cfw_netflow_border： 流量日志-互联网边界</li><li>cfw_netflow_vpc： 流量日志-VPC边界</li><li>cfw_netflow_nat： 流量日志-NAT边界</li><li>cfw_rule_acl： 访问控制-互联网边界</li><li>cfw_rule_vpc_acl： 访问控制-VPC边界</li><li>cfw_rule_nat_acl： 访问控制-NAT边界</li><li>cfw_rule_threatinfo： 入侵防御-入侵防御</li><li>cfw_netflow_nta： 全流量检测与响应-流量分析</li><li>cfw_ndr_subject_risk： 全流量检测与响应-流量风险</li><li>cfw_ndr_ai_audit： 全流量检测与响应-AI流量风险</li><li>operate_log_all： 操作日志</li></ul>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>筛选开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>筛选结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>数据格式</p><p>枚举值：</p><ul><li>.json： JSON格式</li><li>.csv： CSV格式</li></ul>
                     */
                    std::string m_dataFormat;
                    bool m_dataFormatHasBeenSet;

                    /**
                     * <p>压缩方式，.zip、.tar.gz、.tar.zst、.tar.lz4、传空不压缩</p>
                     */
                    std::string m_compressionFormat;
                    bool m_compressionFormatHasBeenSet;

                    /**
                     * <p>日志排序，desc时间降序，asc时间升序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>日志数量，传0按单次上限导出</p>
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * <p>过滤条件组合</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>COS存储桶名称</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>COS存储桶地域</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>文件过期时长，1一天，7七天，-1永久</p>
                     */
                    int64_t m_storageDays;
                    bool m_storageDaysHasBeenSet;

                    /**
                     * <p>日志分析查询语句，Query和Filters不能同时使用，在一次请求中有且只能选择一个</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>导出任务类型，LogAnalysis日志分析导出，LogSearch日志审计导出</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EXPORTLOGSOFFLINEREQUEST_H_
