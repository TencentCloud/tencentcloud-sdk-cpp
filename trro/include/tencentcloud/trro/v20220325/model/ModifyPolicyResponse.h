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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyPolicy返回参数结构体
                */
                class ModifyPolicyResponse : public AbstractModel
                {
                public:
                    ModifyPolicyResponse();
                    ~ModifyPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加关联失败的现场设备ID列表
                     * @return FailedInsertIds 添加关联失败的现场设备ID列表
                     * 
                     */
                    std::vector<std::string> GetFailedInsertIds() const;

                    /**
                     * 判断参数 FailedInsertIds 是否已赋值
                     * @return FailedInsertIds 是否已赋值
                     * 
                     */
                    bool FailedInsertIdsHasBeenSet() const;

                    /**
                     * 获取解除关联失败的现场设备ID列表
                     * @return FailedDeleteIds 解除关联失败的现场设备ID列表
                     * 
                     */
                    std::vector<std::string> GetFailedDeleteIds() const;

                    /**
                     * 判断参数 FailedDeleteIds 是否已赋值
                     * @return FailedDeleteIds 是否已赋值
                     * 
                     */
                    bool FailedDeleteIdsHasBeenSet() const;

                private:

                    /**
                     * 添加关联失败的现场设备ID列表
                     */
                    std::vector<std::string> m_failedInsertIds;
                    bool m_failedInsertIdsHasBeenSet;

                    /**
                     * 解除关联失败的现场设备ID列表
                     */
                    std::vector<std::string> m_failedDeleteIds;
                    bool m_failedDeleteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_
