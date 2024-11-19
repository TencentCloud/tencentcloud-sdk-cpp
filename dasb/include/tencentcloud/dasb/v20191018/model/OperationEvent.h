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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_OPERATIONEVENT_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_OPERATIONEVENT_H_

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
                * 操作日志
                */
                class OperationEvent : public AbstractModel
                {
                public:
                    OperationEvent();
                    ~OperationEvent() = default;
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
                     * 获取操作类型
                     * @return Kind 操作类型
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置操作类型
                     * @param _kind 操作类型
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取具体操作内容
                     * @return Operation 具体操作内容
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置具体操作内容
                     * @param _operation 具体操作内容
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

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

                    /**
                     * 获取签名值
                     * @return SignValue 签名值
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 设置签名值
                     * @param _signValue 签名值
                     * 
                     */
                    void SetSignValue(const std::string& _signValue);

                    /**
                     * 判断参数 SignValue 是否已赋值
                     * @return SignValue 是否已赋值
                     * 
                     */
                    bool SignValueHasBeenSet() const;

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
                     * 操作类型
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 具体操作内容
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 操作结果，1-成功，2-失败
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 签名值
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_OPERATIONEVENT_H_
