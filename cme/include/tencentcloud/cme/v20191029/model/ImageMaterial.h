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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_IMAGEMATERIAL_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_IMAGEMATERIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 图片素材信息
                */
                class ImageMaterial : public AbstractModel
                {
                public:
                    ImageMaterial();
                    ~ImageMaterial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片高度，单位：px。
                     * @return Height 图片高度，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置图片高度，单位：px。
                     * @param _height 图片高度，单位：px。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片宽度，单位：px。
                     * @return Width 图片宽度，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置图片宽度，单位：px。
                     * @param _width 图片宽度，单位：px。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的展示 URL 地址。
                     * @return MaterialUrl 素材媒体文件的展示 URL 地址。
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置素材媒体文件的展示 URL 地址。
                     * @param _materialUrl 素材媒体文件的展示 URL 地址。
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取图片大小，单位：字节。
                     * @return Size 图片大小，单位：字节。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置图片大小，单位：字节。
                     * @param _size 图片大小，单位：字节。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的原始 URL 地址。
                     * @return OriginalUrl 素材媒体文件的原始 URL 地址。
                     * 
                     */
                    std::string GetOriginalUrl() const;

                    /**
                     * 设置素材媒体文件的原始 URL 地址。
                     * @param _originalUrl 素材媒体文件的原始 URL 地址。
                     * 
                     */
                    void SetOriginalUrl(const std::string& _originalUrl);

                    /**
                     * 判断参数 OriginalUrl 是否已赋值
                     * @return OriginalUrl 是否已赋值
                     * 
                     */
                    bool OriginalUrlHasBeenSet() const;

                    /**
                     * 获取云点播媒资 FileId。
                     * @return VodFileId 云点播媒资 FileId。
                     * 
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId。
                     * @param _vodFileId 云点播媒资 FileId。
                     * 
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     * 
                     */
                    bool VodFileIdHasBeenSet() const;

                private:

                    /**
                     * 图片高度，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片宽度，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 素材媒体文件的展示 URL 地址。
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * 图片大小，单位：字节。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 素材媒体文件的原始 URL 地址。
                     */
                    std::string m_originalUrl;
                    bool m_originalUrlHasBeenSet;

                    /**
                     * 云点播媒资 FileId。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_IMAGEMATERIAL_H_
