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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/PageQuery.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeDocumentSetList请求参数结构体
                */
                class DescribeKnowledgeDocumentSetListRequest : public AbstractModel
                {
                public:
                    DescribeKnowledgeDocumentSetListRequest();
                    ~DescribeKnowledgeDocumentSetListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取知识库标识
                     * @return CollectionView 知识库标识
                     * 
                     */
                    std::string GetCollectionView() const;

                    /**
                     * 设置知识库标识
                     * @param _collectionView 知识库标识
                     * 
                     */
                    void SetCollectionView(const std::string& _collectionView);

                    /**
                     * 判断参数 CollectionView 是否已赋值
                     * @return CollectionView 是否已赋值
                     * 
                     */
                    bool CollectionViewHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return Query 查询条件
                     * 
                     */
                    PageQuery GetQuery() const;

                    /**
                     * 设置查询条件
                     * @param _query 查询条件
                     * 
                     */
                    void SetQuery(const PageQuery& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 知识库标识
                     */
                    std::string m_collectionView;
                    bool m_collectionViewHasBeenSet;

                    /**
                     * 查询条件
                     */
                    PageQuery m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTREQUEST_H_
