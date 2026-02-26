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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_

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
                * GetAbuseReport请求参数结构体
                */
                class GetAbuseReportRequest : public AbstractModel
                {
                public:
                    GetAbuseReportRequest();
                    ~GetAbuseReportRequest() = default;
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数量（默认为1000）
                     * @return Limit 限制数量（默认为1000）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数量（默认为1000）
                     * @param _limit 限制数量（默认为1000）
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取发信域名
                     * @return FromDomain 发信域名
                     * 
                     */
                    std::string GetFromDomain() const;

                    /**
                     * 设置发信域名
                     * @param _fromDomain 发信域名
                     * 
                     */
                    void SetFromDomain(const std::string& _fromDomain);

                    /**
                     * 判断参数 FromDomain 是否已赋值
                     * @return FromDomain 是否已赋值
                     * 
                     */
                    bool FromDomainHasBeenSet() const;

                    /**
                     * 获取发信地址
                     * @return FromAddress 发信地址
                     * 
                     */
                    std::string GetFromAddress() const;

                    /**
                     * 设置发信地址
                     * @param _fromAddress 发信地址
                     * 
                     */
                    void SetFromAddress(const std::string& _fromAddress);

                    /**
                     * 判断参数 FromAddress 是否已赋值
                     * @return FromAddress 是否已赋值
                     * 
                     */
                    bool FromAddressHasBeenSet() const;

                    /**
                     * 获取收信域名
                     * @return Mta 收信域名
                     * 
                     */
                    std::string GetMta() const;

                    /**
                     * 设置收信域名
                     * @param _mta 收信域名
                     * 
                     */
                    void SetMta(const std::string& _mta);

                    /**
                     * 判断参数 Mta 是否已赋值
                     * @return Mta 是否已赋值
                     * 
                     */
                    bool MtaHasBeenSet() const;

                    /**
                     * 获取收信地址
                     * @return ToAddress 收信地址
                     * 
                     */
                    std::string GetToAddress() const;

                    /**
                     * 设置收信地址
                     * @param _toAddress 收信地址
                     * 
                     */
                    void SetToAddress(const std::string& _toAddress);

                    /**
                     * 判断参数 ToAddress 是否已赋值
                     * @return ToAddress 是否已赋值
                     * 
                     */
                    bool ToAddressHasBeenSet() const;

                    /**
                     * 获取模版id
                     * @return TemplateId 模版id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模版id
                     * @param _templateId 模版id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

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
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量（默认为1000）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 发信域名
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * 发信地址
                     */
                    std::string m_fromAddress;
                    bool m_fromAddressHasBeenSet;

                    /**
                     * 收信域名
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * 收信地址
                     */
                    std::string m_toAddress;
                    bool m_toAddressHasBeenSet;

                    /**
                     * 模版id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_
