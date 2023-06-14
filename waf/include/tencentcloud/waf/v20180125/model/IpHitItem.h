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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IPHITITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IPHITITEM_H_

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
                * ip封堵状态数据
                */
                class IpHitItem : public AbstractModel
                {
                public:
                    IpHitItem();
                    ~IpHitItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作
                     * @return Action 动作
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置动作
                     * @param _action 动作
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取类别
                     * @return Category 类别
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置类别
                     * @param _category 类别
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return Ip ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip
                     * @param _ip ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取时间戳
                     * @return TsVersion 时间戳
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置时间戳
                     * @param _tsVersion 时间戳
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取有效截止时间戳
                     * @return ValidTs 有效截止时间戳
                     * 
                     */
                    uint64_t GetValidTs() const;

                    /**
                     * 设置有效截止时间戳
                     * @param _validTs 有效截止时间戳
                     * 
                     */
                    void SetValidTs(const uint64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                private:

                    /**
                     * 动作
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间戳
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 有效截止时间戳
                     */
                    uint64_t m_validTs;
                    bool m_validTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IPHITITEM_H_
