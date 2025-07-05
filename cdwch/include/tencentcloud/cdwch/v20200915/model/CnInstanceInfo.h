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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CNINSTANCEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CNINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceStateInfo.h>
#include <tencentcloud/cdwch/v20200915/model/CNResource.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 云原生实例详情
                */
                class CnInstanceInfo : public AbstractModel
                {
                public:
                    CnInstanceInfo();
                    ~CnInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Running
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status Running
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Running
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status Running
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStateInfo 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStateInfo 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置-
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CNResource> GetResources() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resources 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResources(const std::vector<CNResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * ID值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * cdwch-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Running
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CNResource> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CNINSTANCEINFO_H_
