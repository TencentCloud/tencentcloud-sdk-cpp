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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ManageConfig返回参数结构体
                */
                class ManageConfigResponse : public AbstractModel
                {
                public:
                    ManageConfigResponse();
                    ~ManageConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取对配置中心操作配置之后的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 对配置中心操作配置之后的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpResult 操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetOpResult() const;

                    /**
                     * 判断参数 OpResult 是否已赋值
                     * @return OpResult 是否已赋值
                     */
                    bool OpResultHasBeenSet() const;

                private:

                    /**
                     * 对配置中心操作配置之后的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_opResult;
                    bool m_opResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGRESPONSE_H_
