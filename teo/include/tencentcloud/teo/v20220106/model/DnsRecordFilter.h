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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DNS 记录查询过滤条件
                */
                class DnsRecordFilter : public AbstractModel
                {
                public:
                    DnsRecordFilter();
                    ~DnsRecordFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段名，支持的列表如下：
- name: 站点名。
- status: 站点状态
                     * @return Name 过滤字段名，支持的列表如下：
- name: 站点名。
- status: 站点状态
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段名，支持的列表如下：
- name: 站点名。
- status: 站点状态
                     * @param Name 过滤字段名，支持的列表如下：
- name: 站点名。
- status: 站点状态
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取过滤字段值
                     * @return Values 过滤字段值
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤字段值
                     * @param Values 过滤字段值
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取是否启用模糊查询，仅支持过滤字段名为name。模糊查询时，Values长度最大为1
                     * @return Fuzzy 是否启用模糊查询，仅支持过滤字段名为name。模糊查询时，Values长度最大为1
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置是否启用模糊查询，仅支持过滤字段名为name。模糊查询时，Values长度最大为1
                     * @param Fuzzy 是否启用模糊查询，仅支持过滤字段名为name。模糊查询时，Values长度最大为1
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * 过滤字段名，支持的列表如下：
- name: 站点名。
- status: 站点状态
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤字段值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否启用模糊查询，仅支持过滤字段名为name。模糊查询时，Values长度最大为1
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_
