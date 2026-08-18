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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONCLASSIFICATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONCLASSIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 消耗分类
                */
                class ConsumptionClassification : public AbstractModel
                {
                public:
                    ConsumptionClassification();
                    ~ConsumptionClassification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消耗场景（如推理/训练/评测等）</p>
                     * @return ConsumptionScene <p>消耗场景（如推理/训练/评测等）</p>
                     * 
                     */
                    std::string GetConsumptionScene() const;

                    /**
                     * 设置<p>消耗场景（如推理/训练/评测等）</p>
                     * @param _consumptionScene <p>消耗场景（如推理/训练/评测等）</p>
                     * 
                     */
                    void SetConsumptionScene(const std::string& _consumptionScene);

                    /**
                     * 判断参数 ConsumptionScene 是否已赋值
                     * @return ConsumptionScene 是否已赋值
                     * 
                     */
                    bool ConsumptionSceneHasBeenSet() const;

                    /**
                     * 获取<p>消耗目标（如具体模型名/插件名/平台功能名）</p>
                     * @return ConsumptionTarget <p>消耗目标（如具体模型名/插件名/平台功能名）</p>
                     * 
                     */
                    std::string GetConsumptionTarget() const;

                    /**
                     * 设置<p>消耗目标（如具体模型名/插件名/平台功能名）</p>
                     * @param _consumptionTarget <p>消耗目标（如具体模型名/插件名/平台功能名）</p>
                     * 
                     */
                    void SetConsumptionTarget(const std::string& _consumptionTarget);

                    /**
                     * 判断参数 ConsumptionTarget 是否已赋值
                     * @return ConsumptionTarget 是否已赋值
                     * 
                     */
                    bool ConsumptionTargetHasBeenSet() const;

                    /**
                     * 获取<p>消耗类型，取值集合由业务方定义（如 model/plugin/platform 等）</p>
                     * @return ConsumptionType <p>消耗类型，取值集合由业务方定义（如 model/plugin/platform 等）</p>
                     * 
                     */
                    std::string GetConsumptionType() const;

                    /**
                     * 设置<p>消耗类型，取值集合由业务方定义（如 model/plugin/platform 等）</p>
                     * @param _consumptionType <p>消耗类型，取值集合由业务方定义（如 model/plugin/platform 等）</p>
                     * 
                     */
                    void SetConsumptionType(const std::string& _consumptionType);

                    /**
                     * 判断参数 ConsumptionType 是否已赋值
                     * @return ConsumptionType 是否已赋值
                     * 
                     */
                    bool ConsumptionTypeHasBeenSet() const;

                    /**
                     * 获取<p>套餐包名称</p>
                     * @return PackageName <p>套餐包名称</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>套餐包名称</p>
                     * @param _packageName <p>套餐包名称</p>
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * <p>消耗场景（如推理/训练/评测等）</p>
                     */
                    std::string m_consumptionScene;
                    bool m_consumptionSceneHasBeenSet;

                    /**
                     * <p>消耗目标（如具体模型名/插件名/平台功能名）</p>
                     */
                    std::string m_consumptionTarget;
                    bool m_consumptionTargetHasBeenSet;

                    /**
                     * <p>消耗类型，取值集合由业务方定义（如 model/plugin/platform 等）</p>
                     */
                    std::string m_consumptionType;
                    bool m_consumptionTypeHasBeenSet;

                    /**
                     * <p>套餐包名称</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONCLASSIFICATION_H_
