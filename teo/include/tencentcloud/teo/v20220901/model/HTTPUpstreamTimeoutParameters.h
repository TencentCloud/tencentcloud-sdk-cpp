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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_

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
                * 七层回源超时配置。
                */
                class HTTPUpstreamTimeoutParameters : public AbstractModel
                {
                public:
                    HTTPUpstreamTimeoutParameters();
                    ~HTTPUpstreamTimeoutParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP 应答超时时间，单位为秒，取值：5～600。
                     * @return ResponseTimeout HTTP 应答超时时间，单位为秒，取值：5～600。
                     * 
                     */
                    int64_t GetResponseTimeout() const;

                    /**
                     * 设置HTTP 应答超时时间，单位为秒，取值：5～600。
                     * @param _responseTimeout HTTP 应答超时时间，单位为秒，取值：5～600。
                     * 
                     */
                    void SetResponseTimeout(const int64_t& _responseTimeout);

                    /**
                     * 判断参数 ResponseTimeout 是否已赋值
                     * @return ResponseTimeout 是否已赋值
                     * 
                     */
                    bool ResponseTimeoutHasBeenSet() const;

                private:

                    /**
                     * HTTP 应答超时时间，单位为秒，取值：5～600。
                     */
                    int64_t m_responseTimeout;
                    bool m_responseTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_
