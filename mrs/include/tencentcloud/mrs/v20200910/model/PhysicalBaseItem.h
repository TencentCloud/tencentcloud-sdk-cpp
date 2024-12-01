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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Coord.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告基础信息
                */
                class PhysicalBaseItem : public AbstractModel
                {
                public:
                    PhysicalBaseItem();
                    ~PhysicalBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Name 类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置类型
                     * @param _name 类型
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
                     * 获取原始文本
                     * @return Src 原始文本
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原始文本
                     * @param _src 原始文本
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
                     * 获取归一化后值
                     * @return Value 归一化后值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置归一化后值
                     * @param _value 归一化后值
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
                     * 获取四点坐标
                     * @return Coords 四点坐标
                     * 
                     */
                    std::vector<Coord> GetCoords() const;

                    /**
                     * 设置四点坐标
                     * @param _coords 四点坐标
                     * 
                     */
                    void SetCoords(const std::vector<Coord>& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原始文本
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 归一化后值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 四点坐标
                     */
                    std::vector<Coord> m_coords;
                    bool m_coordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALBASEITEM_H_
