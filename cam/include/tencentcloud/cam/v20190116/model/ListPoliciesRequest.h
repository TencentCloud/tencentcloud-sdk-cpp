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
                     * 获取每页数量，默认值是 20，必须大于 0 且小于或等于 200
                     * @return Rp 每页数量，默认值是 20，必须大于 0 且小于或等于 200
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页数量，默认值是 20，必须大于 0 且小于或等于 200
                     * @param _rp 每页数量，默认值是 20，必须大于 0 且小于或等于 200
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
                     * 获取页码，默认值是 1，从 1开始，不能大于 200
                     * @return Page 页码，默认值是 1，从 1开始，不能大于 200
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，默认值是 1，从 1开始，不能大于 200
                     * @param _page 页码，默认值是 1，从 1开始，不能大于 200
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
                     * 获取可取值 'All'、'QCS' 和 'Local'，'All' 获取所有策略，'QCS' 只获取预设策略，'Local' 只获取自定义策略，默认取 'All'
                     * @return Scope 可取值 'All'、'QCS' 和 'Local'，'All' 获取所有策略，'QCS' 只获取预设策略，'Local' 只获取自定义策略，默认取 'All'
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置可取值 'All'、'QCS' 和 'Local'，'All' 获取所有策略，'QCS' 只获取预设策略，'Local' 只获取自定义策略，默认取 'All'
                     * @param _scope 可取值 'All'、'QCS' 和 'Local'，'All' 获取所有策略，'QCS' 只获取预设策略，'Local' 只获取自定义策略，默认取 'All'
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
                     * 获取按策略名匹配
                     * @return Keyword 按策略名匹配
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置按策略名匹配
                     * @param _keyword 按策略名匹配
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
                     * 每页数量，默认值是 20，必须大于 0 且小于或等于 200
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 页码，默认值是 1，从 1开始，不能大于 200
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 可取值 'All'、'QCS' 和 'Local'，'All' 获取所有策略，'QCS' 只获取预设策略，'Local' 只获取自定义策略，默认取 'All'
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 按策略名匹配
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_
