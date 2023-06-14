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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSESUMMARY_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 描述许可证的概览信息。
                */
                class LicenseSummary : public AbstractModel
                {
                public:
                    LicenseSummary();
                    ~LicenseSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取许可证标识符
                     * @return Key 许可证标识符
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置许可证标识符
                     * @param _key 许可证标识符
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
                     * 获取许可证的SPDX标识符，见 https://spdx.org/licenses/
                     * @return SPDXKey 许可证的SPDX标识符，见 https://spdx.org/licenses/
                     * 
                     */
                    std::string GetSPDXKey() const;

                    /**
                     * 设置许可证的SPDX标识符，见 https://spdx.org/licenses/
                     * @param _sPDXKey 许可证的SPDX标识符，见 https://spdx.org/licenses/
                     * 
                     */
                    void SetSPDXKey(const std::string& _sPDXKey);

                    /**
                     * 判断参数 SPDXKey 是否已赋值
                     * @return SPDXKey 是否已赋值
                     * 
                     */
                    bool SPDXKeyHasBeenSet() const;

                    /**
                     * 获取许可证短名称
                     * @return ShortName 许可证短名称
                     * 
                     */
                    std::string GetShortName() const;

                    /**
                     * 设置许可证短名称
                     * @param _shortName 许可证短名称
                     * 
                     */
                    void SetShortName(const std::string& _shortName);

                    /**
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     * 
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取许可证完整名称
                     * @return Name 许可证完整名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置许可证完整名称
                     * @param _name 许可证完整名称
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
                     * 获取License风险等级
<li>NotDefined</li>
<li>LowRisk</li>
<li>MediumRisk</li>
<li>HighRisk</li>
                     * @return Risk License风险等级
<li>NotDefined</li>
<li>LowRisk</li>
<li>MediumRisk</li>
<li>HighRisk</li>
                     * 
                     */
                    std::string GetRisk() const;

                    /**
                     * 设置License风险等级
<li>NotDefined</li>
<li>LowRisk</li>
<li>MediumRisk</li>
<li>HighRisk</li>
                     * @param _risk License风险等级
<li>NotDefined</li>
<li>LowRisk</li>
<li>MediumRisk</li>
<li>HighRisk</li>
                     * 
                     */
                    void SetRisk(const std::string& _risk);

                    /**
                     * 判断参数 Risk 是否已赋值
                     * @return Risk 是否已赋值
                     * 
                     */
                    bool RiskHasBeenSet() const;

                    /**
                     * 获取许可证来源URL
                     * @return Source 许可证来源URL
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置许可证来源URL
                     * @param _source 许可证来源URL
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 许可证标识符
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 许可证的SPDX标识符，见 https://spdx.org/licenses/
                     */
                    std::string m_sPDXKey;
                    bool m_sPDXKeyHasBeenSet;

                    /**
                     * 许可证短名称
                     */
                    std::string m_shortName;
                    bool m_shortNameHasBeenSet;

                    /**
                     * 许可证完整名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * License风险等级
<li>NotDefined</li>
<li>LowRisk</li>
<li>MediumRisk</li>
<li>HighRisk</li>
                     */
                    std::string m_risk;
                    bool m_riskHasBeenSet;

                    /**
                     * 许可证来源URL
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSESUMMARY_H_
