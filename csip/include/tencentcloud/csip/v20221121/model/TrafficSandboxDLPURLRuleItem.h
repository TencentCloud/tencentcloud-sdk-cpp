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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 外发域名检测维度（URL / 排除 URL）
                */
                class TrafficSandboxDLPURLRuleItem : public AbstractModel
                {
                public:
                    TrafficSandboxDLPURLRuleItem();
                    ~TrafficSandboxDLPURLRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外发对象列表（域名/URL）
                     * @return URL 外发对象列表（域名/URL）
                     * 
                     */
                    std::vector<std::string> GetURL() const;

                    /**
                     * 设置外发对象列表（域名/URL）
                     * @param _uRL 外发对象列表（域名/URL）
                     * 
                     */
                    void SetURL(const std::vector<std::string>& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取排除对象列表
                     * @return URLExcept 排除对象列表
                     * 
                     */
                    std::vector<std::string> GetURLExcept() const;

                    /**
                     * 设置排除对象列表
                     * @param _uRLExcept 排除对象列表
                     * 
                     */
                    void SetURLExcept(const std::vector<std::string>& _uRLExcept);

                    /**
                     * 判断参数 URLExcept 是否已赋值
                     * @return URLExcept 是否已赋值
                     * 
                     */
                    bool URLExceptHasBeenSet() const;

                private:

                    /**
                     * 外发对象列表（域名/URL）
                     */
                    std::vector<std::string> m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 排除对象列表
                     */
                    std::vector<std::string> m_uRLExcept;
                    bool m_uRLExceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_
