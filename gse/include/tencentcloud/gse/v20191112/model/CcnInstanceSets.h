/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CCNINSTANCESETS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CCNINSTANCESETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 云联网实例信息
                */
                class CcnInstanceSets : public AbstractModel
                {
                public:
                    CcnInstanceSets();
                    ~CcnInstanceSets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountId 云联网账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置云联网账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountId 云联网账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取云联网 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnId 云联网 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnId 云联网 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网关联时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 云联网关联时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云联网关联时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 云联网关联时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取云联网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 云联网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置云联网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 云联网实例名称
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
                     * 获取云联网状态：申请中、已连接、已过期、已拒绝、已删除、失败的、关联中、解关联中、解关联失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 云联网状态：申请中、已连接、已过期、已拒绝、已删除、失败的、关联中、解关联中、解关联失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置云联网状态：申请中、已连接、已过期、已拒绝、已删除、失败的、关联中、解关联中、解关联失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 云联网状态：申请中、已连接、已过期、已拒绝、已删除、失败的、关联中、解关联中、解关联失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 云联网账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 云联网 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网关联时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 云联网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 云联网状态：申请中、已连接、已过期、已拒绝、已删除、失败的、关联中、解关联中、解关联失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CCNINSTANCESETS_H_
