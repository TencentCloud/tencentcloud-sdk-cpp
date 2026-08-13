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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 定制配置操作参数。
                */
                class CustomActionParameters : public AbstractModel
                {
                public:
                    CustomActionParameters();
                    ~CustomActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需要配置的定制配置列表。</p>
                     * @return CustomActions <p>需要配置的定制配置列表。</p>
                     * 
                     */
                    std::vector<CustomAction> GetCustomActions() const;

                    /**
                     * 设置<p>需要配置的定制配置列表。</p>
                     * @param _customActions <p>需要配置的定制配置列表。</p>
                     * 
                     */
                    void SetCustomActions(const std::vector<CustomAction>& _customActions);

                    /**
                     * 判断参数 CustomActions 是否已赋值
                     * @return CustomActions 是否已赋值
                     * 
                     */
                    bool CustomActionsHasBeenSet() const;

                private:

                    /**
                     * <p>需要配置的定制配置列表。</p>
                     */
                    std::vector<CustomAction> m_customActions;
                    bool m_customActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETERS_H_
