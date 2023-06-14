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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 动态打包任务过滤器
                */
                class EdgePackTaskFilter : public AbstractModel
                {
                public:
                    EdgePackTaskFilter();
                    ~EdgePackTaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段名
apk: apk名称
status: 母包处理进度 done, failed, processing
                     * @return Name 过滤字段名
apk: apk名称
status: 母包处理进度 done, failed, processing
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段名
apk: apk名称
status: 母包处理进度 done, failed, processing
                     * @param _name 过滤字段名
apk: apk名称
status: 母包处理进度 done, failed, processing
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
                     * 获取过滤字段值
                     * @return Value 过滤字段值
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置过滤字段值
                     * @param _value 过滤字段值
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取是否启用模糊查询，仅支持过滤字段名为 apk。
模糊查询时，Value长度最大为1。
                     * @return Fuzzy 是否启用模糊查询，仅支持过滤字段名为 apk。
模糊查询时，Value长度最大为1。
                     * 
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置是否启用模糊查询，仅支持过滤字段名为 apk。
模糊查询时，Value长度最大为1。
                     * @param _fuzzy 是否启用模糊查询，仅支持过滤字段名为 apk。
模糊查询时，Value长度最大为1。
                     * 
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * 过滤字段名
apk: apk名称
status: 母包处理进度 done, failed, processing
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤字段值
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否启用模糊查询，仅支持过滤字段名为 apk。
模糊查询时，Value长度最大为1。
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKFILTER_H_
