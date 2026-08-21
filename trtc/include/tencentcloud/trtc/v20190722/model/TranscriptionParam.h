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
                     * 获取<p>转录服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * @return UserId <p>转录服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>转录服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * @param _userId <p>转录服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
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
                     * 获取<p>转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * @return UserSig <p>转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置<p>转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * @param _userSig <p>转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
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
                     * 获取<p>转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。<br>使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @return SubscribeList <p>转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。<br>使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetSubscribeList() const;

                    /**
                     * 设置<p>转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。<br>使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @param _subscribeList <p>转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。<br>使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
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
                     * 获取<p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。<br>同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @return UnSubscribeList <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。<br>同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetUnSubscribeList() const;

                    /**
                     * 设置<p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。<br>同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @param _unSubscribeList <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。<br>同一个用户同时在黑白名单时，以黑名单为主。</p>
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
                     * 获取<p>所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p>
                     * @return MaxIdleTime <p>所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p>
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置<p>所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p>
                     * @param _maxIdleTime <p>所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p>
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
                     * 获取<p>自定义数据模式： 0表示不开启自定义数据，1表示开启自定义数据。<br>不填默认为0，表示不开启自定义数据。</p>
                     * @return SendCustomMode <p>自定义数据模式： 0表示不开启自定义数据，1表示开启自定义数据。<br>不填默认为0，表示不开启自定义数据。</p>
                     * 
                     */
                    uint64_t GetSendCustomMode() const;

                    /**
                     * 设置<p>自定义数据模式： 0表示不开启自定义数据，1表示开启自定义数据。<br>不填默认为0，表示不开启自定义数据。</p>
                     * @param _sendCustomMode <p>自定义数据模式： 0表示不开启自定义数据，1表示开启自定义数据。<br>不填默认为0，表示不开启自定义数据。</p>
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
                     * <p>转录服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者转录服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>转录服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * <p>转录用户白名单，开始服务时，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。<br>使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     */
                    std::vector<TranscriptionUserInfoParams> m_subscribeList;
                    bool m_subscribeListHasBeenSet;

                    /**
                     * <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。<br>同一个用户同时在黑白名单时，以黑名单为主。</p>
                     */
                    std::vector<TranscriptionUserInfoParams> m_unSubscribeList;
                    bool m_unSubscribeListHasBeenSet;

                    /**
                     * <p>所有参与转录的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转录任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p>
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * <p>自定义数据模式： 0表示不开启自定义数据，1表示开启自定义数据。<br>不填默认为0，表示不开启自定义数据。</p>
                     */
                    uint64_t m_sendCustomMode;
                    bool m_sendCustomModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_
