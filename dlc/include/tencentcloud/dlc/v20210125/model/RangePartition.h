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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Literal.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc RangePartition定义
                */
                class RangePartition : public AbstractModel
                {
                public:
                    RangePartition();
                    ~RangePartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分区名</p>
                     * @return Name <p>分区名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分区名</p>
                     * @param _name <p>分区名</p>
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
                     * 获取<p>下界</p>
                     * @return Lower <p>下界</p>
                     * 
                     */
                    Literal GetLower() const;

                    /**
                     * 设置<p>下界</p>
                     * @param _lower <p>下界</p>
                     * 
                     */
                    void SetLower(const Literal& _lower);

                    /**
                     * 判断参数 Lower 是否已赋值
                     * @return Lower 是否已赋值
                     * 
                     */
                    bool LowerHasBeenSet() const;

                    /**
                     * 获取<p>上界</p>
                     * @return Upper <p>上界</p>
                     * 
                     */
                    Literal GetUpper() const;

                    /**
                     * 设置<p>上界</p>
                     * @param _upper <p>上界</p>
                     * 
                     */
                    void SetUpper(const Literal& _upper);

                    /**
                     * 判断参数 Upper 是否已赋值
                     * @return Upper 是否已赋值
                     * 
                     */
                    bool UpperHasBeenSet() const;

                    /**
                     * 获取<p>属性</p>
                     * @return Properties <p>属性</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>属性</p>
                     * @param _properties <p>属性</p>
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * <p>分区名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>下界</p>
                     */
                    Literal m_lower;
                    bool m_lowerHasBeenSet;

                    /**
                     * <p>上界</p>
                     */
                    Literal m_upper;
                    bool m_upperHasBeenSet;

                    /**
                     * <p>属性</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITION_H_
