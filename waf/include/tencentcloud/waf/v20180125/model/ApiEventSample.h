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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENTSAMPLE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENTSAMPLE_H_

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
                * API 安全事件样本
                */
                class ApiEventSample : public AbstractModel
                {
                public:
                    ApiEventSample();
                    ~ApiEventSample() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>攻击样本的请求部分</p>
                     * @return Request <p>攻击样本的请求部分</p>
                     * 
                     */
                    std::string GetRequest() const;

                    /**
                     * 设置<p>攻击样本的请求部分</p>
                     * @param _request <p>攻击样本的请求部分</p>
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
                     * 获取<p>攻击样本的响应</p>
                     * @return Response <p>攻击样本的响应</p>
                     * 
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置<p>攻击样本的响应</p>
                     * @param _response <p>攻击样本的响应</p>
                     * 
                     */
                    void SetResponse(const std::string& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                    /**
                     * 获取<p>攻击样本状态码</p>
                     * @return Status <p>攻击样本状态码</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>攻击样本状态码</p>
                     * @param _status <p>攻击样本状态码</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>攻击样本的请求部分</p>
                     */
                    std::string m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * <p>攻击样本的响应</p>
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * <p>攻击样本状态码</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENTSAMPLE_H_
