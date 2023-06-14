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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MONITOROVERVIEW_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MONITOROVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 监控概览对象
                */
                class MonitorOverview : public AbstractModel
                {
                public:
                    MonitorOverview();
                    ~MonitorOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取近24小时调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationCountOfDay 近24小时调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvocationCountOfDay() const;

                    /**
                     * 设置近24小时调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationCountOfDay 近24小时调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationCountOfDay(const std::string& _invocationCountOfDay);

                    /**
                     * 判断参数 InvocationCountOfDay 是否已赋值
                     * @return InvocationCountOfDay 是否已赋值
                     * 
                     */
                    bool InvocationCountOfDayHasBeenSet() const;

                    /**
                     * 获取总调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationCount 总调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvocationCount() const;

                    /**
                     * 设置总调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationCount 总调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationCount(const std::string& _invocationCount);

                    /**
                     * 判断参数 InvocationCount 是否已赋值
                     * @return InvocationCount 是否已赋值
                     * 
                     */
                    bool InvocationCountHasBeenSet() const;

                    /**
                     * 获取近24小时调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCountOfDay 近24小时调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCountOfDay() const;

                    /**
                     * 设置近24小时调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCountOfDay 近24小时调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCountOfDay(const std::string& _errorCountOfDay);

                    /**
                     * 判断参数 ErrorCountOfDay 是否已赋值
                     * @return ErrorCountOfDay 是否已赋值
                     * 
                     */
                    bool ErrorCountOfDayHasBeenSet() const;

                    /**
                     * 获取总调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCount 总调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCount() const;

                    /**
                     * 设置总调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCount 总调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCount(const std::string& _errorCount);

                    /**
                     * 判断参数 ErrorCount 是否已赋值
                     * @return ErrorCount 是否已赋值
                     * 
                     */
                    bool ErrorCountHasBeenSet() const;

                    /**
                     * 获取近24小时调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessRatioOfDay 近24小时调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuccessRatioOfDay() const;

                    /**
                     * 设置近24小时调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successRatioOfDay 近24小时调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessRatioOfDay(const std::string& _successRatioOfDay);

                    /**
                     * 判断参数 SuccessRatioOfDay 是否已赋值
                     * @return SuccessRatioOfDay 是否已赋值
                     * 
                     */
                    bool SuccessRatioOfDayHasBeenSet() const;

                    /**
                     * 获取总调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessRatio 总调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuccessRatio() const;

                    /**
                     * 设置总调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successRatio 总调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessRatio(const std::string& _successRatio);

                    /**
                     * 判断参数 SuccessRatio 是否已赋值
                     * @return SuccessRatio 是否已赋值
                     * 
                     */
                    bool SuccessRatioHasBeenSet() const;

                private:

                    /**
                     * 近24小时调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invocationCountOfDay;
                    bool m_invocationCountOfDayHasBeenSet;

                    /**
                     * 总调用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invocationCount;
                    bool m_invocationCountHasBeenSet;

                    /**
                     * 近24小时调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCountOfDay;
                    bool m_errorCountOfDayHasBeenSet;

                    /**
                     * 总调用错误数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCount;
                    bool m_errorCountHasBeenSet;

                    /**
                     * 近24小时调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_successRatioOfDay;
                    bool m_successRatioOfDayHasBeenSet;

                    /**
                     * 总调用成功率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_successRatio;
                    bool m_successRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MONITOROVERVIEW_H_
