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
                     * 获取英文缩写
                     * @return Code 英文缩写
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置英文缩写
                     * @param _code 英文缩写
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
                     * 获取标准缩写
                     * @return Scode 标准缩写
                     * 
                     */
                    std::string GetScode() const;

                    /**
                     * 设置标准缩写
                     * @param _scode 标准缩写
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
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
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
                     * 获取标准名
                     * @return Sname 标准名
                     * 
                     */
                    std::string GetSname() const;

                    /**
                     * 设置标准名
                     * @param _sname 标准名
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
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
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
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取参考范围
                     * @return Range 参考范围
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置参考范围
                     * @param _range 参考范围
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
                     * 获取上下箭头
                     * @return Arrow 上下箭头
                     * 
                     */
                    std::string GetArrow() const;

                    /**
                     * 设置上下箭头
                     * @param _arrow 上下箭头
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
                     * 获取是否正常
                     * @return Normal 是否正常
                     * 
                     */
                    bool GetNormal() const;

                    /**
                     * 设置是否正常
                     * @param _normal 是否正常
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
                     * 获取项目原文
                     * @return ItemString 项目原文
                     * 
                     */
                    std::string GetItemString() const;

                    /**
                     * 设置项目原文
                     * @param _itemString 项目原文
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
                     * 获取指标项ID
                     * @return Id 指标项ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置指标项ID
                     * @param _id 指标项ID
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
                     * 获取指标项坐标位置
                     * @return Coords 指标项坐标位置
                     * 
                     */
                    Coordinate GetCoords() const;

                    /**
                     * 设置指标项坐标位置
                     * @param _coords 指标项坐标位置
                     * 
                     */
                    void SetCoords(const Coordinate& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                    /**
                     * 获取推测结果是否异常
                     * @return InferNormal 推测结果是否异常
                     * 
                     */
                    std::string GetInferNormal() const;

                    /**
                     * 设置推测结果是否异常
                     * @param _inferNormal 推测结果是否异常
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
                     * 获取标本
                     * @return Sample 标本
                     * 
                     */
                    std::string GetSample() const;

                    /**
                     * 设置标本
                     * @param _sample 标本
                     * 
                     */
                    void SetSample(const std::string& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                private:

                    /**
                     * 英文缩写
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 标准缩写
                     */
                    std::string m_scode;
                    bool m_scodeHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标准名
                     */
                    std::string m_sname;
                    bool m_snameHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 参考范围
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 上下箭头
                     */
                    std::string m_arrow;
                    bool m_arrowHasBeenSet;

                    /**
                     * 是否正常
                     */
                    bool m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * 项目原文
                     */
                    std::string m_itemString;
                    bool m_itemStringHasBeenSet;

                    /**
                     * 指标项ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 指标项坐标位置
                     */
                    Coordinate m_coords;
                    bool m_coordsHasBeenSet;

                    /**
                     * 推测结果是否异常
                     */
                    std::string m_inferNormal;
                    bool m_inferNormalHasBeenSet;

                    /**
                     * 标本
                     */
                    std::string m_sample;
                    bool m_sampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_
