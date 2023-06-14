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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECUSTOMHEADERREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECUSTOMHEADERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/HttpHeaderParam.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateCustomHeader请求参数结构体
                */
                class CreateCustomHeaderRequest : public AbstractModel
                {
                public:
                    CreateCustomHeaderRequest();
                    ~CreateCustomHeaderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取新增的header名称和内容列表， ‘’$remote_addr‘’会被解析替换成客户端ip，其他值原样透传到源站。
                     * @return Headers 新增的header名称和内容列表， ‘’$remote_addr‘’会被解析替换成客户端ip，其他值原样透传到源站。
                     * 
                     */
                    std::vector<HttpHeaderParam> GetHeaders() const;

                    /**
                     * 设置新增的header名称和内容列表， ‘’$remote_addr‘’会被解析替换成客户端ip，其他值原样透传到源站。
                     * @param _headers 新增的header名称和内容列表， ‘’$remote_addr‘’会被解析替换成客户端ip，其他值原样透传到源站。
                     * 
                     */
                    void SetHeaders(const std::vector<HttpHeaderParam>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 规则id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 新增的header名称和内容列表， ‘’$remote_addr‘’会被解析替换成客户端ip，其他值原样透传到源站。
                     */
                    std::vector<HttpHeaderParam> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECUSTOMHEADERREQUEST_H_
