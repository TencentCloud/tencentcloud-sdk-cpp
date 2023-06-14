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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetStatisticsReport请求参数结构体
                */
                class GetStatisticsReportRequest : public AbstractModel
                {
                public:
                    GetStatisticsReportRequest();
                    ~GetStatisticsReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始日期
                     * @return StartDate 开始日期
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期
                     * @param _startDate 开始日期
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期
                     * @return EndDate 结束日期
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期
                     * @param _endDate 结束日期
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取发信域名
                     * @return Domain 发信域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置发信域名
                     * @param _domain 发信域名
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
                     * 获取收件方邮箱类型，例如gmail.com
                     * @return ReceivingMailboxType 收件方邮箱类型，例如gmail.com
                     * 
                     */
                    std::string GetReceivingMailboxType() const;

                    /**
                     * 设置收件方邮箱类型，例如gmail.com
                     * @param _receivingMailboxType 收件方邮箱类型，例如gmail.com
                     * 
                     */
                    void SetReceivingMailboxType(const std::string& _receivingMailboxType);

                    /**
                     * 判断参数 ReceivingMailboxType 是否已赋值
                     * @return ReceivingMailboxType 是否已赋值
                     * 
                     */
                    bool ReceivingMailboxTypeHasBeenSet() const;

                private:

                    /**
                     * 开始日期
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 发信域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 收件方邮箱类型，例如gmail.com
                     */
                    std::string m_receivingMailboxType;
                    bool m_receivingMailboxTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTREQUEST_H_
