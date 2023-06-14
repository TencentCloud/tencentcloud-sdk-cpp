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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveTranscodeRules请求参数结构体
                */
                class DescribeLiveTranscodeRulesRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeRulesRequest();
                    ~DescribeLiveTranscodeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要筛选的模板ID数组。
                     * @return TemplateIds 要筛选的模板ID数组。
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置要筛选的模板ID数组。
                     * @param _templateIds 要筛选的模板ID数组。
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取要筛选的域名数组。
                     * @return DomainNames 要筛选的域名数组。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置要筛选的域名数组。
                     * @param _domainNames 要筛选的域名数组。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                private:

                    /**
                     * 要筛选的模板ID数组。
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * 要筛选的域名数组。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_
