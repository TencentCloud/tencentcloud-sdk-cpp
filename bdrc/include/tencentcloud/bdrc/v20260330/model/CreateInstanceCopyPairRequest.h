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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCECOPYPAIRREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCECOPYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/CreateInstanceModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateInstanceCopyPair请求参数结构体
                */
                class CreateInstanceCopyPairRequest : public AbstractModel
                {
                public:
                    CreateInstanceCopyPairRequest();
                    ~CreateInstanceCopyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属保护组
                     * @return ProtectGroupId 所属保护组
                     * 
                     */
                    std::string GetProtectGroupId() const;

                    /**
                     * 设置所属保护组
                     * @param _protectGroupId 所属保护组
                     * 
                     */
                    void SetProtectGroupId(const std::string& _protectGroupId);

                    /**
                     * 判断参数 ProtectGroupId 是否已赋值
                     * @return ProtectGroupId 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdHasBeenSet() const;

                    /**
                     * 获取目标端CVM创建参数列表（1~10 个）
                     * @return CreateTargetInstanceParameters 目标端CVM创建参数列表（1~10 个）
                     * 
                     */
                    std::vector<CreateInstanceModel> GetCreateTargetInstanceParameters() const;

                    /**
                     * 设置目标端CVM创建参数列表（1~10 个）
                     * @param _createTargetInstanceParameters 目标端CVM创建参数列表（1~10 个）
                     * 
                     */
                    void SetCreateTargetInstanceParameters(const std::vector<CreateInstanceModel>& _createTargetInstanceParameters);

                    /**
                     * 判断参数 CreateTargetInstanceParameters 是否已赋值
                     * @return CreateTargetInstanceParameters 是否已赋值
                     * 
                     */
                    bool CreateTargetInstanceParametersHasBeenSet() const;

                    /**
                     * 获取复制对名称，不传则新名称为"未命名"
                     * @return InstanceCopyPairName 复制对名称，不传则新名称为"未命名"
                     * 
                     */
                    std::string GetInstanceCopyPairName() const;

                    /**
                     * 设置复制对名称，不传则新名称为"未命名"
                     * @param _instanceCopyPairName 复制对名称，不传则新名称为"未命名"
                     * 
                     */
                    void SetInstanceCopyPairName(const std::string& _instanceCopyPairName);

                    /**
                     * 判断参数 InstanceCopyPairName 是否已赋值
                     * @return InstanceCopyPairName 是否已赋值
                     * 
                     */
                    bool InstanceCopyPairNameHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取用户期望的RPO，单位分钟，目前仅支持15分钟
                     * @return RecoveryPointObjective 用户期望的RPO，单位分钟，目前仅支持15分钟
                     * 
                     */
                    int64_t GetRecoveryPointObjective() const;

                    /**
                     * 设置用户期望的RPO，单位分钟，目前仅支持15分钟
                     * @param _recoveryPointObjective 用户期望的RPO，单位分钟，目前仅支持15分钟
                     * 
                     */
                    void SetRecoveryPointObjective(const int64_t& _recoveryPointObjective);

                    /**
                     * 判断参数 RecoveryPointObjective 是否已赋值
                     * @return RecoveryPointObjective 是否已赋值
                     * 
                     */
                    bool RecoveryPointObjectiveHasBeenSet() const;

                private:

                    /**
                     * 所属保护组
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                    /**
                     * 目标端CVM创建参数列表（1~10 个）
                     */
                    std::vector<CreateInstanceModel> m_createTargetInstanceParameters;
                    bool m_createTargetInstanceParametersHasBeenSet;

                    /**
                     * 复制对名称，不传则新名称为"未命名"
                     */
                    std::string m_instanceCopyPairName;
                    bool m_instanceCopyPairNameHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 用户期望的RPO，单位分钟，目前仅支持15分钟
                     */
                    int64_t m_recoveryPointObjective;
                    bool m_recoveryPointObjectiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCECOPYPAIRREQUEST_H_
