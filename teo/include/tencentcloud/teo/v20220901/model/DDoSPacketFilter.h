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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPACKETFILTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPACKETFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSFeaturesFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS特征过滤
                */
                class DDoSPacketFilter : public AbstractModel
                {
                public:
                    DDoSPacketFilter();
                    ~DDoSPacketFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特征过滤规则数组。
                     * @return DDoSFeaturesFilters 特征过滤规则数组。
                     */
                    std::vector<DDoSFeaturesFilter> GetDDoSFeaturesFilters() const;

                    /**
                     * 设置特征过滤规则数组。
                     * @param DDoSFeaturesFilters 特征过滤规则数组。
                     */
                    void SetDDoSFeaturesFilters(const std::vector<DDoSFeaturesFilter>& _dDoSFeaturesFilters);

                    /**
                     * 判断参数 DDoSFeaturesFilters 是否已赋值
                     * @return DDoSFeaturesFilters 是否已赋值
                     */
                    bool DDoSFeaturesFiltersHasBeenSet() const;

                    /**
                     * 获取特征过滤清空标识，取值有：
<li>off ：清空特征过滤规则，无需填写 DDoSFeaturesFilters 参数 ；</li>
<li>on ：配置特征过滤规则，需填写 DDoSFeaturesFilters 参数。</li>
                     * @return Switch 特征过滤清空标识，取值有：
<li>off ：清空特征过滤规则，无需填写 DDoSFeaturesFilters 参数 ；</li>
<li>on ：配置特征过滤规则，需填写 DDoSFeaturesFilters 参数。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置特征过滤清空标识，取值有：
<li>off ：清空特征过滤规则，无需填写 DDoSFeaturesFilters 参数 ；</li>
<li>on ：配置特征过滤规则，需填写 DDoSFeaturesFilters 参数。</li>
                     * @param Switch 特征过滤清空标识，取值有：
<li>off ：清空特征过滤规则，无需填写 DDoSFeaturesFilters 参数 ；</li>
<li>on ：配置特征过滤规则，需填写 DDoSFeaturesFilters 参数。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 特征过滤规则数组。
                     */
                    std::vector<DDoSFeaturesFilter> m_dDoSFeaturesFilters;
                    bool m_dDoSFeaturesFiltersHasBeenSet;

                    /**
                     * 特征过滤清空标识，取值有：
<li>off ：清空特征过滤规则，无需填写 DDoSFeaturesFilters 参数 ；</li>
<li>on ：配置特征过滤规则，需填写 DDoSFeaturesFilters 参数。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPACKETFILTER_H_
