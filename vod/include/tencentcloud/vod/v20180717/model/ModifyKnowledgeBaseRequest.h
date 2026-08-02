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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyKnowledgeBase请求参数结构体
                */
                class ModifyKnowledgeBaseRequest : public AbstractModel
                {
                public:
                    ModifyKnowledgeBaseRequest();
                    ~ModifyKnowledgeBaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @return SubAppId <p>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @param _subAppId <p>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>要修改的知识库ID。</p>
                     * @return KnowledgeBaseId <p>要修改的知识库ID。</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>要修改的知识库ID。</p>
                     * @param _knowledgeBaseId <p>要修改的知识库ID。</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>新的知识库名称。长度限制：1-64个字符。</p>
                     * @return Name <p>新的知识库名称。长度限制：1-64个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>新的知识库名称。长度限制：1-64个字符。</p>
                     * @param _name <p>新的知识库名称。长度限制：1-64个字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>新的知识库描述。长度限制：最多256个字符。</p>
                     * @return Description <p>新的知识库描述。长度限制：最多256个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>新的知识库描述。长度限制：最多256个字符。</p>
                     * @param _description <p>新的知识库描述。长度限制：最多256个字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>要修改的知识库ID。</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>新的知识库名称。长度限制：1-64个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>新的知识库描述。长度限制：最多256个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
