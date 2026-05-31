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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTALIMIT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTALIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关模型LLM配额限制信息
                */
                class AIGWLLMQuotaLimit : public AbstractModel
                {
                public:
                    AIGWLLMQuotaLimit();
                    ~AIGWLLMQuotaLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该模型服务每分钟请求数上限，0 表示该维度不限</p>
                     * @return RPMLimit <p>该模型服务每分钟请求数上限，0 表示该维度不限</p>
                     * 
                     */
                    int64_t GetRPMLimit() const;

                    /**
                     * 设置<p>该模型服务每分钟请求数上限，0 表示该维度不限</p>
                     * @param _rPMLimit <p>该模型服务每分钟请求数上限，0 表示该维度不限</p>
                     * 
                     */
                    void SetRPMLimit(const int64_t& _rPMLimit);

                    /**
                     * 判断参数 RPMLimit 是否已赋值
                     * @return RPMLimit 是否已赋值
                     * 
                     */
                    bool RPMLimitHasBeenSet() const;

                    /**
                     * 获取<p>该模型服务每分钟 Token 数上限，0 表示该维度不限</p>
                     * @return TPMLimit <p>该模型服务每分钟 Token 数上限，0 表示该维度不限</p>
                     * 
                     */
                    int64_t GetTPMLimit() const;

                    /**
                     * 设置<p>该模型服务每分钟 Token 数上限，0 表示该维度不限</p>
                     * @param _tPMLimit <p>该模型服务每分钟 Token 数上限，0 表示该维度不限</p>
                     * 
                     */
                    void SetTPMLimit(const int64_t& _tPMLimit);

                    /**
                     * 判断参数 TPMLimit 是否已赋值
                     * @return TPMLimit 是否已赋值
                     * 
                     */
                    bool TPMLimitHasBeenSet() const;

                private:

                    /**
                     * <p>该模型服务每分钟请求数上限，0 表示该维度不限</p>
                     */
                    int64_t m_rPMLimit;
                    bool m_rPMLimitHasBeenSet;

                    /**
                     * <p>该模型服务每分钟 Token 数上限，0 表示该维度不限</p>
                     */
                    int64_t m_tPMLimit;
                    bool m_tPMLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTALIMIT_H_
