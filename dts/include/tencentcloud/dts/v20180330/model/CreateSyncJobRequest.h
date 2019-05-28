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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>
#include <tencentcloud/dts/v20180330/model/SyncInstanceInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
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
                     * 获取灾备同步任务名
                     * @return JobName 灾备同步任务名
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置灾备同步任务名
                     * @param JobName 灾备同步任务名
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取灾备同步任务配置选项
                     * @return SyncOption 灾备同步任务配置选项
                     */
                    SyncOption GetSyncOption() const;

                    /**
                     * 设置灾备同步任务配置选项
                     * @param SyncOption 灾备同步任务配置选项
                     */
                    void SetSyncOption(const SyncOption& _syncOption);

                    /**
                     * 判断参数 SyncOption 是否已赋值
                     * @return SyncOption 是否已赋值
                     */
                    bool SyncOptionHasBeenSet() const;

                    /**
                     * 获取源实例数据库类型，目前仅包括：mysql
                     * @return SrcDatabaseType 源实例数据库类型，目前仅包括：mysql
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型，目前仅包括：mysql
                     * @param SrcDatabaseType 源实例数据库类型，目前仅包括：mysql
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源实例接入类型，目前仅包括：cdb(云上cdb实例)
                     * @return SrcAccessType 源实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源实例接入类型，目前仅包括：cdb(云上cdb实例)
                     * @param SrcAccessType 源实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息
                     * @return SrcInfo 源实例信息
                     */
                    SyncInstanceInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息
                     * @param SrcInfo 源实例信息
                     */
                    void SetSrcInfo(const SyncInstanceInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标实例数据库类型，目前仅包括：mysql
                     * @return DstDatabaseType 目标实例数据库类型，目前仅包括：mysql
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标实例数据库类型，目前仅包括：mysql
                     * @param DstDatabaseType 目标实例数据库类型，目前仅包括：mysql
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取目标实例接入类型，目前仅包括：cdb(云上cdb实例)
                     * @return DstAccessType 目标实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标实例接入类型，目前仅包括：cdb(云上cdb实例)
                     * @param DstAccessType 目标实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标实例信息
                     * @return DstInfo 目标实例信息
                     */
                    SyncInstanceInfo GetDstInfo() const;

                    /**
                     * 设置目标实例信息
                     * @param DstInfo 目标实例信息
                     */
                    void SetDstInfo(const SyncInstanceInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取需要同步的源数据库表信息，用json格式的字符串描述。
对于database-table两级结构的数据库：
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     * @return DatabaseInfo 需要同步的源数据库表信息，用json格式的字符串描述。
对于database-table两级结构的数据库：
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置需要同步的源数据库表信息，用json格式的字符串描述。
对于database-table两级结构的数据库：
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     * @param DatabaseInfo 需要同步的源数据库表信息，用json格式的字符串描述。
对于database-table两级结构的数据库：
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                private:

                    /**
                     * 灾备同步任务名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 灾备同步任务配置选项
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * 源实例数据库类型，目前仅包括：mysql
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源实例信息
                     */
                    SyncInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标实例数据库类型，目前仅包括：mysql
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标实例接入类型，目前仅包括：cdb(云上cdb实例)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标实例信息
                     */
                    SyncInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 需要同步的源数据库表信息，用json格式的字符串描述。
对于database-table两级结构的数据库：
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_
