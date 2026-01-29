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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * RunSql返回参数结构体
                */
                class RunSqlResponse : public AbstractModel
                {
                public:
                    RunSqlResponse();
                    ~RunSqlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果行，每个元素为 JSON 字符串
                     * @return Items 查询结果行，每个元素为 JSON 字符串
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取列元数据信息，每个元素为 JSON 字符串，字段包含 `name/databaseType/nullable/length/precision/scale`
                     * @return Infos 列元数据信息，每个元素为 JSON 字符串，字段包含 `name/databaseType/nullable/length/precision/scale`
                     * 
                     */
                    std::vector<std::string> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取受影响的行数（INSERT/UPDATE/DELETE 等语句）
                     * @return RowsAffected 受影响的行数（INSERT/UPDATE/DELETE 等语句）
                     * 
                     */
                    int64_t GetRowsAffected() const;

                    /**
                     * 判断参数 RowsAffected 是否已赋值
                     * @return RowsAffected 是否已赋值
                     * 
                     */
                    bool RowsAffectedHasBeenSet() const;

                private:

                    /**
                     * 查询结果行，每个元素为 JSON 字符串
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 列元数据信息，每个元素为 JSON 字符串，字段包含 `name/databaseType/nullable/length/precision/scale`
                     */
                    std::vector<std::string> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * 受影响的行数（INSERT/UPDATE/DELETE 等语句）
                     */
                    int64_t m_rowsAffected;
                    bool m_rowsAffectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLRESPONSE_H_
