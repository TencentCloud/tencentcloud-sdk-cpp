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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSTREAMRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSTREAMRULE_H_

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
                * SAASWAF规则回源时的规则数据结构
                */
                class UpstreamRule : public AbstractModel
                {
                public:
                    UpstreamRule();
                    ~UpstreamRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配的关键字。目前支持host、uri两种
                     * @return KeyName 匹配的关键字。目前支持host、uri两种
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置匹配的关键字。目前支持host、uri两种
                     * @param _keyName 匹配的关键字。目前支持host、uri两种
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取逻辑符号。
equal：等于
not equal：不等于
belong：属于
not belong：不属于
                     * @return Symbol 逻辑符号。
equal：等于
not equal：不等于
belong：属于
not belong：不属于
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置逻辑符号。
equal：等于
not equal：不等于
belong：属于
not belong：不属于
                     * @param _symbol 逻辑符号。
equal：等于
not equal：不等于
belong：属于
not belong：不属于
                     * 
                     */
                    void SetSymbol(const std::string& _symbol);

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取匹配的内容。equal和not equal时，数组只能有一个元素
                     * @return ContentList 匹配的内容。equal和not equal时，数组只能有一个元素
                     * 
                     */
                    std::vector<std::string> GetContentList() const;

                    /**
                     * 设置匹配的内容。equal和not equal时，数组只能有一个元素
                     * @param _contentList 匹配的内容。equal和not equal时，数组只能有一个元素
                     * 
                     */
                    void SetContentList(const std::vector<std::string>& _contentList);

                    /**
                     * 判断参数 ContentList 是否已赋值
                     * @return ContentList 是否已赋值
                     * 
                     */
                    bool ContentListHasBeenSet() const;

                    /**
                     * 获取规则匹配后生效的回源地址。
                     * @return AddressList 规则匹配后生效的回源地址。
                     * 
                     */
                    std::vector<std::string> GetAddressList() const;

                    /**
                     * 设置规则匹配后生效的回源地址。
                     * @param _addressList 规则匹配后生效的回源地址。
                     * 
                     */
                    void SetAddressList(const std::vector<std::string>& _addressList);

                    /**
                     * 判断参数 AddressList 是否已赋值
                     * @return AddressList 是否已赋值
                     * 
                     */
                    bool AddressListHasBeenSet() const;

                    /**
                     * 获取回源负载均衡类型，仅多个回源地址时生效。
0：轮询
1：IP_HASH
                     * @return BalanceType 回源负载均衡类型，仅多个回源地址时生效。
0：轮询
1：IP_HASH
                     * 
                     */
                    uint64_t GetBalanceType() const;

                    /**
                     * 设置回源负载均衡类型，仅多个回源地址时生效。
0：轮询
1：IP_HASH
                     * @param _balanceType 回源负载均衡类型，仅多个回源地址时生效。
0：轮询
1：IP_HASH
                     * 
                     */
                    void SetBalanceType(const uint64_t& _balanceType);

                    /**
                     * 判断参数 BalanceType 是否已赋值
                     * @return BalanceType 是否已赋值
                     * 
                     */
                    bool BalanceTypeHasBeenSet() const;

                private:

                    /**
                     * 匹配的关键字。目前支持host、uri两种
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 逻辑符号。
equal：等于
not equal：不等于
belong：属于
not belong：不属于
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 匹配的内容。equal和not equal时，数组只能有一个元素
                     */
                    std::vector<std::string> m_contentList;
                    bool m_contentListHasBeenSet;

                    /**
                     * 规则匹配后生效的回源地址。
                     */
                    std::vector<std::string> m_addressList;
                    bool m_addressListHasBeenSet;

                    /**
                     * 回源负载均衡类型，仅多个回源地址时生效。
0：轮询
1：IP_HASH
                     */
                    uint64_t m_balanceType;
                    bool m_balanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSTREAMRULE_H_
