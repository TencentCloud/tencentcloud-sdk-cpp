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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ERRORMSG_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ERRORMSG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 运行时异常信息。
                */
                class ErrorMsg : public AbstractModel
                {
                public:
                    ErrorMsg();
                    ~ErrorMsg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误提示信息。
                     * @return Msg 错误提示信息。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置错误提示信息。
                     * @param _msg 错误提示信息。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取错误码。
4000 服务内部异常。
4001 请求模型超时。

                     * @return Code 错误码。
4000 服务内部异常。
4001 请求模型超时。

                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置错误码。
4000 服务内部异常。
4001 请求模型超时。

                     * @param _code 错误码。
4000 服务内部异常。
4001 请求模型超时。

                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 错误提示信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 错误码。
4000 服务内部异常。
4001 请求模型超时。

                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ERRORMSG_H_
