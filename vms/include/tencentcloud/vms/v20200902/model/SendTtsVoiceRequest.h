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

#ifndef TENCENTCLOUD_VMS_V20200902_MODEL_SENDTTSVOICEREQUEST_H_
#define TENCENTCLOUD_VMS_V20200902_MODEL_SENDTTSVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vms
    {
        namespace V20200902
        {
            namespace Model
            {
                /**
                * SendTtsVoice请求参数结构体
                */
                class SendTtsVoiceRequest : public AbstractModel
                {
                public:
                    SendTtsVoiceRequest();
                    ~SendTtsVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板 ID，在控制台审核通过的模板 ID。
                     * @return TemplateId 模板 ID，在控制台审核通过的模板 ID。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板 ID，在控制台审核通过的模板 ID。
                     * @param _templateId 模板 ID，在控制台审核通过的模板 ID。
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
                     * 获取被叫手机号码，采用 e.164 标准，格式为+[国家或地区码][用户号码]。
例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * @return CalledNumber 被叫手机号码，采用 e.164 标准，格式为+[国家或地区码][用户号码]。
例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * 
                     */
                    std::string GetCalledNumber() const;

                    /**
                     * 设置被叫手机号码，采用 e.164 标准，格式为+[国家或地区码][用户号码]。
例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * @param _calledNumber 被叫手机号码，采用 e.164 标准，格式为+[国家或地区码][用户号码]。
例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * 
                     */
                    void SetCalledNumber(const std::string& _calledNumber);

                    /**
                     * 判断参数 CalledNumber 是否已赋值
                     * @return CalledNumber 是否已赋值
                     * 
                     */
                    bool CalledNumberHasBeenSet() const;

                    /**
                     * 获取在[语音控制台](https://console.cloud.tencent.com/vms)添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @return VoiceSdkAppid 在[语音控制台](https://console.cloud.tencent.com/vms)添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    std::string GetVoiceSdkAppid() const;

                    /**
                     * 设置在[语音控制台](https://console.cloud.tencent.com/vms)添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @param _voiceSdkAppid 在[语音控制台](https://console.cloud.tencent.com/vms)添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    void SetVoiceSdkAppid(const std::string& _voiceSdkAppid);

                    /**
                     * 判断参数 VoiceSdkAppid 是否已赋值
                     * @return VoiceSdkAppid 是否已赋值
                     * 
                     */
                    bool VoiceSdkAppidHasBeenSet() const;

                    /**
                     * 获取模板参数，若模板没有参数，请提供为空数组。
注：语音消息的内容长度不超过350字。
                     * @return TemplateParamSet 模板参数，若模板没有参数，请提供为空数组。
注：语音消息的内容长度不超过350字。
                     * 
                     */
                    std::vector<std::string> GetTemplateParamSet() const;

                    /**
                     * 设置模板参数，若模板没有参数，请提供为空数组。
注：语音消息的内容长度不超过350字。
                     * @param _templateParamSet 模板参数，若模板没有参数，请提供为空数组。
注：语音消息的内容长度不超过350字。
                     * 
                     */
                    void SetTemplateParamSet(const std::vector<std::string>& _templateParamSet);

                    /**
                     * 判断参数 TemplateParamSet 是否已赋值
                     * @return TemplateParamSet 是否已赋值
                     * 
                     */
                    bool TemplateParamSetHasBeenSet() const;

                    /**
                     * 获取播放次数，可选，最多3次，默认2次。
                     * @return PlayTimes 播放次数，可选，最多3次，默认2次。
                     * 
                     */
                    uint64_t GetPlayTimes() const;

                    /**
                     * 设置播放次数，可选，最多3次，默认2次。
                     * @param _playTimes 播放次数，可选，最多3次，默认2次。
                     * 
                     */
                    void SetPlayTimes(const uint64_t& _playTimes);

                    /**
                     * 判断参数 PlayTimes 是否已赋值
                     * @return PlayTimes 是否已赋值
                     * 
                     */
                    bool PlayTimesHasBeenSet() const;

                    /**
                     * 获取用户的 session 内容，腾讯 server 回包中会原样返回。
                     * @return SessionContext 用户的 session 内容，腾讯 server 回包中会原样返回。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置用户的 session 内容，腾讯 server 回包中会原样返回。
                     * @param _sessionContext 用户的 session 内容，腾讯 server 回包中会原样返回。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 模板 ID，在控制台审核通过的模板 ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 被叫手机号码，采用 e.164 标准，格式为+[国家或地区码][用户号码]。
例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     */
                    std::string m_calledNumber;
                    bool m_calledNumberHasBeenSet;

                    /**
                     * 在[语音控制台](https://console.cloud.tencent.com/vms)添加应用后生成的实际SdkAppid，示例如1400006666。
                     */
                    std::string m_voiceSdkAppid;
                    bool m_voiceSdkAppidHasBeenSet;

                    /**
                     * 模板参数，若模板没有参数，请提供为空数组。
注：语音消息的内容长度不超过350字。
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * 播放次数，可选，最多3次，默认2次。
                     */
                    uint64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                    /**
                     * 用户的 session 内容，腾讯 server 回包中会原样返回。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VMS_V20200902_MODEL_SENDTTSVOICEREQUEST_H_
