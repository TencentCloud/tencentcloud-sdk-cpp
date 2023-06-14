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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLTEMPLATERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSqlTemplate返回参数结构体
                */
                class DescribeSqlTemplateResponse : public AbstractModel
                {
                public:
                    DescribeSqlTemplateResponse();
                    ~DescribeSqlTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名。
                     * @return Schema 数据库名。
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取SQL语句。
                     * @return SqlText SQL语句。
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取SQL类型。
                     * @return SqlType SQL类型。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取SQL模版内容。
                     * @return SqlTemplate SQL模版内容。
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取SQL模版ID。
                     * @return SqlId SQL模版ID。
                     * 
                     */
                    int64_t GetSqlId() const;

                    /**
                     * 判断参数 SqlId 是否已赋值
                     * @return SqlId 是否已赋值
                     * 
                     */
                    bool SqlIdHasBeenSet() const;

                private:

                    /**
                     * 数据库名。
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * SQL语句。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * SQL类型。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * SQL模版内容。
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * SQL模版ID。
                     */
                    int64_t m_sqlId;
                    bool m_sqlIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLTEMPLATERESPONSE_H_
