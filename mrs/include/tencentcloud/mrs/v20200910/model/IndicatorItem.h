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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Coordinate.h>
#include <tencentcloud/mrs/v20200910/model/ItemCoordinate.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验指标项
                */
                class IndicatorItem : public AbstractModel
                {
                public:
                    IndicatorItem();
                    ~IndicatorItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>英文缩写</p>
                     * @return Code <p>英文缩写</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>英文缩写</p>
                     * @param _code <p>英文缩写</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>标准缩写</p>
                     * @return Scode <p>标准缩写</p>
                     * 
                     */
                    std::string GetScode() const;

                    /**
                     * 设置<p>标准缩写</p>
                     * @param _scode <p>标准缩写</p>
                     * 
                     */
                    void SetScode(const std::string& _scode);

                    /**
                     * 判断参数 Scode 是否已赋值
                     * @return Scode 是否已赋值
                     * 
                     */
                    bool ScodeHasBeenSet() const;

                    /**
                     * 获取<p>项目名称</p>
                     * @return Name <p>项目名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _name <p>项目名称</p>
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
                     * 获取<p>标准名</p>
                     * @return Sname <p>标准名</p>
                     * 
                     */
                    std::string GetSname() const;

                    /**
                     * 设置<p>标准名</p>
                     * @param _sname <p>标准名</p>
                     * 
                     */
                    void SetSname(const std::string& _sname);

                    /**
                     * 判断参数 Sname 是否已赋值
                     * @return Sname 是否已赋值
                     * 
                     */
                    bool SnameHasBeenSet() const;

                    /**
                     * 获取<p>结果</p>
                     * @return Result <p>结果</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>结果</p>
                     * @param _result <p>结果</p>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>单位</p>
                     * @return Unit <p>单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>单位</p>
                     * @param _unit <p>单位</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>参考范围</p>
                     * @return Range <p>参考范围</p>
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置<p>参考范围</p>
                     * @param _range <p>参考范围</p>
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取<p>上下箭头</p>
                     * @return Arrow <p>上下箭头</p>
                     * 
                     */
                    std::string GetArrow() const;

                    /**
                     * 设置<p>上下箭头</p>
                     * @param _arrow <p>上下箭头</p>
                     * 
                     */
                    void SetArrow(const std::string& _arrow);

                    /**
                     * 判断参数 Arrow 是否已赋值
                     * @return Arrow 是否已赋值
                     * 
                     */
                    bool ArrowHasBeenSet() const;

                    /**
                     * 获取<p>是否正常</p>
                     * @return Normal <p>是否正常</p>
                     * 
                     */
                    bool GetNormal() const;

                    /**
                     * 设置<p>是否正常</p>
                     * @param _normal <p>是否正常</p>
                     * 
                     */
                    void SetNormal(const bool& _normal);

                    /**
                     * 判断参数 Normal 是否已赋值
                     * @return Normal 是否已赋值
                     * 
                     */
                    bool NormalHasBeenSet() const;

                    /**
                     * 获取<p>项目原文</p>
                     * @return ItemString <p>项目原文</p>
                     * 
                     */
                    std::string GetItemString() const;

                    /**
                     * 设置<p>项目原文</p>
                     * @param _itemString <p>项目原文</p>
                     * 
                     */
                    void SetItemString(const std::string& _itemString);

                    /**
                     * 判断参数 ItemString 是否已赋值
                     * @return ItemString 是否已赋值
                     * 
                     */
                    bool ItemStringHasBeenSet() const;

                    /**
                     * 获取<p>指标项ID</p>
                     * @return Id <p>指标项ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>指标项ID</p>
                     * @param _id <p>指标项ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>指标项坐标位置</p>
                     * @return Coords <p>指标项坐标位置</p>
                     * @deprecated
                     */
                    Coordinate GetCoords() const;

                    /**
                     * 设置<p>指标项坐标位置</p>
                     * @param _coords <p>指标项坐标位置</p>
                     * @deprecated
                     */
                    void SetCoords(const Coordinate& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * @deprecated
                     */
                    bool CoordsHasBeenSet() const;

                    /**
                     * 获取<p>推测结果是否异常</p>
                     * @return InferNormal <p>推测结果是否异常</p>
                     * 
                     */
                    std::string GetInferNormal() const;

                    /**
                     * 设置<p>推测结果是否异常</p>
                     * @param _inferNormal <p>推测结果是否异常</p>
                     * 
                     */
                    void SetInferNormal(const std::string& _inferNormal);

                    /**
                     * 判断参数 InferNormal 是否已赋值
                     * @return InferNormal 是否已赋值
                     * 
                     */
                    bool InferNormalHasBeenSet() const;

                    /**
                     * 获取<p>标本</p>
                     * @return Sample <p>标本</p>
                     * 
                     */
                    std::string GetSample() const;

                    /**
                     * 设置<p>标本</p>
                     * @param _sample <p>标本</p>
                     * 
                     */
                    void SetSample(const std::string& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                    /**
                     * 获取<p>检测方法</p>
                     * @return Method <p>检测方法</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>检测方法</p>
                     * @param _method <p>检测方法</p>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>检验指标项坐标信息</p>
                     * @return ItemCoords <p>检验指标项坐标信息</p>
                     * 
                     */
                    ItemCoordinate GetItemCoords() const;

                    /**
                     * 设置<p>检验指标项坐标信息</p>
                     * @param _itemCoords <p>检验指标项坐标信息</p>
                     * 
                     */
                    void SetItemCoords(const ItemCoordinate& _itemCoords);

                    /**
                     * 判断参数 ItemCoords 是否已赋值
                     * @return ItemCoords 是否已赋值
                     * 
                     */
                    bool ItemCoordsHasBeenSet() const;

                private:

                    /**
                     * <p>英文缩写</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>标准缩写</p>
                     */
                    std::string m_scode;
                    bool m_scodeHasBeenSet;

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标准名</p>
                     */
                    std::string m_sname;
                    bool m_snameHasBeenSet;

                    /**
                     * <p>结果</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>参考范围</p>
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * <p>上下箭头</p>
                     */
                    std::string m_arrow;
                    bool m_arrowHasBeenSet;

                    /**
                     * <p>是否正常</p>
                     */
                    bool m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * <p>项目原文</p>
                     */
                    std::string m_itemString;
                    bool m_itemStringHasBeenSet;

                    /**
                     * <p>指标项ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>指标项坐标位置</p>
                     */
                    Coordinate m_coords;
                    bool m_coordsHasBeenSet;

                    /**
                     * <p>推测结果是否异常</p>
                     */
                    std::string m_inferNormal;
                    bool m_inferNormalHasBeenSet;

                    /**
                     * <p>标本</p>
                     */
                    std::string m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>检测方法</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>检验指标项坐标信息</p>
                     */
                    ItemCoordinate m_itemCoords;
                    bool m_itemCoordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_
