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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CCNASSOCIATEDINSTANCE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CCNASSOCIATEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CCN关联的实例信息
                */
                class CcnAssociatedInstance : public AbstractModel
                {
                public:
                    CcnAssociatedInstance();
                    ~CcnAssociatedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InsType 实例类型
                     * 
                     */
                    std::string GetInsType() const;

                    /**
                     * 设置实例类型
                     * @param _insType 实例类型
                     * 
                     */
                    void SetInsType(const std::string& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     * 
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取实例的网段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrLst 实例的网段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCidrLst() const;

                    /**
                     * 设置实例的网段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cidrLst 实例的网段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCidrLst(const std::vector<std::string>& _cidrLst);

                    /**
                     * 判断参数 CidrLst 是否已赋值
                     * @return CidrLst 是否已赋值
                     * 
                     */
                    bool CidrLstHasBeenSet() const;

                    /**
                     * 获取实例所属地域
                     * @return InstanceRegion 实例所属地域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置实例所属地域
                     * @param _instanceRegion 实例所属地域
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * 实例的网段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cidrLst;
                    bool m_cidrLstHasBeenSet;

                    /**
                     * 实例所属地域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CCNASSOCIATEDINSTANCE_H_
