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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PART_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/NormPart.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 部位信息
                */
                class Part : public AbstractModel
                {
                public:
                    Part();
                    ~Part() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原文位置
                     * @return Index 原文位置
                     * 
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置原文位置
                     * @param _index 原文位置
                     * 
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取部位
                     * @return NormPart 部位
                     * 
                     */
                    NormPart GetNormPart() const;

                    /**
                     * 设置部位
                     * @param _normPart 部位
                     * 
                     */
                    void SetNormPart(const NormPart& _normPart);

                    /**
                     * 判断参数 NormPart 是否已赋值
                     * @return NormPart 是否已赋值
                     * 
                     */
                    bool NormPartHasBeenSet() const;

                    /**
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取值
                     * @return ValueBrief 值
                     * 
                     */
                    std::string GetValueBrief() const;

                    /**
                     * 设置值
                     * @param _valueBrief 值
                     * 
                     */
                    void SetValueBrief(const std::string& _valueBrief);

                    /**
                     * 判断参数 ValueBrief 是否已赋值
                     * @return ValueBrief 是否已赋值
                     * 
                     */
                    bool ValueBriefHasBeenSet() const;

                private:

                    /**
                     * 原文位置
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 部位
                     */
                    NormPart m_normPart;
                    bool m_normPartHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_valueBrief;
                    bool m_valueBriefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PART_H_
