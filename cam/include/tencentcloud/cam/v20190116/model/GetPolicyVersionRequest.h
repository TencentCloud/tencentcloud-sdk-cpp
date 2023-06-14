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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYVERSIONREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYVERSIONREQUEST_H_

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
                * GetPolicyVersion请求参数结构体
                */
                class GetPolicyVersionRequest : public AbstractModel
                {
                public:
                    GetPolicyVersionRequest();
                    ~GetPolicyVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略版本号，可由ListPolicyVersions获取
                     * @return VersionId 策略版本号，可由ListPolicyVersions获取
                     * 
                     */
                    uint64_t GetVersionId() const;

                    /**
                     * 设置策略版本号，可由ListPolicyVersions获取
                     * @param _versionId 策略版本号，可由ListPolicyVersions获取
                     * 
                     */
                    void SetVersionId(const uint64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略版本号，可由ListPolicyVersions获取
                     */
                    uint64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYVERSIONREQUEST_H_
