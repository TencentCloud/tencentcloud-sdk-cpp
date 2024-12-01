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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MATERNITYSUMMARY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MATERNITYSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Fetus.h>
#include <tencentcloud/mrs/v20200910/model/FieldInfo.h>
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
                * 孕产结论部分
                */
                class MaternitySummary : public AbstractModel
                {
                public:
                    MaternitySummary();
                    ~MaternitySummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取胎儿数据结构
                     * @return Fetus 胎儿数据结构
                     * 
                     */
                    std::vector<Fetus> GetFetus() const;

                    /**
                     * 设置胎儿数据结构
                     * @param _fetus 胎儿数据结构
                     * 
                     */
                    void SetFetus(const std::vector<Fetus>& _fetus);

                    /**
                     * 判断参数 Fetus 是否已赋值
                     * @return Fetus 是否已赋值
                     * 
                     */
                    bool FetusHasBeenSet() const;

                    /**
                     * 获取胎儿数量
                     * @return FetusNum 胎儿数量
                     * 
                     */
                    FieldInfo GetFetusNum() const;

                    /**
                     * 设置胎儿数量
                     * @param _fetusNum 胎儿数量
                     * 
                     */
                    void SetFetusNum(const FieldInfo& _fetusNum);

                    /**
                     * 判断参数 FetusNum 是否已赋值
                     * @return FetusNum 是否已赋值
                     * 
                     */
                    bool FetusNumHasBeenSet() const;

                    /**
                     * 获取病变
                     * @return Sym 病变
                     * 
                     */
                    std::vector<FieldInfo> GetSym() const;

                    /**
                     * 设置病变
                     * @param _sym 病变
                     * 
                     */
                    void SetSym(const std::vector<FieldInfo>& _sym);

                    /**
                     * 判断参数 Sym 是否已赋值
                     * @return Sym 是否已赋值
                     * 
                     */
                    bool SymHasBeenSet() const;

                    /**
                     * 获取原文
                     * @return Text 原文
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文
                     * @param _text 原文
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取坐标
                     * @return Coords 坐标
                     * 
                     */
                    std::vector<Coord> GetCoords() const;

                    /**
                     * 设置坐标
                     * @param _coords 坐标
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
                     * 胎儿数据结构
                     */
                    std::vector<Fetus> m_fetus;
                    bool m_fetusHasBeenSet;

                    /**
                     * 胎儿数量
                     */
                    FieldInfo m_fetusNum;
                    bool m_fetusNumHasBeenSet;

                    /**
                     * 病变
                     */
                    std::vector<FieldInfo> m_sym;
                    bool m_symHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 坐标
                     */
                    std::vector<Coord> m_coords;
                    bool m_coordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MATERNITYSUMMARY_H_
