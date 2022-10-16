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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuWaterMarkImage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 水印参数。
                */
                class McuWaterMarkParams : public AbstractModel
                {
                public:
                    McuWaterMarkParams();
                    ~McuWaterMarkParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印类型，0为图片（默认）。
                     * @return WaterMarkType 水印类型，0为图片（默认）。
                     */
                    uint64_t GetWaterMarkType() const;

                    /**
                     * 设置水印类型，0为图片（默认）。
                     * @param WaterMarkType 水印类型，0为图片（默认）。
                     */
                    void SetWaterMarkType(const uint64_t& _waterMarkType);

                    /**
                     * 判断参数 WaterMarkType 是否已赋值
                     * @return WaterMarkType 是否已赋值
                     */
                    bool WaterMarkTypeHasBeenSet() const;

                    /**
                     * 获取图片水印参数。WaterMarkType为0指定。
                     * @return WaterMarkImage 图片水印参数。WaterMarkType为0指定。
                     */
                    McuWaterMarkImage GetWaterMarkImage() const;

                    /**
                     * 设置图片水印参数。WaterMarkType为0指定。
                     * @param WaterMarkImage 图片水印参数。WaterMarkType为0指定。
                     */
                    void SetWaterMarkImage(const McuWaterMarkImage& _waterMarkImage);

                    /**
                     * 判断参数 WaterMarkImage 是否已赋值
                     * @return WaterMarkImage 是否已赋值
                     */
                    bool WaterMarkImageHasBeenSet() const;

                private:

                    /**
                     * 水印类型，0为图片（默认）。
                     */
                    uint64_t m_waterMarkType;
                    bool m_waterMarkTypeHasBeenSet;

                    /**
                     * 图片水印参数。WaterMarkType为0指定。
                     */
                    McuWaterMarkImage m_waterMarkImage;
                    bool m_waterMarkImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_
