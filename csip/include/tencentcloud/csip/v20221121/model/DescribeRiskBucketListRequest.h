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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKBUCKETLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKBUCKETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRiskBucketList请求参数结构体
                */
                class DescribeRiskBucketListRequest : public AbstractModel
                {
                public:
                    DescribeRiskBucketListRequest();
                    ~DescribeRiskBucketListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关联的appid
                     * @return RelAppId 关联的appid
                     * 
                     */
                    int64_t GetRelAppId() const;

                    /**
                     * 设置关联的appid
                     * @param _relAppId 关联的appid
                     * 
                     */
                    void SetRelAppId(const int64_t& _relAppId);

                    /**
                     * 判断参数 RelAppId 是否已赋值
                     * @return RelAppId 是否已赋值
                     * 
                     */
                    bool RelAppIdHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return PolicyId 规则id
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置规则id
                     * @param _policyId 规则id
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取过滤器
                     * @return Filter 过滤器
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置过滤器
                     * @param _filter 过滤器
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 关联的appid
                     */
                    int64_t m_relAppId;
                    bool m_relAppIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 过滤器
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKBUCKETLISTREQUEST_H_
