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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDRECORD_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * 短信发送记录信息
                */
                class SendRecord : public AbstractModel
                {
                public:
                    SendRecord();
                    ~SendRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * @return PhoneNumber <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * @param _phoneNumber <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取<p>发送流水号，与短信发送接口返回的发送流水号一致。</p>
                     * @return SerialNo <p>发送流水号，与短信发送接口返回的发送流水号一致。</p>
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置<p>发送流水号，与短信发送接口返回的发送流水号一致。</p>
                     * @param _serialNo <p>发送流水号，与短信发送接口返回的发送流水号一致。</p>
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取<p>发送状态。</p><p>枚举值：</p><ul><li>1： 提交失败</li><li>2： 提交成功，送达成功</li><li>3： 提交成功，发送中</li><li>4： 提交成功，送达失败</li></ul>
                     * @return SendStatus <p>发送状态。</p><p>枚举值：</p><ul><li>1： 提交失败</li><li>2： 提交成功，送达成功</li><li>3： 提交成功，发送中</li><li>4： 提交成功，送达失败</li></ul>
                     * 
                     */
                    uint64_t GetSendStatus() const;

                    /**
                     * 设置<p>发送状态。</p><p>枚举值：</p><ul><li>1： 提交失败</li><li>2： 提交成功，送达成功</li><li>3： 提交成功，发送中</li><li>4： 提交成功，送达失败</li></ul>
                     * @param _sendStatus <p>发送状态。</p><p>枚举值：</p><ul><li>1： 提交失败</li><li>2： 提交成功，送达成功</li><li>3： 提交成功，发送中</li><li>4： 提交成功，送达失败</li></ul>
                     * 
                     */
                    void SetSendStatus(const uint64_t& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                    /**
                     * 获取<p>请求状态码，可参考 <a href="https://cloud.tencent.com/document/api/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">短信 API 3.0 发送错误码</a>。</p>
                     * @return RequestCode <p>请求状态码，可参考 <a href="https://cloud.tencent.com/document/api/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">短信 API 3.0 发送错误码</a>。</p>
                     * 
                     */
                    std::string GetRequestCode() const;

                    /**
                     * 设置<p>请求状态码，可参考 <a href="https://cloud.tencent.com/document/api/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">短信 API 3.0 发送错误码</a>。</p>
                     * @param _requestCode <p>请求状态码，可参考 <a href="https://cloud.tencent.com/document/api/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">短信 API 3.0 发送错误码</a>。</p>
                     * 
                     */
                    void SetRequestCode(const std::string& _requestCode);

                    /**
                     * 判断参数 RequestCode 是否已赋值
                     * @return RequestCode 是否已赋值
                     * 
                     */
                    bool RequestCodeHasBeenSet() const;

                    /**
                     * 获取<p>回执状态码，仅发送状态为 2（提交成功，送达成功）和 4（提交成功，送达失败）时有值，其余状态为空字符串，可参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E5.9B.9E.E6.89.A7.E7.8A.B6.E6.80.81.E9.94.99.E8.AF.AF.E7.A0.81">回执状态错误码</a>。</p>
                     * @return StatusCode <p>回执状态码，仅发送状态为 2（提交成功，送达成功）和 4（提交成功，送达失败）时有值，其余状态为空字符串，可参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E5.9B.9E.E6.89.A7.E7.8A.B6.E6.80.81.E9.94.99.E8.AF.AF.E7.A0.81">回执状态错误码</a>。</p>
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置<p>回执状态码，仅发送状态为 2（提交成功，送达成功）和 4（提交成功，送达失败）时有值，其余状态为空字符串，可参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E5.9B.9E.E6.89.A7.E7.8A.B6.E6.80.81.E9.94.99.E8.AF.AF.E7.A0.81">回执状态错误码</a>。</p>
                     * @param _statusCode <p>回执状态码，仅发送状态为 2（提交成功，送达成功）和 4（提交成功，送达失败）时有值，其余状态为空字符串，可参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E5.9B.9E.E6.89.A7.E7.8A.B6.E6.80.81.E9.94.99.E8.AF.AF.E7.A0.81">回执状态错误码</a>。</p>
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051#402a55da-83ac-4e79-a604-b9de0c507756">国际/港澳台短信价格总览</a>。</p>
                     * @return IsoCode <p>国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051#402a55da-83ac-4e79-a604-b9de0c507756">国际/港澳台短信价格总览</a>。</p>
                     * 
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置<p>国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051#402a55da-83ac-4e79-a604-b9de0c507756">国际/港澳台短信价格总览</a>。</p>
                     * @param _isoCode <p>国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051#402a55da-83ac-4e79-a604-b9de0c507756">国际/港澳台短信价格总览</a>。</p>
                     * 
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     * 
                     */
                    bool IsoCodeHasBeenSet() const;

                    /**
                     * 获取<p>短信下发内容，为保证信息安全，短信中的部分入参信息会脱敏存储，对应发送记录查询结果中包含的打码内容，用户实际接收到的短信内容为正常完整内容。有疑问可咨询 <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云小助手</a> 。</p>
                     * @return Content <p>短信下发内容，为保证信息安全，短信中的部分入参信息会脱敏存储，对应发送记录查询结果中包含的打码内容，用户实际接收到的短信内容为正常完整内容。有疑问可咨询 <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云小助手</a> 。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>短信下发内容，为保证信息安全，短信中的部分入参信息会脱敏存储，对应发送记录查询结果中包含的打码内容，用户实际接收到的短信内容为正常完整内容。有疑问可咨询 <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云小助手</a> 。</p>
                     * @param _content <p>短信下发内容，为保证信息安全，短信中的部分入参信息会脱敏存储，对应发送记录查询结果中包含的打码内容，用户实际接收到的短信内容为正常完整内容。有疑问可咨询 <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云小助手</a> 。</p>
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
                     * 获取<p>发送时间，UNIX 时间戳（秒）。</p><p>单位：秒</p>
                     * @return SendTime <p>发送时间，UNIX 时间戳（秒）。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetSendTime() const;

                    /**
                     * 设置<p>发送时间，UNIX 时间戳（秒）。</p><p>单位：秒</p>
                     * @param _sendTime <p>发送时间，UNIX 时间戳（秒）。</p><p>单位：秒</p>
                     * 
                     */
                    void SetSendTime(const uint64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户实际收到短信的时间，UNIX 时间戳（秒），仅发送状态为2（提交成功，送达成功）时有值 ，其余状态默认为 0 。</p><p>单位：秒</p>
                     * @return UserReceiveTime <p>用户实际收到短信的时间，UNIX 时间戳（秒），仅发送状态为2（提交成功，送达成功）时有值 ，其余状态默认为 0 。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetUserReceiveTime() const;

                    /**
                     * 设置<p>用户实际收到短信的时间，UNIX 时间戳（秒），仅发送状态为2（提交成功，送达成功）时有值 ，其余状态默认为 0 。</p><p>单位：秒</p>
                     * @param _userReceiveTime <p>用户实际收到短信的时间，UNIX 时间戳（秒），仅发送状态为2（提交成功，送达成功）时有值 ，其余状态默认为 0 。</p><p>单位：秒</p>
                     * 
                     */
                    void SetUserReceiveTime(const uint64_t& _userReceiveTime);

                    /**
                     * 判断参数 UserReceiveTime 是否已赋值
                     * @return UserReceiveTime 是否已赋值
                     * 
                     */
                    bool UserReceiveTimeHasBeenSet() const;

                private:

                    /**
                     * <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>发送流水号，与短信发送接口返回的发送流水号一致。</p>
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * <p>发送状态。</p><p>枚举值：</p><ul><li>1： 提交失败</li><li>2： 提交成功，送达成功</li><li>3： 提交成功，发送中</li><li>4： 提交成功，送达失败</li></ul>
                     */
                    uint64_t m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                    /**
                     * <p>请求状态码，可参考 <a href="https://cloud.tencent.com/document/api/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">短信 API 3.0 发送错误码</a>。</p>
                     */
                    std::string m_requestCode;
                    bool m_requestCodeHasBeenSet;

                    /**
                     * <p>回执状态码，仅发送状态为 2（提交成功，送达成功）和 4（提交成功，送达失败）时有值，其余状态为空字符串，可参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E5.9B.9E.E6.89.A7.E7.8A.B6.E6.80.81.E9.94.99.E8.AF.AF.E7.A0.81">回执状态错误码</a>。</p>
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051#402a55da-83ac-4e79-a604-b9de0c507756">国际/港澳台短信价格总览</a>。</p>
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                    /**
                     * <p>短信下发内容，为保证信息安全，短信中的部分入参信息会脱敏存储，对应发送记录查询结果中包含的打码内容，用户实际接收到的短信内容为正常完整内容。有疑问可咨询 <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云小助手</a> 。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>发送时间，UNIX 时间戳（秒）。</p><p>单位：秒</p>
                     */
                    uint64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * <p>用户实际收到短信的时间，UNIX 时间戳（秒），仅发送状态为2（提交成功，送达成功）时有值 ，其余状态默认为 0 。</p><p>单位：秒</p>
                     */
                    uint64_t m_userReceiveTime;
                    bool m_userReceiveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDRECORD_H_
