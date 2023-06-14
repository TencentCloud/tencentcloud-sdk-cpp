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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 画中画模板中有效，代表小画面的布局参数
                */
                class SmallVideoLayoutParams : public AbstractModel
                {
                public:
                    SmallVideoLayoutParams();
                    ~SmallVideoLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代表小画面对应的用户ID。
                     * @return UserId 代表小画面对应的用户ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置代表小画面对应的用户ID。
                     * @param _userId 代表小画面对应的用户ID。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取代表小画面对应的流类型，0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * @return StreamType 代表小画面对应的流类型，0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置代表小画面对应的流类型，0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * @param _streamType 代表小画面对应的流类型，0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取小画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @return ImageWidth 小画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置小画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @param _imageWidth 小画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取小画面在输出时的高度，单位为像素值，不填默认为0。
                     * @return ImageHeight 小画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置小画面在输出时的高度，单位为像素值，不填默认为0。
                     * @param _imageHeight 小画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取小画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @return LocationX 小画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置小画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @param _locationX 小画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取小画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @return LocationY 小画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置小画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @param _locationY 小画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                private:

                    /**
                     * 代表小画面对应的用户ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 代表小画面对应的流类型，0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 小画面在输出时的宽度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 小画面在输出时的高度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 小画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 小画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_
