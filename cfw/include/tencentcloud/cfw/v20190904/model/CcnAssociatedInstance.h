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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例类型</p>
                     * @return InsType <p>实例类型</p>
                     * 
                     */
                    std::string GetInsType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _insType <p>实例类型</p>
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
                     * 获取<p>实例的网段列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrLst <p>实例的网段列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCidrLst() const;

                    /**
                     * 设置<p>实例的网段列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cidrLst <p>实例的网段列表</p>
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
                     * 获取<p>实例所属地域</p>
                     * @return InstanceRegion <p>实例所属地域</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>实例所属地域</p>
                     * @param _instanceRegion <p>实例所属地域</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取<p>是否跨账号</p>
                     * @return IsCrossInstance <p>是否跨账号</p>
                     * 
                     */
                    uint64_t GetIsCrossInstance() const;

                    /**
                     * 设置<p>是否跨账号</p>
                     * @param _isCrossInstance <p>是否跨账号</p>
                     * 
                     */
                    void SetIsCrossInstance(const uint64_t& _isCrossInstance);

                    /**
                     * 判断参数 IsCrossInstance 是否已赋值
                     * @return IsCrossInstance 是否已赋值
                     * 
                     */
                    bool IsCrossInstanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * <p>实例的网段列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cidrLst;
                    bool m_cidrLstHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * <p>是否跨账号</p>
                     */
                    uint64_t m_isCrossInstance;
                    bool m_isCrossInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CCNASSOCIATEDINSTANCE_H_
