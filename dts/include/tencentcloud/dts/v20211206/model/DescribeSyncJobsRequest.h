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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_

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
                * DescribeSyncJobs请求参数结构体
                */
                class DescribeSyncJobsRequest : public AbstractModel
                {
                public:
                    DescribeSyncJobsRequest();
                    ~DescribeSyncJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>同步任务id，如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @return JobId <p>同步任务id，如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>同步任务id，如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @param _jobId <p>同步任务id，如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
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
                     * 获取<p>同步任务id列表，如[&quot;sync-n3gh7md9&quot;]</p>
                     * @return JobIds <p>同步任务id列表，如[&quot;sync-n3gh7md9&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置<p>同步任务id列表，如[&quot;sync-n3gh7md9&quot;]</p>
                     * @param _jobIds <p>同步任务id列表，如[&quot;sync-n3gh7md9&quot;]</p>
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取<p>同步任务名</p>
                     * @return JobName <p>同步任务名</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>同步任务名</p>
                     * @param _jobName <p>同步任务名</p>
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
                     * 获取<p>排序字段，目前仅支持CreateTime字段排序</p>
                     * @return Order <p>排序字段，目前仅支持CreateTime字段排序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序字段，目前仅支持CreateTime字段排序</p>
                     * @param _order <p>排序字段，目前仅支持CreateTime字段排序</p>
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
                     * 获取<p>排序方式，升序为ASC，降序为DESC，默认为CreateTime降序</p>
                     * @return OrderSeq <p>排序方式，升序为ASC，降序为DESC，默认为CreateTime降序</p>
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置<p>排序方式，升序为ASC，降序为DESC，默认为CreateTime降序</p>
                     * @param _orderSeq <p>排序方式，升序为ASC，降序为DESC，默认为CreateTime降序</p>
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
                     * 获取<p>返回同步任务实例数量，默认20，有效区间[1,100]</p>
                     * @return Limit <p>返回同步任务实例数量，默认20，有效区间[1,100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回同步任务实例数量，默认20，有效区间[1,100]</p>
                     * @param _limit <p>返回同步任务实例数量，默认20，有效区间[1,100]</p>
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
                     * 获取<p>状态集合，如Initialized(初始化),CheckPass(校验通过),Running(运行中),ResumableErr(恢复中),Stopped(已结束)</p>
                     * @return Status <p>状态集合，如Initialized(初始化),CheckPass(校验通过),Running(运行中),ResumableErr(恢复中),Stopped(已结束)</p>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>状态集合，如Initialized(初始化),CheckPass(校验通过),Running(运行中),ResumableErr(恢复中),Stopped(已结束)</p>
                     * @param _status <p>状态集合，如Initialized(初始化),CheckPass(校验通过),Running(运行中),ResumableErr(恢复中),Stopped(已结束)</p>
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
                     * 获取<p>运行模式，如Immediate:立即运行，Timed:定时运行</p>
                     * @return RunMode <p>运行模式，如Immediate:立即运行，Timed:定时运行</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式，如Immediate:立即运行，Timed:定时运行</p>
                     * @param _runMode <p>运行模式，如Immediate:立即运行，Timed:定时运行</p>
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
                     * 获取<p>任务类型，如mysql2mysql：msyql同步到mysql;可取值有mysql2mysql、mysql2kafka、tdsqlmysql2kafka、tdsqlmysql2tdsqlmysql、tdsqlmysql2mysql、mysql2tdsqlmysql、mysql2mariadb、mariadb2mariadb、mariadb2kafka、cynosdbmysql2kafka、cynosdbmysql2cynosdbmysql、cynosdbmysql2mysql、mysql2cynosdbmysql、mariadb2tdsqlmysql、tdsqlmysql2cynosdbmysql、cynosdbmysql2tdsqlmysql、tdstore2mysql、tdstore2percona、tdstore2mariadb、tdstore2cynosdbmysql、cynosdbmysql2mariadb、mariadb2cynosdbmysql、tdsqlmysql2mariadb、mariadb2mysql、percona2mariadb、postgresql2postgresql、tdstore2tdsqlmysql、mongodb2mongodb</p>
                     * @return JobType <p>任务类型，如mysql2mysql：msyql同步到mysql;可取值有mysql2mysql、mysql2kafka、tdsqlmysql2kafka、tdsqlmysql2tdsqlmysql、tdsqlmysql2mysql、mysql2tdsqlmysql、mysql2mariadb、mariadb2mariadb、mariadb2kafka、cynosdbmysql2kafka、cynosdbmysql2cynosdbmysql、cynosdbmysql2mysql、mysql2cynosdbmysql、mariadb2tdsqlmysql、tdsqlmysql2cynosdbmysql、cynosdbmysql2tdsqlmysql、tdstore2mysql、tdstore2percona、tdstore2mariadb、tdstore2cynosdbmysql、cynosdbmysql2mariadb、mariadb2cynosdbmysql、tdsqlmysql2mariadb、mariadb2mysql、percona2mariadb、postgresql2postgresql、tdstore2tdsqlmysql、mongodb2mongodb</p>
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置<p>任务类型，如mysql2mysql：msyql同步到mysql;可取值有mysql2mysql、mysql2kafka、tdsqlmysql2kafka、tdsqlmysql2tdsqlmysql、tdsqlmysql2mysql、mysql2tdsqlmysql、mysql2mariadb、mariadb2mariadb、mariadb2kafka、cynosdbmysql2kafka、cynosdbmysql2cynosdbmysql、cynosdbmysql2mysql、mysql2cynosdbmysql、mariadb2tdsqlmysql、tdsqlmysql2cynosdbmysql、cynosdbmysql2tdsqlmysql、tdstore2mysql、tdstore2percona、tdstore2mariadb、tdstore2cynosdbmysql、cynosdbmysql2mariadb、mariadb2cynosdbmysql、tdsqlmysql2mariadb、mariadb2mysql、percona2mariadb、postgresql2postgresql、tdstore2tdsqlmysql、mongodb2mongodb</p>
                     * @param _jobType <p>任务类型，如mysql2mysql：msyql同步到mysql;可取值有mysql2mysql、mysql2kafka、tdsqlmysql2kafka、tdsqlmysql2tdsqlmysql、tdsqlmysql2mysql、mysql2tdsqlmysql、mysql2mariadb、mariadb2mariadb、mariadb2kafka、cynosdbmysql2kafka、cynosdbmysql2cynosdbmysql、cynosdbmysql2mysql、mysql2cynosdbmysql、mariadb2tdsqlmysql、tdsqlmysql2cynosdbmysql、cynosdbmysql2tdsqlmysql、tdstore2mysql、tdstore2percona、tdstore2mariadb、tdstore2cynosdbmysql、cynosdbmysql2mariadb、mariadb2cynosdbmysql、tdsqlmysql2mariadb、mariadb2mysql、percona2mariadb、postgresql2postgresql、tdstore2tdsqlmysql、mongodb2mongodb</p>
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取<p>付费类型，PrePay：预付费，PostPay：后付费</p>
                     * @return PayMode <p>付费类型，PrePay：预付费，PostPay：后付费</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费类型，PrePay：预付费，PostPay：后付费</p>
                     * @param _payMode <p>付费类型，PrePay：预付费，PostPay：后付费</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>tag</p>
                     * @return TagFilters <p>tag</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>tag</p>
                     * @param _tagFilters <p>tag</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取<p>源端数据库连接信息，可以输入实例ID或者IP等</p>
                     * @return SrcInfoPattern <p>源端数据库连接信息，可以输入实例ID或者IP等</p>
                     * 
                     */
                    std::string GetSrcInfoPattern() const;

                    /**
                     * 设置<p>源端数据库连接信息，可以输入实例ID或者IP等</p>
                     * @param _srcInfoPattern <p>源端数据库连接信息，可以输入实例ID或者IP等</p>
                     * 
                     */
                    void SetSrcInfoPattern(const std::string& _srcInfoPattern);

                    /**
                     * 判断参数 SrcInfoPattern 是否已赋值
                     * @return SrcInfoPattern 是否已赋值
                     * 
                     */
                    bool SrcInfoPatternHasBeenSet() const;

                    /**
                     * 获取<p>目标端数据库连接信息，可以输入实例ID或者IP等</p>
                     * @return DstInfoPattern <p>目标端数据库连接信息，可以输入实例ID或者IP等</p>
                     * 
                     */
                    std::string GetDstInfoPattern() const;

                    /**
                     * 设置<p>目标端数据库连接信息，可以输入实例ID或者IP等</p>
                     * @param _dstInfoPattern <p>目标端数据库连接信息，可以输入实例ID或者IP等</p>
                     * 
                     */
                    void SetDstInfoPattern(const std::string& _dstInfoPattern);

                    /**
                     * 判断参数 DstInfoPattern 是否已赋值
                     * @return DstInfoPattern 是否已赋值
                     * 
                     */
                    bool DstInfoPatternHasBeenSet() const;

                private:

                    /**
                     * <p>同步任务id，如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>同步任务id列表，如[&quot;sync-n3gh7md9&quot;]</p>
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * <p>同步任务名</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>排序字段，目前仅支持CreateTime字段排序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序方式，升序为ASC，降序为DESC，默认为CreateTime降序</p>
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回同步任务实例数量，默认20，有效区间[1,100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>状态集合，如Initialized(初始化),CheckPass(校验通过),Running(运行中),ResumableErr(恢复中),Stopped(已结束)</p>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>运行模式，如Immediate:立即运行，Timed:定时运行</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>任务类型，如mysql2mysql：msyql同步到mysql;可取值有mysql2mysql、mysql2kafka、tdsqlmysql2kafka、tdsqlmysql2tdsqlmysql、tdsqlmysql2mysql、mysql2tdsqlmysql、mysql2mariadb、mariadb2mariadb、mariadb2kafka、cynosdbmysql2kafka、cynosdbmysql2cynosdbmysql、cynosdbmysql2mysql、mysql2cynosdbmysql、mariadb2tdsqlmysql、tdsqlmysql2cynosdbmysql、cynosdbmysql2tdsqlmysql、tdstore2mysql、tdstore2percona、tdstore2mariadb、tdstore2cynosdbmysql、cynosdbmysql2mariadb、mariadb2cynosdbmysql、tdsqlmysql2mariadb、mariadb2mysql、percona2mariadb、postgresql2postgresql、tdstore2tdsqlmysql、mongodb2mongodb</p>
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * <p>付费类型，PrePay：预付费，PostPay：后付费</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>tag</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>源端数据库连接信息，可以输入实例ID或者IP等</p>
                     */
                    std::string m_srcInfoPattern;
                    bool m_srcInfoPatternHasBeenSet;

                    /**
                     * <p>目标端数据库连接信息，可以输入实例ID或者IP等</p>
                     */
                    std::string m_dstInfoPattern;
                    bool m_dstInfoPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
