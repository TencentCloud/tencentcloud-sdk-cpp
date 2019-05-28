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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CONSISTENCYPARAMS_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CONSISTENCYPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 抽样检验时的抽样参数
                */
                class ConsistencyParams : public AbstractModel
                {
                public:
                    ConsistencyParams();
                    ~ConsistencyParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1-100的整数值，select(*)对比时每张表的抽样行数比例
                     * @return SelectRowsPerTable 1-100的整数值，select(*)对比时每张表的抽样行数比例
                     */
                    int64_t GetSelectRowsPerTable() const;

                    /**
                     * 设置1-100的整数值，select(*)对比时每张表的抽样行数比例
                     * @param SelectRowsPerTable 1-100的整数值，select(*)对比时每张表的抽样行数比例
                     */
                    void SetSelectRowsPerTable(const int64_t& _selectRowsPerTable);

                    /**
                     * 判断参数 SelectRowsPerTable 是否已赋值
                     * @return SelectRowsPerTable 是否已赋值
                     */
                    bool SelectRowsPerTableHasBeenSet() const;

                    /**
                     * 获取1-100的整数值，select(*)对比的表的比例
                     * @return TablesSelectAll 1-100的整数值，select(*)对比的表的比例
                     */
                    int64_t GetTablesSelectAll() const;

                    /**
                     * 设置1-100的整数值，select(*)对比的表的比例
                     * @param TablesSelectAll 1-100的整数值，select(*)对比的表的比例
                     */
                    void SetTablesSelectAll(const int64_t& _tablesSelectAll);

                    /**
                     * 判断参数 TablesSelectAll 是否已赋值
                     * @return TablesSelectAll 是否已赋值
                     */
                    bool TablesSelectAllHasBeenSet() const;

                    /**
                     * 获取1-100的整数值，select count(*)对比的表的比例
                     * @return TablesSelectCount 1-100的整数值，select count(*)对比的表的比例
                     */
                    int64_t GetTablesSelectCount() const;

                    /**
                     * 设置1-100的整数值，select count(*)对比的表的比例
                     * @param TablesSelectCount 1-100的整数值，select count(*)对比的表的比例
                     */
                    void SetTablesSelectCount(const int64_t& _tablesSelectCount);

                    /**
                     * 判断参数 TablesSelectCount 是否已赋值
                     * @return TablesSelectCount 是否已赋值
                     */
                    bool TablesSelectCountHasBeenSet() const;

                private:

                    /**
                     * 1-100的整数值，select(*)对比时每张表的抽样行数比例
                     */
                    int64_t m_selectRowsPerTable;
                    bool m_selectRowsPerTableHasBeenSet;

                    /**
                     * 1-100的整数值，select(*)对比的表的比例
                     */
                    int64_t m_tablesSelectAll;
                    bool m_tablesSelectAllHasBeenSet;

                    /**
                     * 1-100的整数值，select count(*)对比的表的比例
                     */
                    int64_t m_tablesSelectCount;
                    bool m_tablesSelectCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CONSISTENCYPARAMS_H_
