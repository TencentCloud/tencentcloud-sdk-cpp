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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ClearEmbedToken请求参数结构体
                */
                class ClearEmbedTokenRequest : public AbstractModel
                {
                public:
                    ClearEmbedTokenRequest();
                    ~ClearEmbedTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取主账号id
                     * @return UserCorpId 主账号id
                     * 
                     */
                    std::string GetUserCorpId() const;

                    /**
                     * 设置主账号id
                     * @param _userCorpId 主账号id
                     * 
                     */
                    void SetUserCorpId(const std::string& _userCorpId);

                    /**
                     * 判断参数 UserCorpId 是否已赋值
                     * @return UserCorpId 是否已赋值
                     * 
                     */
                    bool UserCorpIdHasBeenSet() const;

                    /**
                     * 获取panel , page
                     * @return Scope panel , page
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置panel , page
                     * @param _scope panel , page
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取page id
                     * @return PageId page id
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置page id
                     * @param _pageId page id
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 主账号id
                     */
                    std::string m_userCorpId;
                    bool m_userCorpIdHasBeenSet;

                    /**
                     * panel , page
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * page id
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENREQUEST_H_
