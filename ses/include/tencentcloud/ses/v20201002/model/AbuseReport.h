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
                     * 获取<p>发送时间</p>
                     * @return DeliverTime <p>发送时间</p>
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置<p>发送时间</p>
                     * @param _deliverTime <p>发送时间</p>
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
                     * 获取<p>发信地址</p>
                     * @return OriginalMailFrom <p>发信地址</p>
                     * 
                     */
                    std::string GetOriginalMailFrom() const;

                    /**
                     * 设置<p>发信地址</p>
                     * @param _originalMailFrom <p>发信地址</p>
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
                     * 获取<p>收信地址</p>
                     * @return OriginalRcptTo <p>收信地址</p>
                     * 
                     */
                    std::string GetOriginalRcptTo() const;

                    /**
                     * 设置<p>收信地址</p>
                     * @param _originalRcptTo <p>收信地址</p>
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
                     * 获取<p>发信域名</p>
                     * @return FromDomain <p>发信域名</p>
                     * 
                     */
                    std::string GetFromDomain() const;

                    /**
                     * 设置<p>发信域名</p>
                     * @param _fromDomain <p>发信域名</p>
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
                     * 获取<p>投诉时间</p>
                     * @return ComplainTime <p>投诉时间</p>
                     * 
                     */
                    std::string GetComplainTime() const;

                    /**
                     * 设置<p>投诉时间</p>
                     * @param _complainTime <p>投诉时间</p>
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
                     * 获取<p>收信域名</p>
                     * @return Mta <p>收信域名</p>
                     * 
                     */
                    std::string GetMta() const;

                    /**
                     * 设置<p>收信域名</p>
                     * @param _mta <p>收信域名</p>
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
                     * 获取<p>来源ip</p>
                     * @return SourceIp <p>来源ip</p>
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置<p>来源ip</p>
                     * @param _sourceIp <p>来源ip</p>
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
                     * 获取<p>数据时间</p>
                     * @return InsertTime <p>数据时间</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>数据时间</p>
                     * @param _insertTime <p>数据时间</p>
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
                     * 获取<p>模板ID</p>
                     * @return TemplateId <p>模板ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _templateId <p>模板ID</p>
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
                     * 获取<p>bulkId</p>
                     * @return BulkId <p>bulkId</p>
                     * 
                     */
                    std::string GetBulkId() const;

                    /**
                     * 设置<p>bulkId</p>
                     * @param _bulkId <p>bulkId</p>
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
                     * 获取<p>邮件Message-Id</p>
                     * @return MessageId <p>邮件Message-Id</p>
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置<p>邮件Message-Id</p>
                     * @param _messageId <p>邮件Message-Id</p>
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
                     * 获取<p>投诉时间</p>
                     * @return AbuseTime <p>投诉时间</p>
                     * 
                     */
                    std::string GetAbuseTime() const;

                    /**
                     * 设置<p>投诉时间</p>
                     * @param _abuseTime <p>投诉时间</p>
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
                     * 获取<p>邮件主题</p>
                     * @return Subject <p>邮件主题</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>邮件主题</p>
                     * @param _subject <p>邮件主题</p>
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
                     * <p>发送时间</p>
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * <p>发信地址</p>
                     */
                    std::string m_originalMailFrom;
                    bool m_originalMailFromHasBeenSet;

                    /**
                     * <p>收信地址</p>
                     */
                    std::string m_originalRcptTo;
                    bool m_originalRcptToHasBeenSet;

                    /**
                     * <p>发信域名</p>
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * <p>投诉时间</p>
                     */
                    std::string m_complainTime;
                    bool m_complainTimeHasBeenSet;

                    /**
                     * <p>收信域名</p>
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * <p>来源ip</p>
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * <p>数据时间</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>模板ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>bulkId</p>
                     */
                    std::string m_bulkId;
                    bool m_bulkIdHasBeenSet;

                    /**
                     * <p>邮件Message-Id</p>
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>投诉时间</p>
                     */
                    std::string m_abuseTime;
                    bool m_abuseTimeHasBeenSet;

                    /**
                     * <p>邮件主题</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
