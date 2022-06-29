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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMigrationDatabases返回参数结构体
                */
                class DescribeMigrationDatabasesResponse : public AbstractModel
                {
                public:
                    DescribeMigrationDatabasesResponse();
                    ~DescribeMigrationDatabasesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库数量
                     * @return Amount 数据库数量
                     */
                    int64_t GetAmount() const;

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取数据库名称数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateDBSet 数据库名称数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetMigrateDBSet() const;

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     */
                    bool MigrateDBSetHasBeenSet() const;

                private:

                    /**
                     * 数据库数量
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 数据库名称数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESRESPONSE_H_
