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
                     * 获取数据内容检测参数。表中选出用来数据对比的行，占表的总行数的百分比。取值范围是整数[1-100]
                     * @return SelectRowsPerTable 数据内容检测参数。表中选出用来数据对比的行，占表的总行数的百分比。取值范围是整数[1-100]
                     * 
                     */
                    int64_t GetSelectRowsPerTable() const;

                    /**
                     * 设置数据内容检测参数。表中选出用来数据对比的行，占表的总行数的百分比。取值范围是整数[1-100]
                     * @param _selectRowsPerTable 数据内容检测参数。表中选出用来数据对比的行，占表的总行数的百分比。取值范围是整数[1-100]
                     * 
                     */
                    void SetSelectRowsPerTable(const int64_t& _selectRowsPerTable);

                    /**
                     * 判断参数 SelectRowsPerTable 是否已赋值
                     * @return SelectRowsPerTable 是否已赋值
                     * 
                     */
                    bool SelectRowsPerTableHasBeenSet() const;

                    /**
                     * 获取数据内容检测参数。迁移库表中，要进行数据内容检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * @return TablesSelectAll 数据内容检测参数。迁移库表中，要进行数据内容检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * 
                     */
                    int64_t GetTablesSelectAll() const;

                    /**
                     * 设置数据内容检测参数。迁移库表中，要进行数据内容检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * @param _tablesSelectAll 数据内容检测参数。迁移库表中，要进行数据内容检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * 
                     */
                    void SetTablesSelectAll(const int64_t& _tablesSelectAll);

                    /**
                     * 判断参数 TablesSelectAll 是否已赋值
                     * @return TablesSelectAll 是否已赋值
                     * 
                     */
                    bool TablesSelectAllHasBeenSet() const;

                    /**
                     * 获取数据数量检测，检测表行数是否一致。迁移库表中，要进行数据数量检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * @return TablesSelectCount 数据数量检测，检测表行数是否一致。迁移库表中，要进行数据数量检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * 
                     */
                    int64_t GetTablesSelectCount() const;

                    /**
                     * 设置数据数量检测，检测表行数是否一致。迁移库表中，要进行数据数量检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * @param _tablesSelectCount 数据数量检测，检测表行数是否一致。迁移库表中，要进行数据数量检测的表，占所有表的百分比。取值范围是整数[1-100]
                     * 
                     */
                    void SetTablesSelectCount(const int64_t& _tablesSelectCount);

                    /**
                     * 判断参数 TablesSelectCount 是否已赋值
                     * @return TablesSelectCount 是否已赋值
                     * 
                     */
                    bool TablesSelectCountHasBeenSet() const;

                private:

                    /**
                     * 数据内容检测参数。表中选出用来数据对比的行，占表的总行数的百分比。取值范围是整数[1-100]
                     */
                    int64_t m_selectRowsPerTable;
                    bool m_selectRowsPerTableHasBeenSet;

                    /**
                     * 数据内容检测参数。迁移库表中，要进行数据内容检测的表，占所有表的百分比。取值范围是整数[1-100]
                     */
                    int64_t m_tablesSelectAll;
                    bool m_tablesSelectAllHasBeenSet;

                    /**
                     * 数据数量检测，检测表行数是否一致。迁移库表中，要进行数据数量检测的表，占所有表的百分比。取值范围是整数[1-100]
                     */
                    int64_t m_tablesSelectCount;
                    bool m_tablesSelectCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CONSISTENCYPARAMS_H_
