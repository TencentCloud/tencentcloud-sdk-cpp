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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateSyncJob请求参数结构体
                */
                class CreateSyncJobRequest : public AbstractModel
                {
                public:
                    CreateSyncJobRequest();
                    ~CreateSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取付款类型, 如：PrePay(表示包年包月)、PostPay(表示按时按量)
                     * @return PayMode 付款类型, 如：PrePay(表示包年包月)、PostPay(表示按时按量)
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付款类型, 如：PrePay(表示包年包月)、PostPay(表示按时按量)
                     * @param _payMode 付款类型, 如：PrePay(表示包年包月)、PostPay(表示按时按量)
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
                     * 获取源端数据库类型,如mysql,mariadb,percona,postgresql,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,tdstore(表示TDSQL TDStore版)等。
                     * @return SrcDatabaseType 源端数据库类型,如mysql,mariadb,percona,postgresql,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,tdstore(表示TDSQL TDStore版)等。
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源端数据库类型,如mysql,mariadb,percona,postgresql,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,tdstore(表示TDSQL TDStore版)等。
                     * @param _srcDatabaseType 源端数据库类型,如mysql,mariadb,percona,postgresql,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,tdstore(表示TDSQL TDStore版)等。
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源端数据库所在地域,如ap-guangzhou
                     * @return SrcRegion 源端数据库所在地域,如ap-guangzhou
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置源端数据库所在地域,如ap-guangzhou
                     * @param _srcRegion 源端数据库所在地域,如ap-guangzhou
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
                     * 获取目标端数据库类型,如mysql,mariadb,percona,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,kafka,tdstore(表示TDSQL TDStore版)等。
                     * @return DstDatabaseType 目标端数据库类型,如mysql,mariadb,percona,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,kafka,tdstore(表示TDSQL TDStore版)等。
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标端数据库类型,如mysql,mariadb,percona,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,kafka,tdstore(表示TDSQL TDStore版)等。
                     * @param _dstDatabaseType 目标端数据库类型,如mysql,mariadb,percona,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,kafka,tdstore(表示TDSQL TDStore版)等。
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取目标端数据库所在地域,如ap-guangzhou
                     * @return DstRegion 目标端数据库所在地域,如ap-guangzhou
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目标端数据库所在地域,如ap-guangzhou
                     * @param _dstRegion 目标端数据库所在地域,如ap-guangzhou
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
                     * 获取同步任务规格，Standard:标准版
                     * @return Specification 同步任务规格，Standard:标准版
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置同步任务规格，Standard:标准版
                     * @param _specification 同步任务规格，Standard:标准版
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取购买时长（单位：月），当PayMode值为PrePay则此项配置有意义，默认为1月，取值范围为[1,100]
                     * @return TimeSpan 购买时长（单位：月），当PayMode值为PrePay则此项配置有意义，默认为1月，取值范围为[1,100]
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长（单位：月），当PayMode值为PrePay则此项配置有意义，默认为1月，取值范围为[1,100]
                     * @param _timeSpan 购买时长（单位：月），当PayMode值为PrePay则此项配置有意义，默认为1月，取值范围为[1,100]
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取一次购买的同步任务数量，取值范围为[1, 10]，默认为1
                     * @return Count 一次购买的同步任务数量，取值范围为[1, 10]，默认为1
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置一次购买的同步任务数量，取值范围为[1, 10]，默认为1
                     * @param _count 一次购买的同步任务数量，取值范围为[1, 10]，默认为1
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费，默认为此值）
                     * @return AutoRenew 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费，默认为此值）
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费，默认为此值）
                     * @param _autoRenew 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费，默认为此值）
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取同步链路规格，如micro,small,medium,large，默认为medium
                     * @return InstanceClass 同步链路规格，如micro,small,medium,large，默认为medium
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置同步链路规格，如micro,small,medium,large，默认为medium
                     * @param _instanceClass 同步链路规格，如micro,small,medium,large，默认为medium
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取同步任务名称
                     * @return JobName 同步任务名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名称
                     * @param _jobName 同步任务名称
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
                     * 获取创建类似任务的现有任务Id
                     * @return ExistedJobId 创建类似任务的现有任务Id
                     * 
                     */
                    std::string GetExistedJobId() const;

                    /**
                     * 设置创建类似任务的现有任务Id
                     * @param _existedJobId 创建类似任务的现有任务Id
                     * 
                     */
                    void SetExistedJobId(const std::string& _existedJobId);

                    /**
                     * 判断参数 ExistedJobId 是否已赋值
                     * @return ExistedJobId 是否已赋值
                     * 
                     */
                    bool ExistedJobIdHasBeenSet() const;

                private:

                    /**
                     * 付款类型, 如：PrePay(表示包年包月)、PostPay(表示按时按量)
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 源端数据库类型,如mysql,mariadb,percona,postgresql,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,tdstore(表示TDSQL TDStore版)等。
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源端数据库所在地域,如ap-guangzhou
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 目标端数据库类型,如mysql,mariadb,percona,cynosdbmysql(表示TDSQL-C MySQL),tdpg(TDSQL PostgreSQL版),tdsqlmysql,kafka,tdstore(表示TDSQL TDStore版)等。
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标端数据库所在地域,如ap-guangzhou
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 同步任务规格，Standard:标准版
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 购买时长（单位：月），当PayMode值为PrePay则此项配置有意义，默认为1月，取值范围为[1,100]
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 一次购买的同步任务数量，取值范围为[1, 10]，默认为1
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费，默认为此值）
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 同步链路规格，如micro,small,medium,large，默认为medium
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 同步任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 创建类似任务的现有任务Id
                     */
                    std::string m_existedJobId;
                    bool m_existedJobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_
