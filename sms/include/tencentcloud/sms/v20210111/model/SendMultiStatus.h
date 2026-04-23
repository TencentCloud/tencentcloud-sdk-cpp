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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTISTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTISTATUS_H_

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
                * 发送短信状态
                */
                class SendMultiStatus : public AbstractModel
                {
                public:
                    SendMultiStatus();
                    ~SendMultiStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发送流水号。</p>
                     * @return SerialNo <p>发送流水号。</p>
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置<p>发送流水号。</p>
                     * @param _serialNo <p>发送流水号。</p>
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
                     * 获取<p>手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * @return PhoneNumber <p>手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * @param _phoneNumber <p>手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
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
                     * 获取<p>计费条数，计费规则请查询 <a href="https://cloud.tencent.com/document/product/382/36135">计费策略</a>。</p>
                     * @return Fee <p>计费条数，计费规则请查询 <a href="https://cloud.tencent.com/document/product/382/36135">计费策略</a>。</p>
                     * 
                     */
                    uint64_t GetFee() const;

                    /**
                     * 设置<p>计费条数，计费规则请查询 <a href="https://cloud.tencent.com/document/product/382/36135">计费策略</a>。</p>
                     * @param _fee <p>计费条数，计费规则请查询 <a href="https://cloud.tencent.com/document/product/382/36135">计费策略</a>。</p>
                     * 
                     */
                    void SetFee(const uint64_t& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                    /**
                     * 获取<p>用户 session 内容。</p>
                     * @return SessionContext <p>用户 session 内容。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>用户 session 内容。</p>
                     * @param _sessionContext <p>用户 session 内容。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>短信请求错误码，具体含义请参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">错误码</a>，发送成功返回 &quot;Ok&quot;。</p>
                     * @return Code <p>短信请求错误码，具体含义请参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">错误码</a>，发送成功返回 &quot;Ok&quot;。</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>短信请求错误码，具体含义请参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">错误码</a>，发送成功返回 &quot;Ok&quot;。</p>
                     * @param _code <p>短信请求错误码，具体含义请参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">错误码</a>，发送成功返回 &quot;Ok&quot;。</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>短信请求错误码描述。</p>
                     * @return Message <p>短信请求错误码描述。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>短信请求错误码描述。</p>
                     * @param _message <p>短信请求错误码描述。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>国家码或地区码，例如 US、MY 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051">国际/港澳台短信价格总览</a>。</p>
                     * @return IsoCode <p>国家码或地区码，例如 US、MY 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051">国际/港澳台短信价格总览</a>。</p>
                     * 
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置<p>国家码或地区码，例如 US、MY 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051">国际/港澳台短信价格总览</a>。</p>
                     * @param _isoCode <p>国家码或地区码，例如 US、MY 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051">国际/港澳台短信价格总览</a>。</p>
                     * 
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     * 
                     */
                    bool IsoCodeHasBeenSet() const;

                private:

                    /**
                     * <p>发送流水号。</p>
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * <p>手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>计费条数，计费规则请查询 <a href="https://cloud.tencent.com/document/product/382/36135">计费策略</a>。</p>
                     */
                    uint64_t m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * <p>用户 session 内容。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>短信请求错误码，具体含义请参考 <a href="https://cloud.tencent.com/document/product/382/59177#.E7.9F.AD.E4.BF.A1-API-3.0-.E5.8F.91.E9.80.81.E9.94.99.E8.AF.AF.E7.A0.81">错误码</a>，发送成功返回 &quot;Ok&quot;。</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>短信请求错误码描述。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>国家码或地区码，例如 US、MY 等，对于未识别出国家码或者地区码，默认返回 DEF，具体支持列表请参考 <a href="https://cloud.tencent.com/document/product/382/18051">国际/港澳台短信价格总览</a>。</p>
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTISTATUS_H_
