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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_

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
                * 设置哪些字段是否存储或转发
                */
                class FieldWriteConfig : public AbstractModel
                {
                public:
                    FieldWriteConfig();
                    ~FieldWriteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableHeaders <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableHeaders() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableHeaders <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableHeaders(const int64_t& _enableHeaders);

                    /**
                     * 判断参数 EnableHeaders 是否已赋值
                     * @return EnableHeaders 是否已赋值
                     * 
                     */
                    bool EnableHeadersHasBeenSet() const;

                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableBody <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableBody() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableBody <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableBody(const int64_t& _enableBody);

                    /**
                     * 判断参数 EnableBody 是否已赋值
                     * @return EnableBody 是否已赋值
                     * 
                     */
                    bool EnableBodyHasBeenSet() const;

                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableBot <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableBot() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableBot <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableBot(const int64_t& _enableBot);

                    /**
                     * 判断参数 EnableBot 是否已赋值
                     * @return EnableBot 是否已赋值
                     * 
                     */
                    bool EnableBotHasBeenSet() const;

                    /**
                     * 获取<p>响应方向body<br>1:开启 0:不开启</p>
                     * @return EnableResponse <p>响应方向body<br>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableResponse() const;

                    /**
                     * 设置<p>响应方向body<br>1:开启 0:不开启</p>
                     * @param _enableResponse <p>响应方向body<br>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableResponse(const int64_t& _enableResponse);

                    /**
                     * 判断参数 EnableResponse 是否已赋值
                     * @return EnableResponse 是否已赋值
                     * 
                     */
                    bool EnableResponseHasBeenSet() const;

                private:

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableHeaders;
                    bool m_enableHeadersHasBeenSet;

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableBody;
                    bool m_enableBodyHasBeenSet;

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableBot;
                    bool m_enableBotHasBeenSet;

                    /**
                     * <p>响应方向body<br>1:开启 0:不开启</p>
                     */
                    int64_t m_enableResponse;
                    bool m_enableResponseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
