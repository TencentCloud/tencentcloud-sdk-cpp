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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSFIELDVALUERATIOINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSFIELDVALUERATIOINFO_H_

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
                * DescribeAccessFastAnalysis接口的出参
                */
                class AccessFieldValueRatioInfo : public AbstractModel
                {
                public:
                    AccessFieldValueRatioInfo();
                    ~AccessFieldValueRatioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志条数
                     * @return Count 日志条数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志条数
                     * @param _count 日志条数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取对应的Value值的百分比
                     * @return Ratio 对应的Value值的百分比
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置对应的Value值的百分比
                     * @param _ratio 对应的Value值的百分比
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取字段对应的值
                     * @return Value 字段对应的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字段对应的值
                     * @param _value 字段对应的值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 日志条数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 对应的Value值的百分比
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * 字段对应的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSFIELDVALUERATIOINFO_H_
