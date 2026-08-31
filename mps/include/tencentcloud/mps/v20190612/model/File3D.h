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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Query 返回的单个产物文件
                */
                class File3D : public AbstractModel
                {
                public:
                    File3D();
                    ~File3D() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件类型，OBJ / GLB / FBX / STL / USDZ</p><p>枚举值：</p><ul><li>OBJ： 3D 通用交换格式</li><li>GLB： glTF 2.0 二进制（&quot;3D 界的 JPEG&quot;）</li><li>FBX： Autodesk 影视/游戏工业标准</li><li>STL： 3D 打印/CAD 三角面片</li><li>USDZ： Pixar/Apple 打包场景描述</li></ul>
                     * @return Type <p>文件类型，OBJ / GLB / FBX / STL / USDZ</p><p>枚举值：</p><ul><li>OBJ： 3D 通用交换格式</li><li>GLB： glTF 2.0 二进制（&quot;3D 界的 JPEG&quot;）</li><li>FBX： Autodesk 影视/游戏工业标准</li><li>STL： 3D 打印/CAD 三角面片</li><li>USDZ： Pixar/Apple 打包场景描述</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>文件类型，OBJ / GLB / FBX / STL / USDZ</p><p>枚举值：</p><ul><li>OBJ： 3D 通用交换格式</li><li>GLB： glTF 2.0 二进制（&quot;3D 界的 JPEG&quot;）</li><li>FBX： Autodesk 影视/游戏工业标准</li><li>STL： 3D 打印/CAD 三角面片</li><li>USDZ： Pixar/Apple 打包场景描述</li></ul>
                     * @param _type <p>文件类型，OBJ / GLB / FBX / STL / USDZ</p><p>枚举值：</p><ul><li>OBJ： 3D 通用交换格式</li><li>GLB： glTF 2.0 二进制（&quot;3D 界的 JPEG&quot;）</li><li>FBX： Autodesk 影视/游戏工业标准</li><li>STL： 3D 打印/CAD 三角面片</li><li>USDZ： Pixar/Apple 打包场景描述</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>文件下载 URL（临时签名，TTL 一般 24h）</p>
                     * @return Url <p>文件下载 URL（临时签名，TTL 一般 24h）</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>文件下载 URL（临时签名，TTL 一般 24h）</p>
                     * @param _url <p>文件下载 URL（临时签名，TTL 一般 24h）</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>预览图 URL（若有）</p>
                     * @return PreviewImageUrl <p>预览图 URL（若有）</p>
                     * 
                     */
                    std::string GetPreviewImageUrl() const;

                    /**
                     * 设置<p>预览图 URL（若有）</p>
                     * @param _previewImageUrl <p>预览图 URL（若有）</p>
                     * 
                     */
                    void SetPreviewImageUrl(const std::string& _previewImageUrl);

                    /**
                     * 判断参数 PreviewImageUrl 是否已赋值
                     * @return PreviewImageUrl 是否已赋值
                     * 
                     */
                    bool PreviewImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>文件类型，OBJ / GLB / FBX / STL / USDZ</p><p>枚举值：</p><ul><li>OBJ： 3D 通用交换格式</li><li>GLB： glTF 2.0 二进制（&quot;3D 界的 JPEG&quot;）</li><li>FBX： Autodesk 影视/游戏工业标准</li><li>STL： 3D 打印/CAD 三角面片</li><li>USDZ： Pixar/Apple 打包场景描述</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文件下载 URL（临时签名，TTL 一般 24h）</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>预览图 URL（若有）</p>
                     */
                    std::string m_previewImageUrl;
                    bool m_previewImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_
