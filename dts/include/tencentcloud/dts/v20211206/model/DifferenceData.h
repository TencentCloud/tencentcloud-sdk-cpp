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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDATA_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDATA_H_

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
                * 数据不一致详情
                */
                class DifferenceData : public AbstractModel
                {
                public:
                    DifferenceData();
                    ~DifferenceData() = default;
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
                     * 获取源端ID
                     * @return SrcChunk 源端ID
                     * 
                     */
                    std::string GetSrcChunk() const;

                    /**
                     * 设置源端ID
                     * @param _srcChunk 源端ID
                     * 
                     */
                    void SetSrcChunk(const std::string& _srcChunk);

                    /**
                     * 判断参数 SrcChunk 是否已赋值
                     * @return SrcChunk 是否已赋值
                     * 
                     */
                    bool SrcChunkHasBeenSet() const;

                    /**
                     * 获取目标端ID
                     * @return DstChunk 目标端ID
                     * 
                     */
                    std::string GetDstChunk() const;

                    /**
                     * 设置目标端ID
                     * @param _dstChunk 目标端ID
                     * 
                     */
                    void SetDstChunk(const std::string& _dstChunk);

                    /**
                     * 判断参数 DstChunk 是否已赋值
                     * @return DstChunk 是否已赋值
                     * 
                     */
                    bool DstChunkHasBeenSet() const;

                    /**
                     * 获取源端值
                     * @return SrcItem 源端值
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置源端值
                     * @param _srcItem 源端值
                     * 
                     */
                    void SetSrcItem(const std::string& _srcItem);

                    /**
                     * 判断参数 SrcItem 是否已赋值
                     * @return SrcItem 是否已赋值
                     * 
                     */
                    bool SrcItemHasBeenSet() const;

                    /**
                     * 获取目标端值
                     * @return DstItem 目标端值
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置目标端值
                     * @param _dstItem 目标端值
                     * 
                     */
                    void SetDstItem(const std::string& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

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
                     * 源端ID
                     */
                    std::string m_srcChunk;
                    bool m_srcChunkHasBeenSet;

                    /**
                     * 目标端ID
                     */
                    std::string m_dstChunk;
                    bool m_dstChunkHasBeenSet;

                    /**
                     * 源端值
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * 目标端值
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDATA_H_
