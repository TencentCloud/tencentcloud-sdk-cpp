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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DOCUMENTQUERY_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DOCUMENTQUERY_H_

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
                * 删除文档时查询入参
                */
                class DocumentQuery : public AbstractModel
                {
                public:
                    DocumentQuery();
                    ~DocumentQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件ids
                     * @return DocumentSetId 文件ids
                     * 
                     */
                    std::vector<std::string> GetDocumentSetId() const;

                    /**
                     * 设置文件ids
                     * @param _documentSetId 文件ids
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
                     * 获取文件名集合
                     * @return DocumentSetName 文件名集合
                     * 
                     */
                    std::vector<std::string> GetDocumentSetName() const;

                    /**
                     * 设置文件名集合
                     * @param _documentSetName 文件名集合
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
                     * 获取使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式
                     * @return Filter 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式
                     * @param _filter 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式
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
                     * 文件ids
                     */
                    std::vector<std::string> m_documentSetId;
                    bool m_documentSetIdHasBeenSet;

                    /**
                     * 文件名集合
                     */
                    std::vector<std::string> m_documentSetName;
                    bool m_documentSetNameHasBeenSet;

                    /**
                     * 使用创建 CollectionView 指定的 Filter 索引的字段设置查询过滤表达式
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DOCUMENTQUERY_H_
