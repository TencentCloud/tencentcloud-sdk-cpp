/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITREDUCEFACEJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITREDUCEFACEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/File3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitReduceFaceJob请求参数结构体
                */
                class SubmitReduceFaceJobRequest : public AbstractModel
                {
                public:
                    SubmitReduceFaceJobRequest();
                    ~SubmitReduceFaceJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源3D模型文件。其中参数 Type 和 Url 必填，参数 PreviewImageUrl 无意义，可忽略。
Type可选值：OBJ，GLB

                     * @return File3D 源3D模型文件。其中参数 Type 和 Url 必填，参数 PreviewImageUrl 无意义，可忽略。
Type可选值：OBJ，GLB

                     * 
                     */
                    File3D GetFile3D() const;

                    /**
                     * 设置源3D模型文件。其中参数 Type 和 Url 必填，参数 PreviewImageUrl 无意义，可忽略。
Type可选值：OBJ，GLB

                     * @param _file3D 源3D模型文件。其中参数 Type 和 Url 必填，参数 PreviewImageUrl 无意义，可忽略。
Type可选值：OBJ，GLB

                     * 
                     */
                    void SetFile3D(const File3D& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取多边形类型，表示模型的表面由几边形网格构成，默认为triangle,参考值:
triangle:三角形面。
quadrilateral：四边形面。
                     * @return PolygonType 多边形类型，表示模型的表面由几边形网格构成，默认为triangle,参考值:
triangle:三角形面。
quadrilateral：四边形面。
                     * 
                     */
                    std::string GetPolygonType() const;

                    /**
                     * 设置多边形类型，表示模型的表面由几边形网格构成，默认为triangle,参考值:
triangle:三角形面。
quadrilateral：四边形面。
                     * @param _polygonType 多边形类型，表示模型的表面由几边形网格构成，默认为triangle,参考值:
triangle:三角形面。
quadrilateral：四边形面。
                     * 
                     */
                    void SetPolygonType(const std::string& _polygonType);

                    /**
                     * 判断参数 PolygonType 是否已赋值
                     * @return PolygonType 是否已赋值
                     * 
                     */
                    bool PolygonTypeHasBeenSet() const;

                    /**
                     * 获取减面后面数档位类型，可选值：high，medium, low。
                     * @return FaceLevel 减面后面数档位类型，可选值：high，medium, low。
                     * 
                     */
                    std::string GetFaceLevel() const;

                    /**
                     * 设置减面后面数档位类型，可选值：high，medium, low。
                     * @param _faceLevel 减面后面数档位类型，可选值：high，medium, low。
                     * 
                     */
                    void SetFaceLevel(const std::string& _faceLevel);

                    /**
                     * 判断参数 FaceLevel 是否已赋值
                     * @return FaceLevel 是否已赋值
                     * 
                     */
                    bool FaceLevelHasBeenSet() const;

                private:

                    /**
                     * 源3D模型文件。其中参数 Type 和 Url 必填，参数 PreviewImageUrl 无意义，可忽略。
Type可选值：OBJ，GLB

                     */
                    File3D m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * 多边形类型，表示模型的表面由几边形网格构成，默认为triangle,参考值:
triangle:三角形面。
quadrilateral：四边形面。
                     */
                    std::string m_polygonType;
                    bool m_polygonTypeHasBeenSet;

                    /**
                     * 减面后面数档位类型，可选值：high，medium, low。
                     */
                    std::string m_faceLevel;
                    bool m_faceLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITREDUCEFACEJOBREQUEST_H_
