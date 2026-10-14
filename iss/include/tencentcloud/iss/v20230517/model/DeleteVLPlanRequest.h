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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETEVLPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETEVLPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteVLPlan请求参数结构体
                */
                class DeleteVLPlanRequest : public AbstractModel
                {
                public:
                    DeleteVLPlanRequest();
                    ~DeleteVLPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>计划 ID</p>
                     * @return VLPlanId <p>计划 ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>计划 ID</p>
                     * @param _vLPlanId <p>计划 ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                private:

                    /**
                     * <p>计划 ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETEVLPLANREQUEST_H_
