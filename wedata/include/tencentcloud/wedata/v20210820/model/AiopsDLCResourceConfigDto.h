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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSDLCRESOURCECONFIGDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSDLCRESOURCECONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DLC资源配置信息
                */
                class AiopsDLCResourceConfigDto : public AbstractModel
                {
                public:
                    AiopsDLCResourceConfigDto();
                    ~AiopsDLCResourceConfigDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Driver资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DriverSize Driver资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置Driver资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _driverSize Driver资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取Executor资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorSize Executor资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置Executor资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorSize Executor资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取Executor数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorNumbers Executor数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorNumbers() const;

                    /**
                     * 设置Executor数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorNumbers Executor数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorNumbers(const std::string& _executorNumbers);

                    /**
                     * 判断参数 ExecutorNumbers 是否已赋值
                     * @return ExecutorNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorNumbersHasBeenSet() const;

                    /**
                     * 获取资源配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInherit 资源配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsInherit() const;

                    /**
                     * 设置资源配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInherit 资源配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInherit(const std::string& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                private:

                    /**
                     * Driver资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * Executor资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * Executor数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorNumbers;
                    bool m_executorNumbersHasBeenSet;

                    /**
                     * 资源配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSDLCRESOURCECONFIGDTO_H_
