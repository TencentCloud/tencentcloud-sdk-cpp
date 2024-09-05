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
                     * 获取标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配。
Width、Height <= 2160。
                     * @return LogoRect 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配。
Width、Height <= 2160。
                     * 
                     */
                    FaceRect GetLogoRect() const;

                    /**
                     * 设置标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配。
Width、Height <= 2160。
                     * @param _logoRect 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配。
Width、Height <= 2160。
                     * 
                     */
                    void SetLogoRect(const FaceRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     * 
                     */
                    bool LogoRectHasBeenSet() const;

                    /**
                     * 获取标识图片Url地址

●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * @return LogoUrl 标识图片Url地址

●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置标识图片Url地址

●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * @param _logoUrl 标识图片Url地址

●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * 
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     * 
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * @return LogoImage 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * @param _logoImage 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     * 
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     * 
                     */
                    bool LogoImageHasBeenSet() const;

                private:

                    /**
                     * 标识图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配。
Width、Height <= 2160。
                     */
                    FaceRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                    /**
                     * 标识图片Url地址

●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●支持图片格式：支持jpg或png
专业版：base64 编码后大小不超过10M。
非专业版：base64 编码后大小不超过5M。
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_
