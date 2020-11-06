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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESREQUEST_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * DescribeImages请求参数结构体
                */
                class DescribeImagesRequest : public AbstractModel
                {
                public:
                    DescribeImagesRequest();
                    ~DescribeImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页偏移量
                     * @return Offset 页偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移量
                     * @param Offset 页偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param Limit 页大小
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param Keyword 搜索关键字
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取构图方式，可选以下值：horizontal、vertical、square，分别代表以下含义：横图、竖图、方图
                     * @return Orientation 构图方式，可选以下值：horizontal、vertical、square，分别代表以下含义：横图、竖图、方图
                     */
                    std::string GetOrientation() const;

                    /**
                     * 设置构图方式，可选以下值：horizontal、vertical、square，分别代表以下含义：横图、竖图、方图
                     * @param Orientation 构图方式，可选以下值：horizontal、vertical、square，分别代表以下含义：横图、竖图、方图
                     */
                    void SetOrientation(const std::string& _orientation);

                    /**
                     * 判断参数 Orientation 是否已赋值
                     * @return Orientation 是否已赋值
                     */
                    bool OrientationHasBeenSet() const;

                    /**
                     * 获取图片类型，可选以下值：照片、插画
                     * @return ImageSenseType 图片类型，可选以下值：照片、插画
                     */
                    std::string GetImageSenseType() const;

                    /**
                     * 设置图片类型，可选以下值：照片、插画
                     * @param ImageSenseType 图片类型，可选以下值：照片、插画
                     */
                    void SetImageSenseType(const std::string& _imageSenseType);

                    /**
                     * 判断参数 ImageSenseType 是否已赋值
                     * @return ImageSenseType 是否已赋值
                     */
                    bool ImageSenseTypeHasBeenSet() const;

                private:

                    /**
                     * 页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 构图方式，可选以下值：horizontal、vertical、square，分别代表以下含义：横图、竖图、方图
                     */
                    std::string m_orientation;
                    bool m_orientationHasBeenSet;

                    /**
                     * 图片类型，可选以下值：照片、插画
                     */
                    std::string m_imageSenseType;
                    bool m_imageSenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESREQUEST_H_
