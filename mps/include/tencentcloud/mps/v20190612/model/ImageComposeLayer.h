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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理图层融合功能图层数据结构
                */
                class ImageComposeLayer : public AbstractModel
                {
                public:
                    ImageComposeLayer();
                    ~ImageComposeLayer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图层堆叠顺序，必填。同一请求内不可重复，数值越大越靠上（建议从 0 开始连续编号）。</p>
                     * @return ZIndex <p>图层堆叠顺序，必填。同一请求内不可重复，数值越大越靠上（建议从 0 开始连续编号）。</p>
                     * 
                     */
                    int64_t GetZIndex() const;

                    /**
                     * 设置<p>图层堆叠顺序，必填。同一请求内不可重复，数值越大越靠上（建议从 0 开始连续编号）。</p>
                     * @param _zIndex <p>图层堆叠顺序，必填。同一请求内不可重复，数值越大越靠上（建议从 0 开始连续编号）。</p>
                     * 
                     */
                    void SetZIndex(const int64_t& _zIndex);

                    /**
                     * 判断参数 ZIndex 是否已赋值
                     * @return ZIndex 是否已赋值
                     * 
                     */
                    bool ZIndexHasBeenSet() const;

                    /**
                     * 获取<p>图层图片来源，必填。支持 URL / COS / AWS-S3 / VOD。</p>
                     * @return InputInfo <p>图层图片来源，必填。支持 URL / COS / AWS-S3 / VOD。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>图层图片来源，必填。支持 URL / COS / AWS-S3 / VOD。</p>
                     * @param _inputInfo <p>图层图片来源，必填。支持 URL / COS / AWS-S3 / VOD。</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>图层在画布中的位置与尺寸，必填。长度为 4 的数组 [X1, Y1, X2, Y2]：左上角 + 右下角坐标，要求 X2 &gt; X1、Y2 &gt;    Y1。</p><p>两种语义（与图片擦除能力的 BoundingBox 对齐）：</p><ul><li>像素：坐标值，取值范围 [-10240,    10240]，允许为负或超出画布（超出部分被裁掉）；</li><li>比例：各值 ∈ [-1, 1]，按画布宽高换算（x 乘画布宽、y    乘画布高）。</li></ul><p>图层会缩放填满该矩形；超出画布的部分一律裁掉，输出尺寸恒等于画布尺寸。</p>
                     * @return BoundingBox <p>图层在画布中的位置与尺寸，必填。长度为 4 的数组 [X1, Y1, X2, Y2]：左上角 + 右下角坐标，要求 X2 &gt; X1、Y2 &gt;    Y1。</p><p>两种语义（与图片擦除能力的 BoundingBox 对齐）：</p><ul><li>像素：坐标值，取值范围 [-10240,    10240]，允许为负或超出画布（超出部分被裁掉）；</li><li>比例：各值 ∈ [-1, 1]，按画布宽高换算（x 乘画布宽、y    乘画布高）。</li></ul><p>图层会缩放填满该矩形；超出画布的部分一律裁掉，输出尺寸恒等于画布尺寸。</p>
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置<p>图层在画布中的位置与尺寸，必填。长度为 4 的数组 [X1, Y1, X2, Y2]：左上角 + 右下角坐标，要求 X2 &gt; X1、Y2 &gt;    Y1。</p><p>两种语义（与图片擦除能力的 BoundingBox 对齐）：</p><ul><li>像素：坐标值，取值范围 [-10240,    10240]，允许为负或超出画布（超出部分被裁掉）；</li><li>比例：各值 ∈ [-1, 1]，按画布宽高换算（x 乘画布宽、y    乘画布高）。</li></ul><p>图层会缩放填满该矩形；超出画布的部分一律裁掉，输出尺寸恒等于画布尺寸。</p>
                     * @param _boundingBox <p>图层在画布中的位置与尺寸，必填。长度为 4 的数组 [X1, Y1, X2, Y2]：左上角 + 右下角坐标，要求 X2 &gt; X1、Y2 &gt;    Y1。</p><p>两种语义（与图片擦除能力的 BoundingBox 对齐）：</p><ul><li>像素：坐标值，取值范围 [-10240,    10240]，允许为负或超出画布（超出部分被裁掉）；</li><li>比例：各值 ∈ [-1, 1]，按画布宽高换算（x 乘画布宽、y    乘画布高）。</li></ul><p>图层会缩放填满该矩形；超出画布的部分一律裁掉，输出尺寸恒等于画布尺寸。</p>
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取<p>坐标单位，与图片擦除能力对齐。取值：</p><ul><li>0：自动判定（不传时的默认值）；</li><li>1：比例；</li><li>2：像素。</li></ul><p>自动判定规则：四个值全部大于 1 按像素解释、全部不大于 1 按比例解释；混合取值会返回InvalidParameter，建议始终显式指定。</p>
                     * @return BoundingBoxUnitType <p>坐标单位，与图片擦除能力对齐。取值：</p><ul><li>0：自动判定（不传时的默认值）；</li><li>1：比例；</li><li>2：像素。</li></ul><p>自动判定规则：四个值全部大于 1 按像素解释、全部不大于 1 按比例解释；混合取值会返回InvalidParameter，建议始终显式指定。</p>
                     * 
                     */
                    uint64_t GetBoundingBoxUnitType() const;

                    /**
                     * 设置<p>坐标单位，与图片擦除能力对齐。取值：</p><ul><li>0：自动判定（不传时的默认值）；</li><li>1：比例；</li><li>2：像素。</li></ul><p>自动判定规则：四个值全部大于 1 按像素解释、全部不大于 1 按比例解释；混合取值会返回InvalidParameter，建议始终显式指定。</p>
                     * @param _boundingBoxUnitType <p>坐标单位，与图片擦除能力对齐。取值：</p><ul><li>0：自动判定（不传时的默认值）；</li><li>1：比例；</li><li>2：像素。</li></ul><p>自动判定规则：四个值全部大于 1 按像素解释、全部不大于 1 按比例解释；混合取值会返回InvalidParameter，建议始终显式指定。</p>
                     * 
                     */
                    void SetBoundingBoxUnitType(const uint64_t& _boundingBoxUnitType);

                    /**
                     * 判断参数 BoundingBoxUnitType 是否已赋值
                     * @return BoundingBoxUnitType 是否已赋值
                     * 
                     */
                    bool BoundingBoxUnitTypeHasBeenSet() const;

                private:

                    /**
                     * <p>图层堆叠顺序，必填。同一请求内不可重复，数值越大越靠上（建议从 0 开始连续编号）。</p>
                     */
                    int64_t m_zIndex;
                    bool m_zIndexHasBeenSet;

                    /**
                     * <p>图层图片来源，必填。支持 URL / COS / AWS-S3 / VOD。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>图层在画布中的位置与尺寸，必填。长度为 4 的数组 [X1, Y1, X2, Y2]：左上角 + 右下角坐标，要求 X2 &gt; X1、Y2 &gt;    Y1。</p><p>两种语义（与图片擦除能力的 BoundingBox 对齐）：</p><ul><li>像素：坐标值，取值范围 [-10240,    10240]，允许为负或超出画布（超出部分被裁掉）；</li><li>比例：各值 ∈ [-1, 1]，按画布宽高换算（x 乘画布宽、y    乘画布高）。</li></ul><p>图层会缩放填满该矩形；超出画布的部分一律裁掉，输出尺寸恒等于画布尺寸。</p>
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * <p>坐标单位，与图片擦除能力对齐。取值：</p><ul><li>0：自动判定（不传时的默认值）；</li><li>1：比例；</li><li>2：像素。</li></ul><p>自动判定规则：四个值全部大于 1 按像素解释、全部不大于 1 按比例解释；混合取值会返回InvalidParameter，建议始终显式指定。</p>
                     */
                    uint64_t m_boundingBoxUnitType;
                    bool m_boundingBoxUnitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSELAYER_H_
