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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_HANDLEPARAM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_HANDLEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 图片处理参数
                */
                class HandleParam : public AbstractModel
                {
                public:
                    HandleParam();
                    ~HandleParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ocr引擎
                     * @return OcrEngineType ocr引擎
                     * 
                     */
                    int64_t GetOcrEngineType() const;

                    /**
                     * 设置ocr引擎
                     * @param _ocrEngineType ocr引擎
                     * 
                     */
                    void SetOcrEngineType(const int64_t& _ocrEngineType);

                    /**
                     * 判断参数 OcrEngineType 是否已赋值
                     * @return OcrEngineType 是否已赋值
                     * 
                     */
                    bool OcrEngineTypeHasBeenSet() const;

                    /**
                     * 获取是否返回分行文本内容
                     * @return IsReturnText 是否返回分行文本内容
                     * 
                     */
                    bool GetIsReturnText() const;

                    /**
                     * 设置是否返回分行文本内容
                     * @param _isReturnText 是否返回分行文本内容
                     * 
                     */
                    void SetIsReturnText(const bool& _isReturnText);

                    /**
                     * 判断参数 IsReturnText 是否已赋值
                     * @return IsReturnText 是否已赋值
                     * 
                     */
                    bool IsReturnTextHasBeenSet() const;

                    /**
                     * 获取顺时针旋转角度
                     * @return RotateTheAngle 顺时针旋转角度
                     * 
                     */
                    double GetRotateTheAngle() const;

                    /**
                     * 设置顺时针旋转角度
                     * @param _rotateTheAngle 顺时针旋转角度
                     * 
                     */
                    void SetRotateTheAngle(const double& _rotateTheAngle);

                    /**
                     * 判断参数 RotateTheAngle 是否已赋值
                     * @return RotateTheAngle 是否已赋值
                     * 
                     */
                    bool RotateTheAngleHasBeenSet() const;

                    /**
                     * 获取自动适配方向,仅支持优图引擎
                     * @return AutoFitDirection 自动适配方向,仅支持优图引擎
                     * 
                     */
                    bool GetAutoFitDirection() const;

                    /**
                     * 设置自动适配方向,仅支持优图引擎
                     * @param _autoFitDirection 自动适配方向,仅支持优图引擎
                     * 
                     */
                    void SetAutoFitDirection(const bool& _autoFitDirection);

                    /**
                     * 判断参数 AutoFitDirection 是否已赋值
                     * @return AutoFitDirection 是否已赋值
                     * 
                     */
                    bool AutoFitDirectionHasBeenSet() const;

                    /**
                     * 获取坐标优化
                     * @return AutoOptimizeCoordinate 坐标优化
                     * 
                     */
                    bool GetAutoOptimizeCoordinate() const;

                    /**
                     * 设置坐标优化
                     * @param _autoOptimizeCoordinate 坐标优化
                     * 
                     */
                    void SetAutoOptimizeCoordinate(const bool& _autoOptimizeCoordinate);

                    /**
                     * 判断参数 AutoOptimizeCoordinate 是否已赋值
                     * @return AutoOptimizeCoordinate 是否已赋值
                     * 
                     */
                    bool AutoOptimizeCoordinateHasBeenSet() const;

                    /**
                     * 获取是否开启图片压缩，开启时imageOriginalSize必须正确填写
                     * @return IsScale 是否开启图片压缩，开启时imageOriginalSize必须正确填写
                     * 
                     */
                    bool GetIsScale() const;

                    /**
                     * 设置是否开启图片压缩，开启时imageOriginalSize必须正确填写
                     * @param _isScale 是否开启图片压缩，开启时imageOriginalSize必须正确填写
                     * 
                     */
                    void SetIsScale(const bool& _isScale);

                    /**
                     * 判断参数 IsScale 是否已赋值
                     * @return IsScale 是否已赋值
                     * 
                     */
                    bool IsScaleHasBeenSet() const;

                    /**
                     * 获取原始图片大小(单位byes),用来判断该图片是否需要压缩
                     * @return ImageOriginalSize 原始图片大小(单位byes),用来判断该图片是否需要压缩
                     * 
                     */
                    uint64_t GetImageOriginalSize() const;

                    /**
                     * 设置原始图片大小(单位byes),用来判断该图片是否需要压缩
                     * @param _imageOriginalSize 原始图片大小(单位byes),用来判断该图片是否需要压缩
                     * 
                     */
                    void SetImageOriginalSize(const uint64_t& _imageOriginalSize);

                    /**
                     * 判断参数 ImageOriginalSize 是否已赋值
                     * @return ImageOriginalSize 是否已赋值
                     * 
                     */
                    bool ImageOriginalSizeHasBeenSet() const;

                    /**
                     * 获取采用后台默认值(2048Kb)
                     * @return ScaleTargetSize 采用后台默认值(2048Kb)
                     * 
                     */
                    uint64_t GetScaleTargetSize() const;

                    /**
                     * 设置采用后台默认值(2048Kb)
                     * @param _scaleTargetSize 采用后台默认值(2048Kb)
                     * 
                     */
                    void SetScaleTargetSize(const uint64_t& _scaleTargetSize);

                    /**
                     * 判断参数 ScaleTargetSize 是否已赋值
                     * @return ScaleTargetSize 是否已赋值
                     * 
                     */
                    bool ScaleTargetSizeHasBeenSet() const;

                private:

                    /**
                     * ocr引擎
                     */
                    int64_t m_ocrEngineType;
                    bool m_ocrEngineTypeHasBeenSet;

                    /**
                     * 是否返回分行文本内容
                     */
                    bool m_isReturnText;
                    bool m_isReturnTextHasBeenSet;

                    /**
                     * 顺时针旋转角度
                     */
                    double m_rotateTheAngle;
                    bool m_rotateTheAngleHasBeenSet;

                    /**
                     * 自动适配方向,仅支持优图引擎
                     */
                    bool m_autoFitDirection;
                    bool m_autoFitDirectionHasBeenSet;

                    /**
                     * 坐标优化
                     */
                    bool m_autoOptimizeCoordinate;
                    bool m_autoOptimizeCoordinateHasBeenSet;

                    /**
                     * 是否开启图片压缩，开启时imageOriginalSize必须正确填写
                     */
                    bool m_isScale;
                    bool m_isScaleHasBeenSet;

                    /**
                     * 原始图片大小(单位byes),用来判断该图片是否需要压缩
                     */
                    uint64_t m_imageOriginalSize;
                    bool m_imageOriginalSizeHasBeenSet;

                    /**
                     * 采用后台默认值(2048Kb)
                     */
                    uint64_t m_scaleTargetSize;
                    bool m_scaleTargetSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_HANDLEPARAM_H_
