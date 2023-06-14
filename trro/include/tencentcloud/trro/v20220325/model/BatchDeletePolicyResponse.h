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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYRESPONSE_H_

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
                * BatchDeletePolicy返回参数结构体
                */
                class BatchDeletePolicyResponse : public AbstractModel
                {
                public:
                    BatchDeletePolicyResponse();
                    ~BatchDeletePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除权限配置失败的远端设备ID列表
                     * @return FailedRemoteDeviceIds 删除权限配置失败的远端设备ID列表
                     * 
                     */
                    std::vector<std::string> GetFailedRemoteDeviceIds() const;

                    /**
                     * 判断参数 FailedRemoteDeviceIds 是否已赋值
                     * @return FailedRemoteDeviceIds 是否已赋值
                     * 
                     */
                    bool FailedRemoteDeviceIdsHasBeenSet() const;

                private:

                    /**
                     * 删除权限配置失败的远端设备ID列表
                     */
                    std::vector<std::string> m_failedRemoteDeviceIds;
                    bool m_failedRemoteDeviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYRESPONSE_H_
