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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/DocumentQuery.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DeleteKnowledgeDocumentSet请求参数结构体
                */
                class DeleteKnowledgeDocumentSetRequest : public AbstractModel
                {
                public:
                    DeleteKnowledgeDocumentSetRequest();
                    ~DeleteKnowledgeDocumentSetRequest() = default;
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
                     * 获取删除时制定的条件
                     * @return Query 删除时制定的条件
                     * 
                     */
                    DocumentQuery GetQuery() const;

                    /**
                     * 设置删除时制定的条件
                     * @param _query 删除时制定的条件
                     * 
                     */
                    void SetQuery(const DocumentQuery& _query);

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
                     * 删除时制定的条件
                     */
                    DocumentQuery m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETREQUEST_H_
