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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SearchAdvancedConfig.h>
#include <tencentcloud/adp/v20260520/model/SearchInput.h>
#include <tencentcloud/adp/v20260520/model/SearchContext.h>
#include <tencentcloud/adp/v20260520/model/SearchBilling.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SearchKnowledge请求参数结构体
                */
                class SearchKnowledgeRequest : public AbstractModel
                {
                public:
                    SearchKnowledgeRequest();
                    ~SearchKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检索高级配置</p>
                     * @return AdvancedConfig <p>检索高级配置</p>
                     * 
                     */
                    SearchAdvancedConfig GetAdvancedConfig() const;

                    /**
                     * 设置<p>检索高级配置</p>
                     * @param _advancedConfig <p>检索高级配置</p>
                     * 
                     */
                    void SetAdvancedConfig(const SearchAdvancedConfig& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取<p>检索输入</p>
                     * @return Input <p>检索输入</p>
                     * 
                     */
                    SearchInput GetInput() const;

                    /**
                     * 设置<p>检索输入</p>
                     * @param _input <p>检索输入</p>
                     * 
                     */
                    void SetInput(const SearchInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>检索上下文</p>
                     * @return Context <p>检索上下文</p>
                     * 
                     */
                    SearchContext GetContext() const;

                    /**
                     * 设置<p>检索上下文</p>
                     * @param _context <p>检索上下文</p>
                     * 
                     */
                    void SetContext(const SearchContext& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>计费信息</p>
                     * @return SearchBilling <p>计费信息</p>
                     * 
                     */
                    SearchBilling GetSearchBilling() const;

                    /**
                     * 设置<p>计费信息</p>
                     * @param _searchBilling <p>计费信息</p>
                     * 
                     */
                    void SetSearchBilling(const SearchBilling& _searchBilling);

                    /**
                     * 判断参数 SearchBilling 是否已赋值
                     * @return SearchBilling 是否已赋值
                     * 
                     */
                    bool SearchBillingHasBeenSet() const;

                private:

                    /**
                     * <p>检索高级配置</p>
                     */
                    SearchAdvancedConfig m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * <p>检索输入</p>
                     */
                    SearchInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>检索上下文</p>
                     */
                    SearchContext m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>计费信息</p>
                     */
                    SearchBilling m_searchBilling;
                    bool m_searchBillingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGEREQUEST_H_
