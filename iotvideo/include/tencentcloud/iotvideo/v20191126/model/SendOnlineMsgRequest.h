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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SENDONLINEMSGREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SENDONLINEMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * SendOnlineMsg请求参数结构体
                */
                class SendOnlineMsgRequest : public AbstractModel
                {
                public:
                    SendOnlineMsgRequest();
                    ~SendOnlineMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取如果设备处于休眠状态，是否唤醒设备
                     * @return Wakeup 如果设备处于休眠状态，是否唤醒设备
                     * 
                     */
                    bool GetWakeup() const;

                    /**
                     * 设置如果设备处于休眠状态，是否唤醒设备
                     * @param _wakeup 如果设备处于休眠状态，是否唤醒设备
                     * 
                     */
                    void SetWakeup(const bool& _wakeup);

                    /**
                     * 判断参数 Wakeup 是否已赋值
                     * @return Wakeup 是否已赋值
                     * 
                     */
                    bool WakeupHasBeenSet() const;

                    /**
                     * 获取等待回应类型
0：不等待设备回应直接响应请求;
1：要求设备确认消息已接收,或等待超时后返回;
2：要求设备进行响应处理,收到设备的响应数据后,将设备响应数据回应给请求方;
                     * @return WaitResp 等待回应类型
0：不等待设备回应直接响应请求;
1：要求设备确认消息已接收,或等待超时后返回;
2：要求设备进行响应处理,收到设备的响应数据后,将设备响应数据回应给请求方;
                     * 
                     */
                    uint64_t GetWaitResp() const;

                    /**
                     * 设置等待回应类型
0：不等待设备回应直接响应请求;
1：要求设备确认消息已接收,或等待超时后返回;
2：要求设备进行响应处理,收到设备的响应数据后,将设备响应数据回应给请求方;
                     * @param _waitResp 等待回应类型
0：不等待设备回应直接响应请求;
1：要求设备确认消息已接收,或等待超时后返回;
2：要求设备进行响应处理,收到设备的响应数据后,将设备响应数据回应给请求方;
                     * 
                     */
                    void SetWaitResp(const uint64_t& _waitResp);

                    /**
                     * 判断参数 WaitResp 是否已赋值
                     * @return WaitResp 是否已赋值
                     * 
                     */
                    bool WaitRespHasBeenSet() const;

                    /**
                     * 获取消息主题
                     * @return MsgTopic 消息主题
                     * 
                     */
                    std::string GetMsgTopic() const;

                    /**
                     * 设置消息主题
                     * @param _msgTopic 消息主题
                     * 
                     */
                    void SetMsgTopic(const std::string& _msgTopic);

                    /**
                     * 判断参数 MsgTopic 是否已赋值
                     * @return MsgTopic 是否已赋值
                     * 
                     */
                    bool MsgTopicHasBeenSet() const;

                    /**
                     * 获取消息内容，最大长度不超过8k字节
                     * @return MsgContent 消息内容，最大长度不超过8k字节
                     * 
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置消息内容，最大长度不超过8k字节
                     * @param _msgContent 消息内容，最大长度不超过8k字节
                     * 
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     * 
                     */
                    bool MsgContentHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 如果设备处于休眠状态，是否唤醒设备
                     */
                    bool m_wakeup;
                    bool m_wakeupHasBeenSet;

                    /**
                     * 等待回应类型
0：不等待设备回应直接响应请求;
1：要求设备确认消息已接收,或等待超时后返回;
2：要求设备进行响应处理,收到设备的响应数据后,将设备响应数据回应给请求方;
                     */
                    uint64_t m_waitResp;
                    bool m_waitRespHasBeenSet;

                    /**
                     * 消息主题
                     */
                    std::string m_msgTopic;
                    bool m_msgTopicHasBeenSet;

                    /**
                     * 消息内容，最大长度不超过8k字节
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SENDONLINEMSGREQUEST_H_
