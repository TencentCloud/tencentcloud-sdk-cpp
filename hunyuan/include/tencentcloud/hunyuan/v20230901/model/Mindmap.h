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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MINDMAP_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MINDMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 脑图
                */
                class Mindmap : public AbstractModel
                {
                public:
                    Mindmap();
                    ~Mindmap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脑图缩略图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThumbUrl 脑图缩略图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThumbUrl() const;

                    /**
                     * 设置脑图缩略图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thumbUrl 脑图缩略图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThumbUrl(const std::string& _thumbUrl);

                    /**
                     * 判断参数 ThumbUrl 是否已赋值
                     * @return ThumbUrl 是否已赋值
                     * 
                     */
                    bool ThumbUrlHasBeenSet() const;

                    /**
                     * 获取脑图图片链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 脑图图片链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置脑图图片链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 脑图图片链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 脑图缩略图链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thumbUrl;
                    bool m_thumbUrlHasBeenSet;

                    /**
                     * 脑图图片链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MINDMAP_H_
