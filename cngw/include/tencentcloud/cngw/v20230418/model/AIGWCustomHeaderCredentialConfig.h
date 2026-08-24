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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCUSTOMHEADERCREDENTIALCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCUSTOMHEADERCREDENTIALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI网关自定义 Header 凭证配置
                */
                class AIGWCustomHeaderCredentialConfig : public AbstractModel
                {
                public:
                    AIGWCustomHeaderCredentialConfig();
                    ~AIGWCustomHeaderCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Header名</p>
                     * @return HeaderName <p>Header名</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>Header名</p>
                     * @param _headerName <p>Header名</p>
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
                     * 获取<p>Header值</p>
                     * @return HeaderValue <p>Header值</p>
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置<p>Header值</p>
                     * @param _headerValue <p>Header值</p>
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
                     * <p>Header名</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * <p>Header值</p>
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCUSTOMHEADERCREDENTIALCONFIG_H_
