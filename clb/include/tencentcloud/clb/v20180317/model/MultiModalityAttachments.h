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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MULTIMODALITYATTACHMENTS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MULTIMODALITYATTACHMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 聊天测试接口多模态附件
                */
                class MultiModalityAttachments : public AbstractModel
                {
                public:
                    MultiModalityAttachments();
                    ~MultiModalityAttachments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>base64 url编码的文件内容</p>
                     * @return Data <p>base64 url编码的文件内容</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>base64 url编码的文件内容</p>
                     * @param _data <p>base64 url编码的文件内容</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>附件类型</p><p>枚举值：</p><ul><li>image： 图像</li><li>pdf： pdf（文件）</li></ul>
                     * @return Type <p>附件类型</p><p>枚举值：</p><ul><li>image： 图像</li><li>pdf： pdf（文件）</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>附件类型</p><p>枚举值：</p><ul><li>image： 图像</li><li>pdf： pdf（文件）</li></ul>
                     * @param _type <p>附件类型</p><p>枚举值：</p><ul><li>image： 图像</li><li>pdf： pdf（文件）</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>base64 url编码的文件内容</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>附件类型</p><p>枚举值：</p><ul><li>image： 图像</li><li>pdf： pdf（文件）</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MULTIMODALITYATTACHMENTS_H_
