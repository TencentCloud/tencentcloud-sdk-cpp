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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_SIGNKEYWORD_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_SIGNKEYWORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * 签署关键字信息
                */
                class SignKeyword : public AbstractModel
                {
                public:
                    SignKeyword();
                    ~SignKeyword() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键字
                     * @return Keyword 关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字
                     * @param _keyword 关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取X轴偏移坐标
                     * @return OffsetCoordX X轴偏移坐标
                     * 
                     */
                    std::string GetOffsetCoordX() const;

                    /**
                     * 设置X轴偏移坐标
                     * @param _offsetCoordX X轴偏移坐标
                     * 
                     */
                    void SetOffsetCoordX(const std::string& _offsetCoordX);

                    /**
                     * 判断参数 OffsetCoordX 是否已赋值
                     * @return OffsetCoordX 是否已赋值
                     * 
                     */
                    bool OffsetCoordXHasBeenSet() const;

                    /**
                     * 获取Y轴偏移坐标
                     * @return OffsetCoordY Y轴偏移坐标
                     * 
                     */
                    std::string GetOffsetCoordY() const;

                    /**
                     * 设置Y轴偏移坐标
                     * @param _offsetCoordY Y轴偏移坐标
                     * 
                     */
                    void SetOffsetCoordY(const std::string& _offsetCoordY);

                    /**
                     * 判断参数 OffsetCoordY 是否已赋值
                     * @return OffsetCoordY 是否已赋值
                     * 
                     */
                    bool OffsetCoordYHasBeenSet() const;

                    /**
                     * 获取签章图片宽度
                     * @return ImageWidth 签章图片宽度
                     * 
                     */
                    std::string GetImageWidth() const;

                    /**
                     * 设置签章图片宽度
                     * @param _imageWidth 签章图片宽度
                     * 
                     */
                    void SetImageWidth(const std::string& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取签章图片高度
                     * @return ImageHeight 签章图片高度
                     * 
                     */
                    std::string GetImageHeight() const;

                    /**
                     * 设置签章图片高度
                     * @param _imageHeight 签章图片高度
                     * 
                     */
                    void SetImageHeight(const std::string& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                private:

                    /**
                     * 关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * X轴偏移坐标
                     */
                    std::string m_offsetCoordX;
                    bool m_offsetCoordXHasBeenSet;

                    /**
                     * Y轴偏移坐标
                     */
                    std::string m_offsetCoordY;
                    bool m_offsetCoordYHasBeenSet;

                    /**
                     * 签章图片宽度
                     */
                    std::string m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 签章图片高度
                     */
                    std::string m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_SIGNKEYWORD_H_
