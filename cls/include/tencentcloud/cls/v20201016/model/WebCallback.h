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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 回调地址
                */
                class WebCallback : public AbstractModel
                {
                public:
                    WebCallback();
                    ~WebCallback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调地址。最大支持1024个字节数。
                     * @return Url 回调地址。最大支持1024个字节数。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置回调地址。最大支持1024个字节数。
                     * @param _url 回调地址。最大支持1024个字节数。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取回调的类型。可选值：
- WeCom
- Http
- DingTalk
- Lark
                     * @return CallbackType 回调的类型。可选值：
- WeCom
- Http
- DingTalk
- Lark
                     * 
                     */
                    std::string GetCallbackType() const;

                    /**
                     * 设置回调的类型。可选值：
- WeCom
- Http
- DingTalk
- Lark
                     * @param _callbackType 回调的类型。可选值：
- WeCom
- Http
- DingTalk
- Lark
                     * 
                     */
                    void SetCallbackType(const std::string& _callbackType);

                    /**
                     * 判断参数 CallbackType 是否已赋值
                     * @return CallbackType 是否已赋值
                     * 
                     */
                    bool CallbackTypeHasBeenSet() const;

                    /**
                     * 获取回调方法。可选值：
- POST
- PUT
默认值为POST。CallbackType为Http时为必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 回调方法。可选值：
- POST
- PUT
默认值为POST。CallbackType为Http时为必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置回调方法。可选值：
- POST
- PUT
默认值为POST。CallbackType为Http时为必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 回调方法。可选值：
- POST
- PUT
默认值为POST。CallbackType为Http时为必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取请求头。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 请求头。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置请求头。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求头。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers 请求头。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求头。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取请求内容。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Body 请求内容。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置请求内容。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _body 请求内容。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求内容。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取序号。
- 入参无效。
- 出参有效。
                     * @return Index 序号。
- 入参无效。
- 出参有效。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置序号。
- 入参无效。
- 出参有效。
                     * @param _index 序号。
- 入参无效。
- 出参有效。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 回调地址。最大支持1024个字节数。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 回调的类型。可选值：
- WeCom
- Http
- DingTalk
- Lark
                     */
                    std::string m_callbackType;
                    bool m_callbackTypeHasBeenSet;

                    /**
                     * 回调方法。可选值：
- POST
- PUT
默认值为POST。CallbackType为Http时为必选。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求头。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求头。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 请求内容。
注意：该参数已废弃，请在<a href="https://cloud.tencent.com/document/product/614/56466">创建告警策略</a>接口CallBack参数中指定请求内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 序号。
- 入参无效。
- 出参有效。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
