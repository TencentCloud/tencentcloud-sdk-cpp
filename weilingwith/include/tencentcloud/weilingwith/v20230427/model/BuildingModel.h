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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGMODEL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 建筑模型信息
                */
                class BuildingModel : public AbstractModel
                {
                public:
                    BuildingModel();
                    ~BuildingModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取构件ID
                     * @return ElementId 构件ID
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置构件ID
                     * @param _elementId 构件ID
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取构件名称
                     * @return ElementName 构件名称
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置构件名称
                     * @param _elementName 构件名称
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取模型类型
                     * @return ModelType 模型类型
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置模型类型
                     * @param _modelType 模型类型
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取模型URL
                     * @return ModelUrl 模型URL
                     * 
                     */
                    std::string GetModelUrl() const;

                    /**
                     * 设置模型URL
                     * @param _modelUrl 模型URL
                     * 
                     */
                    void SetModelUrl(const std::string& _modelUrl);

                    /**
                     * 判断参数 ModelUrl 是否已赋值
                     * @return ModelUrl 是否已赋值
                     * 
                     */
                    bool ModelUrlHasBeenSet() const;

                private:

                    /**
                     * 构件ID
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * 构件名称
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 模型类型
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 模型URL
                     */
                    std::string m_modelUrl;
                    bool m_modelUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGMODEL_H_
