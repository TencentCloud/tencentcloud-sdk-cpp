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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKSTATUSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKSTATUSREQUEST_H_

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
                * UpdateCompliancePackStatus请求参数结构体
                */
                class UpdateCompliancePackStatusRequest : public AbstractModel
                {
                public:
                    UpdateCompliancePackStatusRequest();
                    ~UpdateCompliancePackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合规包ID</p>
                     * @return CompliancePackId <p>合规包ID</p>
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置<p>合规包ID</p>
                     * @param _compliancePackId <p>合规包ID</p>
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取<p>ACTIVE：启用<br>UN_ACTIVE ：停用</p>
                     * @return Status <p>ACTIVE：启用<br>UN_ACTIVE ：停用</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>ACTIVE：启用<br>UN_ACTIVE ：停用</p>
                     * @param _status <p>ACTIVE：启用<br>UN_ACTIVE ：停用</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>合规包ID</p>
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * <p>ACTIVE：启用<br>UN_ACTIVE ：停用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKSTATUSREQUEST_H_
