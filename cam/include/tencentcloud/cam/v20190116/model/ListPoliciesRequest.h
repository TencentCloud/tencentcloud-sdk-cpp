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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListPolicies请求参数结构体
                */
                class ListPoliciesRequest : public AbstractModel
                {
                public:
                    ListPoliciesRequest();
                    ~ListPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页数量，默认值是 20，必须大于 0 且小于或等于 200</p>
                     * @return Rp <p>每页数量，默认值是 20，必须大于 0 且小于或等于 200</p>
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置<p>每页数量，默认值是 20，必须大于 0 且小于或等于 200</p>
                     * @param _rp <p>每页数量，默认值是 20，必须大于 0 且小于或等于 200</p>
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取<p>页码，默认值是 1，从 1开始，不能大于 200</p>
                     * @return Page <p>页码，默认值是 1，从 1开始，不能大于 200</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页码，默认值是 1，从 1开始，不能大于 200</p>
                     * @param _page <p>页码，默认值是 1，从 1开始，不能大于 200</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>可取值 &#39;All&#39;、&#39;QCS&#39; 和 &#39;Local&#39;，&#39;All&#39; 获取所有策略，&#39;QCS&#39; 只获取预设策略，&#39;Local&#39; 只获取自定义策略，默认取 &#39;All&#39;</p>
                     * @return Scope <p>可取值 &#39;All&#39;、&#39;QCS&#39; 和 &#39;Local&#39;，&#39;All&#39; 获取所有策略，&#39;QCS&#39; 只获取预设策略，&#39;Local&#39; 只获取自定义策略，默认取 &#39;All&#39;</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>可取值 &#39;All&#39;、&#39;QCS&#39; 和 &#39;Local&#39;，&#39;All&#39; 获取所有策略，&#39;QCS&#39; 只获取预设策略，&#39;Local&#39; 只获取自定义策略，默认取 &#39;All&#39;</p>
                     * @param _scope <p>可取值 &#39;All&#39;、&#39;QCS&#39; 和 &#39;Local&#39;，&#39;All&#39; 获取所有策略，&#39;QCS&#39; 只获取预设策略，&#39;Local&#39; 只获取自定义策略，默认取 &#39;All&#39;</p>
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
                     * 获取<p>按策略名匹配</p>
                     * @return Keyword <p>按策略名匹配</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按策略名匹配</p>
                     * @param _keyword <p>按策略名匹配</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * <p>每页数量，默认值是 20，必须大于 0 且小于或等于 200</p>
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * <p>页码，默认值是 1，从 1开始，不能大于 200</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>可取值 &#39;All&#39;、&#39;QCS&#39; 和 &#39;Local&#39;，&#39;All&#39; 获取所有策略，&#39;QCS&#39; 只获取预设策略，&#39;Local&#39; 只获取自定义策略，默认取 &#39;All&#39;</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>按策略名匹配</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_
