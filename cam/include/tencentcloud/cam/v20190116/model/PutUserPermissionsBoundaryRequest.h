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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_PUTUSERPERMISSIONSBOUNDARYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_PUTUSERPERMISSIONSBOUNDARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * PutUserPermissionsBoundary请求参数结构体
                */
                class PutUserPermissionsBoundaryRequest : public AbstractModel
                {
                public:
                    PutUserPermissionsBoundaryRequest();
                    ~PutUserPermissionsBoundaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号Uin
                     * @return TargetUin 子账号Uin
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置子账号Uin
                     * @param _targetUin 子账号Uin
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 子账号Uin
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 策略ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_PUTUSERPERMISSIONSBOUNDARYREQUEST_H_
