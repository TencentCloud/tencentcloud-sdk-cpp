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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 垃圾投诉数据
                */
                class AbuseReport : public AbstractModel
                {
                public:
                    AbuseReport();
                    ~AbuseReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发送时间
                     * @return DeliverTime 发送时间
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置发送时间
                     * @param _deliverTime 发送时间
                     * 
                     */
                    void SetDeliverTime(const std::string& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取发信地址
                     * @return OriginalMailFrom 发信地址
                     * 
                     */
                    std::string GetOriginalMailFrom() const;

                    /**
                     * 设置发信地址
                     * @param _originalMailFrom 发信地址
                     * 
                     */
                    void SetOriginalMailFrom(const std::string& _originalMailFrom);

                    /**
                     * 判断参数 OriginalMailFrom 是否已赋值
                     * @return OriginalMailFrom 是否已赋值
                     * 
                     */
                    bool OriginalMailFromHasBeenSet() const;

                    /**
                     * 获取收信地址
                     * @return OriginalRcptTo 收信地址
                     * 
                     */
                    std::string GetOriginalRcptTo() const;

                    /**
                     * 设置收信地址
                     * @param _originalRcptTo 收信地址
                     * 
                     */
                    void SetOriginalRcptTo(const std::string& _originalRcptTo);

                    /**
                     * 判断参数 OriginalRcptTo 是否已赋值
                     * @return OriginalRcptTo 是否已赋值
                     * 
                     */
                    bool OriginalRcptToHasBeenSet() const;

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
                     * 获取投诉时间
                     * @return ComplainTime 投诉时间
                     * 
                     */
                    std::string GetComplainTime() const;

                    /**
                     * 设置投诉时间
                     * @param _complainTime 投诉时间
                     * 
                     */
                    void SetComplainTime(const std::string& _complainTime);

                    /**
                     * 判断参数 ComplainTime 是否已赋值
                     * @return ComplainTime 是否已赋值
                     * 
                     */
                    bool ComplainTimeHasBeenSet() const;

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
                     * 获取来源ip
                     * @return SourceIp 来源ip
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置来源ip
                     * @param _sourceIp 来源ip
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取数据时间
                     * @return InsertTime 数据时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置数据时间
                     * @param _insertTime 数据时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取bulkId
                     * @return BulkId bulkId
                     * 
                     */
                    std::string GetBulkId() const;

                    /**
                     * 设置bulkId
                     * @param _bulkId bulkId
                     * 
                     */
                    void SetBulkId(const std::string& _bulkId);

                    /**
                     * 判断参数 BulkId 是否已赋值
                     * @return BulkId 是否已赋值
                     * 
                     */
                    bool BulkIdHasBeenSet() const;

                    /**
                     * 获取邮件Message-Id
                     * @return MessageId 邮件Message-Id
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置邮件Message-Id
                     * @param _messageId 邮件Message-Id
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取投诉时间
                     * @return AbuseTime 投诉时间
                     * 
                     */
                    std::string GetAbuseTime() const;

                    /**
                     * 设置投诉时间
                     * @param _abuseTime 投诉时间
                     * 
                     */
                    void SetAbuseTime(const std::string& _abuseTime);

                    /**
                     * 判断参数 AbuseTime 是否已赋值
                     * @return AbuseTime 是否已赋值
                     * 
                     */
                    bool AbuseTimeHasBeenSet() const;

                    /**
                     * 获取邮件主题
                     * @return Subject 邮件主题
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置邮件主题
                     * @param _subject 邮件主题
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                private:

                    /**
                     * 发送时间
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * 发信地址
                     */
                    std::string m_originalMailFrom;
                    bool m_originalMailFromHasBeenSet;

                    /**
                     * 收信地址
                     */
                    std::string m_originalRcptTo;
                    bool m_originalRcptToHasBeenSet;

                    /**
                     * 发信域名
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * 投诉时间
                     */
                    std::string m_complainTime;
                    bool m_complainTimeHasBeenSet;

                    /**
                     * 收信域名
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * 来源ip
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * bulkId
                     */
                    std::string m_bulkId;
                    bool m_bulkIdHasBeenSet;

                    /**
                     * 邮件Message-Id
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 投诉时间
                     */
                    std::string m_abuseTime;
                    bool m_abuseTimeHasBeenSet;

                    /**
                     * 邮件主题
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
