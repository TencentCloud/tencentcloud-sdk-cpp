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

#ifndef TENCENTCLOUD_CASB_V20200507_MODEL_CRYPTOCOPYCOLUMNPOLICYTABLEFILTER_H_
#define TENCENTCLOUD_CASB_V20200507_MODEL_CRYPTOCOPYCOLUMNPOLICYTABLEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Casb
    {
        namespace V20200507
        {
            namespace Model
            {
                /**
                * 策略迁移表信息筛选
                */
                class CryptoCopyColumnPolicyTableFilter : public AbstractModel
                {
                public:
                    CryptoCopyColumnPolicyTableFilter();
                    ~CryptoCopyColumnPolicyTableFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param DatabaseName 数据库名称
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableNameSet 表名称
                     */
                    std::vector<std::string> GetTableNameSet() const;

                    /**
                     * 设置表名称
                     * @param TableNameSet 表名称
                     */
                    void SetTableNameSet(const std::vector<std::string>& _tableNameSet);

                    /**
                     * 判断参数 TableNameSet 是否已赋值
                     * @return TableNameSet 是否已赋值
                     */
                    bool TableNameSetHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::vector<std::string> m_tableNameSet;
                    bool m_tableNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CASB_V20200507_MODEL_CRYPTOCOPYCOLUMNPOLICYTABLEFILTER_H_
