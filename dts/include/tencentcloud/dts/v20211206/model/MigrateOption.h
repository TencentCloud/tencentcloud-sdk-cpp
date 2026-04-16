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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DatabaseTableObject.h>
#include <tencentcloud/dts/v20211206/model/ConsistencyOption.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 迁移选项，描述任务如何执行迁移等一系列配置信息
                */
                class MigrateOption : public AbstractModel
                {
                public:
                    MigrateOption();
                    ~MigrateOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>迁移对象选项，需要告知迁移服务迁移哪些库表对象</p>
                     * @return DatabaseTable <p>迁移对象选项，需要告知迁移服务迁移哪些库表对象</p>
                     * 
                     */
                    DatabaseTableObject GetDatabaseTable() const;

                    /**
                     * 设置<p>迁移对象选项，需要告知迁移服务迁移哪些库表对象</p>
                     * @param _databaseTable <p>迁移对象选项，需要告知迁移服务迁移哪些库表对象</p>
                     * 
                     */
                    void SetDatabaseTable(const DatabaseTableObject& _databaseTable);

                    /**
                     * 判断参数 DatabaseTable 是否已赋值
                     * @return DatabaseTable 是否已赋值
                     * 
                     */
                    bool DatabaseTableHasBeenSet() const;

                    /**
                     * 获取<p>迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。</p>
                     * @return MigrateType <p>迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。</p>
                     * 
                     */
                    std::string GetMigrateType() const;

                    /**
                     * 设置<p>迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。</p>
                     * @param _migrateType <p>迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。</p>
                     * 
                     */
                    void SetMigrateType(const std::string& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     * 
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据一致性校验选项， 默认为不开启一致性校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consistency <p>数据一致性校验选项， 默认为不开启一致性校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsistencyOption GetConsistency() const;

                    /**
                     * 设置<p>数据一致性校验选项， 默认为不开启一致性校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consistency <p>数据一致性校验选项， 默认为不开启一致性校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsistency(const ConsistencyOption& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取<p>是否迁移账号，true(迁移账号)，false(不迁移账号)</p>
                     * @return IsMigrateAccount <p>是否迁移账号，true(迁移账号)，false(不迁移账号)</p>
                     * 
                     */
                    bool GetIsMigrateAccount() const;

                    /**
                     * 设置<p>是否迁移账号，true(迁移账号)，false(不迁移账号)</p>
                     * @param _isMigrateAccount <p>是否迁移账号，true(迁移账号)，false(不迁移账号)</p>
                     * 
                     */
                    void SetIsMigrateAccount(const bool& _isMigrateAccount);

                    /**
                     * 判断参数 IsMigrateAccount 是否已赋值
                     * @return IsMigrateAccount 是否已赋值
                     * 
                     */
                    bool IsMigrateAccountHasBeenSet() const;

                    /**
                     * 获取<p>是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效</p>
                     * @return IsOverrideRoot <p>是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效</p>
                     * 
                     */
                    bool GetIsOverrideRoot() const;

                    /**
                     * 设置<p>是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效</p>
                     * @param _isOverrideRoot <p>是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效</p>
                     * 
                     */
                    void SetIsOverrideRoot(const bool& _isOverrideRoot);

                    /**
                     * 判断参数 IsOverrideRoot 是否已赋值
                     * @return IsOverrideRoot 是否已赋值
                     * 
                     */
                    bool IsOverrideRootHasBeenSet() const;

                    /**
                     * 获取<p>是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)</p>
                     * @return IsDstReadOnly <p>是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)</p>
                     * 
                     */
                    bool GetIsDstReadOnly() const;

                    /**
                     * 设置<p>是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)</p>
                     * @param _isDstReadOnly <p>是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)</p>
                     * 
                     */
                    void SetIsDstReadOnly(const bool& _isDstReadOnly);

                    /**
                     * 判断参数 IsDstReadOnly 是否已赋值
                     * @return IsDstReadOnly 是否已赋值
                     * 
                     */
                    bool IsDstReadOnlyHasBeenSet() const;

                    /**
                     * 获取<p>其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数:<br>[&quot;DstWriteMode&quot;:normal,     目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(要求目标端为空，否则校验不通过) ，不显示指定默认以覆盖写的方式执行任务    &quot;IsDstReadOnly&quot;:true,     是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读)     &quot;ClientOutputBufferHardLimit&quot;:512,     从机缓冲区的硬性容量限制(MB)     &quot;ClientOutputBufferSoftLimit&quot;:512,     从机缓冲区的软性容量限制(MB)     &quot;ClientOutputBufferPersistTime&quot;:60, 从机缓冲区的软性限制持续时间(秒)     &quot;ReplBacklogSize&quot;:512,     环形缓冲区容量限制(MB)     &quot;ReplTimeout&quot;:120，        复制超时时间(秒)     &quot;IsExpireKey&quot;:&quot;true&quot;,过期key自动淘汰]</p>
                     * @return ExtraAttr <p>其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数:<br>[&quot;DstWriteMode&quot;:normal,     目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(要求目标端为空，否则校验不通过) ，不显示指定默认以覆盖写的方式执行任务    &quot;IsDstReadOnly&quot;:true,     是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读)     &quot;ClientOutputBufferHardLimit&quot;:512,     从机缓冲区的硬性容量限制(MB)     &quot;ClientOutputBufferSoftLimit&quot;:512,     从机缓冲区的软性容量限制(MB)     &quot;ClientOutputBufferPersistTime&quot;:60, 从机缓冲区的软性限制持续时间(秒)     &quot;ReplBacklogSize&quot;:512,     环形缓冲区容量限制(MB)     &quot;ReplTimeout&quot;:120，        复制超时时间(秒)     &quot;IsExpireKey&quot;:&quot;true&quot;,过期key自动淘汰]</p>
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置<p>其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数:<br>[&quot;DstWriteMode&quot;:normal,     目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(要求目标端为空，否则校验不通过) ，不显示指定默认以覆盖写的方式执行任务    &quot;IsDstReadOnly&quot;:true,     是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读)     &quot;ClientOutputBufferHardLimit&quot;:512,     从机缓冲区的硬性容量限制(MB)     &quot;ClientOutputBufferSoftLimit&quot;:512,     从机缓冲区的软性容量限制(MB)     &quot;ClientOutputBufferPersistTime&quot;:60, 从机缓冲区的软性限制持续时间(秒)     &quot;ReplBacklogSize&quot;:512,     环形缓冲区容量限制(MB)     &quot;ReplTimeout&quot;:120，        复制超时时间(秒)     &quot;IsExpireKey&quot;:&quot;true&quot;,过期key自动淘汰]</p>
                     * @param _extraAttr <p>其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数:<br>[&quot;DstWriteMode&quot;:normal,     目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(要求目标端为空，否则校验不通过) ，不显示指定默认以覆盖写的方式执行任务    &quot;IsDstReadOnly&quot;:true,     是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读)     &quot;ClientOutputBufferHardLimit&quot;:512,     从机缓冲区的硬性容量限制(MB)     &quot;ClientOutputBufferSoftLimit&quot;:512,     从机缓冲区的软性容量限制(MB)     &quot;ClientOutputBufferPersistTime&quot;:60, 从机缓冲区的软性限制持续时间(秒)     &quot;ReplBacklogSize&quot;:512,     环形缓冲区容量限制(MB)     &quot;ReplTimeout&quot;:120，        复制超时时间(秒)     &quot;IsExpireKey&quot;:&quot;true&quot;,过期key自动淘汰]</p>
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                    /**
                     * 获取<p>pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)</p>
                     * @return MigrateWay <p>pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)</p>
                     * 
                     */
                    std::string GetMigrateWay() const;

                    /**
                     * 设置<p>pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)</p>
                     * @param _migrateWay <p>pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)</p>
                     * 
                     */
                    void SetMigrateWay(const std::string& _migrateWay);

                    /**
                     * 判断参数 MigrateWay 是否已赋值
                     * @return MigrateWay 是否已赋值
                     * 
                     */
                    bool MigrateWayHasBeenSet() const;

                private:

                    /**
                     * <p>迁移对象选项，需要告知迁移服务迁移哪些库表对象</p>
                     */
                    DatabaseTableObject m_databaseTable;
                    bool m_databaseTableHasBeenSet;

                    /**
                     * <p>迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。</p>
                     */
                    std::string m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * <p>数据一致性校验选项， 默认为不开启一致性校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsistencyOption m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * <p>是否迁移账号，true(迁移账号)，false(不迁移账号)</p>
                     */
                    bool m_isMigrateAccount;
                    bool m_isMigrateAccountHasBeenSet;

                    /**
                     * <p>是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效</p>
                     */
                    bool m_isOverrideRoot;
                    bool m_isOverrideRootHasBeenSet;

                    /**
                     * <p>是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)</p>
                     */
                    bool m_isDstReadOnly;
                    bool m_isDstReadOnlyHasBeenSet;

                    /**
                     * <p>其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数:<br>[&quot;DstWriteMode&quot;:normal,     目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(要求目标端为空，否则校验不通过) ，不显示指定默认以覆盖写的方式执行任务    &quot;IsDstReadOnly&quot;:true,     是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读)     &quot;ClientOutputBufferHardLimit&quot;:512,     从机缓冲区的硬性容量限制(MB)     &quot;ClientOutputBufferSoftLimit&quot;:512,     从机缓冲区的软性容量限制(MB)     &quot;ClientOutputBufferPersistTime&quot;:60, 从机缓冲区的软性限制持续时间(秒)     &quot;ReplBacklogSize&quot;:512,     环形缓冲区容量限制(MB)     &quot;ReplTimeout&quot;:120，        复制超时时间(秒)     &quot;IsExpireKey&quot;:&quot;true&quot;,过期key自动淘汰]</p>
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * <p>pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)</p>
                     */
                    std::string m_migrateWay;
                    bool m_migrateWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_
