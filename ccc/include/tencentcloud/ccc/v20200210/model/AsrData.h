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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 语音转文本信息
                */
                class AsrData : public AbstractModel
                {
                public:
                    AsrData();
                    ~AsrData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户方
                     * @return User 用户方
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户方
                     * @param _user 用户方
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取消息内容
                     * @return Message 消息内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息内容
                     * @param _message 消息内容
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
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * @deprecated
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
                     * @deprecated
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * @deprecated
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取句子开始时间，Unix 毫秒时间戳
                     * @return Start 句子开始时间，Unix 毫秒时间戳
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置句子开始时间，Unix 毫秒时间戳
                     * @param _start 句子开始时间，Unix 毫秒时间戳
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取句子结束时间，Unix 毫秒时间戳
                     * @return End 句子结束时间，Unix 毫秒时间戳
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置句子结束时间，Unix 毫秒时间戳
                     * @param _end 句子结束时间，Unix 毫秒时间戳
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 用户方
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 消息内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 句子开始时间，Unix 毫秒时间戳
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 句子结束时间，Unix 毫秒时间戳
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_
