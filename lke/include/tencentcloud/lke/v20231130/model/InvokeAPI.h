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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StrValue.h>
#include <tencentcloud/lke/v20231130/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 请求的API信息
                */
                class InvokeAPI : public AbstractModel
                {
                public:
                    InvokeAPI();
                    ~InvokeAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求方法，如GET/POST等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 请求方法，如GET/POST等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法，如GET/POST等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 请求方法，如GET/POST等
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
                     * 获取请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 请求地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderValues header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StrValue> GetHeaderValues() const;

                    /**
                     * 设置header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerValues header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderValues(const std::vector<StrValue>& _headerValues);

                    /**
                     * 判断参数 HeaderValues 是否已赋值
                     * @return HeaderValues 是否已赋值
                     * 
                     */
                    bool HeaderValuesHasBeenSet() const;

                    /**
                     * 获取入参Query
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryValues 入参Query
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StrValue> GetQueryValues() const;

                    /**
                     * 设置入参Query
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryValues 入参Query
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryValues(const std::vector<StrValue>& _queryValues);

                    /**
                     * 判断参数 QueryValues 是否已赋值
                     * @return QueryValues 是否已赋值
                     * 
                     */
                    bool QueryValuesHasBeenSet() const;

                    /**
                     * 获取Post请求的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestPostBody Post请求的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestPostBody() const;

                    /**
                     * 设置Post请求的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestPostBody Post请求的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestPostBody(const std::string& _requestPostBody);

                    /**
                     * 判断参数 RequestPostBody 是否已赋值
                     * @return RequestPostBody 是否已赋值
                     * 
                     */
                    bool RequestPostBodyHasBeenSet() const;

                    /**
                     * 获取返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseBody 返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseBody() const;

                    /**
                     * 设置返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseBody 返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseBody(const std::string& _responseBody);

                    /**
                     * 判断参数 ResponseBody 是否已赋值
                     * @return ResponseBody 是否已赋值
                     * 
                     */
                    bool ResponseBodyHasBeenSet() const;

                    /**
                     * 获取出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseValues 出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ValueInfo> GetResponseValues() const;

                    /**
                     * 设置出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseValues 出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseValues(const std::vector<ValueInfo>& _responseValues);

                    /**
                     * 判断参数 ResponseValues 是否已赋值
                     * @return ResponseValues 是否已赋值
                     * 
                     */
                    bool ResponseValuesHasBeenSet() const;

                    /**
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailMessage 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failMessage 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                private:

                    /**
                     * 请求方法，如GET/POST等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * header参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StrValue> m_headerValues;
                    bool m_headerValuesHasBeenSet;

                    /**
                     * 入参Query
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StrValue> m_queryValues;
                    bool m_queryValuesHasBeenSet;

                    /**
                     * Post请求的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestPostBody;
                    bool m_requestPostBodyHasBeenSet;

                    /**
                     * 返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseBody;
                    bool m_responseBodyHasBeenSet;

                    /**
                     * 出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ValueInfo> m_responseValues;
                    bool m_responseValuesHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_INVOKEAPI_H_
