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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_ATTACHMENTS_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_ATTACHMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 聊天图片附件列表
                */
                class Attachments : public AbstractModel
                {
                public:
                    Attachments();
                    ~Attachments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cos key</p>
                     * @return CosKey <p>cos key</p>
                     * 
                     */
                    std::string GetCosKey() const;

                    /**
                     * 设置<p>cos key</p>
                     * @param _cosKey <p>cos key</p>
                     * 
                     */
                    void SetCosKey(const std::string& _cosKey);

                    /**
                     * 判断参数 CosKey 是否已赋值
                     * @return CosKey 是否已赋值
                     * 
                     */
                    bool CosKeyHasBeenSet() const;

                    /**
                     * 获取<p>图片类型</p>
                     * @return MimeType <p>图片类型</p>
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置<p>图片类型</p>
                     * @param _mimeType <p>图片类型</p>
                     * 
                     */
                    void SetMimeType(const std::string& _mimeType);

                    /**
                     * 判断参数 MimeType 是否已赋值
                     * @return MimeType 是否已赋值
                     * 
                     */
                    bool MimeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>cos key</p>
                     */
                    std::string m_cosKey;
                    bool m_cosKeyHasBeenSet;

                    /**
                     * <p>图片类型</p>
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_ATTACHMENTS_H_
