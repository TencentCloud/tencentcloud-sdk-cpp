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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DBSTATEMENTS_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DBSTATEMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据库信息
                */
                class DBStatements : public AbstractModel
                {
                public:
                    DBStatements();
                    ~DBStatements() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DBName 数据库名称
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名称
                     * @param _dBName 数据库名称
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取数据库Schema
                     * @return DBSchema 数据库Schema
                     * 
                     */
                    std::string GetDBSchema() const;

                    /**
                     * 设置数据库Schema
                     * @param _dBSchema 数据库Schema
                     * 
                     */
                    void SetDBSchema(const std::string& _dBSchema);

                    /**
                     * 判断参数 DBSchema 是否已赋值
                     * @return DBSchema 是否已赋值
                     * 
                     */
                    bool DBSchemaHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 数据库Schema
                     */
                    std::string m_dBSchema;
                    bool m_dBSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DBSTATEMENTS_H_
