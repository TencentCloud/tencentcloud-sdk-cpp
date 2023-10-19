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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEMSGCONTENT_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEMSGCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 图片消息
                */
                class ImageMsgContent : public AbstractModel
                {
                public:
                    ImageMsgContent();
                    ~ImageMsgContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片的唯一标识，客户端用于索引图片的键值。
                     * @return UUID 图片的唯一标识，客户端用于索引图片的键值。
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置图片的唯一标识，客户端用于索引图片的键值。
                     * @param _uUID 图片的唯一标识，客户端用于索引图片的键值。
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取图片格式。
JPG = 1
GIF = 2
PNG = 3
BMP = 4
其他 = 255

                     * @return ImageFormat 图片格式。
JPG = 1
GIF = 2
PNG = 3
BMP = 4
其他 = 255

                     * 
                     */
                    uint64_t GetImageFormat() const;

                    /**
                     * 设置图片格式。
JPG = 1
GIF = 2
PNG = 3
BMP = 4
其他 = 255

                     * @param _imageFormat 图片格式。
JPG = 1
GIF = 2
PNG = 3
BMP = 4
其他 = 255

                     * 
                     */
                    void SetImageFormat(const uint64_t& _imageFormat);

                    /**
                     * 判断参数 ImageFormat 是否已赋值
                     * @return ImageFormat 是否已赋值
                     * 
                     */
                    bool ImageFormatHasBeenSet() const;

                    /**
                     * 获取图片信息
                     * @return ImageInfoList 图片信息
                     * 
                     */
                    std::vector<ImageInfo> GetImageInfoList() const;

                    /**
                     * 设置图片信息
                     * @param _imageInfoList 图片信息
                     * 
                     */
                    void SetImageInfoList(const std::vector<ImageInfo>& _imageInfoList);

                    /**
                     * 判断参数 ImageInfoList 是否已赋值
                     * @return ImageInfoList 是否已赋值
                     * 
                     */
                    bool ImageInfoListHasBeenSet() const;

                private:

                    /**
                     * 图片的唯一标识，客户端用于索引图片的键值。
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 图片格式。
JPG = 1
GIF = 2
PNG = 3
BMP = 4
其他 = 255

                     */
                    uint64_t m_imageFormat;
                    bool m_imageFormatHasBeenSet;

                    /**
                     * 图片信息
                     */
                    std::vector<ImageInfo> m_imageInfoList;
                    bool m_imageInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_IMAGEMSGCONTENT_H_
