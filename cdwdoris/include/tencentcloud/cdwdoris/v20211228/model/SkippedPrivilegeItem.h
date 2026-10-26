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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SKIPPEDPRIVILEGEITEM_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SKIPPEDPRIVILEGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 增量授权（UpdateType=4）时因库/表已被物理删除而被跳过的目标，后端已自动清理其残留权限，前端需弹窗提示用户
                */
                class SkippedPrivilegeItem : public AbstractModel
                {
                public:
                    SkippedPrivilegeItem();
                    ~SkippedPrivilegeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据目录（catalog）名称</p>
                     * @return CatalogName <p>数据目录（catalog）名称</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录（catalog）名称</p>
                     * @param _catalogName <p>数据目录（catalog）名称</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>库名</p>
                     * @return Database <p>库名</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>库名</p>
                     * @param _database <p>库名</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>表名；库级条目被跳过时该字段为空（Go 定义带 omitempty，为空时响应里整个字段不出现）</p>
                     * @return Table <p>表名；库级条目被跳过时该字段为空（Go 定义带 omitempty，为空时响应里整个字段不出现）</p>
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>表名；库级条目被跳过时该字段为空（Go 定义带 omitempty，为空时响应里整个字段不出现）</p>
                     * @param _table <p>表名；库级条目被跳过时该字段为空（Go 定义带 omitempty，为空时响应里整个字段不出现）</p>
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>跳过原因，如 table not found, maybe already dropped、database not found, maybe already dropped、existence check failed, granting  skipped this round, please retry</p>
                     * @return Reason <p>跳过原因，如 table not found, maybe already dropped、database not found, maybe already dropped、existence check failed, granting  skipped this round, please retry</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>跳过原因，如 table not found, maybe already dropped、database not found, maybe already dropped、existence check failed, granting  skipped this round, please retry</p>
                     * @param _reason <p>跳过原因，如 table not found, maybe already dropped、database not found, maybe already dropped、existence check failed, granting  skipped this round, please retry</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录（catalog）名称</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>库名</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>表名；库级条目被跳过时该字段为空（Go 定义带 omitempty，为空时响应里整个字段不出现）</p>
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>跳过原因，如 table not found, maybe already dropped、database not found, maybe already dropped、existence check failed, granting  skipped this round, please retry</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SKIPPEDPRIVILEGEITEM_H_
