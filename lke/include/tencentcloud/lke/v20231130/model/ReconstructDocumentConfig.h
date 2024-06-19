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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ReconstructDocument配置选项
                */
                class ReconstructDocumentConfig : public AbstractModel
                {
                public:
                    ReconstructDocumentConfig();
                    ~ReconstructDocumentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成的Markdown中是否嵌入图片
                     * @return EnableInsetImage 生成的Markdown中是否嵌入图片
                     * 
                     */
                    bool GetEnableInsetImage() const;

                    /**
                     * 设置生成的Markdown中是否嵌入图片
                     * @param _enableInsetImage 生成的Markdown中是否嵌入图片
                     * 
                     */
                    void SetEnableInsetImage(const bool& _enableInsetImage);

                    /**
                     * 判断参数 EnableInsetImage 是否已赋值
                     * @return EnableInsetImage 是否已赋值
                     * 
                     */
                    bool EnableInsetImageHasBeenSet() const;

                private:

                    /**
                     * 生成的Markdown中是否嵌入图片
                     */
                    bool m_enableInsetImage;
                    bool m_enableInsetImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RECONSTRUCTDOCUMENTCONFIG_H_
