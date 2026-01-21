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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMIT3DSMARTTOPOLOGYJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMIT3DSMARTTOPOLOGYJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Submit3DSmartTopologyJob请求参数结构体
                */
                class Submit3DSmartTopologyJobRequest : public AbstractModel
                {
                public:
                    Submit3DSmartTopologyJobRequest();
                    ~Submit3DSmartTopologyJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源3D文件模型链接，参考值：
Type：glb，obj格式文件必选其一。
Url：文件大小不超过200MB。
3D模型要求：复杂模型和拓扑过的模型暂无法支持减面操作，建议输入未拓扑过的高模，比如混元3D生成的模型，适用度比较高的类别：硬表面、游戏角色、道具、日常生活用品等。
                     * @return File3D 源3D文件模型链接，参考值：
Type：glb，obj格式文件必选其一。
Url：文件大小不超过200MB。
3D模型要求：复杂模型和拓扑过的模型暂无法支持减面操作，建议输入未拓扑过的高模，比如混元3D生成的模型，适用度比较高的类别：硬表面、游戏角色、道具、日常生活用品等。
                     * 
                     */
                    InputFile3D GetFile3D() const;

                    /**
                     * 设置源3D文件模型链接，参考值：
Type：glb，obj格式文件必选其一。
Url：文件大小不超过200MB。
3D模型要求：复杂模型和拓扑过的模型暂无法支持减面操作，建议输入未拓扑过的高模，比如混元3D生成的模型，适用度比较高的类别：硬表面、游戏角色、道具、日常生活用品等。
                     * @param _file3D 源3D文件模型链接，参考值：
Type：glb，obj格式文件必选其一。
Url：文件大小不超过200MB。
3D模型要求：复杂模型和拓扑过的模型暂无法支持减面操作，建议输入未拓扑过的高模，比如混元3D生成的模型，适用度比较高的类别：硬表面、游戏角色、道具、日常生活用品等。
                     * 
                     */
                    void SetFile3D(const InputFile3D& _file3D);

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
                     * 源3D文件模型链接，参考值：
Type：glb，obj格式文件必选其一。
Url：文件大小不超过200MB。
3D模型要求：复杂模型和拓扑过的模型暂无法支持减面操作，建议输入未拓扑过的高模，比如混元3D生成的模型，适用度比较高的类别：硬表面、游戏角色、道具、日常生活用品等。
                     */
                    InputFile3D m_file3D;
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

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMIT3DSMARTTOPOLOGYJOBREQUEST_H_
