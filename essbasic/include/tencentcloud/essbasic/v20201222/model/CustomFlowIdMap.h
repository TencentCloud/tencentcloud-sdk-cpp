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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFLOWIDMAP_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFLOWIDMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 自定义流程id映射关系
                */
                class CustomFlowIdMap : public AbstractModel
                {
                public:
                    CustomFlowIdMap();
                    ~CustomFlowIdMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义id
                     * @return CustomId 自定义id
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义id
                     * @param _customId 自定义id
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取流程id
                     * @return FlowId 流程id
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程id
                     * @param _flowId 流程id
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 自定义id
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 流程id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFLOWIDMAP_H_
