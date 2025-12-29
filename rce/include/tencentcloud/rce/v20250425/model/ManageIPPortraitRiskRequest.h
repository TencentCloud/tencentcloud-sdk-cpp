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

#ifndef TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKREQUEST_H_
#define TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20250425/model/ManageIPPortraitRiskInput.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20250425
        {
            namespace Model
            {
                /**
                * ManageIPPortraitRisk请求参数结构体
                */
                class ManageIPPortraitRiskRequest : public AbstractModel
                {
                public:
                    ManageIPPortraitRiskRequest();
                    ~ManageIPPortraitRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求秒级时间戳
                     * @return PostTime 请求秒级时间戳
                     * 
                     */
                    int64_t GetPostTime() const;

                    /**
                     * 设置请求秒级时间戳
                     * @param _postTime 请求秒级时间戳
                     * 
                     */
                    void SetPostTime(const int64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取业务入参
                     * @return BusinessSecurityData 业务入参
                     * 
                     */
                    ManageIPPortraitRiskInput GetBusinessSecurityData() const;

                    /**
                     * 设置业务入参
                     * @param _businessSecurityData 业务入参
                     * 
                     */
                    void SetBusinessSecurityData(const ManageIPPortraitRiskInput& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                private:

                    /**
                     * 请求秒级时间戳
                     */
                    int64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 业务入参
                     */
                    ManageIPPortraitRiskInput m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKREQUEST_H_
