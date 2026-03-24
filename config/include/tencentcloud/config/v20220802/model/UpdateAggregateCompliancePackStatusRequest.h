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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_

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
                * UpdateAggregateCompliancePackStatus请求参数结构体
                */
                class UpdateAggregateCompliancePackStatusRequest : public AbstractModel
                {
                public:
                    UpdateAggregateCompliancePackStatusRequest();
                    ~UpdateAggregateCompliancePackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取合规包ID
                     * @return CompliancePackId 合规包ID
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置合规包ID
                     * @param _compliancePackId 合规包ID
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
                     * 获取ACTIVE：启用
UN_ACTIVE ：停用
                     * @return Status ACTIVE：启用
UN_ACTIVE ：停用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACTIVE：启用
UN_ACTIVE ：停用
                     * @param _status ACTIVE：启用
UN_ACTIVE ：停用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * ACTIVE：启用
UN_ACTIVE ：停用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_
