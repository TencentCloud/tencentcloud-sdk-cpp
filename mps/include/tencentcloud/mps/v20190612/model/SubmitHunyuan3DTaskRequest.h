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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ViewImage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SubmitHunyuan3DTask请求参数结构体
                */
                class SubmitHunyuan3DTaskRequest : public AbstractModel
                {
                public:
                    SubmitHunyuan3DTaskRequest();
                    ~SubmitHunyuan3DTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文生 3D 的提示词</p><p>入参限制：最长 1024 utf-8 字符</p>
                     * @return Prompt <p>文生 3D 的提示词</p><p>入参限制：最长 1024 utf-8 字符</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>文生 3D 的提示词</p><p>入参限制：最长 1024 utf-8 字符</p>
                     * @param _prompt <p>文生 3D 的提示词</p><p>入参限制：最长 1024 utf-8 字符</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>图生 3D 的图片 URL（http/https）</p>
                     * @return ImageUrl <p>图生 3D 的图片 URL（http/https）</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图生 3D 的图片 URL（http/https）</p>
                     * @param _imageUrl <p>图生 3D 的图片 URL（http/https）</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>多视角图生 3D，至少 2 张，且必须包含 front 视角</p>
                     * @return MultiViewImages <p>多视角图生 3D，至少 2 张，且必须包含 front 视角</p>
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 设置<p>多视角图生 3D，至少 2 张，且必须包含 front 视角</p>
                     * @param _multiViewImages <p>多视角图生 3D，至少 2 张，且必须包含 front 视角</p>
                     * 
                     */
                    void SetMultiViewImages(const std::vector<ViewImage>& _multiViewImages);

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取<p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * @return GenerateType <p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * @param _generateType <p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>已有 3D 模型的 URL（仅支持 .glb / .obj）。传了 MeshUrl → 强制 GenerateType=Texture（贴纹理场景）</p>
                     * @return MeshUrl <p>已有 3D 模型的 URL（仅支持 .glb / .obj）。传了 MeshUrl → 强制 GenerateType=Texture（贴纹理场景）</p>
                     * 
                     */
                    std::string GetMeshUrl() const;

                    /**
                     * 设置<p>已有 3D 模型的 URL（仅支持 .glb / .obj）。传了 MeshUrl → 强制 GenerateType=Texture（贴纹理场景）</p>
                     * @param _meshUrl <p>已有 3D 模型的 URL（仅支持 .glb / .obj）。传了 MeshUrl → 强制 GenerateType=Texture（贴纹理场景）</p>
                     * 
                     */
                    void SetMeshUrl(const std::string& _meshUrl);

                    /**
                     * 判断参数 MeshUrl 是否已赋值
                     * @return MeshUrl 是否已赋值
                     * 
                     */
                    bool MeshUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否输出 PBR 材质</p><p>默认值：false</p>
                     * @return EnablePBR <p>是否输出 PBR 材质</p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置<p>是否输出 PBR 材质</p><p>默认值：false</p>
                     * @param _enablePBR <p>是否输出 PBR 材质</p><p>默认值：false</p>
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取<p>面片数，范围 [3000, 1500000]。仅 Normal / Geometry 分支生效</p><p>取值范围：[3000, 1500000]</p><p>默认值：500000</p>
                     * @return FaceCount <p>面片数，范围 [3000, 1500000]。仅 Normal / Geometry 分支生效</p><p>取值范围：[3000, 1500000]</p><p>默认值：500000</p>
                     * 
                     */
                    uint64_t GetFaceCount() const;

                    /**
                     * 设置<p>面片数，范围 [3000, 1500000]。仅 Normal / Geometry 分支生效</p><p>取值范围：[3000, 1500000]</p><p>默认值：500000</p>
                     * @param _faceCount <p>面片数，范围 [3000, 1500000]。仅 Normal / Geometry 分支生效</p><p>取值范围：[3000, 1500000]</p><p>默认值：500000</p>
                     * 
                     */
                    void SetFaceCount(const uint64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否保留 UV 展开</p><p>默认值：false</p>
                     * @return KeepUV <p>是否保留 UV 展开</p><p>默认值：false</p>
                     * 
                     */
                    bool GetKeepUV() const;

                    /**
                     * 设置<p>是否保留 UV 展开</p><p>默认值：false</p>
                     * @param _keepUV <p>是否保留 UV 展开</p><p>默认值：false</p>
                     * 
                     */
                    void SetKeepUV(const bool& _keepUV);

                    /**
                     * 判断参数 KeepUV 是否已赋值
                     * @return KeepUV 是否已赋值
                     * 
                     */
                    bool KeepUVHasBeenSet() const;

                    /**
                     * 获取<p>除默认返回的 obj + glb 外，附加输出的一种格式。当前仅支持 FBX</p>
                     * @return ResultFormat <p>除默认返回的 obj + glb 外，附加输出的一种格式。当前仅支持 FBX</p>
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>除默认返回的 obj + glb 外，附加输出的一种格式。当前仅支持 FBX</p>
                     * @param _resultFormat <p>除默认返回的 obj + glb 外，附加输出的一种格式。当前仅支持 FBX</p>
                     * 
                     */
                    void SetResultFormat(const std::string& _resultFormat);

                    /**
                     * 判断参数 ResultFormat 是否已赋值
                     * @return ResultFormat 是否已赋值
                     * 
                     */
                    bool ResultFormatHasBeenSet() const;

                    /**
                     * 获取<p>随机种子，同一 Seed 输入下结果可复现</p>
                     * @return Seed <p>随机种子，同一 Seed 输入下结果可复现</p>
                     * 
                     */
                    uint64_t GetSeed() const;

                    /**
                     * 设置<p>随机种子，同一 Seed 输入下结果可复现</p>
                     * @param _seed <p>随机种子，同一 Seed 输入下结果可复现</p>
                     * 
                     */
                    void SetSeed(const uint64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>风格控制词</p>
                     * @return Style <p>风格控制词</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>风格控制词</p>
                     * @param _style <p>风格控制词</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * <p>文生 3D 的提示词</p><p>入参限制：最长 1024 utf-8 字符</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>图生 3D 的图片 URL（http/https）</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>多视角图生 3D，至少 2 张，且必须包含 front 视角</p>
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * <p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>已有 3D 模型的 URL（仅支持 .glb / .obj）。传了 MeshUrl → 强制 GenerateType=Texture（贴纹理场景）</p>
                     */
                    std::string m_meshUrl;
                    bool m_meshUrlHasBeenSet;

                    /**
                     * <p>是否输出 PBR 材质</p><p>默认值：false</p>
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * <p>面片数，范围 [3000, 1500000]。仅 Normal / Geometry 分支生效</p><p>取值范围：[3000, 1500000]</p><p>默认值：500000</p>
                     */
                    uint64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>是否保留 UV 展开</p><p>默认值：false</p>
                     */
                    bool m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * <p>除默认返回的 obj + glb 外，附加输出的一种格式。当前仅支持 FBX</p>
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>随机种子，同一 Seed 输入下结果可复现</p>
                     */
                    uint64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>风格控制词</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_
