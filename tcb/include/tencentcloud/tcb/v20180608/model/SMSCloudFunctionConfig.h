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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SMSCLOUDFUNCTIONCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SMSCLOUDFUNCTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云函数短信通道配置。适用于第三方短信服务商场景：用户在环境下部署名为 SendVerificationCode 的云函数，平台在发送验证码时调用该函数，函数体内由用户自行调用任意短信服务商 SDK 完成下发。
                */
                class SMSCloudFunctionConfig : public AbstractModel
                {
                public:
                    SMSCloudFunctionConfig();
                    ~SMSCloudFunctionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发送验证码的云函数名，当前仅支持 SendVerificationCode。</p><p>函数入参：</p><ul><li>Mobile：字符串（手机号，连续 E.164 格式，如 +8613800000000）</li><li>VerificationCode：字符串（验证码，如 123456）</li></ul><p>函数返回值：</p><ul><li>ErrorCode：int（0 表示成功，非 0 表示失败）</li><li>ErrorMessage：字符串（ErrorCode 非 0 时返回错误信息）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionName <p>发送验证码的云函数名，当前仅支持 SendVerificationCode。</p><p>函数入参：</p><ul><li>Mobile：字符串（手机号，连续 E.164 格式，如 +8613800000000）</li><li>VerificationCode：字符串（验证码，如 123456）</li></ul><p>函数返回值：</p><ul><li>ErrorCode：int（0 表示成功，非 0 表示失败）</li><li>ErrorMessage：字符串（ErrorCode 非 0 时返回错误信息）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>发送验证码的云函数名，当前仅支持 SendVerificationCode。</p><p>函数入参：</p><ul><li>Mobile：字符串（手机号，连续 E.164 格式，如 +8613800000000）</li><li>VerificationCode：字符串（验证码，如 123456）</li></ul><p>函数返回值：</p><ul><li>ErrorCode：int（0 表示成功，非 0 表示失败）</li><li>ErrorMessage：字符串（ErrorCode 非 0 时返回错误信息）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functionName <p>发送验证码的云函数名，当前仅支持 SendVerificationCode。</p><p>函数入参：</p><ul><li>Mobile：字符串（手机号，连续 E.164 格式，如 +8613800000000）</li><li>VerificationCode：字符串（验证码，如 123456）</li></ul><p>函数返回值：</p><ul><li>ErrorCode：int（0 表示成功，非 0 表示失败）</li><li>ErrorMessage：字符串（ErrorCode 非 0 时返回错误信息）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                private:

                    /**
                     * <p>发送验证码的云函数名，当前仅支持 SendVerificationCode。</p><p>函数入参：</p><ul><li>Mobile：字符串（手机号，连续 E.164 格式，如 +8613800000000）</li><li>VerificationCode：字符串（验证码，如 123456）</li></ul><p>函数返回值：</p><ul><li>ErrorCode：int（0 表示成功，非 0 表示失败）</li><li>ErrorMessage：字符串（ErrorCode 非 0 时返回错误信息）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SMSCLOUDFUNCTIONCONFIG_H_
