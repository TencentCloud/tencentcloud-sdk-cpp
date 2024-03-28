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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEFILTER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 镜像列表过滤
                */
                class ImageFIlter : public AbstractModel
                {
                public:
                    ImageFIlter();
                    ~ImageFIlter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段名称
                     * @return Name 过滤字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段名称
                     * @param _name 过滤字段名称
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
                     * 获取过滤值
                     * @return Values 过滤值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤值
                     * @param _values 过滤值
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
                     * 获取是否反选
                     * @return Negative 是否反选
                     * 
                     */
                    bool GetNegative() const;

                    /**
                     * 设置是否反选
                     * @param _negative 是否反选
                     * 
                     */
                    void SetNegative(const bool& _negative);

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     * 
                     */
                    bool NegativeHasBeenSet() const;

                private:

                    /**
                     * 过滤字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否反选
                     */
                    bool m_negative;
                    bool m_negativeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEFILTER_H_
