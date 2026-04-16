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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationJobs请求参数结构体
                */
                class DescribeMigrationJobsRequest : public AbstractModel
                {
                public:
                    DescribeMigrationJobsRequest();
                    ~DescribeMigrationJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据迁移任务ID，如：dts-amm1jw5q</p>
                     * @return JobId <p>数据迁移任务ID，如：dts-amm1jw5q</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>数据迁移任务ID，如：dts-amm1jw5q</p>
                     * @param _jobId <p>数据迁移任务ID，如：dts-amm1jw5q</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>数据迁移任务名称</p>
                     * @return JobName <p>数据迁移任务名称</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>数据迁移任务名称</p>
                     * @param _jobName <p>数据迁移任务名称</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取<p>数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)</p>
                     * @return Status <p>数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)</p>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)</p>
                     * @param _status <p>数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)</p>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>源实例ID，格式如：cdb-c1nl9rpv</p>
                     * @return SrcInstanceId <p>源实例ID，格式如：cdb-c1nl9rpv</p>
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置<p>源实例ID，格式如：cdb-c1nl9rpv</p>
                     * @param _srcInstanceId <p>源实例ID，格式如：cdb-c1nl9rpv</p>
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>源实例地域，如：ap-guangzhou</p>
                     * @return SrcRegion <p>源实例地域，如：ap-guangzhou</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>源实例地域，如：ap-guangzhou</p>
                     * @param _srcRegion <p>源实例地域，如：ap-guangzhou</p>
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取<p>源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * @return SrcDatabaseType <p>源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * 
                     */
                    std::vector<std::string> GetSrcDatabaseType() const;

                    /**
                     * 设置<p>源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * @param _srcDatabaseType <p>源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * 
                     */
                    void SetSrcDatabaseType(const std::vector<std::string>& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * @return SrcAccessType <p>源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * 
                     */
                    std::vector<std::string> GetSrcAccessType() const;

                    /**
                     * 设置<p>源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * @param _srcAccessType <p>源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * 
                     */
                    void SetSrcAccessType(const std::vector<std::string>& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标实例ID，格式如：cdb-c1nl9rpv</p>
                     * @return DstInstanceId <p>目标实例ID，格式如：cdb-c1nl9rpv</p>
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置<p>目标实例ID，格式如：cdb-c1nl9rpv</p>
                     * @param _dstInstanceId <p>目标实例ID，格式如：cdb-c1nl9rpv</p>
                     * 
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     * 
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>目标实例地域，如：ap-guangzhou</p>
                     * @return DstRegion <p>目标实例地域，如：ap-guangzhou</p>
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置<p>目标实例地域，如：ap-guangzhou</p>
                     * @param _dstRegion <p>目标实例地域，如：ap-guangzhou</p>
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取<p>目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * @return DstDatabaseType <p>目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * 
                     */
                    std::vector<std::string> GetDstDatabaseType() const;

                    /**
                     * 设置<p>目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * @param _dstDatabaseType <p>目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     * 
                     */
                    void SetDstDatabaseType(const std::vector<std::string>& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * @return DstAccessType <p>目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * 
                     */
                    std::vector<std::string> GetDstAccessType() const;

                    /**
                     * 设置<p>目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * @param _dstAccessType <p>目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     * 
                     */
                    void SetDstAccessType(const std::vector<std::string>& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * @return RunMode <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * @param _runMode <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，可能取值为asc、desc，默认按照创建时间倒序</p>
                     * @return OrderSeq <p>排序方式，可能取值为asc、desc，默认按照创建时间倒序</p>
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置<p>排序方式，可能取值为asc、desc，默认按照创建时间倒序</p>
                     * @param _orderSeq <p>排序方式，可能取值为asc、desc，默认按照创建时间倒序</p>
                     * 
                     */
                    void SetOrderSeq(const std::string& _orderSeq);

                    /**
                     * 判断参数 OrderSeq 是否已赋值
                     * @return OrderSeq 是否已赋值
                     * 
                     */
                    bool OrderSeqHasBeenSet() const;

                    /**
                     * 获取<p>返回实例数量，默认20，有效区间[1,100]</p>
                     * @return Limit <p>返回实例数量，默认20，有效区间[1,100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回实例数量，默认20，有效区间[1,100]</p>
                     * @param _limit <p>返回实例数量，默认20，有效区间[1,100]</p>
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
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>标签过滤</p>
                     * @return TagFilters <p>标签过滤</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤</p>
                     * @param _tagFilters <p>标签过滤</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>数据迁移任务ID，如：dts-amm1jw5q</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>数据迁移任务名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)</p>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源实例ID，格式如：cdb-c1nl9rpv</p>
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * <p>源实例地域，如：ap-guangzhou</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     */
                    std::vector<std::string> m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * <p>源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     */
                    std::vector<std::string> m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * <p>目标实例ID，格式如：cdb-c1nl9rpv</p>
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * <p>目标实例地域，如：ap-guangzhou</p>
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * <p>目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql</p>
                     */
                    std::vector<std::string> m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * <p>目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)</p>
                     */
                    std::vector<std::string> m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>排序方式，可能取值为asc、desc，默认按照创建时间倒序</p>
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * <p>返回实例数量，默认20，有效区间[1,100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>标签过滤</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_
