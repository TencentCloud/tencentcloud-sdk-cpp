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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFORESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * FaceInfoResult
                */
                class FaceInfoResult : public AbstractModel
                {
                public:
                    FaceInfoResult();
                    ~FaceInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸尺寸的占比
                     * @return FaceRatio 人脸尺寸的占比
                     * 
                     */
                    double GetFaceRatio() const;

                    /**
                     * 设置人脸尺寸的占比
                     * @param _faceRatio 人脸尺寸的占比
                     * 
                     */
                    void SetFaceRatio(const double& _faceRatio);

                    /**
                     * 判断参数 FaceRatio 是否已赋值
                     * @return FaceRatio 是否已赋值
                     * 
                     */
                    bool FaceRatioHasBeenSet() const;

                    /**
                     * 获取帧高度
                     * @return FrameHeight 帧高度
                     * 
                     */
                    int64_t GetFrameHeight() const;

                    /**
                     * 设置帧高度
                     * @param _frameHeight 帧高度
                     * 
                     */
                    void SetFrameHeight(const int64_t& _frameHeight);

                    /**
                     * 判断参数 FrameHeight 是否已赋值
                     * @return FrameHeight 是否已赋值
                     * 
                     */
                    bool FrameHeightHasBeenSet() const;

                    /**
                     * 获取帧宽度
                     * @return FrameWidth 帧宽度
                     * 
                     */
                    int64_t GetFrameWidth() const;

                    /**
                     * 设置帧宽度
                     * @param _frameWidth 帧宽度
                     * 
                     */
                    void SetFrameWidth(const int64_t& _frameWidth);

                    /**
                     * 判断参数 FrameWidth 是否已赋值
                     * @return FrameWidth 是否已赋值
                     * 
                     */
                    bool FrameWidthHasBeenSet() const;

                    /**
                     * 获取人脸高度
                     * @return Height 人脸高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置人脸高度
                     * @param _height 人脸高度
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
                     * 获取人脸左坐标
                     * @return Left 人脸左坐标
                     * 
                     */
                    int64_t GetLeft() const;

                    /**
                     * 设置人脸左坐标
                     * @param _left 人脸左坐标
                     * 
                     */
                    void SetLeft(const int64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取人脸顶坐标
                     * @return Top 人脸顶坐标
                     * 
                     */
                    int64_t GetTop() const;

                    /**
                     * 设置人脸顶坐标
                     * @param _top 人脸顶坐标
                     * 
                     */
                    void SetTop(const int64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取人脸宽度
                     * @return Width 人脸宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置人脸宽度
                     * @param _width 人脸宽度
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 人脸尺寸的占比
                     */
                    double m_faceRatio;
                    bool m_faceRatioHasBeenSet;

                    /**
                     * 帧高度
                     */
                    int64_t m_frameHeight;
                    bool m_frameHeightHasBeenSet;

                    /**
                     * 帧宽度
                     */
                    int64_t m_frameWidth;
                    bool m_frameWidthHasBeenSet;

                    /**
                     * 人脸高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 人脸左坐标
                     */
                    int64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 人脸顶坐标
                     */
                    int64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 人脸宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFORESULT_H_
