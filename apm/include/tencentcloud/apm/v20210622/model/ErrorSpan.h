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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPAN_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 错误Span的数据项
                */
                class ErrorSpan : public AbstractModel
                {
                public:
                    ErrorSpan();
                    ~ErrorSpan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>异常SpanId</p>
                     * @return SpanID <p>异常SpanId</p>
                     * 
                     */
                    std::string GetSpanID() const;

                    /**
                     * 设置<p>异常SpanId</p>
                     * @param _spanID <p>异常SpanId</p>
                     * 
                     */
                    void SetSpanID(const std::string& _spanID);

                    /**
                     * 判断参数 SpanID 是否已赋值
                     * @return SpanID 是否已赋值
                     * 
                     */
                    bool SpanIDHasBeenSet() const;

                    /**
                     * 获取<p>异常信息</p>
                     * @return ErrorMessage <p>异常信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>异常信息</p>
                     * @param _errorMessage <p>异常信息</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * <p>异常SpanId</p>
                     */
                    std::string m_spanID;
                    bool m_spanIDHasBeenSet;

                    /**
                     * <p>异常信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPAN_H_
