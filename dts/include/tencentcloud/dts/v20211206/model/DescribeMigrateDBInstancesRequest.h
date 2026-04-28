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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrateDBInstances请求参数结构体
                */
                class DescribeMigrateDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeMigrateDBInstancesRequest();
                    ~DescribeMigrateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据库类型，如mysql,percona,mariadb,tdsqlmysql,mariadb,postgresql,cynosdbmysql,redis,tendis,keewidb,tdstore,mongodb,clickhouse,sqlserver等。</p>
                     * @return DatabaseType <p>数据库类型，如mysql,percona,mariadb,tdsqlmysql,mariadb,postgresql,cynosdbmysql,redis,tendis,keewidb,tdstore,mongodb,clickhouse,sqlserver等。</p>
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置<p>数据库类型，如mysql,percona,mariadb,tdsqlmysql,mariadb,postgresql,cynosdbmysql,redis,tendis,keewidb,tdstore,mongodb,clickhouse,sqlserver等。</p>
                     * @param _databaseType <p>数据库类型，如mysql,percona,mariadb,tdsqlmysql,mariadb,postgresql,cynosdbmysql,redis,tendis,keewidb,tdstore,mongodb,clickhouse,sqlserver等。</p>
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例作为迁移的源还是目标,src(表示源)，dst(表示目标)</p>
                     * @return MigrateRole <p>实例作为迁移的源还是目标,src(表示源)，dst(表示目标)</p>
                     * 
                     */
                    std::string GetMigrateRole() const;

                    /**
                     * 设置<p>实例作为迁移的源还是目标,src(表示源)，dst(表示目标)</p>
                     * @param _migrateRole <p>实例作为迁移的源还是目标,src(表示源)，dst(表示目标)</p>
                     * 
                     */
                    void SetMigrateRole(const std::string& _migrateRole);

                    /**
                     * 判断参数 MigrateRole 是否已赋值
                     * @return MigrateRole 是否已赋值
                     * 
                     */
                    bool MigrateRoleHasBeenSet() const;

                    /**
                     * 获取<p>云数据库实例ID，可通过对应业务实例列表获取实例信息。</p>
                     * @return InstanceId <p>云数据库实例ID，可通过对应业务实例列表获取实例信息。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云数据库实例ID，可通过对应业务实例列表获取实例信息。</p>
                     * @param _instanceId <p>云数据库实例ID，可通过对应业务实例列表获取实例信息。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>云数据库名称，可通过对应业务实例列表获取实例信息。</p>
                     * @return InstanceName <p>云数据库名称，可通过对应业务实例列表获取实例信息。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>云数据库名称，可通过对应业务实例列表获取实例信息。</p>
                     * @param _instanceName <p>云数据库名称，可通过对应业务实例列表获取实例信息。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>返回数量限制</p>
                     * @return Limit <p>返回数量限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量限制</p>
                     * @param _limit <p>返回数量限制</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>资源所属账号 为空值或self(表示本账号内资源)、other(表示其他账户资源)</p>
                     * @return AccountMode <p>资源所属账号 为空值或self(表示本账号内资源)、other(表示其他账户资源)</p>
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置<p>资源所属账号 为空值或self(表示本账号内资源)、other(表示其他账户资源)</p>
                     * @param _accountMode <p>资源所属账号 为空值或self(表示本账号内资源)、other(表示其他账户资源)</p>
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @return TmpSecretId <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @param _tmpSecretId <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @return TmpSecretKey <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @param _tmpSecretKey <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @return TmpToken <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * @param _tmpToken <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     * 
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     * 
                     */
                    bool TmpTokenHasBeenSet() const;

                private:

                    /**
                     * <p>数据库类型，如mysql,percona,mariadb,tdsqlmysql,mariadb,postgresql,cynosdbmysql,redis,tendis,keewidb,tdstore,mongodb,clickhouse,sqlserver等。</p>
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * <p>实例作为迁移的源还是目标,src(表示源)，dst(表示目标)</p>
                     */
                    std::string m_migrateRole;
                    bool m_migrateRoleHasBeenSet;

                    /**
                     * <p>云数据库实例ID，可通过对应业务实例列表获取实例信息。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>云数据库名称，可通过对应业务实例列表获取实例信息。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>返回数量限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>资源所属账号 为空值或self(表示本账号内资源)、other(表示其他账户资源)</p>
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_
