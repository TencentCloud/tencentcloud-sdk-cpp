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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * ExecuteAgentApi请求参数结构体
                */
                class ExecuteAgentApiRequest : public AbstractModel
                {
                public:
                    ExecuteAgentApiRequest();
                    ~ExecuteAgentApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>参数路径</p>
                     * @return RequestPath <p>参数路径</p>
                     * 
                     */
                    std::string GetRequestPath() const;

                    /**
                     * 设置<p>参数路径</p>
                     * @param _requestPath <p>参数路径</p>
                     * 
                     */
                    void SetRequestPath(const std::string& _requestPath);

                    /**
                     * 判断参数 RequestPath 是否已赋值
                     * @return RequestPath 是否已赋值
                     * 
                     */
                    bool RequestPathHasBeenSet() const;

                    /**
                     * 获取<p>参数值</p>
                     * @return RequestData <p>参数值</p>
                     * 
                     */
                    std::string GetRequestData() const;

                    /**
                     * 设置<p>参数值</p>
                     * @param _requestData <p>参数值</p>
                     * 
                     */
                    void SetRequestData(const std::string& _requestData);

                    /**
                     * 判断参数 RequestData 是否已赋值
                     * @return RequestData 是否已赋值
                     * 
                     */
                    bool RequestDataHasBeenSet() const;

                    /**
                     * 获取<p>post还是get</p><p>枚举值：</p><ul><li>post： post请求</li><li>get： get请求</li></ul>
                     * @return RequestType <p>post还是get</p><p>枚举值：</p><ul><li>post： post请求</li><li>get： get请求</li></ul>
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置<p>post还是get</p><p>枚举值：</p><ul><li>post： post请求</li><li>get： get请求</li></ul>
                     * @param _requestType <p>post还是get</p><p>枚举值：</p><ul><li>post： post请求</li><li>get： get请求</li></ul>
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                private:

                    /**
                     * <p>参数路径</p>
                     */
                    std::string m_requestPath;
                    bool m_requestPathHasBeenSet;

                    /**
                     * <p>参数值</p>
                     */
                    std::string m_requestData;
                    bool m_requestDataHasBeenSet;

                    /**
                     * <p>post还是get</p><p>枚举值：</p><ul><li>post： post请求</li><li>get： get请求</li></ul>
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIREQUEST_H_
