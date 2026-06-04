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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>
#include <tencentcloud/adp/v20260520/model/ToolExample.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ApiToolConfig
                */
                class ApiToolConfig : public AbstractModel
                {
                public:
                    ApiToolConfig();
                    ~ApiToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API插件支持对外调用的工具URL
                     * @return ExternalApiUrl API插件支持对外调用的工具URL
                     * 
                     */
                    std::string GetExternalApiUrl() const;

                    /**
                     * 设置API插件支持对外调用的工具URL
                     * @param _externalApiUrl API插件支持对外调用的工具URL
                     * 
                     */
                    void SetExternalApiUrl(const std::string& _externalApiUrl);

                    /**
                     * 判断参数 ExternalApiUrl 是否已赋值
                     * @return ExternalApiUrl 是否已赋值
                     * 
                     */
                    bool ExternalApiUrlHasBeenSet() const;

                    /**
                     * 获取请求method
                     * @return Method 请求method
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求method
                     * @param _method 请求method
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
                     * 获取请求的url
                     * @return Url 请求的url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求的url
                     * @param _url 请求的url
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
                     * 获取body参数
                     * @return Body body参数
                     * 
                     */
                    std::vector<RequestParam> GetBody() const;

                    /**
                     * 设置body参数
                     * @param _body body参数
                     * 
                     */
                    void SetBody(const std::vector<RequestParam>& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取示例
                     * @return Example 示例
                     * 
                     */
                    ToolExample GetExample() const;

                    /**
                     * 设置示例
                     * @param _example 示例
                     * 
                     */
                    void SetExample(const ToolExample& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取Header信息
                     * @return Header Header信息
                     * 
                     */
                    std::vector<RequestParam> GetHeader() const;

                    /**
                     * 设置Header信息
                     * @param _header Header信息
                     * 
                     */
                    void SetHeader(const std::vector<RequestParam>& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取输出参数
                     * @return Outputs 输出参数
                     * 
                     */
                    std::vector<ResponseParam> GetOutputs() const;

                    /**
                     * 设置输出参数
                     * @param _outputs 输出参数
                     * 
                     */
                    void SetOutputs(const std::vector<ResponseParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取query参数
                     * @return Query query参数
                     * 
                     */
                    std::vector<RequestParam> GetQuery() const;

                    /**
                     * 设置query参数
                     * @param _query query参数
                     * 
                     */
                    void SetQuery(const std::vector<RequestParam>& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取流式模式
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 非流式 |
| 1 | 流式 |
                     * @return StreamMode 流式模式
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 非流式 |
| 1 | 流式 |
                     * 
                     */
                    int64_t GetStreamMode() const;

                    /**
                     * 设置流式模式
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 非流式 |
| 1 | 流式 |
                     * @param _streamMode 流式模式
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 非流式 |
| 1 | 流式 |
                     * 
                     */
                    void SetStreamMode(const int64_t& _streamMode);

                    /**
                     * 判断参数 StreamMode 是否已赋值
                     * @return StreamMode 是否已赋值
                     * 
                     */
                    bool StreamModeHasBeenSet() const;

                private:

                    /**
                     * API插件支持对外调用的工具URL
                     */
                    std::string m_externalApiUrl;
                    bool m_externalApiUrlHasBeenSet;

                    /**
                     * 请求method
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求的url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * body参数
                     */
                    std::vector<RequestParam> m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 示例
                     */
                    ToolExample m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * Header信息
                     */
                    std::vector<RequestParam> m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 输出参数
                     */
                    std::vector<ResponseParam> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * query参数
                     */
                    std::vector<RequestParam> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 流式模式
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 非流式 |
| 1 | 流式 |
                     */
                    int64_t m_streamMode;
                    bool m_streamModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_
