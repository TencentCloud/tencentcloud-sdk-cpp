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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * IP黑白名单。
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP黑白名单开关，on或off。
                     * @return Switch IP黑白名单开关，on或off。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP黑白名单开关，on或off。
                     * @param _switch IP黑白名单开关，on或off。
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
                     * 获取IP黑白名单类型，whitelist或blacklist。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterType IP黑白名单类型，whitelist或blacklist。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP黑白名单类型，whitelist或blacklist。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterType IP黑白名单类型，whitelist或blacklist。
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
                     * 获取IP黑白名单列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filters IP黑白名单列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP黑白名单列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filters IP黑白名单列表。
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

                private:

                    /**
                     * IP黑白名单开关，on或off。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP黑白名单类型，whitelist或blacklist。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP黑白名单列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_
