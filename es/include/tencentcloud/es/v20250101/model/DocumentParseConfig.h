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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENTPARSECONFIG_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENTPARSECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 文档解析配置
                */
                class DocumentParseConfig : public AbstractModel
                {
                public:
                    DocumentParseConfig();
                    ~DocumentParseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0:图片以链接形式返回
1:返回图片中提取的文本内容
                     * @return ImageResponseType 0:图片以链接形式返回
1:返回图片中提取的文本内容
                     * 
                     */
                    uint64_t GetImageResponseType() const;

                    /**
                     * 设置0:图片以链接形式返回
1:返回图片中提取的文本内容
                     * @param _imageResponseType 0:图片以链接形式返回
1:返回图片中提取的文本内容
                     * 
                     */
                    void SetImageResponseType(const uint64_t& _imageResponseType);

                    /**
                     * 判断参数 ImageResponseType 是否已赋值
                     * @return ImageResponseType 是否已赋值
                     * 
                     */
                    bool ImageResponseTypeHasBeenSet() const;

                private:

                    /**
                     * 0:图片以链接形式返回
1:返回图片中提取的文本内容
                     */
                    uint64_t m_imageResponseType;
                    bool m_imageResponseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_DOCUMENTPARSECONFIG_H_
