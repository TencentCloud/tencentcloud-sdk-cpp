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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageScale.h>
#include <tencentcloud/vod/v20180717/model/ImageCenterCut.h>
#include <tencentcloud/vod/v20180717/model/ImageBlur.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 单个图片处理操作。
                */
                class ImageOperation : public AbstractModel
                {
                public:
                    ImageOperation();
                    ~ImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片处理类型。可选类型有：
<li>Scale : 图片缩略处理；</li>
<li>CenterCut : 图片裁剪处理；</li>
<li>Blur : 图片模糊处理。</li>
                     * @return Type 图片处理类型。可选类型有：
<li>Scale : 图片缩略处理；</li>
<li>CenterCut : 图片裁剪处理；</li>
<li>Blur : 图片模糊处理。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片处理类型。可选类型有：
<li>Scale : 图片缩略处理；</li>
<li>CenterCut : 图片裁剪处理；</li>
<li>Blur : 图片模糊处理。</li>
                     * @param _type 图片处理类型。可选类型有：
<li>Scale : 图片缩略处理；</li>
<li>CenterCut : 图片裁剪处理；</li>
<li>Blur : 图片模糊处理。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取图片缩略处理，仅当 Type 为 Scale 时有效。
                     * @return Scale 图片缩略处理，仅当 Type 为 Scale 时有效。
                     * 
                     */
                    ImageScale GetScale() const;

                    /**
                     * 设置图片缩略处理，仅当 Type 为 Scale 时有效。
                     * @param _scale 图片缩略处理，仅当 Type 为 Scale 时有效。
                     * 
                     */
                    void SetScale(const ImageScale& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取图片裁剪处理，仅当 Type 为 CenterCut 时有效。
                     * @return CenterCut 图片裁剪处理，仅当 Type 为 CenterCut 时有效。
                     * 
                     */
                    ImageCenterCut GetCenterCut() const;

                    /**
                     * 设置图片裁剪处理，仅当 Type 为 CenterCut 时有效。
                     * @param _centerCut 图片裁剪处理，仅当 Type 为 CenterCut 时有效。
                     * 
                     */
                    void SetCenterCut(const ImageCenterCut& _centerCut);

                    /**
                     * 判断参数 CenterCut 是否已赋值
                     * @return CenterCut 是否已赋值
                     * 
                     */
                    bool CenterCutHasBeenSet() const;

                    /**
                     * 获取图片模糊处理，仅当 Type 为 Blur 时有效。
                     * @return Blur 图片模糊处理，仅当 Type 为 Blur 时有效。
                     * 
                     */
                    ImageBlur GetBlur() const;

                    /**
                     * 设置图片模糊处理，仅当 Type 为 Blur 时有效。
                     * @param _blur 图片模糊处理，仅当 Type 为 Blur 时有效。
                     * 
                     */
                    void SetBlur(const ImageBlur& _blur);

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                private:

                    /**
                     * 图片处理类型。可选类型有：
<li>Scale : 图片缩略处理；</li>
<li>CenterCut : 图片裁剪处理；</li>
<li>Blur : 图片模糊处理。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片缩略处理，仅当 Type 为 Scale 时有效。
                     */
                    ImageScale m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 图片裁剪处理，仅当 Type 为 CenterCut 时有效。
                     */
                    ImageCenterCut m_centerCut;
                    bool m_centerCutHasBeenSet;

                    /**
                     * 图片模糊处理，仅当 Type 为 Blur 时有效。
                     */
                    ImageBlur m_blur;
                    bool m_blurHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
