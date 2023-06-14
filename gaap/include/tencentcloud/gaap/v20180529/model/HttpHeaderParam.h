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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPHEADERPARAM_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPHEADERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 描述HTTP的包头参数
                */
                class HttpHeaderParam : public AbstractModel
                {
                public:
                    HttpHeaderParam();
                    ~HttpHeaderParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP头名
                     * @return HeaderName HTTP头名
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置HTTP头名
                     * @param _headerName HTTP头名
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取HTTP头值
                     * @return HeaderValue HTTP头值
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置HTTP头值
                     * @param _headerValue HTTP头值
                     * 
                     */
                    void SetHeaderValue(const std::string& _headerValue);

                    /**
                     * 判断参数 HeaderValue 是否已赋值
                     * @return HeaderValue 是否已赋值
                     * 
                     */
                    bool HeaderValueHasBeenSet() const;

                private:

                    /**
                     * HTTP头名
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * HTTP头值
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPHEADERPARAM_H_
