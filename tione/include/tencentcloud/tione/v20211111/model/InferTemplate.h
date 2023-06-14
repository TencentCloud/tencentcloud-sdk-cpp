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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 推理镜像详情
                */
                class InferTemplate : public AbstractModel
                {
                public:
                    InferTemplate();
                    ~InferTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return InferTemplateId 模板ID
                     * 
                     */
                    std::string GetInferTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param _inferTemplateId 模板ID
                     * 
                     */
                    void SetInferTemplateId(const std::string& _inferTemplateId);

                    /**
                     * 判断参数 InferTemplateId 是否已赋值
                     * @return InferTemplateId 是否已赋值
                     * 
                     */
                    bool InferTemplateIdHasBeenSet() const;

                    /**
                     * 获取模板镜像
                     * @return InferTemplateImage 模板镜像
                     * 
                     */
                    std::string GetInferTemplateImage() const;

                    /**
                     * 设置模板镜像
                     * @param _inferTemplateImage 模板镜像
                     * 
                     */
                    void SetInferTemplateImage(const std::string& _inferTemplateImage);

                    /**
                     * 判断参数 InferTemplateImage 是否已赋值
                     * @return InferTemplateImage 是否已赋值
                     * 
                     */
                    bool InferTemplateImageHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_inferTemplateId;
                    bool m_inferTemplateIdHasBeenSet;

                    /**
                     * 模板镜像
                     */
                    std::string m_inferTemplateImage;
                    bool m_inferTemplateImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATE_H_
