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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 转录服务加入TRTC房间的参数。
                */
                class TranscriptionParam : public AbstractModel
                {
                public:
                    TranscriptionParam();
                    ~TranscriptionParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转录服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @return UserId 转录服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置转录服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @param _userId 转录服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param _userSig 转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。
使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。
                     * @return SubscribeList 转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。
使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetSubscribeList() const;

                    /**
                     * 设置转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。
使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。
                     * @param _subscribeList 转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。
使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    void SetSubscribeList(const std::vector<TranscriptionUserInfoParams>& _subscribeList);

                    /**
                     * 判断参数 SubscribeList 是否已赋值
                     * @return SubscribeList 是否已赋值
                     * 
                     */
                    bool SubscribeListHasBeenSet() const;

                    /**
                     * 获取转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。
同一个用户同时在黑白名单时，以黑名单为主。
                     * @return UnSubscribeList 转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。
同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetUnSubscribeList() const;

                    /**
                     * 设置转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。
同一个用户同时在黑白名单时，以黑名单为主。
                     * @param _unSubscribeList 转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。
同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    void SetUnSubscribeList(const std::vector<TranscriptionUserInfoParams>& _unSubscribeList);

                    /**
                     * 判断参数 UnSubscribeList 是否已赋值
                     * @return UnSubscribeList 是否已赋值
                     * 
                     */
                    bool UnSubscribeListHasBeenSet() const;

                    /**
                     * 获取所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @return MaxIdleTime 所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @param _maxIdleTime 所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取自定义通道：支持自定义信息，只可以填0-2， 0表示不开启自定义通道，1表示开启自定义数据，2表示开启自定义消息。不填默认不开启自定义通道。注意：填1自定义数据只对 SDK版本 >= 5.15.0生效。
                     * @return SendCustomMode 自定义通道：支持自定义信息，只可以填0-2， 0表示不开启自定义通道，1表示开启自定义数据，2表示开启自定义消息。不填默认不开启自定义通道。注意：填1自定义数据只对 SDK版本 >= 5.15.0生效。
                     * 
                     */
                    uint64_t GetSendCustomMode() const;

                    /**
                     * 设置自定义通道：支持自定义信息，只可以填0-2， 0表示不开启自定义通道，1表示开启自定义数据，2表示开启自定义消息。不填默认不开启自定义通道。注意：填1自定义数据只对 SDK版本 >= 5.15.0生效。
                     * @param _sendCustomMode 自定义通道：支持自定义信息，只可以填0-2， 0表示不开启自定义通道，1表示开启自定义数据，2表示开启自定义消息。不填默认不开启自定义通道。注意：填1自定义数据只对 SDK版本 >= 5.15.0生效。
                     * 
                     */
                    void SetSendCustomMode(const uint64_t& _sendCustomMode);

                    /**
                     * 判断参数 SendCustomMode 是否已赋值
                     * @return SendCustomMode 是否已赋值
                     * 
                     */
                    bool SendCustomModeHasBeenSet() const;

                private:

                    /**
                     * 转录服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。
使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。
                     */
                    std::vector<TranscriptionUserInfoParams> m_subscribeList;
                    bool m_subscribeListHasBeenSet;

                    /**
                     * 转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。
同一个用户同时在黑白名单时，以黑名单为主。
                     */
                    std::vector<TranscriptionUserInfoParams> m_unSubscribeList;
                    bool m_unSubscribeListHasBeenSet;

                    /**
                     * 所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 自定义通道：支持自定义信息，只可以填0-2， 0表示不开启自定义通道，1表示开启自定义数据，2表示开启自定义消息。不填默认不开启自定义通道。注意：填1自定义数据只对 SDK版本 >= 5.15.0生效。
                     */
                    uint64_t m_sendCustomMode;
                    bool m_sendCustomModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_
