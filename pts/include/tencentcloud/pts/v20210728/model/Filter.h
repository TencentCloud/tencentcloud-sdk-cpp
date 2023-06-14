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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 指标查询过滤
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等于：0，不等于：1
                     * @return Operator 等于：0，不等于：1
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置等于：0，不等于：1
                     * @param _operator 等于：0，不等于：1
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取标签名，可选值包括：
1. method，请求方法名；
2. proto：协议名；
3. service：服务名；
4. status：响应状态码；
5. result：响应详情；
6. check：检查名。
                     * @return LabelName 标签名，可选值包括：
1. method，请求方法名；
2. proto：协议名；
3. service：服务名；
4. status：响应状态码；
5. result：响应详情；
6. check：检查名。
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名，可选值包括：
1. method，请求方法名；
2. proto：协议名；
3. service：服务名；
4. status：响应状态码；
5. result：响应详情；
6. check：检查名。
                     * @param _labelName 标签名，可选值包括：
1. method，请求方法名；
2. proto：协议名；
3. service：服务名；
4. status：响应状态码；
5. result：响应详情；
6. check：检查名。
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取标签值：
1. method：请求方法名，以 http 协议为例，method 为 GET、POST、PUT 等；
2. proto：协议名，以 http 协议为例，proto 为 HTTP/1.1、HTTP/2 等；
3. service：服务名，以 http 协议为例，service 为请求 url，如 http://httpbin.org/get 等；
4. status：响应状态码，以 http 协议为例，状态码包括 200、404、500 等；
5. result：响应详情，通过 result 判断请求成功或失败；请求正常，result 标签值为 ok；请求失败，result 标签携带错误码和描述；
6. check：检查名，标签值为用户设置的检查点名称。
                     * @return LabelValue 标签值：
1. method：请求方法名，以 http 协议为例，method 为 GET、POST、PUT 等；
2. proto：协议名，以 http 协议为例，proto 为 HTTP/1.1、HTTP/2 等；
3. service：服务名，以 http 协议为例，service 为请求 url，如 http://httpbin.org/get 等；
4. status：响应状态码，以 http 协议为例，状态码包括 200、404、500 等；
5. result：响应详情，通过 result 判断请求成功或失败；请求正常，result 标签值为 ok；请求失败，result 标签携带错误码和描述；
6. check：检查名，标签值为用户设置的检查点名称。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值：
1. method：请求方法名，以 http 协议为例，method 为 GET、POST、PUT 等；
2. proto：协议名，以 http 协议为例，proto 为 HTTP/1.1、HTTP/2 等；
3. service：服务名，以 http 协议为例，service 为请求 url，如 http://httpbin.org/get 等；
4. status：响应状态码，以 http 协议为例，状态码包括 200、404、500 等；
5. result：响应详情，通过 result 判断请求成功或失败；请求正常，result 标签值为 ok；请求失败，result 标签携带错误码和描述；
6. check：检查名，标签值为用户设置的检查点名称。
                     * @param _labelValue 标签值：
1. method：请求方法名，以 http 协议为例，method 为 GET、POST、PUT 等；
2. proto：协议名，以 http 协议为例，proto 为 HTTP/1.1、HTTP/2 等；
3. service：服务名，以 http 协议为例，service 为请求 url，如 http://httpbin.org/get 等；
4. status：响应状态码，以 http 协议为例，状态码包括 200、404、500 等；
5. result：响应详情，通过 result 判断请求成功或失败；请求正常，result 标签值为 ok；请求失败，result 标签携带错误码和描述；
6. check：检查名，标签值为用户设置的检查点名称。
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * 等于：0，不等于：1
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 标签名，可选值包括：
1. method，请求方法名；
2. proto：协议名；
3. service：服务名；
4. status：响应状态码；
5. result：响应详情；
6. check：检查名。
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签值：
1. method：请求方法名，以 http 协议为例，method 为 GET、POST、PUT 等；
2. proto：协议名，以 http 协议为例，proto 为 HTTP/1.1、HTTP/2 等；
3. service：服务名，以 http 协议为例，service 为请求 url，如 http://httpbin.org/get 等；
4. status：响应状态码，以 http 协议为例，状态码包括 200、404、500 等；
5. result：响应详情，通过 result 判断请求成功或失败；请求正常，result 标签值为 ok；请求失败，result 标签携带错误码和描述；
6. check：检查名，标签值为用户设置的检查点名称。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_FILTER_H_
