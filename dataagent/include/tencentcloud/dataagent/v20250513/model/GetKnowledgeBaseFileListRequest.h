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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETKNOWLEDGEBASEFILELISTREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETKNOWLEDGEBASEFILELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * GetKnowledgeBaseFileList请求参数结构体
                */
                class GetKnowledgeBaseFileListRequest : public AbstractModel
                {
                public:
                    GetKnowledgeBaseFileListRequest();
                    ~GetKnowledgeBaseFileListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取默认 1 表示第一页，可以不填
                     * @return Page 默认 1 表示第一页，可以不填
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置默认 1 表示第一页，可以不填
                     * @param _page 默认 1 表示第一页，可以不填
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取默认 10 一页展示 10 条，可以不填
                     * @return PageSize 默认 10 一页展示 10 条，可以不填
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置默认 10 一页展示 10 条，可以不填
                     * @param _pageSize 默认 10 一页展示 10 条，可以不填
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取知识库id
                     * @return KnowledgeBaseId 知识库id
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库id
                     * @param _knowledgeBaseId 知识库id
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 默认 1 表示第一页，可以不填
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 默认 10 一页展示 10 条，可以不填
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 知识库id
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETKNOWLEDGEBASEFILELISTREQUEST_H_
