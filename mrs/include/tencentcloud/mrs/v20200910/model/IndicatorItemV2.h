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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEMV2_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEMV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验指标项结构v2
                */
                class IndicatorItemV2 : public AbstractModel
                {
                public:
                    IndicatorItemV2();
                    ~IndicatorItemV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
                     * @return Item 项目名称
                     * 
                     */
                    BaseItem GetItem() const;

                    /**
                     * 设置项目名称
                     * @param _item 项目名称
                     * 
                     */
                    void SetItem(const BaseItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取英文编码
                     * @return Code 英文编码
                     * 
                     */
                    BaseItem GetCode() const;

                    /**
                     * 设置英文编码
                     * @param _code 英文编码
                     * 
                     */
                    void SetCode(const BaseItem& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    BaseItem GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const BaseItem& _result);

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
                    BaseItem GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const BaseItem& _unit);

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
                    BaseItem GetRange() const;

                    /**
                     * 设置参考范围
                     * @param _range 参考范围
                     * 
                     */
                    void SetRange(const BaseItem& _range);

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
                    BaseItem GetArrow() const;

                    /**
                     * 设置上下箭头
                     * @param _arrow 上下箭头
                     * 
                     */
                    void SetArrow(const BaseItem& _arrow);

                    /**
                     * 判断参数 Arrow 是否已赋值
                     * @return Arrow 是否已赋值
                     * 
                     */
                    bool ArrowHasBeenSet() const;

                    /**
                     * 获取检测方法
                     * @return Method 检测方法
                     * 
                     */
                    BaseItem GetMethod() const;

                    /**
                     * 设置检测方法
                     * @param _method 检测方法
                     * 
                     */
                    void SetMethod(const BaseItem& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取结果是否异常
                     * @return Normal 结果是否异常
                     * 
                     */
                    bool GetNormal() const;

                    /**
                     * 设置结果是否异常
                     * @param _normal 结果是否异常
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
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
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
                     * 获取序号
                     * @return Order 序号
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置序号
                     * @param _order 序号
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

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

                private:

                    /**
                     * 项目名称
                     */
                    BaseItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 英文编码
                     */
                    BaseItem m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 结果
                     */
                    BaseItem m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 单位
                     */
                    BaseItem m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 参考范围
                     */
                    BaseItem m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 上下箭头
                     */
                    BaseItem m_arrow;
                    bool m_arrowHasBeenSet;

                    /**
                     * 检测方法
                     */
                    BaseItem m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 结果是否异常
                     */
                    bool m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 序号
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 推测结果是否异常
                     */
                    std::string m_inferNormal;
                    bool m_inferNormalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEMV2_H_
