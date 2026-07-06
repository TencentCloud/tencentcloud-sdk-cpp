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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeRiskAnalysisDetails请求参数结构体
                */
                class DescribeRiskAnalysisDetailsRequest : public AbstractModel
                {
                public:
                    DescribeRiskAnalysisDetailsRequest();
                    ~DescribeRiskAnalysisDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取风险ID
                     * @return Id 风险ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置风险ID
                     * @param _id 风险ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取查询类型，analyze实时数据分析，task定时分析结果
                     * @return SearchType 查询类型，analyze实时数据分析，task定时分析结果
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 设置查询类型，analyze实时数据分析，task定时分析结果
                     * @param _searchType 查询类型，analyze实时数据分析，task定时分析结果
                     * 
                     */
                    void SetSearchType(const std::string& _searchType);

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取成员Id
                     * @return MemberId 成员Id
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置成员Id
                     * @param _memberId 成员Id
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 风险ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 查询类型，analyze实时数据分析，task定时分析结果
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * 成员Id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSREQUEST_H_
