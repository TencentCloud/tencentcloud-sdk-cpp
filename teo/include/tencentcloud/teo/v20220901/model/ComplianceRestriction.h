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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_

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
                * 因政府法律法规、用户协议等规定，对资源进行地区访问限制信息。
                */
                class ComplianceRestriction : public AbstractModel
                {
                public:
                    ComplianceRestriction();
                    ~ComplianceRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>下发访问限制的原因。</p><p>枚举值：</p><ul><li>ICP_RECORD_REQUIRED： 未备案；</li><li>GOVERNMENT_ORDER： 政府指令。</li></ul>
                     * @return Reason <p>下发访问限制的原因。</p><p>枚举值：</p><ul><li>ICP_RECORD_REQUIRED： 未备案；</li><li>GOVERNMENT_ORDER： 政府指令。</li></ul>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>下发访问限制的原因。</p><p>枚举值：</p><ul><li>ICP_RECORD_REQUIRED： 未备案；</li><li>GOVERNMENT_ORDER： 政府指令。</li></ul>
                     * @param _reason <p>下发访问限制的原因。</p><p>枚举值：</p><ul><li>ICP_RECORD_REQUIRED： 未备案；</li><li>GOVERNMENT_ORDER： 政府指令。</li></ul>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>限制访问地区的具体国家/地区码，使用“ISO 3166 国家/地区代码标准”。</p><p>参数格式：查看链接：https://www.iso.org/iso-3166-country-codes.html。</p>
                     * @return Region <p>限制访问地区的具体国家/地区码，使用“ISO 3166 国家/地区代码标准”。</p><p>参数格式：查看链接：https://www.iso.org/iso-3166-country-codes.html。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>限制访问地区的具体国家/地区码，使用“ISO 3166 国家/地区代码标准”。</p><p>参数格式：查看链接：https://www.iso.org/iso-3166-country-codes.html。</p>
                     * @param _region <p>限制访问地区的具体国家/地区码，使用“ISO 3166 国家/地区代码标准”。</p><p>参数格式：查看链接：https://www.iso.org/iso-3166-country-codes.html。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>下发访问限制的原因。</p><p>枚举值：</p><ul><li>ICP_RECORD_REQUIRED： 未备案；</li><li>GOVERNMENT_ORDER： 政府指令。</li></ul>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>限制访问地区的具体国家/地区码，使用“ISO 3166 国家/地区代码标准”。</p><p>参数格式：查看链接：https://www.iso.org/iso-3166-country-codes.html。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_
