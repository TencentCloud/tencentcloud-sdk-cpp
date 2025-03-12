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
                     * 获取迁移对象选项，需要告知迁移服务迁移哪些库表对象
                     * @return DatabaseTable 迁移对象选项，需要告知迁移服务迁移哪些库表对象
                     * 
                     */
                    DatabaseTableObject GetDatabaseTable() const;

                    /**
                     * 设置迁移对象选项，需要告知迁移服务迁移哪些库表对象
                     * @param _databaseTable 迁移对象选项，需要告知迁移服务迁移哪些库表对象
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
                     * 获取迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。
                     * @return MigrateType 迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。
                     * 
                     */
                    std::string GetMigrateType() const;

                    /**
                     * 设置迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。
                     * @param _migrateType 迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。
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
                     * 获取数据一致性校验选项， 默认为不开启一致性校验
                     * @return Consistency 数据一致性校验选项， 默认为不开启一致性校验
                     * 
                     */
                    ConsistencyOption GetConsistency() const;

                    /**
                     * 设置数据一致性校验选项， 默认为不开启一致性校验
                     * @param _consistency 数据一致性校验选项， 默认为不开启一致性校验
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
                     * 获取是否迁移账号，true(迁移账号)，false(不迁移账号)
                     * @return IsMigrateAccount 是否迁移账号，true(迁移账号)，false(不迁移账号)
                     * 
                     */
                    bool GetIsMigrateAccount() const;

                    /**
                     * 设置是否迁移账号，true(迁移账号)，false(不迁移账号)
                     * @param _isMigrateAccount 是否迁移账号，true(迁移账号)，false(不迁移账号)
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
                     * 获取是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效
                     * @return IsOverrideRoot 是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效
                     * 
                     */
                    bool GetIsOverrideRoot() const;

                    /**
                     * 设置是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效
                     * @param _isOverrideRoot 是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效
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
                     * 获取是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)
                     * @return IsDstReadOnly 是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)
                     * 
                     */
                    bool GetIsDstReadOnly() const;

                    /**
                     * 设置是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)
                     * @param _isDstReadOnly 是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)
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
                     * 获取其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数: 
["DstWriteMode":normal, 	目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(跟正常流程一样，不做额外动作) 	"IsDstReadOnly":true, 	是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读) 	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 	"ReplTimeout":120，		复制超时时间(秒) 	"IsExpireKey":"true",过期key自动淘汰]
                     * @return ExtraAttr 其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数: 
["DstWriteMode":normal, 	目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(跟正常流程一样，不做额外动作) 	"IsDstReadOnly":true, 	是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读) 	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 	"ReplTimeout":120，		复制超时时间(秒) 	"IsExpireKey":"true",过期key自动淘汰]
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数: 
["DstWriteMode":normal, 	目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(跟正常流程一样，不做额外动作) 	"IsDstReadOnly":true, 	是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读) 	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 	"ReplTimeout":120，		复制超时时间(秒) 	"IsExpireKey":"true",过期key自动淘汰]
                     * @param _extraAttr 其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数: 
["DstWriteMode":normal, 	目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(跟正常流程一样，不做额外动作) 	"IsDstReadOnly":true, 	是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读) 	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 	"ReplTimeout":120，		复制超时时间(秒) 	"IsExpireKey":"true",过期key自动淘汰]
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
                     * 获取pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)
                     * @return MigrateWay pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)
                     * 
                     */
                    std::string GetMigrateWay() const;

                    /**
                     * 设置pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)
                     * @param _migrateWay pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)
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
                     * 迁移对象选项，需要告知迁移服务迁移哪些库表对象
                     */
                    DatabaseTableObject m_databaseTable;
                    bool m_databaseTableHasBeenSet;

                    /**
                     * 迁移类型，full(全量迁移)，structure(结构迁移)，fullAndIncrement(全量加增量迁移)， 默认为fullAndIncrement;注意redis,keewidb产品只支持fullAndIncrement类型。
                     */
                    std::string m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * 数据一致性校验选项， 默认为不开启一致性校验
                     */
                    ConsistencyOption m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * 是否迁移账号，true(迁移账号)，false(不迁移账号)
                     */
                    bool m_isMigrateAccount;
                    bool m_isMigrateAccountHasBeenSet;

                    /**
                     * 是否用源库Root账户覆盖目标库，值包括：false-不覆盖，true-覆盖，选择库表或者结构迁移时应该为false，注意只对旧版迁移有效
                     */
                    bool m_isOverrideRoot;
                    bool m_isOverrideRootHasBeenSet;

                    /**
                     * 是否在迁移时设置目标库只读(仅对mysql有效)，true(设置只读)、false(不设置只读，默认此值)
                     */
                    bool m_isDstReadOnly;
                    bool m_isDstReadOnlyHasBeenSet;

                    /**
                     * 其他附加信息，对于特定库可设置额外参数，Redis可定义如下的参数: 
["DstWriteMode":normal, 	目标库写入模式,可取值clearData(清空目标实例数据)、overwrite(以覆盖写的方式执行任务)、normal(跟正常流程一样，不做额外动作) 	"IsDstReadOnly":true, 	是否在迁移时设置目标库只读,true(设置只读)、false(不设置只读) 	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 	"ReplTimeout":120，		复制超时时间(秒) 	"IsExpireKey":"true",过期key自动淘汰]
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * pgsql迁移分类：logical(逻辑迁移)、physical(物理迁移)
                     */
                    std::string m_migrateWay;
                    bool m_migrateWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_
