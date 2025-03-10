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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODECOUNTSUMMARY_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODECOUNTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ManuallyAdded.h>
#include <tencentcloud/tke/v20180525/model/AutoscalingAdded.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 节点统计列表
                */
                class NodeCountSummary : public AbstractModel
                {
                public:
                    NodeCountSummary();
                    ~NodeCountSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手动管理的节点
                     * @return ManuallyAdded 手动管理的节点
                     * 
                     */
                    ManuallyAdded GetManuallyAdded() const;

                    /**
                     * 设置手动管理的节点
                     * @param _manuallyAdded 手动管理的节点
                     * 
                     */
                    void SetManuallyAdded(const ManuallyAdded& _manuallyAdded);

                    /**
                     * 判断参数 ManuallyAdded 是否已赋值
                     * @return ManuallyAdded 是否已赋值
                     * 
                     */
                    bool ManuallyAddedHasBeenSet() const;

                    /**
                     * 获取自动管理的节点
                     * @return AutoscalingAdded 自动管理的节点
                     * 
                     */
                    AutoscalingAdded GetAutoscalingAdded() const;

                    /**
                     * 设置自动管理的节点
                     * @param _autoscalingAdded 自动管理的节点
                     * 
                     */
                    void SetAutoscalingAdded(const AutoscalingAdded& _autoscalingAdded);

                    /**
                     * 判断参数 AutoscalingAdded 是否已赋值
                     * @return AutoscalingAdded 是否已赋值
                     * 
                     */
                    bool AutoscalingAddedHasBeenSet() const;

                private:

                    /**
                     * 手动管理的节点
                     */
                    ManuallyAdded m_manuallyAdded;
                    bool m_manuallyAddedHasBeenSet;

                    /**
                     * 自动管理的节点
                     */
                    AutoscalingAdded m_autoscalingAdded;
                    bool m_autoscalingAddedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODECOUNTSUMMARY_H_
