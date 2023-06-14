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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_RESSMS_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_RESSMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 查询短信列表
                */
                class ResSms : public AbstractModel
                {
                public:
                    ResSms();
                    ~ResSms() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Iccid 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iccid 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取卡片号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msisdn 卡片号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsisdn() const;

                    /**
                     * 设置卡片号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msisdn 卡片号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsisdn(const std::string& _msisdn);

                    /**
                     * 判断参数 Msisdn 是否已赋值
                     * @return Msisdn 是否已赋值
                     * 
                     */
                    bool MsisdnHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SdkAppid 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSdkAppid() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sdkAppid 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSdkAppid(const int64_t& _sdkAppid);

                    /**
                     * 判断参数 SdkAppid 是否已赋值
                     * @return SdkAppid 是否已赋值
                     * 
                     */
                    bool SdkAppidHasBeenSet() const;

                    /**
                     * 获取短信内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 短信内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置短信内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 短信内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取短信类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmsType 短信类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSmsType() const;

                    /**
                     * 设置短信类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smsType 短信类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmsType(const int64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendTime 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendTime() const;

                    /**
                     * 设置发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendTime 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendTime(const std::string& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取推送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTime 推送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置推送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTime 推送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取SUCC：成功  FAIL 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark SUCC：成功  FAIL 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置SUCC：成功  FAIL 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark SUCC：成功  FAIL 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取回执状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 回执状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置回执状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 回执状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 卡片号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msisdn;
                    bool m_msisdnHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sdkAppid;
                    bool m_sdkAppidHasBeenSet;

                    /**
                     * 短信内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 短信类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * 推送时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * SUCC：成功  FAIL 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 回执状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_RESSMS_H_
