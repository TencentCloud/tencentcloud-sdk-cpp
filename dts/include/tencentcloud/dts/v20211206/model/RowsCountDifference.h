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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ROWSCOUNTDIFFERENCE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ROWSCOUNTDIFFERENCE_H_

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
        namespace V20211206
        {
            namespace Model
            {
                /**
                * mongodb行校验不一致详细信息
                */
                class RowsCountDifference : public AbstractModel
                {
                public:
                    RowsCountDifference();
                    ~RowsCountDifference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return Db 数据库名
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库名
                     * @param _db 数据库名
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取集合
                     * @return Table 集合
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置集合
                     * @param _table 集合
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
                     * 获取源端行数
                     * @return SrcCount 源端行数
                     * 
                     */
                    int64_t GetSrcCount() const;

                    /**
                     * 设置源端行数
                     * @param _srcCount 源端行数
                     * 
                     */
                    void SetSrcCount(const int64_t& _srcCount);

                    /**
                     * 判断参数 SrcCount 是否已赋值
                     * @return SrcCount 是否已赋值
                     * 
                     */
                    bool SrcCountHasBeenSet() const;

                    /**
                     * 获取目标端行数
                     * @return DstCount 目标端行数
                     * 
                     */
                    int64_t GetDstCount() const;

                    /**
                     * 设置目标端行数
                     * @param _dstCount 目标端行数
                     * 
                     */
                    void SetDstCount(const int64_t& _dstCount);

                    /**
                     * 判断参数 DstCount 是否已赋值
                     * @return DstCount 是否已赋值
                     * 
                     */
                    bool DstCountHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 集合
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 源端行数
                     */
                    int64_t m_srcCount;
                    bool m_srcCountHasBeenSet;

                    /**
                     * 目标端行数
                     */
                    int64_t m_dstCount;
                    bool m_dstCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ROWSCOUNTDIFFERENCE_H_
