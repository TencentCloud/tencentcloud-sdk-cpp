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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEREMEDIATIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEREMEDIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DeleteRemediations请求参数结构体
                */
                class DeleteRemediationsRequest : public AbstractModel
                {
                public:
                    DeleteRemediationsRequest();
                    ~DeleteRemediationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修正设置ID
                     * @return RemediationIds 修正设置ID
                     * 
                     */
                    std::vector<std::string> GetRemediationIds() const;

                    /**
                     * 设置修正设置ID
                     * @param _remediationIds 修正设置ID
                     * 
                     */
                    void SetRemediationIds(const std::vector<std::string>& _remediationIds);

                    /**
                     * 判断参数 RemediationIds 是否已赋值
                     * @return RemediationIds 是否已赋值
                     * 
                     */
                    bool RemediationIdsHasBeenSet() const;

                private:

                    /**
                     * 修正设置ID
                     */
                    std::vector<std::string> m_remediationIds;
                    bool m_remediationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEREMEDIATIONSREQUEST_H_
