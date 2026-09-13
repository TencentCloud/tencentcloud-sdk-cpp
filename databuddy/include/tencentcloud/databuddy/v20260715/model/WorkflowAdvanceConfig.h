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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流高级设置
                */
                class WorkflowAdvanceConfig : public AbstractModel
                {
                public:
                    WorkflowAdvanceConfig();
                    ~WorkflowAdvanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排队模式，ON（默认）, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueuingMode 排队模式，ON（默认）, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueuingMode() const;

                    /**
                     * 设置排队模式，ON（默认）, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queuingMode 排队模式，ON（默认）, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueuingMode(const std::string& _queuingMode);

                    /**
                     * 判断参数 QueuingMode 是否已赋值
                     * @return QueuingMode 是否已赋值
                     * 
                     */
                    bool QueuingModeHasBeenSet() const;

                    /**
                     * 获取	
默认值为1

QueuingMode为ON时，MaxConcurrentNum 设置才生效；只能输入大于0的整数，输入非法值自动转换为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrentNum 	
默认值为1

QueuingMode为ON时，MaxConcurrentNum 设置才生效；只能输入大于0的整数，输入非法值自动转换为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxConcurrentNum() const;

                    /**
                     * 设置	
默认值为1

QueuingMode为ON时，MaxConcurrentNum 设置才生效；只能输入大于0的整数，输入非法值自动转换为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConcurrentNum 	
默认值为1

QueuingMode为ON时，MaxConcurrentNum 设置才生效；只能输入大于0的整数，输入非法值自动转换为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxConcurrentNum(const int64_t& _maxConcurrentNum);

                    /**
                     * 判断参数 MaxConcurrentNum 是否已赋值
                     * @return MaxConcurrentNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrentNumHasBeenSet() const;

                private:

                    /**
                     * 排队模式，ON（默认）, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queuingMode;
                    bool m_queuingModeHasBeenSet;

                    /**
                     * 	
默认值为1

QueuingMode为ON时，MaxConcurrentNum 设置才生效；只能输入大于0的整数，输入非法值自动转换为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxConcurrentNum;
                    bool m_maxConcurrentNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_
