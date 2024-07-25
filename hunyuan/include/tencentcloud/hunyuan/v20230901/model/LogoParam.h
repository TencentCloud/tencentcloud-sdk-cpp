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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/LogoRect.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
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
                     * 获取水印url
                     * @return LogoUrl 水印url
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置水印url
                     * @param _logoUrl 水印url
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
                     * 获取水印base64，url和base64二选一传入
                     * @return LogoImage 水印base64，url和base64二选一传入
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置水印base64，url和base64二选一传入
                     * @param _logoImage 水印base64，url和base64二选一传入
                     * 
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     * 
                     */
                    bool LogoImageHasBeenSet() const;

                    /**
                     * 获取水印图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * @return LogoRect 水印图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * 
                     */
                    LogoRect GetLogoRect() const;

                    /**
                     * 设置水印图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * @param _logoRect 水印图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     * 
                     */
                    void SetLogoRect(const LogoRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     * 
                     */
                    bool LogoRectHasBeenSet() const;

                private:

                    /**
                     * 水印url
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 水印base64，url和base64二选一传入
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                    /**
                     * 水印图片位于融合结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
                     */
                    LogoRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LOGOPARAM_H_
