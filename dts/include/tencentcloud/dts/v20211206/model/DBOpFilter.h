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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>
#include <tencentcloud/dts/v20211206/model/TableFilter.h>
#include <tencentcloud/dts/v20211206/model/ViewFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 库/表/视图级别的 DDL/DML 白名单
                */
                class DBOpFilter : public AbstractModel
                {
                public:
                    DBOpFilter();
                    ~DBOpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则生效的库名
                     * @return DbName 规则生效的库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置规则生效的库名
                     * @param _dbName 规则生效的库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取库级 DDL/DML 过滤规则
                     * @return OpFilter 库级 DDL/DML 过滤规则
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置库级 DDL/DML 过滤规则
                     * @param _opFilter 库级 DDL/DML 过滤规则
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                    /**
                     * 获取表级 DDL/DML 过滤信息
                     * @return Tables 表级 DDL/DML 过滤信息
                     * 
                     */
                    std::vector<TableFilter> GetTables() const;

                    /**
                     * 设置表级 DDL/DML 过滤信息
                     * @param _tables 表级 DDL/DML 过滤信息
                     * 
                     */
                    void SetTables(const std::vector<TableFilter>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取视图级 DDL/DML 过滤信息
                     * @return Views 视图级 DDL/DML 过滤信息
                     * 
                     */
                    std::vector<ViewFilter> GetViews() const;

                    /**
                     * 设置视图级 DDL/DML 过滤信息
                     * @param _views 视图级 DDL/DML 过滤信息
                     * 
                     */
                    void SetViews(const std::vector<ViewFilter>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                private:

                    /**
                     * 规则生效的库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 库级 DDL/DML 过滤规则
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                    /**
                     * 表级 DDL/DML 过滤信息
                     */
                    std::vector<TableFilter> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 视图级 DDL/DML 过滤信息
                     */
                    std::vector<ViewFilter> m_views;
                    bool m_viewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_
