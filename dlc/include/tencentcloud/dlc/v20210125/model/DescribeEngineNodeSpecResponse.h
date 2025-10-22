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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINENODESPECRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINENODESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SpecInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeEngineNodeSpec返回参数结构体
                */
                class DescribeEngineNodeSpecResponse : public AbstractModel
                {
                public:
                    DescribeEngineNodeSpecResponse();
                    ~DescribeEngineNodeSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取driver可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DriverSpec driver可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SpecInfo> GetDriverSpec() const;

                    /**
                     * 判断参数 DriverSpec 是否已赋值
                     * @return DriverSpec 是否已赋值
                     * 
                     */
                    bool DriverSpecHasBeenSet() const;

                    /**
                     * 获取executor可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorSpec executor可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SpecInfo> GetExecutorSpec() const;

                    /**
                     * 判断参数 ExecutorSpec 是否已赋值
                     * @return ExecutorSpec 是否已赋值
                     * 
                     */
                    bool ExecutorSpecHasBeenSet() const;

                private:

                    /**
                     * driver可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SpecInfo> m_driverSpec;
                    bool m_driverSpecHasBeenSet;

                    /**
                     * executor可用的规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SpecInfo> m_executorSpec;
                    bool m_executorSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINENODESPECRESPONSE_H_
