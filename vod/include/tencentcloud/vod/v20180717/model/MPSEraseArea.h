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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能擦除，擦除区域坐标配置。
区域由左上角与右下角点的坐标确定。
坐标原点为画面左上角，坐标点可使用像素值或百分比单位指定。
对自动擦除区域：
当单位为%时，坐标范围为[0,1]；
当单位为px时，X值范围为 [0，视频画面宽度]，Y值范围为 [0，视频画面高度]
对指定擦除区域：
当单位为%时，坐标范围为[0,1)；
当单位为px时，X值范围为 [0，视频画面宽度]，Y值范围为 [0，视频画面高度]
                */
                class MPSEraseArea : public AbstractModel
                {
                public:
                    MPSEraseArea();
                    ~MPSEraseArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>区域左上角X坐标。 如当Unit取1即使用百分比单位时，0.05表示区域左上角离整个画面左上角的横向距离为画面宽度的5%。</p>
                     * @return LeftTopX <p>区域左上角X坐标。 如当Unit取1即使用百分比单位时，0.05表示区域左上角离整个画面左上角的横向距离为画面宽度的5%。</p>
                     * 
                     */
                    double GetLeftTopX() const;

                    /**
                     * 设置<p>区域左上角X坐标。 如当Unit取1即使用百分比单位时，0.05表示区域左上角离整个画面左上角的横向距离为画面宽度的5%。</p>
                     * @param _leftTopX <p>区域左上角X坐标。 如当Unit取1即使用百分比单位时，0.05表示区域左上角离整个画面左上角的横向距离为画面宽度的5%。</p>
                     * 
                     */
                    void SetLeftTopX(const double& _leftTopX);

                    /**
                     * 判断参数 LeftTopX 是否已赋值
                     * @return LeftTopX 是否已赋值
                     * 
                     */
                    bool LeftTopXHasBeenSet() const;

                    /**
                     * 获取<p>区域左上角Y坐标。 如当Unit取1即使用百分比单位时，0.1表示区域左上角离整个画面左上角的纵向距离为画面高度的10%。</p>
                     * @return LeftTopY <p>区域左上角Y坐标。 如当Unit取1即使用百分比单位时，0.1表示区域左上角离整个画面左上角的纵向距离为画面高度的10%。</p>
                     * 
                     */
                    double GetLeftTopY() const;

                    /**
                     * 设置<p>区域左上角Y坐标。 如当Unit取1即使用百分比单位时，0.1表示区域左上角离整个画面左上角的纵向距离为画面高度的10%。</p>
                     * @param _leftTopY <p>区域左上角Y坐标。 如当Unit取1即使用百分比单位时，0.1表示区域左上角离整个画面左上角的纵向距离为画面高度的10%。</p>
                     * 
                     */
                    void SetLeftTopY(const double& _leftTopY);

                    /**
                     * 判断参数 LeftTopY 是否已赋值
                     * @return LeftTopY 是否已赋值
                     * 
                     */
                    bool LeftTopYHasBeenSet() const;

                    /**
                     * 获取<p>区域右下角X坐标。 如当Unit取1即使用百分比单位时，0.75表示区域右下角离整个画面左上角的横向距离为画面宽度的75%。</p>
                     * @return RightBottomX <p>区域右下角X坐标。 如当Unit取1即使用百分比单位时，0.75表示区域右下角离整个画面左上角的横向距离为画面宽度的75%。</p>
                     * 
                     */
                    double GetRightBottomX() const;

                    /**
                     * 设置<p>区域右下角X坐标。 如当Unit取1即使用百分比单位时，0.75表示区域右下角离整个画面左上角的横向距离为画面宽度的75%。</p>
                     * @param _rightBottomX <p>区域右下角X坐标。 如当Unit取1即使用百分比单位时，0.75表示区域右下角离整个画面左上角的横向距离为画面宽度的75%。</p>
                     * 
                     */
                    void SetRightBottomX(const double& _rightBottomX);

                    /**
                     * 判断参数 RightBottomX 是否已赋值
                     * @return RightBottomX 是否已赋值
                     * 
                     */
                    bool RightBottomXHasBeenSet() const;

                    /**
                     * 获取<p>区域右下角Y坐标。 如当Unit取1即使用百分比单位时，0.9表示区域右下角离整个画面左上角的纵向距离为画面高度的90%。</p>
                     * @return RightBottomY <p>区域右下角Y坐标。 如当Unit取1即使用百分比单位时，0.9表示区域右下角离整个画面左上角的纵向距离为画面高度的90%。</p>
                     * 
                     */
                    double GetRightBottomY() const;

                    /**
                     * 设置<p>区域右下角Y坐标。 如当Unit取1即使用百分比单位时，0.9表示区域右下角离整个画面左上角的纵向距离为画面高度的90%。</p>
                     * @param _rightBottomY <p>区域右下角Y坐标。 如当Unit取1即使用百分比单位时，0.9表示区域右下角离整个画面左上角的纵向距离为画面高度的90%。</p>
                     * 
                     */
                    void SetRightBottomY(const double& _rightBottomY);

                    /**
                     * 判断参数 RightBottomY 是否已赋值
                     * @return RightBottomY 是否已赋值
                     * 
                     */
                    bool RightBottomYHasBeenSet() const;

                    /**
                     * 获取<p>坐标单位 - 1 百分比 - 2 像素值</p>
                     * @return Unit <p>坐标单位 - 1 百分比 - 2 像素值</p>
                     * 
                     */
                    uint64_t GetUnit() const;

                    /**
                     * 设置<p>坐标单位 - 1 百分比 - 2 像素值</p>
                     * @param _unit <p>坐标单位 - 1 百分比 - 2 像素值</p>
                     * 
                     */
                    void SetUnit(const uint64_t& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * <p>区域左上角X坐标。 如当Unit取1即使用百分比单位时，0.05表示区域左上角离整个画面左上角的横向距离为画面宽度的5%。</p>
                     */
                    double m_leftTopX;
                    bool m_leftTopXHasBeenSet;

                    /**
                     * <p>区域左上角Y坐标。 如当Unit取1即使用百分比单位时，0.1表示区域左上角离整个画面左上角的纵向距离为画面高度的10%。</p>
                     */
                    double m_leftTopY;
                    bool m_leftTopYHasBeenSet;

                    /**
                     * <p>区域右下角X坐标。 如当Unit取1即使用百分比单位时，0.75表示区域右下角离整个画面左上角的横向距离为画面宽度的75%。</p>
                     */
                    double m_rightBottomX;
                    bool m_rightBottomXHasBeenSet;

                    /**
                     * <p>区域右下角Y坐标。 如当Unit取1即使用百分比单位时，0.9表示区域右下角离整个画面左上角的纵向距离为画面高度的90%。</p>
                     */
                    double m_rightBottomY;
                    bool m_rightBottomYHasBeenSet;

                    /**
                     * <p>坐标单位 - 1 百分比 - 2 像素值</p>
                     */
                    uint64_t m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASEAREA_H_
