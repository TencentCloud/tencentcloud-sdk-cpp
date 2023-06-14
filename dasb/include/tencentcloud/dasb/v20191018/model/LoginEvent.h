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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_LOGINEVENT_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_LOGINEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 登录日志
                */
                class LoginEvent : public AbstractModel
                {
                public:
                    LoginEvent();
                    ~LoginEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return RealName 姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param _realName 姓名
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return Time 操作时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置操作时间
                     * @param _time 操作时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取来源IP
                     * @return SourceIp 来源IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置来源IP
                     * @param _sourceIp 来源IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * @return Entry 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * 
                     */
                    uint64_t GetEntry() const;

                    /**
                     * 设置登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * @param _entry 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * 
                     */
                    void SetEntry(const uint64_t& _entry);

                    /**
                     * 判断参数 Entry 是否已赋值
                     * @return Entry 是否已赋值
                     * 
                     */
                    bool EntryHasBeenSet() const;

                    /**
                     * 获取操作结果，1-成功，2-失败
                     * @return Result 操作结果，1-成功，2-失败
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置操作结果，1-成功，2-失败
                     * @param _result 操作结果，1-成功，2-失败
                     * 
                     */
                    void SetResult(const uint64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 来源IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     */
                    uint64_t m_entry;
                    bool m_entryHasBeenSet;

                    /**
                     * 操作结果，1-成功，2-失败
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_LOGINEVENT_H_
