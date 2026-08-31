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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DReferenceImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMultiViewImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMeshInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 混元 3D 任务的输入。
                */
                class AigcHunyuan3DTaskInput : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskInput();
                    ~AigcHunyuan3DTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>生成 3D 的参考图片信息。</p>
                     * @return ImageInfos <p>生成 3D 的参考图片信息。</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>生成 3D 的参考图片信息。</p>
                     * @param _imageInfos <p>生成 3D 的参考图片信息。</p>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcHunyuan3DReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>用于生成 3D 模型的多视角图片信息。</p><p>数组长度必须在2-8之间，且必须包含 front 视角。</p>
                     * @return MultiViewImageInfos <p>用于生成 3D 模型的多视角图片信息。</p><p>数组长度必须在2-8之间，且必须包含 front 视角。</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> GetMultiViewImageInfos() const;

                    /**
                     * 设置<p>用于生成 3D 模型的多视角图片信息。</p><p>数组长度必须在2-8之间，且必须包含 front 视角。</p>
                     * @param _multiViewImageInfos <p>用于生成 3D 模型的多视角图片信息。</p><p>数组长度必须在2-8之间，且必须包含 front 视角。</p>
                     * 
                     */
                    void SetMultiViewImageInfos(const std::vector<AigcHunyuan3DMultiViewImageInfo>& _multiViewImageInfos);

                    /**
                     * 判断参数 MultiViewImageInfos 是否已赋值
                     * @return MultiViewImageInfos 是否已赋值
                     * 
                     */
                    bool MultiViewImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>生成 3D 模型的提示词。</p>
                     * @return Prompt <p>生成 3D 模型的提示词。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成 3D 模型的提示词。</p>
                     * @param _prompt <p>生成 3D 模型的提示词。</p>
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
                     * 获取<p>生成类型。</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）；</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）；</li><li>Texture： 只生成纹理（需要填写 MeshInfos）</li></ul>
                     * @return GenerateType <p>生成类型。</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）；</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）；</li><li>Texture： 只生成纹理（需要填写 MeshInfos）</li></ul>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>生成类型。</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）；</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）；</li><li>Texture： 只生成纹理（需要填写 MeshInfos）</li></ul>
                     * @param _generateType <p>生成类型。</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）；</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）；</li><li>Texture： 只生成纹理（需要填写 MeshInfos）</li></ul>
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
                     * 获取<p>用于生成 3D 模型的参考 3D 模型。</p>
                     * @return MeshInfos <p>用于生成 3D 模型的参考 3D 模型。</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMeshInfo> GetMeshInfos() const;

                    /**
                     * 设置<p>用于生成 3D 模型的参考 3D 模型。</p>
                     * @param _meshInfos <p>用于生成 3D 模型的参考 3D 模型。</p>
                     * 
                     */
                    void SetMeshInfos(const std::vector<AigcHunyuan3DMeshInfo>& _meshInfos);

                    /**
                     * 判断参数 MeshInfos 是否已赋值
                     * @return MeshInfos 是否已赋值
                     * 
                     */
                    bool MeshInfosHasBeenSet() const;

                    /**
                     * 获取<p>是否开启输出 PBR 材质。</p><p>枚举值：</p><ul><li>Enabled： 开启；</li><li>Disabled： 关闭。</li></ul>
                     * @return EnablePBR <p>是否开启输出 PBR 材质。</p><p>枚举值：</p><ul><li>Enabled： 开启；</li><li>Disabled： 关闭。</li></ul>
                     * 
                     */
                    std::string GetEnablePBR() const;

                    /**
                     * 设置<p>是否开启输出 PBR 材质。</p><p>枚举值：</p><ul><li>Enabled： 开启；</li><li>Disabled： 关闭。</li></ul>
                     * @param _enablePBR <p>是否开启输出 PBR 材质。</p><p>枚举值：</p><ul><li>Enabled： 开启；</li><li>Disabled： 关闭。</li></ul>
                     * 
                     */
                    void SetEnablePBR(const std::string& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取<p>面片数。仅 GenerateType 取值为 Normal  和 Geometry 时生效。</p>
                     * @return FaceCount <p>面片数。仅 GenerateType 取值为 Normal  和 Geometry 时生效。</p>
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置<p>面片数。仅 GenerateType 取值为 Normal  和 Geometry 时生效。</p>
                     * @param _faceCount <p>面片数。仅 GenerateType 取值为 Normal  和 Geometry 时生效。</p>
                     * 
                     */
                    void SetFaceCount(const int64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否保留 UV 展开。</p><p>枚举值：</p><ul><li>Enabled： 保留；</li><li>Disabled： 不保留。</li></ul>
                     * @return KeepUV <p>是否保留 UV 展开。</p><p>枚举值：</p><ul><li>Enabled： 保留；</li><li>Disabled： 不保留。</li></ul>
                     * 
                     */
                    std::string GetKeepUV() const;

                    /**
                     * 设置<p>是否保留 UV 展开。</p><p>枚举值：</p><ul><li>Enabled： 保留；</li><li>Disabled： 不保留。</li></ul>
                     * @param _keepUV <p>是否保留 UV 展开。</p><p>枚举值：</p><ul><li>Enabled： 保留；</li><li>Disabled： 不保留。</li></ul>
                     * 
                     */
                    void SetKeepUV(const std::string& _keepUV);

                    /**
                     * 判断参数 KeepUV 是否已赋值
                     * @return KeepUV 是否已赋值
                     * 
                     */
                    bool KeepUVHasBeenSet() const;

                    /**
                     * 获取<p>结果格式。除默认返回的 obj 和 glb 外，附加输出的一种格式。</p><p>枚举值：</p><ul><li>FBX： FBX 格式文件。</li></ul>
                     * @return ResultFormat <p>结果格式。除默认返回的 obj 和 glb 外，附加输出的一种格式。</p><p>枚举值：</p><ul><li>FBX： FBX 格式文件。</li></ul>
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>结果格式。除默认返回的 obj 和 glb 外，附加输出的一种格式。</p><p>枚举值：</p><ul><li>FBX： FBX 格式文件。</li></ul>
                     * @param _resultFormat <p>结果格式。除默认返回的 obj 和 glb 外，附加输出的一种格式。</p><p>枚举值：</p><ul><li>FBX： FBX 格式文件。</li></ul>
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
                     * 获取<p>随机种子，同一 Seed 输入下结果可复现。</p>
                     * @return Seed <p>随机种子，同一 Seed 输入下结果可复现。</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>随机种子，同一 Seed 输入下结果可复现。</p>
                     * @param _seed <p>随机种子，同一 Seed 输入下结果可复现。</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>风格控制词。</p>
                     * @return Style <p>风格控制词。</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>风格控制词。</p>
                     * @param _style <p>风格控制词。</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>任务的输出媒体文件配置。</p>
                     * @return OutputConfig <p>任务的输出媒体文件配置。</p>
                     * 
                     */
                    AigcHunyuan3DOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>任务的输出媒体文件配置。</p>
                     * @param _outputConfig <p>任务的输出媒体文件配置。</p>
                     * 
                     */
                    void SetOutputConfig(const AigcHunyuan3DOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * <p>生成 3D 的参考图片信息。</p>
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>用于生成 3D 模型的多视角图片信息。</p><p>数组长度必须在2-8之间，且必须包含 front 视角。</p>
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> m_multiViewImageInfos;
                    bool m_multiViewImageInfosHasBeenSet;

                    /**
                     * <p>生成 3D 模型的提示词。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>生成类型。</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）；</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）；</li><li>Texture： 只生成纹理（需要填写 MeshInfos）</li></ul>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>用于生成 3D 模型的参考 3D 模型。</p>
                     */
                    std::vector<AigcHunyuan3DMeshInfo> m_meshInfos;
                    bool m_meshInfosHasBeenSet;

                    /**
                     * <p>是否开启输出 PBR 材质。</p><p>枚举值：</p><ul><li>Enabled： 开启；</li><li>Disabled： 关闭。</li></ul>
                     */
                    std::string m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * <p>面片数。仅 GenerateType 取值为 Normal  和 Geometry 时生效。</p>
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>是否保留 UV 展开。</p><p>枚举值：</p><ul><li>Enabled： 保留；</li><li>Disabled： 不保留。</li></ul>
                     */
                    std::string m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * <p>结果格式。除默认返回的 obj 和 glb 外，附加输出的一种格式。</p><p>枚举值：</p><ul><li>FBX： FBX 格式文件。</li></ul>
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>随机种子，同一 Seed 输入下结果可复现。</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>风格控制词。</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>任务的输出媒体文件配置。</p>
                     */
                    AigcHunyuan3DOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_
