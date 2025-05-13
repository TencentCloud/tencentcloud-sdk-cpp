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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DropPageDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 拦截页面的总体配置，用于配置各个模块的拦截后行为。
                */
                class DropPageConfig : public AbstractModel
                {
                public:
                    DropPageConfig();
                    ~DropPageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取Waf(托管规则)模块的拦截页面配置。如果为null，默认使用历史配置。
                     * @return WafDropPageDetail Waf(托管规则)模块的拦截页面配置。如果为null，默认使用历史配置。
                     * 
                     */
                    DropPageDetail GetWafDropPageDetail() const;

                    /**
                     * 设置Waf(托管规则)模块的拦截页面配置。如果为null，默认使用历史配置。
                     * @param _wafDropPageDetail Waf(托管规则)模块的拦截页面配置。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetWafDropPageDetail(const DropPageDetail& _wafDropPageDetail);

                    /**
                     * 判断参数 WafDropPageDetail 是否已赋值
                     * @return WafDropPageDetail 是否已赋值
                     * 
                     */
                    bool WafDropPageDetailHasBeenSet() const;

                    /**
                     * 获取自定义页面的拦截页面配置。如果为null，默认使用历史配置。
                     * @return AclDropPageDetail 自定义页面的拦截页面配置。如果为null，默认使用历史配置。
                     * 
                     */
                    DropPageDetail GetAclDropPageDetail() const;

                    /**
                     * 设置自定义页面的拦截页面配置。如果为null，默认使用历史配置。
                     * @param _aclDropPageDetail 自定义页面的拦截页面配置。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetAclDropPageDetail(const DropPageDetail& _aclDropPageDetail);

                    /**
                     * 判断参数 AclDropPageDetail 是否已赋值
                     * @return AclDropPageDetail 是否已赋值
                     * 
                     */
                    bool AclDropPageDetailHasBeenSet() const;

                private:

                    /**
                     * 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Waf(托管规则)模块的拦截页面配置。如果为null，默认使用历史配置。
                     */
                    DropPageDetail m_wafDropPageDetail;
                    bool m_wafDropPageDetailHasBeenSet;

                    /**
                     * 自定义页面的拦截页面配置。如果为null，默认使用历史配置。
                     */
                    DropPageDetail m_aclDropPageDetail;
                    bool m_aclDropPageDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_
