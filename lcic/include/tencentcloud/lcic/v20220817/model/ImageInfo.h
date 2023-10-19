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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 单张图片信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片类型：
1-原图
2-大图
3-缩略图

                     * @return Type 图片类型：
1-原图
2-大图
3-缩略图

                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置图片类型：
1-原图
2-大图
3-缩略图

                     * @param _type 图片类型：
1-原图
2-大图
3-缩略图

                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取图片数据大小，单位：字节。
                     * @return Size 图片数据大小，单位：字节。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置图片数据大小，单位：字节。
                     * @param _size 图片数据大小，单位：字节。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取图片宽度，单位为像素。
                     * @return Width 图片宽度，单位为像素。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置图片宽度，单位为像素。
                     * @param _width 图片宽度，单位为像素。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取图片高度，单位为像素。
                     * @return Height 图片高度，单位为像素。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置图片高度，单位为像素。
                     * @param _height 图片高度，单位为像素。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片下载地址。
                     * @return URL 图片下载地址。
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置图片下载地址。
                     * @param _uRL 图片下载地址。
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                private:

                    /**
                     * 图片类型：
1-原图
2-大图
3-缩略图

                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片数据大小，单位：字节。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 图片宽度，单位为像素。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片高度，单位为像素。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片下载地址。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEINFO_H_
