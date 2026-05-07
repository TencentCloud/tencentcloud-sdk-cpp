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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEMANAGEDAIMODELLISTRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEMANAGEDAIMODELLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ManagedAIModelGroup.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeManagedAIModelList返回参数结构体
                */
                class DescribeManagedAIModelListResponse : public AbstractModel
                {
                public:
                    DescribeManagedAIModelListResponse();
                    ~DescribeManagedAIModelListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>托管模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagedAIModelList <p>托管模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ManagedAIModelGroup> GetManagedAIModelList() const;

                    /**
                     * 判断参数 ManagedAIModelList 是否已赋值
                     * @return ManagedAIModelList 是否已赋值
                     * 
                     */
                    bool ManagedAIModelListHasBeenSet() const;

                private:

                    /**
                     * <p>托管模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ManagedAIModelGroup> m_managedAIModelList;
                    bool m_managedAIModelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEMANAGEDAIMODELLISTRESPONSE_H_
