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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 基于会话ID的亲和配置。
                */
                class SessionIdAffinityConfig : public AbstractModel
                {
                public:
                    SessionIdAffinityConfig();
                    ~SessionIdAffinityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话 ID 参数的传递位置。不填写时默认为 Header。</p><p>枚举值：</p><ul><li>Header： 在请求头中传递参数。</li></ul><p>默认值：Header。</p>
                     * @return Source <p>会话 ID 参数的传递位置。不填写时默认为 Header。</p><p>枚举值：</p><ul><li>Header： 在请求头中传递参数。</li></ul><p>默认值：Header。</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>会话 ID 参数的传递位置。不填写时默认为 Header。</p><p>枚举值：</p><ul><li>Header： 在请求头中传递参数。</li></ul><p>默认值：Header。</p>
                     * @param _source <p>会话 ID 参数的传递位置。不填写时默认为 Header。</p><p>枚举值：</p><ul><li>Header： 在请求头中传递参数。</li></ul><p>默认值：Header。</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>传递会话 ID 的请求头名称。当 Source 为 Header 时必填。<br>不填写时默认为 EO-Infer-Session-Id。</p><p>入参限制：长度为 1-64 个字符，仅支持字母、数字、中划线。</p><p>默认值：EO-Infer-Session-Id。</p>
                     * @return HeaderName <p>传递会话 ID 的请求头名称。当 Source 为 Header 时必填。<br>不填写时默认为 EO-Infer-Session-Id。</p><p>入参限制：长度为 1-64 个字符，仅支持字母、数字、中划线。</p><p>默认值：EO-Infer-Session-Id。</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>传递会话 ID 的请求头名称。当 Source 为 Header 时必填。<br>不填写时默认为 EO-Infer-Session-Id。</p><p>入参限制：长度为 1-64 个字符，仅支持字母、数字、中划线。</p><p>默认值：EO-Infer-Session-Id。</p>
                     * @param _headerName <p>传递会话 ID 的请求头名称。当 Source 为 Header 时必填。<br>不填写时默认为 EO-Infer-Session-Id。</p><p>入参限制：长度为 1-64 个字符，仅支持字母、数字、中划线。</p><p>默认值：EO-Infer-Session-Id。</p>
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                private:

                    /**
                     * <p>会话 ID 参数的传递位置。不填写时默认为 Header。</p><p>枚举值：</p><ul><li>Header： 在请求头中传递参数。</li></ul><p>默认值：Header。</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>传递会话 ID 的请求头名称。当 Source 为 Header 时必填。<br>不填写时默认为 EO-Infer-Session-Id。</p><p>入参限制：长度为 1-64 个字符，仅支持字母、数字、中划线。</p><p>默认值：EO-Infer-Session-Id。</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONIDAFFINITYCONFIG_H_
