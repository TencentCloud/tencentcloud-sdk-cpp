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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GenHiveTableDDLSql返回参数结构体
                */
                class GenHiveTableDDLSqlResponse : public AbstractModel
                {
                public:
                    GenHiveTableDDLSqlResponse();
                    ~GenHiveTableDDLSqlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的ddl语句
                     * @return DDLSql 生成的ddl语句
                     * 
                     */
                    std::string GetDDLSql() const;

                    /**
                     * 判断参数 DDLSql 是否已赋值
                     * @return DDLSql 是否已赋值
                     * 
                     */
                    bool DDLSqlHasBeenSet() const;

                    /**
                     * 获取生成的ddl语句。与DDLSql相同含义，优先取Data，如果Data为空，则取DDLSql。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 生成的ddl语句。与DDLSql相同含义，优先取Data，如果Data为空，则取DDLSql。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 生成的ddl语句
                     */
                    std::string m_dDLSql;
                    bool m_dDLSqlHasBeenSet;

                    /**
                     * 生成的ddl语句。与DDLSql相同含义，优先取Data，如果Data为空，则取DDLSql。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLRESPONSE_H_
