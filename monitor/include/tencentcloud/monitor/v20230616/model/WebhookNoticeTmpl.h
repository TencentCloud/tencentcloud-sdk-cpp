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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_WEBHOOKNOTICETMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_WEBHOOKNOTICETMPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/WebhookNoticeTmplHeader.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 告警通知自定义Webhook内容模板
                */
                class WebhookNoticeTmpl : public AbstractModel
                {
                public:
                    WebhookNoticeTmpl();
                    ~WebhookNoticeTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求体
                     * @return Body 请求体
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置请求体
                     * @param _body 请求体
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取请求体的类型，非必填、默认为JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyContentType 请求体的类型，非必填、默认为JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBodyContentType() const;

                    /**
                     * 设置请求体的类型，非必填、默认为JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyContentType 请求体的类型，非必填、默认为JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyContentType(const std::string& _bodyContentType);

                    /**
                     * 判断参数 BodyContentType 是否已赋值
                     * @return BodyContentType 是否已赋值
                     * 
                     */
                    bool BodyContentTypeHasBeenSet() const;

                    /**
                     * 获取请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebhookNoticeTmplHeader> GetHeaders() const;

                    /**
                     * 设置请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<WebhookNoticeTmplHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 请求体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 请求体的类型，非必填、默认为JSON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bodyContentType;
                    bool m_bodyContentTypeHasBeenSet;

                    /**
                     * 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebhookNoticeTmplHeader> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_WEBHOOKNOTICETMPL_H_
