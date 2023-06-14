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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETACHUSERPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETACHUSERPOLICYREQUEST_H_

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
                * DetachUserPolicy请求参数结构体
                */
                class DetachUserPolicyRequest : public AbstractModel
                {
                public:
                    DetachUserPolicyRequest();
                    ~DetachUserPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略 id
                     * @return PolicyId 策略 id
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略 id
                     * @param _policyId 策略 id
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
                     * 获取子账号 uin
                     * @return DetachUin 子账号 uin
                     * 
                     */
                    uint64_t GetDetachUin() const;

                    /**
                     * 设置子账号 uin
                     * @param _detachUin 子账号 uin
                     * 
                     */
                    void SetDetachUin(const uint64_t& _detachUin);

                    /**
                     * 判断参数 DetachUin 是否已赋值
                     * @return DetachUin 是否已赋值
                     * 
                     */
                    bool DetachUinHasBeenSet() const;

                private:

                    /**
                     * 策略 id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 子账号 uin
                     */
                    uint64_t m_detachUin;
                    bool m_detachUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETACHUSERPOLICYREQUEST_H_
