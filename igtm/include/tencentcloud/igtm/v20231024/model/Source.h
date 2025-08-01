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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_SOURCE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_SOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 解析线路
                */
                class Source : public AbstractModel
                {
                public:
                    Source();
                    ~Source() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析请求来源线路id
                     * @return DnsLineId 解析请求来源线路id
                     * 
                     */
                    uint64_t GetDnsLineId() const;

                    /**
                     * 设置解析请求来源线路id
                     * @param _dnsLineId 解析请求来源线路id
                     * 
                     */
                    void SetDnsLineId(const uint64_t& _dnsLineId);

                    /**
                     * 判断参数 DnsLineId 是否已赋值
                     * @return DnsLineId 是否已赋值
                     * 
                     */
                    bool DnsLineIdHasBeenSet() const;

                    /**
                     * 获取解析请求来源线路名
                     * @return Name 解析请求来源线路名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置解析请求来源线路名
                     * @param _name 解析请求来源线路名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 解析请求来源线路id
                     */
                    uint64_t m_dnsLineId;
                    bool m_dnsLineIdHasBeenSet;

                    /**
                     * 解析请求来源线路名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_SOURCE_H_
