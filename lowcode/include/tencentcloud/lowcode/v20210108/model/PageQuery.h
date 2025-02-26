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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_PAGEQUERY_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_PAGEQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 查询条件
                */
                class PageQuery : public AbstractModel
                {
                public:
                    PageQuery();
                    ~PageQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件id数组，表示要查询的文件的所有 ID，支持批量查询，数组元素范围[1,20]。
                     * @return DocumentSetId 文件id数组，表示要查询的文件的所有 ID，支持批量查询，数组元素范围[1,20]。
                     * 
                     */
                    std::vector<std::string> GetDocumentSetId() const;

                    /**
                     * 设置文件id数组，表示要查询的文件的所有 ID，支持批量查询，数组元素范围[1,20]。
                     * @param _documentSetId 文件id数组，表示要查询的文件的所有 ID，支持批量查询，数组元素范围[1,20]。
                     * 
                     */
                    void SetDocumentSetId(const std::vector<std::string>& _documentSetId);

                    /**
                     * 判断参数 DocumentSetId 是否已赋值
                     * @return DocumentSetId 是否已赋值
                     * 
                     */
                    bool DocumentSetIdHasBeenSet() const;

                    /**
                     * 获取表示要查询的文档名称，支持批量查询，数组元素范围[1,20]。
                     * @return DocumentSetName 表示要查询的文档名称，支持批量查询，数组元素范围[1,20]。
                     * 
                     */
                    std::vector<std::string> GetDocumentSetName() const;

                    /**
                     * 设置表示要查询的文档名称，支持批量查询，数组元素范围[1,20]。
                     * @param _documentSetName 表示要查询的文档名称，支持批量查询，数组元素范围[1,20]。
                     * 
                     */
                    void SetDocumentSetName(const std::vector<std::string>& _documentSetName);

                    /**
                     * 判断参数 DocumentSetName 是否已赋值
                     * @return DocumentSetName 是否已赋值
                     * 
                     */
                    bool DocumentSetNameHasBeenSet() const;

                    /**
                     * 获取取值范围：[1,16384]
                     * @return Limit 取值范围：[1,16384]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置取值范围：[1,16384]
                     * @param _limit 取值范围：[1,16384]
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设置分页偏移量，用于控制分页查询返回结果的起始位置，方便用户对数据进行分页展示和浏览。
取值：为 limit 整数倍。
计算公式：offset=limit*(page-1)。
例如：当 limit = 10，page = 2 时，分页偏移量 offset = 10 * (2 - 1) = 10，表示从查询结果的第 11 条记录开始返回数据。

                     * @return Offset 设置分页偏移量，用于控制分页查询返回结果的起始位置，方便用户对数据进行分页展示和浏览。
取值：为 limit 整数倍。
计算公式：offset=limit*(page-1)。
例如：当 limit = 10，page = 2 时，分页偏移量 offset = 10 * (2 - 1) = 10，表示从查询结果的第 11 条记录开始返回数据。

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置设置分页偏移量，用于控制分页查询返回结果的起始位置，方便用户对数据进行分页展示和浏览。
取值：为 limit 整数倍。
计算公式：offset=limit*(page-1)。
例如：当 limit = 10，page = 2 时，分页偏移量 offset = 10 * (2 - 1) = 10，表示从查询结果的第 11 条记录开始返回数据。

                     * @param _offset 设置分页偏移量，用于控制分页查询返回结果的起始位置，方便用户对数据进行分页展示和浏览。
取值：为 limit 整数倍。
计算公式：offset=limit*(page-1)。
例如：当 limit = 10，page = 2 时，分页偏移量 offset = 10 * (2 - 1) = 10，表示从查询结果的第 11 条记录开始返回数据。

                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取设置后，其他字段为空值
                     * @return OutputFields 设置后，其他字段为空值
                     * 
                     */
                    std::vector<std::string> GetOutputFields() const;

                    /**
                     * 设置设置后，其他字段为空值
                     * @param _outputFields 设置后，其他字段为空值
                     * 
                     */
                    void SetOutputFields(const std::vector<std::string>& _outputFields);

                    /**
                     * 判断参数 OutputFields 是否已赋值
                     * @return OutputFields 是否已赋值
                     * 
                     */
                    bool OutputFieldsHasBeenSet() const;

                    /**
                     * 获取使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式。
                     * @return Filter 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式。
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式。
                     * @param _filter 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式。
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 文件id数组，表示要查询的文件的所有 ID，支持批量查询，数组元素范围[1,20]。
                     */
                    std::vector<std::string> m_documentSetId;
                    bool m_documentSetIdHasBeenSet;

                    /**
                     * 表示要查询的文档名称，支持批量查询，数组元素范围[1,20]。
                     */
                    std::vector<std::string> m_documentSetName;
                    bool m_documentSetNameHasBeenSet;

                    /**
                     * 取值范围：[1,16384]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设置分页偏移量，用于控制分页查询返回结果的起始位置，方便用户对数据进行分页展示和浏览。
取值：为 limit 整数倍。
计算公式：offset=limit*(page-1)。
例如：当 limit = 10，page = 2 时，分页偏移量 offset = 10 * (2 - 1) = 10，表示从查询结果的第 11 条记录开始返回数据。

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 设置后，其他字段为空值
                     */
                    std::vector<std::string> m_outputFields;
                    bool m_outputFieldsHasBeenSet;

                    /**
                     * 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式。
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_PAGEQUERY_H_
