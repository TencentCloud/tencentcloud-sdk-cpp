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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_MODELINFO_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * LUT素材信息
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唇色素材ID
                     * @return ModelId 唇色素材ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置唇色素材ID
                     * @param _modelId 唇色素材ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取唇色素材 url 。 LUT 文件 url 5分钟有效。
                     * @return LUTFileUrl 唇色素材 url 。 LUT 文件 url 5分钟有效。
                     * 
                     */
                    std::string GetLUTFileUrl() const;

                    /**
                     * 设置唇色素材 url 。 LUT 文件 url 5分钟有效。
                     * @param _lUTFileUrl 唇色素材 url 。 LUT 文件 url 5分钟有效。
                     * 
                     */
                    void SetLUTFileUrl(const std::string& _lUTFileUrl);

                    /**
                     * 判断参数 LUTFileUrl 是否已赋值
                     * @return LUTFileUrl 是否已赋值
                     * 
                     */
                    bool LUTFileUrlHasBeenSet() const;

                    /**
                     * 获取文件描述信息。
                     * @return Description 文件描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件描述信息。
                     * @param _description 文件描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 唇色素材ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 唇色素材 url 。 LUT 文件 url 5分钟有效。
                     */
                    std::string m_lUTFileUrl;
                    bool m_lUTFileUrlHasBeenSet;

                    /**
                     * 文件描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_MODELINFO_H_
