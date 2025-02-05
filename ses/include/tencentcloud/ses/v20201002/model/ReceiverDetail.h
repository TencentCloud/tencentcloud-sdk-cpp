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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_

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
                * 收件人列表详情
                */
                class ReceiverDetail : public AbstractModel
                {
                public:
                    ReceiverDetail();
                    ~ReceiverDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收件人地址
                     * @return Email 收件人地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置收件人地址
                     * @param _email 收件人地址
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板参数
                     * @return TemplateData 模板参数
                     * 
                     */
                    std::string GetTemplateData() const;

                    /**
                     * 设置模板参数
                     * @param _templateData 模板参数
                     * 
                     */
                    void SetTemplateData(const std::string& _templateData);

                    /**
                     * 判断参数 TemplateData 是否已赋值
                     * @return TemplateData 是否已赋值
                     * 
                     */
                    bool TemplateDataHasBeenSet() const;

                    /**
                     * 获取无效原因
                     * @return Reason 无效原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置无效原因
                     * @param _reason 无效原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取1:有效，2:无效
                     * @return Status 1:有效，2:无效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1:有效，2:无效
                     * @param _status 1:有效，2:无效
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取收件人地址id
                     * @return EmailId 收件人地址id
                     * 
                     */
                    uint64_t GetEmailId() const;

                    /**
                     * 设置收件人地址id
                     * @param _emailId 收件人地址id
                     * 
                     */
                    void SetEmailId(const uint64_t& _emailId);

                    /**
                     * 判断参数 EmailId 是否已赋值
                     * @return EmailId 是否已赋值
                     * 
                     */
                    bool EmailIdHasBeenSet() const;

                private:

                    /**
                     * 收件人地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板参数
                     */
                    std::string m_templateData;
                    bool m_templateDataHasBeenSet;

                    /**
                     * 无效原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 1:有效，2:无效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 收件人地址id
                     */
                    uint64_t m_emailId;
                    bool m_emailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_
