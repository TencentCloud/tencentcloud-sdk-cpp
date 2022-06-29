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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FORMFIELD_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FORMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 电子文档的控件填充信息
                */
                class FormField : public AbstractModel
                {
                public:
                    FormField();
                    ~FormField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件填充value
                     * @return ComponentValue 控件填充value
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件填充value
                     * @param ComponentValue 控件填充value
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取控件id
                     * @return ComponentId 控件id
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件id
                     * @param ComponentId 控件id
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取控件名字
                     * @return ComponentName 控件名字
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件名字
                     * @param ComponentName 控件名字
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     */
                    bool ComponentNameHasBeenSet() const;

                private:

                    /**
                     * 控件填充value
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 控件id
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 控件名字
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FORMFIELD_H_
