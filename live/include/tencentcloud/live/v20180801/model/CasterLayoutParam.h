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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台布局详细参数。
                */
                class CasterLayoutParam : public AbstractModel
                {
                public:
                    CasterLayoutParam();
                    ~CasterLayoutParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取布局层ID。
在画面最终渲染时，将按ID从小到大的顺序，由下至上渲染。
                     * @return LayerId 布局层ID。
在画面最终渲染时，将按ID从小到大的顺序，由下至上渲染。
                     * 
                     */
                    int64_t GetLayerId() const;

                    /**
                     * 设置布局层ID。
在画面最终渲染时，将按ID从小到大的顺序，由下至上渲染。
                     * @param _layerId 布局层ID。
在画面最终渲染时，将按ID从小到大的顺序，由下至上渲染。
                     * 
                     */
                    void SetLayerId(const int64_t& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取布局层宽度。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上所占的比例值。
                     * @return LayerWidth 布局层宽度。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上所占的比例值。
                     * 
                     */
                    double GetLayerWidth() const;

                    /**
                     * 设置布局层宽度。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上所占的比例值。
                     * @param _layerWidth 布局层宽度。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上所占的比例值。
                     * 
                     */
                    void SetLayerWidth(const double& _layerWidth);

                    /**
                     * 判断参数 LayerWidth 是否已赋值
                     * @return LayerWidth 是否已赋值
                     * 
                     */
                    bool LayerWidthHasBeenSet() const;

                    /**
                     * 获取布局层高度。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面上所占的比例值。
                     * @return LayerHeight 布局层高度。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面上所占的比例值。
                     * 
                     */
                    double GetLayerHeight() const;

                    /**
                     * 设置布局层高度。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面上所占的比例值。
                     * @param _layerHeight 布局层高度。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面上所占的比例值。
                     * 
                     */
                    void SetLayerHeight(const double& _layerHeight);

                    /**
                     * 判断参数 LayerHeight 是否已赋值
                     * @return LayerHeight 是否已赋值
                     * 
                     */
                    bool LayerHeightHasBeenSet() const;

                    /**
                     * 获取布局层位置x坐标。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上x坐标所占的比例值。
                     * @return LayerLocationX 布局层位置x坐标。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上x坐标所占的比例值。
                     * 
                     */
                    double GetLayerLocationX() const;

                    /**
                     * 设置布局层位置x坐标。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上x坐标所占的比例值。
                     * @param _layerLocationX 布局层位置x坐标。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上x坐标所占的比例值。
                     * 
                     */
                    void SetLayerLocationX(const double& _layerLocationX);

                    /**
                     * 判断参数 LayerLocationX 是否已赋值
                     * @return LayerLocationX 是否已赋值
                     * 
                     */
                    bool LayerLocationXHasBeenSet() const;

                    /**
                     * 获取布局层位置Y坐标。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面Y坐标上所占的比例值。
                     * @return LayerLocationY 布局层位置Y坐标。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面Y坐标上所占的比例值。
                     * 
                     */
                    double GetLayerLocationY() const;

                    /**
                     * 设置布局层位置Y坐标。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面Y坐标上所占的比例值。
                     * @param _layerLocationY 布局层位置Y坐标。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面Y坐标上所占的比例值。
                     * 
                     */
                    void SetLayerLocationY(const double& _layerLocationY);

                    /**
                     * 判断参数 LayerLocationY 是否已赋值
                     * @return LayerLocationY 是否已赋值
                     * 
                     */
                    bool LayerLocationYHasBeenSet() const;

                    /**
                     * 获取是否启用抠图。
                     * @return UsePortraitSegment 是否启用抠图。
                     * 
                     */
                    bool GetUsePortraitSegment() const;

                    /**
                     * 设置是否启用抠图。
                     * @param _usePortraitSegment 是否启用抠图。
                     * 
                     */
                    void SetUsePortraitSegment(const bool& _usePortraitSegment);

                    /**
                     * 判断参数 UsePortraitSegment 是否已赋值
                     * @return UsePortraitSegment 是否已赋值
                     * 
                     */
                    bool UsePortraitSegmentHasBeenSet() const;

                private:

                    /**
                     * 布局层ID。
在画面最终渲染时，将按ID从小到大的顺序，由下至上渲染。
                     */
                    int64_t m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * 布局层宽度。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上所占的比例值。
                     */
                    double m_layerWidth;
                    bool m_layerWidthHasBeenSet;

                    /**
                     * 布局层高度。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面上所占的比例值。
                     */
                    double m_layerHeight;
                    bool m_layerHeightHasBeenSet;

                    /**
                     * 布局层位置x坐标。单位为百分比，范围[0.0,1.0]，表示该层在最终画面上x坐标所占的比例值。
                     */
                    double m_layerLocationX;
                    bool m_layerLocationXHasBeenSet;

                    /**
                     * 布局层位置Y坐标。单位为百分比，范围[0.0,1.0]， 表示该层在最终画面Y坐标上所占的比例值。
                     */
                    double m_layerLocationY;
                    bool m_layerLocationYHasBeenSet;

                    /**
                     * 是否启用抠图。
                     */
                    bool m_usePortraitSegment;
                    bool m_usePortraitSegmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTPARAM_H_
