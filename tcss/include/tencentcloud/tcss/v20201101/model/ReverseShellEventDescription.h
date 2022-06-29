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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时容器反弹shell事件描述信息
                */
                class ReverseShellEventDescription : public AbstractModel
                {
                public:
                    ReverseShellEventDescription();
                    ~ReverseShellEventDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param Description 描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return Solution 解决方案
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方案
                     * @param Solution 解决方案
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取事件备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 事件备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置事件备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 事件备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取目标地址
                     * @return DstAddress 目标地址
                     */
                    std::string GetDstAddress() const;

                    /**
                     * 设置目标地址
                     * @param DstAddress 目标地址
                     */
                    void SetDstAddress(const std::string& _dstAddress);

                    /**
                     * 判断参数 DstAddress 是否已赋值
                     * @return DstAddress 是否已赋值
                     */
                    bool DstAddressHasBeenSet() const;

                    /**
                     * 获取事件最后一次处理的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationTime 事件最后一次处理的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置事件最后一次处理的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperationTime 事件最后一次处理的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 事件备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 目标地址
                     */
                    std::string m_dstAddress;
                    bool m_dstAddressHasBeenSet;

                    /**
                     * 事件最后一次处理的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTDESCRIPTION_H_
