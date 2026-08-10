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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_

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
                * 漏洞VPR标签
                */
                class VPRLabel : public AbstractModel
                {
                public:
                    VPRLabel();
                    ~VPRLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签名称<br>枚举值：<br>IN_THE_WILD：在野利用<br>EXP：有 EXP<br>POC：有 POC<br>INTERNET_EXPOSED：外网暴露<br>NO_RESTART：无需重启<br>HIGH_VALUE_ASSET：重要资产<br>MALWARE_WEAPONIZED：已武器化</p>
                     * @return Name <p>标签名称<br>枚举值：<br>IN_THE_WILD：在野利用<br>EXP：有 EXP<br>POC：有 POC<br>INTERNET_EXPOSED：外网暴露<br>NO_RESTART：无需重启<br>HIGH_VALUE_ASSET：重要资产<br>MALWARE_WEAPONIZED：已武器化</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>标签名称<br>枚举值：<br>IN_THE_WILD：在野利用<br>EXP：有 EXP<br>POC：有 POC<br>INTERNET_EXPOSED：外网暴露<br>NO_RESTART：无需重启<br>HIGH_VALUE_ASSET：重要资产<br>MALWARE_WEAPONIZED：已武器化</p>
                     * @param _name <p>标签名称<br>枚举值：<br>IN_THE_WILD：在野利用<br>EXP：有 EXP<br>POC：有 POC<br>INTERNET_EXPOSED：外网暴露<br>NO_RESTART：无需重启<br>HIGH_VALUE_ASSET：重要资产<br>MALWARE_WEAPONIZED：已武器化</p>
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
                     * 获取<p>标签等级<br>枚举值：<br>HIGH：高<br>MEDIUM：中<br>LOW：低</p>
                     * @return Level <p>标签等级<br>枚举值：<br>HIGH：高<br>MEDIUM：中<br>LOW：低</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>标签等级<br>枚举值：<br>HIGH：高<br>MEDIUM：中<br>LOW：低</p>
                     * @param _level <p>标签等级<br>枚举值：<br>HIGH：高<br>MEDIUM：中<br>LOW：低</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>标签说明</p>
                     * @return Remark <p>标签说明</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>标签说明</p>
                     * @param _remark <p>标签说明</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>标签名称<br>枚举值：<br>IN_THE_WILD：在野利用<br>EXP：有 EXP<br>POC：有 POC<br>INTERNET_EXPOSED：外网暴露<br>NO_RESTART：无需重启<br>HIGH_VALUE_ASSET：重要资产<br>MALWARE_WEAPONIZED：已武器化</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标签等级<br>枚举值：<br>HIGH：高<br>MEDIUM：中<br>LOW：低</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>标签说明</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_
