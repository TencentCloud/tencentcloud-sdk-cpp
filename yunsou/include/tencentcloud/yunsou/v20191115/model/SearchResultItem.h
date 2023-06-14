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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTITEM_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * 搜索结果元素
                */
                class SearchResultItem : public AbstractModel
                {
                public:
                    SearchResultItem();
                    ~SearchResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动态摘要信息
                     * @return DocAbs 动态摘要信息
                     * 
                     */
                    std::string GetDocAbs() const;

                    /**
                     * 设置动态摘要信息
                     * @param _docAbs 动态摘要信息
                     * 
                     */
                    void SetDocAbs(const std::string& _docAbs);

                    /**
                     * 判断参数 DocAbs 是否已赋值
                     * @return DocAbs 是否已赋值
                     * 
                     */
                    bool DocAbsHasBeenSet() const;

                    /**
                     * 获取检索文档id
                     * @return DocId 检索文档id
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置检索文档id
                     * @param _docId 检索文档id
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取原始文档信息
                     * @return DocMeta 原始文档信息
                     * 
                     */
                    std::string GetDocMeta() const;

                    /**
                     * 设置原始文档信息
                     * @param _docMeta 原始文档信息
                     * 
                     */
                    void SetDocMeta(const std::string& _docMeta);

                    /**
                     * 判断参数 DocMeta 是否已赋值
                     * @return DocMeta 是否已赋值
                     * 
                     */
                    bool DocMetaHasBeenSet() const;

                    /**
                     * 获取精计算得分
                     * @return L2Score 精计算得分
                     * 
                     */
                    double GetL2Score() const;

                    /**
                     * 设置精计算得分
                     * @param _l2Score 精计算得分
                     * 
                     */
                    void SetL2Score(const double& _l2Score);

                    /**
                     * 判断参数 L2Score 是否已赋值
                     * @return L2Score 是否已赋值
                     * 
                     */
                    bool L2ScoreHasBeenSet() const;

                    /**
                     * 获取文档级回传信息
                     * @return SearchDebuginfo 文档级回传信息
                     * 
                     */
                    std::string GetSearchDebuginfo() const;

                    /**
                     * 设置文档级回传信息
                     * @param _searchDebuginfo 文档级回传信息
                     * 
                     */
                    void SetSearchDebuginfo(const std::string& _searchDebuginfo);

                    /**
                     * 判断参数 SearchDebuginfo 是否已赋值
                     * @return SearchDebuginfo 是否已赋值
                     * 
                     */
                    bool SearchDebuginfoHasBeenSet() const;

                private:

                    /**
                     * 动态摘要信息
                     */
                    std::string m_docAbs;
                    bool m_docAbsHasBeenSet;

                    /**
                     * 检索文档id
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 原始文档信息
                     */
                    std::string m_docMeta;
                    bool m_docMetaHasBeenSet;

                    /**
                     * 精计算得分
                     */
                    double m_l2Score;
                    bool m_l2ScoreHasBeenSet;

                    /**
                     * 文档级回传信息
                     */
                    std::string m_searchDebuginfo;
                    bool m_searchDebuginfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTITEM_H_
