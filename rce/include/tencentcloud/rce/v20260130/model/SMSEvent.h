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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 短信事件详情
                */
                class SMSEvent : public AbstractModel
                {
                public:
                    SMSEvent();
                    ~SMSEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户基础信息</p>
                     * @return UserInfo <p>用户基础信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>用户基础信息</p>
                     * @param _userInfo <p>用户基础信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>本次短信发送标识 ID</p>
                     * @return SMSId <p>本次短信发送标识 ID</p>
                     * 
                     */
                    std::string GetSMSId() const;

                    /**
                     * 设置<p>本次短信发送标识 ID</p>
                     * @param _sMSId <p>本次短信发送标识 ID</p>
                     * 
                     */
                    void SetSMSId(const std::string& _sMSId);

                    /**
                     * 判断参数 SMSId 是否已赋值
                     * @return SMSId 是否已赋值
                     * 
                     */
                    bool SMSIdHasBeenSet() const;

                    /**
                     * 获取<p>用户实际完成验证码时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @return ReceivedTime <p>用户实际完成验证码时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    std::string GetReceivedTime() const;

                    /**
                     * 设置<p>用户实际完成验证码时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @param _receivedTime <p>用户实际完成验证码时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    void SetReceivedTime(const std::string& _receivedTime);

                    /**
                     * 判断参数 ReceivedTime 是否已赋值
                     * @return ReceivedTime 是否已赋值
                     * 
                     */
                    bool ReceivedTimeHasBeenSet() const;

                    /**
                     * 获取<p>记录用户收到短信的动作</p><ul><li>no_action：用户无动作</li><li>safe：用户确认本人操作</li><li>compromised：用户反馈为第三方操作</li></ul>
                     * @return Action <p>记录用户收到短信的动作</p><ul><li>no_action：用户无动作</li><li>safe：用户确认本人操作</li><li>compromised：用户反馈为第三方操作</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>记录用户收到短信的动作</p><ul><li>no_action：用户无动作</li><li>safe：用户确认本人操作</li><li>compromised：用户反馈为第三方操作</li></ul>
                     * @param _action <p>记录用户收到短信的动作</p><ul><li>no_action：用户无动作</li><li>safe：用户确认本人操作</li><li>compromised：用户反馈为第三方操作</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>短信回执结果</p>
                     * @return SMSResult <p>短信回执结果</p>
                     * 
                     */
                    Result GetSMSResult() const;

                    /**
                     * 设置<p>短信回执结果</p>
                     * @param _sMSResult <p>短信回执结果</p>
                     * 
                     */
                    void SetSMSResult(const Result& _sMSResult);

                    /**
                     * 判断参数 SMSResult 是否已赋值
                     * @return SMSResult 是否已赋值
                     * 
                     */
                    bool SMSResultHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>用户基础信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>本次短信发送标识 ID</p>
                     */
                    std::string m_sMSId;
                    bool m_sMSIdHasBeenSet;

                    /**
                     * <p>用户实际完成验证码时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     */
                    std::string m_receivedTime;
                    bool m_receivedTimeHasBeenSet;

                    /**
                     * <p>记录用户收到短信的动作</p><ul><li>no_action：用户无动作</li><li>safe：用户确认本人操作</li><li>compromised：用户反馈为第三方操作</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>短信回执结果</p>
                     */
                    Result m_sMSResult;
                    bool m_sMSResultHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_
