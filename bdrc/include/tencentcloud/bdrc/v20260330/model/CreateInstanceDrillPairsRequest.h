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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEDRILLPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEDRILLPAIRSREQUEST_H_

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
                * CreateInstanceDrillPairs请求参数结构体
                */
                class CreateInstanceDrillPairsRequest : public AbstractModel
                {
                public:
                    CreateInstanceDrillPairsRequest();
                    ~CreateInstanceDrillPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属容灾保护组
                     * @return ProtectGroupId 所属容灾保护组
                     * 
                     */
                    std::string GetProtectGroupId() const;

                    /**
                     * 设置所属容灾保护组
                     * @param _protectGroupId 所属容灾保护组
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
                     * 获取演练组vpc
                     * @return DrillPairGroupVpc 演练组vpc
                     * 
                     */
                    std::string GetDrillPairGroupVpc() const;

                    /**
                     * 设置演练组vpc
                     * @param _drillPairGroupVpc 演练组vpc
                     * 
                     */
                    void SetDrillPairGroupVpc(const std::string& _drillPairGroupVpc);

                    /**
                     * 判断参数 DrillPairGroupVpc 是否已赋值
                     * @return DrillPairGroupVpc 是否已赋值
                     * 
                     */
                    bool DrillPairGroupVpcHasBeenSet() const;

                    /**
                     * 获取文件系统复制对名称,不传则新名称为“未命名”
                     * @return DrillPairGroupName 文件系统复制对名称,不传则新名称为“未命名”
                     * 
                     */
                    std::string GetDrillPairGroupName() const;

                    /**
                     * 设置文件系统复制对名称,不传则新名称为“未命名”
                     * @param _drillPairGroupName 文件系统复制对名称,不传则新名称为“未命名”
                     * 
                     */
                    void SetDrillPairGroupName(const std::string& _drillPairGroupName);

                    /**
                     * 判断参数 DrillPairGroupName 是否已赋值
                     * @return DrillPairGroupName 是否已赋值
                     * 
                     */
                    bool DrillPairGroupNameHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * @return CreationToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * @param _creationToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取指定创建入哪个演练组
                     * @return DrillPairGroupId 指定创建入哪个演练组
                     * 
                     */
                    std::string GetDrillPairGroupId() const;

                    /**
                     * 设置指定创建入哪个演练组
                     * @param _drillPairGroupId 指定创建入哪个演练组
                     * 
                     */
                    void SetDrillPairGroupId(const std::string& _drillPairGroupId);

                    /**
                     * 判断参数 DrillPairGroupId 是否已赋值
                     * @return DrillPairGroupId 是否已赋值
                     * 
                     */
                    bool DrillPairGroupIdHasBeenSet() const;

                    /**
                     * 获取创建目标演练实例的参数列表
                     * @return CreateTargetInstanceParameters 创建目标演练实例的参数列表
                     * 
                     */
                    std::vector<CreateInstanceModel> GetCreateTargetInstanceParameters() const;

                    /**
                     * 设置创建目标演练实例的参数列表
                     * @param _createTargetInstanceParameters 创建目标演练实例的参数列表
                     * 
                     */
                    void SetCreateTargetInstanceParameters(const std::vector<CreateInstanceModel>& _createTargetInstanceParameters);

                    /**
                     * 判断参数 CreateTargetInstanceParameters 是否已赋值
                     * @return CreateTargetInstanceParameters 是否已赋值
                     * 
                     */
                    bool CreateTargetInstanceParametersHasBeenSet() const;

                private:

                    /**
                     * 所属容灾保护组
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                    /**
                     * 演练组vpc
                     */
                    std::string m_drillPairGroupVpc;
                    bool m_drillPairGroupVpcHasBeenSet;

                    /**
                     * 文件系统复制对名称,不传则新名称为“未命名”
                     */
                    std::string m_drillPairGroupName;
                    bool m_drillPairGroupNameHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * 指定创建入哪个演练组
                     */
                    std::string m_drillPairGroupId;
                    bool m_drillPairGroupIdHasBeenSet;

                    /**
                     * 创建目标演练实例的参数列表
                     */
                    std::vector<CreateInstanceModel> m_createTargetInstanceParameters;
                    bool m_createTargetInstanceParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEDRILLPAIRSREQUEST_H_
