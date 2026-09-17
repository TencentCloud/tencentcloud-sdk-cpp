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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI 样本管理，人脸数据操作。
                */
                class AiSampleFaceOperation : public AbstractModel
                {
                public:
                    AiSampleFaceOperation();
                    ~AiSampleFaceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>操作类型，可选值：add（添加）、delete（删除）、reset（重置）。重置操作将清空该人物已有人脸数据，并添加 FaceContents 指定人脸数据。</p>
                     * @return Type <p>操作类型，可选值：add（添加）、delete（删除）、reset（重置）。重置操作将清空该人物已有人脸数据，并添加 FaceContents 指定人脸数据。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>操作类型，可选值：add（添加）、delete（删除）、reset（重置）。重置操作将清空该人物已有人脸数据，并添加 FaceContents 指定人脸数据。</p>
                     * @param _type <p>操作类型，可选值：add（添加）、delete（删除）、reset（重置）。重置操作将清空该人物已有人脸数据，并添加 FaceContents 指定人脸数据。</p>
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
                     * 获取<p>人脸 ID 集合，当 Type为delete 时，该字段必填。</p>
                     * @return FaceIds <p>人脸 ID 集合，当 Type为delete 时，该字段必填。</p>
                     * 
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置<p>人脸 ID 集合，当 Type为delete 时，该字段必填。</p>
                     * @param _faceIds <p>人脸 ID 集合，当 Type为delete 时，该字段必填。</p>
                     * 
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     * 
                     */
                    bool FaceIdsHasBeenSet() const;

                    /**
                     * 获取<p>人脸图片 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串集合，仅支持 jpeg、png 图片格式。</p><li>当 Type为add 或 reset 时，该字段必填；</li><li>数组长度限制：5 张图片。</li>注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * @return FaceContents <p>人脸图片 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串集合，仅支持 jpeg、png 图片格式。</p><li>当 Type为add 或 reset 时，该字段必填；</li><li>数组长度限制：5 张图片。</li>注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置<p>人脸图片 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串集合，仅支持 jpeg、png 图片格式。</p><li>当 Type为add 或 reset 时，该字段必填；</li><li>数组长度限制：5 张图片。</li>注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * @param _faceContents <p>人脸图片 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串集合，仅支持 jpeg、png 图片格式。</p><li>当 Type为add 或 reset 时，该字段必填；</li><li>数组长度限制：5 张图片。</li>注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * 
                     */
                    void SetFaceContents(const std::vector<std::string>& _faceContents);

                    /**
                     * 判断参数 FaceContents 是否已赋值
                     * @return FaceContents 是否已赋值
                     * 
                     */
                    bool FaceContentsHasBeenSet() const;

                private:

                    /**
                     * <p>操作类型，可选值：add（添加）、delete（删除）、reset（重置）。重置操作将清空该人物已有人脸数据，并添加 FaceContents 指定人脸数据。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>人脸 ID 集合，当 Type为delete 时，该字段必填。</p>
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                    /**
                     * <p>人脸图片 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串集合，仅支持 jpeg、png 图片格式。</p><li>当 Type为add 或 reset 时，该字段必填；</li><li>数组长度限制：5 张图片。</li>注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_
