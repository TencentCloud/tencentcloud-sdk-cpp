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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoveryProtectGroup返回参数结构体
                */
                class CreateDisasterRecoveryProtectGroupResponse : public AbstractModel
                {
                public:
                    CreateDisasterRecoveryProtectGroupResponse();
                    ~CreateDisasterRecoveryProtectGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的容灾保护组ID
                     * @return ProtectGroupId 创建的容灾保护组ID
                     * 
                     */
                    std::string GetProtectGroupId() const;

                    /**
                     * 判断参数 ProtectGroupId 是否已赋值
                     * @return ProtectGroupId 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdHasBeenSet() const;

                private:

                    /**
                     * 创建的容灾保护组ID
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPRESPONSE_H_
