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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/IpFilterPathRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IP 黑白名单配置，默认为关闭状态
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * @return Switch IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * @param _switch IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单类型
whitelist：白名单
blacklist：黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterType IP 黑白名单类型
whitelist：白名单
blacklist：黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP 黑白名单类型
whitelist：白名单
blacklist：黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterType IP 黑白名单类型
whitelist：白名单
blacklist：黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单列表
支持 X.X.X.X 格式IPV4地址 或X:X:X:X:X:X:X:X 格式IPV6地址， 或网段格式/X（IPV4:1≤X≤32；IPV6:1≤X≤128）
最多可填充 200 个白名单或 200 个黑名单；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filters IP 黑白名单列表
支持 X.X.X.X 格式IPV4地址 或X:X:X:X:X:X:X:X 格式IPV6地址， 或网段格式/X（IPV4:1≤X≤32；IPV6:1≤X≤128）
最多可填充 200 个白名单或 200 个黑名单；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP 黑白名单列表
支持 X.X.X.X 格式IPV4地址 或X:X:X:X:X:X:X:X 格式IPV6地址， 或网段格式/X（IPV4:1≤X≤32；IPV6:1≤X≤128）
最多可填充 200 个白名单或 200 个黑名单；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filters IP 黑白名单列表
支持 X.X.X.X 格式IPV4地址 或X:X:X:X:X:X:X:X 格式IPV6地址， 或网段格式/X（IPV4:1≤X≤32；IPV6:1≤X≤128）
最多可填充 200 个白名单或 200 个黑名单；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单分路径配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterRules IP 黑白名单分路径配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IpFilterPathRule> GetFilterRules() const;

                    /**
                     * 设置IP 黑白名单分路径配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterRules IP 黑白名单分路径配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterRules(const std::vector<IpFilterPathRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单验证失败时返回的 code <br><font color=red>已下线，参数失效，不支持自定义状态码，固定返回514</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnCode IP 黑白名单验证失败时返回的 code <br><font color=red>已下线，参数失效，不支持自定义状态码，固定返回514</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置IP 黑白名单验证失败时返回的 code <br><font color=red>已下线，参数失效，不支持自定义状态码，固定返回514</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnCode IP 黑白名单验证失败时返回的 code <br><font color=red>已下线，参数失效，不支持自定义状态码，固定返回514</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP 黑白名单类型
whitelist：白名单
blacklist：黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP 黑白名单列表
支持 X.X.X.X 格式IPV4地址 或X:X:X:X:X:X:X:X 格式IPV6地址， 或网段格式/X（IPV4:1≤X≤32；IPV6:1≤X≤128）
最多可填充 200 个白名单或 200 个黑名单；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * IP 黑白名单分路径配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IpFilterPathRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * IP 黑白名单验证失败时返回的 code <br><font color=red>已下线，参数失效，不支持自定义状态码，固定返回514</font>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_
