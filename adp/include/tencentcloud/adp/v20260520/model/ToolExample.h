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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOLEXAMPLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOLEXAMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ToolExample
                */
                class ToolExample : public AbstractModel
                {
                public:
                    ToolExample();
                    ~ToolExample() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求参数</p>
                     * @return Request <p>请求参数</p>
                     * 
                     */
                    std::string GetRequest() const;

                    /**
                     * 设置<p>请求参数</p>
                     * @param _request <p>请求参数</p>
                     * 
                     */
                    void SetRequest(const std::string& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取<p>响应参数</p>
                     * @return Response <p>响应参数</p>
                     * 
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置<p>响应参数</p>
                     * @param _response <p>响应参数</p>
                     * 
                     */
                    void SetResponse(const std::string& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                private:

                    /**
                     * <p>请求参数</p>
                     */
                    std::string m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * <p>响应参数</p>
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLEXAMPLE_H_
