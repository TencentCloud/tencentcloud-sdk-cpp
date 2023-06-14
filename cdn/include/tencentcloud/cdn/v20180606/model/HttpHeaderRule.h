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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * http头部设置规则。
                */
                class HttpHeaderRule : public AbstractModel
                {
                public:
                    HttpHeaderRule();
                    ~HttpHeaderRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
                     * @return HeaderMode http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
                     * @param _headerMode http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
                     * 
                     */
                    void SetHeaderMode(const std::string& _headerMode);

                    /**
                     * 判断参数 HeaderMode 是否已赋值
                     * @return HeaderMode 是否已赋值
                     * 
                     */
                    bool HeaderModeHasBeenSet() const;

                    /**
                     * 获取http头部名称。
                     * @return HeaderName http头部名称。
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置http头部名称。
                     * @param _headerName http头部名称。
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
                     * 获取http头部值。
                     * @return HeaderValue http头部值。
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置http头部值。
                     * @param _headerValue http头部值。
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
                     * http头部设置方式，支持add，set或del，分别表示新增，设置或删除头部。
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * http头部名称。
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * http头部值。
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_
