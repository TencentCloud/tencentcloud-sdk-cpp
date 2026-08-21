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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_

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
                * 最后一天风险摘要项
                */
                class RiskTrendItem : public AbstractModel
                {
                public:
                    RiskTrendItem();
                    ~RiskTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险项类型：intrusion_alert / vulnerability
                     * @return Key 风险项类型：intrusion_alert / vulnerability
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置风险项类型：intrusion_alert / vulnerability
                     * @param _key 风险项类型：intrusion_alert / vulnerability
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取展示名称，按请求语言返回；漏洞项按是否付费区分文案
                     * @return Name 展示名称，按请求语言返回；漏洞项按是否付费区分文案
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置展示名称，按请求语言返回；漏洞项按是否付费区分文案
                     * @param _name 展示名称，按请求语言返回；漏洞项按是否付费区分文案
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取风险数量
                     * @return Count 风险数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置风险数量
                     * @param _count 风险数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 风险项类型：intrusion_alert / vulnerability
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 展示名称，按请求语言返回；漏洞项按是否付费区分文案
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 风险数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_
