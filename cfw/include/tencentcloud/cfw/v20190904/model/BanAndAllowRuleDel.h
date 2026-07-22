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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 封禁或放通规则项，包含对象、适用方向和规则类型。
                */
                class BanAndAllowRuleDel : public AbstractModel
                {
                public:
                    BanAndAllowRuleDel();
                    ~BanAndAllowRuleDel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则适用方向，0 表示互联网出站，1 表示互联网入站，2 表示双向，3 表示东西向，4 表示情报误报反馈，5 表示内网访问源，6 表示内网访问目的；多个值以逗号分隔。
                     * @return DirectionList 规则适用方向，0 表示互联网出站，1 表示互联网入站，2 表示双向，3 表示东西向，4 表示情报误报反馈，5 表示内网访问源，6 表示内网访问目的；多个值以逗号分隔。
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置规则适用方向，0 表示互联网出站，1 表示互联网入站，2 表示双向，3 表示东西向，4 表示情报误报反馈，5 表示内网访问源，6 表示内网访问目的；多个值以逗号分隔。
                     * @param _directionList 规则适用方向，0 表示互联网出站，1 表示互联网入站，2 表示双向，3 表示东西向，4 表示情报误报反馈，5 表示内网访问源，6 表示内网访问目的；多个值以逗号分隔。
                     * 
                     */
                    void SetDirectionList(const std::string& _directionList);

                    /**
                     * 判断参数 DirectionList 是否已赋值
                     * @return DirectionList 是否已赋值
                     * 
                     */
                    bool DirectionListHasBeenSet() const;

                    /**
                     * 获取封禁或放通对象值。
                     * @return Ioc 封禁或放通对象值。
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置封禁或放通对象值。
                     * @param _ioc 封禁或放通对象值。
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取规则类型标识。服务端定义的常用值为：1 封禁 IP，2 放通 IP，3 放通域名，4 威胁情报地址，5 资产实例，6 自定义策略，7 入侵防御规则，8 扩展 IP 规则，9 扩展自定义规则。
                     * @return RuleType 规则类型标识。服务端定义的常用值为：1 封禁 IP，2 放通 IP，3 放通域名，4 威胁情报地址，5 资产实例，6 自定义策略，7 入侵防御规则，8 扩展 IP 规则，9 扩展自定义规则。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型标识。服务端定义的常用值为：1 封禁 IP，2 放通 IP，3 放通域名，4 威胁情报地址，5 资产实例，6 自定义策略，7 入侵防御规则，8 扩展 IP 规则，9 扩展自定义规则。
                     * @param _ruleType 规则类型标识。服务端定义的常用值为：1 封禁 IP，2 放通 IP，3 放通域名，4 威胁情报地址，5 资产实例，6 自定义策略，7 入侵防御规则，8 扩展 IP 规则，9 扩展自定义规则。
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * 规则适用方向，0 表示互联网出站，1 表示互联网入站，2 表示双向，3 表示东西向，4 表示情报误报反馈，5 表示内网访问源，6 表示内网访问目的；多个值以逗号分隔。
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 封禁或放通对象值。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                    /**
                     * 规则类型标识。服务端定义的常用值为：1 封禁 IP，2 放通 IP，3 放通域名，4 威胁情报地址，5 资产实例，6 自定义策略，7 入侵防御规则，8 扩展 IP 规则，9 扩展自定义规则。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_
