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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_EXTENDEDFILTER_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_EXTENDEDFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            namespace Model
            {
                /**
                * 过滤器
                */
                class ExtendedFilter : public AbstractModel
                {
                public:
                    ExtendedFilter();
                    ~ExtendedFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤条件键</p><p>枚举值：</p><ul><li>ResourceType： 资源类型</li><li>ResourceId： 资源ID</li><li>ResourceAlias： 资源名称</li><li>PayMode： 计费模式</li><li>RegionCode： 地域编码</li><li>ZoneCode： 可用区编码</li><li>PublicIpAddress： 外网IP</li><li>PrivateIpAddress： 内网IP</li><li>VpcId： VPC ID</li><li>SubnetId： 子网ID</li><li>Tag： 标签</li></ul>
                     * @return Key <p>过滤条件键</p><p>枚举值：</p><ul><li>ResourceType： 资源类型</li><li>ResourceId： 资源ID</li><li>ResourceAlias： 资源名称</li><li>PayMode： 计费模式</li><li>RegionCode： 地域编码</li><li>ZoneCode： 可用区编码</li><li>PublicIpAddress： 外网IP</li><li>PrivateIpAddress： 内网IP</li><li>VpcId： VPC ID</li><li>SubnetId： 子网ID</li><li>Tag： 标签</li></ul>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>过滤条件键</p><p>枚举值：</p><ul><li>ResourceType： 资源类型</li><li>ResourceId： 资源ID</li><li>ResourceAlias： 资源名称</li><li>PayMode： 计费模式</li><li>RegionCode： 地域编码</li><li>ZoneCode： 可用区编码</li><li>PublicIpAddress： 外网IP</li><li>PrivateIpAddress： 内网IP</li><li>VpcId： VPC ID</li><li>SubnetId： 子网ID</li><li>Tag： 标签</li></ul>
                     * @param _key <p>过滤条件键</p><p>枚举值：</p><ul><li>ResourceType： 资源类型</li><li>ResourceId： 资源ID</li><li>ResourceAlias： 资源名称</li><li>PayMode： 计费模式</li><li>RegionCode： 地域编码</li><li>ZoneCode： 可用区编码</li><li>PublicIpAddress： 外网IP</li><li>PrivateIpAddress： 内网IP</li><li>VpcId： VPC ID</li><li>SubnetId： 子网ID</li><li>Tag： 标签</li></ul>
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
                     * 获取<p>过滤条件值</p>
                     * @return Values <p>过滤条件值</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>过滤条件值</p>
                     * @param _values <p>过滤条件值</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>匹配方式</p><p>枚举值：</p><ul><li>Equals： 等于</li><li>NotEquals： 不等于</li><li>Contains： 包含</li><li>NotContains： 不包含</li><li>Exists： 存在</li><li>NotExists： 不存在</li></ul>
                     * @return MatchType <p>匹配方式</p><p>枚举值：</p><ul><li>Equals： 等于</li><li>NotEquals： 不等于</li><li>Contains： 包含</li><li>NotContains： 不包含</li><li>Exists： 存在</li><li>NotExists： 不存在</li></ul>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配方式</p><p>枚举值：</p><ul><li>Equals： 等于</li><li>NotEquals： 不等于</li><li>Contains： 包含</li><li>NotContains： 不包含</li><li>Exists： 存在</li><li>NotExists： 不存在</li></ul>
                     * @param _matchType <p>匹配方式</p><p>枚举值：</p><ul><li>Equals： 等于</li><li>NotEquals： 不等于</li><li>Contains： 包含</li><li>NotContains： 不包含</li><li>Exists： 存在</li><li>NotExists： 不存在</li></ul>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件键</p><p>枚举值：</p><ul><li>ResourceType： 资源类型</li><li>ResourceId： 资源ID</li><li>ResourceAlias： 资源名称</li><li>PayMode： 计费模式</li><li>RegionCode： 地域编码</li><li>ZoneCode： 可用区编码</li><li>PublicIpAddress： 外网IP</li><li>PrivateIpAddress： 内网IP</li><li>VpcId： VPC ID</li><li>SubnetId： 子网ID</li><li>Tag： 标签</li></ul>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>过滤条件值</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>匹配方式</p><p>枚举值：</p><ul><li>Equals： 等于</li><li>NotEquals： 不等于</li><li>Contains： 包含</li><li>NotContains： 不包含</li><li>Exists： 存在</li><li>NotExists： 不存在</li></ul>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_EXTENDEDFILTER_H_
