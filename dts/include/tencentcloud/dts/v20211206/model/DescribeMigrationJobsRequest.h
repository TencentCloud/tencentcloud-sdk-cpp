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
                     * 获取数据迁移任务ID，如：dts-amm1jw5q
                     * @return JobId 数据迁移任务ID，如：dts-amm1jw5q
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据迁移任务ID，如：dts-amm1jw5q
                     * @param _jobId 数据迁移任务ID，如：dts-amm1jw5q
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
                     * 获取数据迁移任务名称
                     * @return JobName 数据迁移任务名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置数据迁移任务名称
                     * @param _jobName 数据迁移任务名称
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
                     * 获取数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)
                     * @return Status 数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)
                     * @param _status 数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)
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
                     * 获取源实例ID，格式如：cdb-c1nl9rpv
                     * @return SrcInstanceId 源实例ID，格式如：cdb-c1nl9rpv
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源实例ID，格式如：cdb-c1nl9rpv
                     * @param _srcInstanceId 源实例ID，格式如：cdb-c1nl9rpv
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
                     * 获取源实例地域，如：ap-guangzhou
                     * @return SrcRegion 源实例地域，如：ap-guangzhou
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置源实例地域，如：ap-guangzhou
                     * @param _srcRegion 源实例地域，如：ap-guangzhou
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
                     * 获取源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * @return SrcDatabaseType 源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * 
                     */
                    std::vector<std::string> GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * @param _srcDatabaseType 源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
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
                     * 获取源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * @return SrcAccessType 源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * 
                     */
                    std::vector<std::string> GetSrcAccessType() const;

                    /**
                     * 设置源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * @param _srcAccessType 源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
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
                     * 获取目标实例ID，格式如：cdb-c1nl9rpv
                     * @return DstInstanceId 目标实例ID，格式如：cdb-c1nl9rpv
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置目标实例ID，格式如：cdb-c1nl9rpv
                     * @param _dstInstanceId 目标实例ID，格式如：cdb-c1nl9rpv
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
                     * 获取目标实例地域，如：ap-guangzhou
                     * @return DstRegion 目标实例地域，如：ap-guangzhou
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目标实例地域，如：ap-guangzhou
                     * @param _dstRegion 目标实例地域，如：ap-guangzhou
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
                     * 获取目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * @return DstDatabaseType 目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * 
                     */
                    std::vector<std::string> GetDstDatabaseType() const;

                    /**
                     * 设置目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     * @param _dstDatabaseType 目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
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
                     * 获取目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * @return DstAccessType 目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * 
                     */
                    std::vector<std::string> GetDstAccessType() const;

                    /**
                     * 设置目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     * @param _dstAccessType 目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
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
                     * 获取任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
                     * @return RunMode 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
                     * @param _runMode 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
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
                     * 获取排序方式，可能取值为asc、desc，默认按照创建时间倒序
                     * @return OrderSeq 排序方式，可能取值为asc、desc，默认按照创建时间倒序
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置排序方式，可能取值为asc、desc，默认按照创建时间倒序
                     * @param _orderSeq 排序方式，可能取值为asc、desc，默认按照创建时间倒序
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
                     * 获取返回实例数量，默认20，有效区间[1,100]
                     * @return Limit 返回实例数量，默认20，有效区间[1,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回实例数量，默认20，有效区间[1,100]
                     * @param _limit 返回实例数量，默认20，有效区间[1,100]
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取标签过滤
                     * @return TagFilters 标签过滤
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤
                     * @param _tagFilters 标签过滤
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
                     * 数据迁移任务ID，如：dts-amm1jw5q
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据迁移任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 数据迁移任务状态，可取值包括：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源实例ID，格式如：cdb-c1nl9rpv
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 源实例地域，如：ap-guangzhou
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     */
                    std::vector<std::string> m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     */
                    std::vector<std::string> m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 目标实例ID，格式如：cdb-c1nl9rpv
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * 目标实例地域，如：ap-guangzhou
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 目标源实例数据库类型，如：sqlserver,mysql,mongodb,redis,tendis,keewidb,clickhouse,cynosdbmysql,percona,tdsqlpercona,mariadb,tdsqlmysql,postgresql
                     */
                    std::vector<std::string> m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标实例接入类型，值包括：extranet(外网)、vpncloud(云vpn接入的实例)、dcg(专线接入的实例)、ccn(云联网接入的实例)、cdb(云上cdb实例)、cvm(cvm自建实例)
                     */
                    std::vector<std::string> m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 排序方式，可能取值为asc、desc，默认按照创建时间倒序
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * 返回实例数量，默认20，有效区间[1,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 标签过滤
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_
