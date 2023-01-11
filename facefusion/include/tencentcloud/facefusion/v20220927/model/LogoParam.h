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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FaceRect.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * logo参数
                */
                class LogoParam : public AbstractModel
                {
                public:
                    LogoParam();
                    ~LogoParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * @return LogoRect 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     */
                    FaceRect GetLogoRect() const;

                    /**
                     * 设置标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * @param LogoRect 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     */
                    void SetLogoRect(const FaceRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     */
                    bool LogoRectHasBeenSet() const;

                    /**
                     * 获取标识图片Url地址
                     * @return LogoUrl 标识图片Url地址
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置标识图片Url地址
                     * @param LogoUrl 标识图片Url地址
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取标识图片base64
                     * @return LogoImage 标识图片base64
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置标识图片base64
                     * @param LogoImage 标识图片base64
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     */
                    bool LogoImageHasBeenSet() const;

                private:

                    /**
                     * 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     */
                    FaceRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                    /**
                     * 标识图片Url地址
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 标识图片base64
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_
