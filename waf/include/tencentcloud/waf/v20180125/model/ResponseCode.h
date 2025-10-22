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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 响应体的返回码
                */
                class ResponseCode : public AbstractModel
                {
                public:
                    ResponseCode();
                    ~ResponseCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取如果成功则返回Success，失败则返回云api定义的错误码
                     * @return Code 如果成功则返回Success，失败则返回云api定义的错误码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置如果成功则返回Success，失败则返回云api定义的错误码
                     * @param _code 如果成功则返回Success，失败则返回云api定义的错误码
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
                     * 获取如果成功则返回Success，失败则返回WAF定义的二级错误码
                     * @return Message 如果成功则返回Success，失败则返回WAF定义的二级错误码
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置如果成功则返回Success，失败则返回WAF定义的二级错误码
                     * @param _message 如果成功则返回Success，失败则返回WAF定义的二级错误码
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 如果成功则返回Success，失败则返回云api定义的错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 如果成功则返回Success，失败则返回WAF定义的二级错误码
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_
