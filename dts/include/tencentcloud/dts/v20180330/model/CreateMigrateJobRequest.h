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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateOption.h>
#include <tencentcloud/dts/v20180330/model/SrcInfo.h>
#include <tencentcloud/dts/v20180330/model/DstInfo.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * CreateMigrateJob请求参数结构体
                */
                class CreateMigrateJobRequest : public AbstractModel
                {
                public:
                    CreateMigrateJobRequest();
                    ~CreateMigrateJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取迁移任务配置选项
                     * @return MigrateOption 迁移任务配置选项
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置迁移任务配置选项
                     * @param _migrateOption 迁移任务配置选项
                     * 
                     */
                    void SetMigrateOption(const MigrateOption& _migrateOption);

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取源实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver 不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * @return SrcDatabaseType 源实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver 不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver 不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * @param _srcDatabaseType 源实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver 不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
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
                     * 获取源实例接入类型，值包括：extranet(外网),cvm(CVM自建实例),dcg(专线接入的实例),vpncloud(云VPN接入的实例),cdb(腾讯云数据库实例),ccn(云联网实例)
                     * @return SrcAccessType 源实例接入类型，值包括：extranet(外网),cvm(CVM自建实例),dcg(专线接入的实例),vpncloud(云VPN接入的实例),cdb(腾讯云数据库实例),ccn(云联网实例)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源实例接入类型，值包括：extranet(外网),cvm(CVM自建实例),dcg(专线接入的实例),vpncloud(云VPN接入的实例),cdb(腾讯云数据库实例),ccn(云联网实例)
                     * @param _srcAccessType 源实例接入类型，值包括：extranet(外网),cvm(CVM自建实例),dcg(专线接入的实例),vpncloud(云VPN接入的实例),cdb(腾讯云数据库实例),ccn(云联网实例)
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息，具体内容跟迁移任务类型相关
                     * @return SrcInfo 源实例信息，具体内容跟迁移任务类型相关
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息，具体内容跟迁移任务类型相关
                     * @param _srcInfo 源实例信息，具体内容跟迁移任务类型相关
                     * 
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver，cynosdbmysql。不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * @return DstDatabaseType 目标实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver，cynosdbmysql。不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver，cynosdbmysql。不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     * @param _dstDatabaseType 目标实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver，cynosdbmysql。不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
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
                     * 获取目标实例接入类型，目前支持：cdb（腾讯云数据库实例）
                     * @return DstAccessType 目标实例接入类型，目前支持：cdb（腾讯云数据库实例）
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标实例接入类型，目前支持：cdb（腾讯云数据库实例）
                     * @param _dstAccessType 目标实例接入类型，目前支持：cdb（腾讯云数据库实例）
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标实例信息
                     * @return DstInfo 目标实例信息
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置目标实例信息
                     * @param _dstInfo 目标实例信息
                     * 
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取需要迁移的源数据库表信息，用json格式的字符串描述。当MigrateOption.MigrateObject配置为2（指定库表迁移）时必填。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
对于database-schema-table三级结构：
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * @return DatabaseInfo 需要迁移的源数据库表信息，用json格式的字符串描述。当MigrateOption.MigrateObject配置为2（指定库表迁移）时必填。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
对于database-schema-table三级结构：
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * 
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置需要迁移的源数据库表信息，用json格式的字符串描述。当MigrateOption.MigrateObject配置为2（指定库表迁移）时必填。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
对于database-schema-table三级结构：
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * @param _databaseInfo 需要迁移的源数据库表信息，用json格式的字符串描述。当MigrateOption.MigrateObject配置为2（指定库表迁移）时必填。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
对于database-schema-table三级结构：
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * 
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     * 
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取迁移实例的tag
                     * @return Tags 迁移实例的tag
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置迁移实例的tag
                     * @param _tags 迁移实例的tag
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
                     * 获取源实例类型: ""或者"simple":主从节点，"cluster": 集群节点
                     * @return SrcNodeType 源实例类型: ""或者"simple":主从节点，"cluster": 集群节点
                     * 
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置源实例类型: ""或者"simple":主从节点，"cluster": 集群节点
                     * @param _srcNodeType 源实例类型: ""或者"simple":主从节点，"cluster": 集群节点
                     * 
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     * 
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息，具体内容跟迁移任务类型相关
                     * @return SrcInfoMulti 源实例信息，具体内容跟迁移任务类型相关
                     * 
                     */
                    std::vector<SrcInfo> GetSrcInfoMulti() const;

                    /**
                     * 设置源实例信息，具体内容跟迁移任务类型相关
                     * @param _srcInfoMulti 源实例信息，具体内容跟迁移任务类型相关
                     * 
                     */
                    void SetSrcInfoMulti(const std::vector<SrcInfo>& _srcInfoMulti);

                    /**
                     * 判断参数 SrcInfoMulti 是否已赋值
                     * @return SrcInfoMulti 是否已赋值
                     * 
                     */
                    bool SrcInfoMultiHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 迁移任务配置选项
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * 源实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver 不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源实例接入类型，值包括：extranet(外网),cvm(CVM自建实例),dcg(专线接入的实例),vpncloud(云VPN接入的实例),cdb(腾讯云数据库实例),ccn(云联网实例)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源实例信息，具体内容跟迁移任务类型相关
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标实例数据库类型，目前支持：mysql，redis，mongodb，postgresql，mariadb，percona，sqlserver，cynosdbmysql。不同地域数据库类型的具体支持情况，请参考控制台创建迁移页面。
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标实例接入类型，目前支持：cdb（腾讯云数据库实例）
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标实例信息
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 需要迁移的源数据库表信息，用json格式的字符串描述。当MigrateOption.MigrateObject配置为2（指定库表迁移）时必填。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
对于database-schema-table三级结构：
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * 迁移实例的tag
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 源实例类型: ""或者"simple":主从节点，"cluster": 集群节点
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * 源实例信息，具体内容跟迁移任务类型相关
                     */
                    std::vector<SrcInfo> m_srcInfoMulti;
                    bool m_srcInfoMultiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_
