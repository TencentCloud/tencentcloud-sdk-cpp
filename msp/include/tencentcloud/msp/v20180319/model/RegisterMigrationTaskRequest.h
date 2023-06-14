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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/SrcInfo.h>
#include <tencentcloud/msp/v20180319/model/DstInfo.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * RegisterMigrationTask请求参数结构体
                */
                class RegisterMigrationTaskRequest : public AbstractModel
                {
                public:
                    RegisterMigrationTaskRequest();
                    ~RegisterMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，取值database（数据库迁移）、file（文件迁移）、host（主机迁移）
                     * @return TaskType 任务类型，取值database（数据库迁移）、file（文件迁移）、host（主机迁移）
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，取值database（数据库迁移）、file（文件迁移）、host（主机迁移）
                     * @param _taskType 任务类型，取值database（数据库迁移）、file（文件迁移）、host（主机迁移）
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取服务提供商名称
                     * @return ServiceSupplier 服务提供商名称
                     * 
                     */
                    std::string GetServiceSupplier() const;

                    /**
                     * 设置服务提供商名称
                     * @param _serviceSupplier 服务提供商名称
                     * 
                     */
                    void SetServiceSupplier(const std::string& _serviceSupplier);

                    /**
                     * 判断参数 ServiceSupplier 是否已赋值
                     * @return ServiceSupplier 是否已赋值
                     * 
                     */
                    bool ServiceSupplierHasBeenSet() const;

                    /**
                     * 获取迁移任务创建时间
                     * @return CreateTime 迁移任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置迁移任务创建时间
                     * @param _createTime 迁移任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取迁移任务更新时间
                     * @return UpdateTime 迁移任务更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置迁移任务更新时间
                     * @param _updateTime 迁移任务更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取迁移类别，如数据库迁移中mysql:mysql代表从mysql迁移到mysql，文件迁移中oss:cos代表从阿里云oss迁移到腾讯云cos
                     * @return MigrateClass 迁移类别，如数据库迁移中mysql:mysql代表从mysql迁移到mysql，文件迁移中oss:cos代表从阿里云oss迁移到腾讯云cos
                     * 
                     */
                    std::string GetMigrateClass() const;

                    /**
                     * 设置迁移类别，如数据库迁移中mysql:mysql代表从mysql迁移到mysql，文件迁移中oss:cos代表从阿里云oss迁移到腾讯云cos
                     * @param _migrateClass 迁移类别，如数据库迁移中mysql:mysql代表从mysql迁移到mysql，文件迁移中oss:cos代表从阿里云oss迁移到腾讯云cos
                     * 
                     */
                    void SetMigrateClass(const std::string& _migrateClass);

                    /**
                     * 判断参数 MigrateClass 是否已赋值
                     * @return MigrateClass 是否已赋值
                     * 
                     */
                    bool MigrateClassHasBeenSet() const;

                    /**
                     * 获取迁移任务源信息
                     * @return SrcInfo 迁移任务源信息
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置迁移任务源信息
                     * @param _srcInfo 迁移任务源信息
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
                     * 获取迁移任务目的信息
                     * @return DstInfo 迁移任务目的信息
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置迁移任务目的信息
                     * @param _dstInfo 迁移任务目的信息
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
                     * 获取源实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @return SrcAccessType 源实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @param _srcAccessType 源实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
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
                     * 获取源实例数据库类型，数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * @return SrcDatabaseType 源实例数据库类型，数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型，数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * @param _srcDatabaseType 源实例数据库类型，数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
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
                     * 获取目标实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @return DstAccessType 目标实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @param _dstAccessType 目标实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
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
                     * 获取目标实例数据库类型,数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * @return DstDatabaseType 目标实例数据库类型,数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标实例数据库类型,数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * @param _dstDatabaseType 目标实例数据库类型,数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                private:

                    /**
                     * 任务类型，取值database（数据库迁移）、file（文件迁移）、host（主机迁移）
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 服务提供商名称
                     */
                    std::string m_serviceSupplier;
                    bool m_serviceSupplierHasBeenSet;

                    /**
                     * 迁移任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 迁移任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 迁移类别，如数据库迁移中mysql:mysql代表从mysql迁移到mysql，文件迁移中oss:cos代表从阿里云oss迁移到腾讯云cos
                     */
                    std::string m_migrateClass;
                    bool m_migrateClassHasBeenSet;

                    /**
                     * 迁移任务源信息
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 迁移任务目的信息
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 源实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源实例数据库类型，数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 目标实例接入类型，数据库迁移时填写值为：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标实例数据库类型,数据库迁移时填写，取值为mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb 之一
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_
