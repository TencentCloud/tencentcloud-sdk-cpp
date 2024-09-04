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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKTOTALCOUNTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKTOTALCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GetAttackTotalCount请求参数结构体
                */
                class GetAttackTotalCountRequest : public AbstractModel
                {
                public:
                    GetAttackTotalCountRequest();
                    ~GetAttackTotalCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询的域名，全部域名填all
                     * @return Domain 查询的域名，全部域名填all
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询的域名，全部域名填all
                     * @param _domain 查询的域名，全部域名填all
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取查询条件，默认为""
                     * @return QueryString 查询条件，默认为""
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置查询条件，默认为""
                     * @param _queryString 查询条件，默认为""
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询的域名，全部域名填all
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 查询条件，默认为""
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKTOTALCOUNTREQUEST_H_
