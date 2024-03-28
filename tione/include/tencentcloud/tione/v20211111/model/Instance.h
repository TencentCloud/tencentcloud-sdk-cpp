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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源组节点信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组节点id
                     * @return InstanceId 资源组节点id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源组节点id
                     * @param _instanceId 资源组节点id
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
                     * 获取节点已用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedResource 节点已用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetUsedResource() const;

                    /**
                     * 设置节点已用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedResource 节点已用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedResource(const ResourceInfo& _usedResource);

                    /**
                     * 判断参数 UsedResource 是否已赋值
                     * @return UsedResource 是否已赋值
                     * 
                     */
                    bool UsedResourceHasBeenSet() const;

                    /**
                     * 获取节点总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalResource 节点总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetTotalResource() const;

                    /**
                     * 设置节点总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalResource 节点总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalResource(const ResourceInfo& _totalResource);

                    /**
                     * 判断参数 TotalResource 是否已赋值
                     * @return TotalResource 是否已赋值
                     * 
                     */
                    bool TotalResourceHasBeenSet() const;

                    /**
                     * 获取节点状态 
注意：此字段为枚举值
说明: 
DEPLOYING: 部署中
RUNNING: 运行中 
DEPLOY_FAILED: 部署失败
 RELEASING 释放中 
RELEASED：已释放 
EXCEPTION：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 节点状态 
注意：此字段为枚举值
说明: 
DEPLOYING: 部署中
RUNNING: 运行中 
DEPLOY_FAILED: 部署失败
 RELEASING 释放中 
RELEASED：已释放 
EXCEPTION：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置节点状态 
注意：此字段为枚举值
说明: 
DEPLOYING: 部署中
RUNNING: 运行中 
DEPLOY_FAILED: 部署失败
 RELEASING 释放中 
RELEASED：已释放 
EXCEPTION：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus 节点状态 
注意：此字段为枚举值
说明: 
DEPLOYING: 部署中
RUNNING: 运行中 
DEPLOY_FAILED: 部署失败
 RELEASING 释放中 
RELEASED：已释放 
EXCEPTION：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return SubUin 创建人
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置创建人
                     * @param _subUin 创建人
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取创建时间: 
注意：北京时间，比如: 2021-12-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间: 
注意：北京时间，比如: 2021-12-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间: 
注意：北京时间，比如: 2021-12-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间: 
注意：北京时间，比如: 2021-12-01 12:00:00
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
                     * 获取到期时间
注意：北京时间，比如：2021-12-11 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 到期时间
注意：北京时间，比如：2021-12-11 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
注意：北京时间，比如：2021-12-11 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 到期时间
注意：北京时间，比如：2021-12-11 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标识
注意：此字段为枚举值
说明：
NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知
NOTIFY_AND_AUTO_RENEW：自动续费且到期通知
DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标识
注意：此字段为枚举值
说明：
NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知
NOTIFY_AND_AUTO_RENEW：自动续费且到期通知
DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识
注意：此字段为枚举值
说明：
NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知
NOTIFY_AND_AUTO_RENEW：自动续费且到期通知
DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费标识
注意：此字段为枚举值
说明：
NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知
NOTIFY_AND_AUTO_RENEW：自动续费且到期通知
DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const std::string& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取计费项ID
                     * @return SpecId 计费项ID
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置计费项ID
                     * @param _specId 计费项ID
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取计费项别名
                     * @return SpecAlias 计费项别名
                     * 
                     */
                    std::string GetSpecAlias() const;

                    /**
                     * 设置计费项别名
                     * @param _specAlias 计费项别名
                     * 
                     */
                    void SetSpecAlias(const std::string& _specAlias);

                    /**
                     * 判断参数 SpecAlias 是否已赋值
                     * @return SpecAlias 是否已赋值
                     * 
                     */
                    bool SpecAliasHasBeenSet() const;

                    /**
                     * 获取计费项特性列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecFeatures 计费项特性列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSpecFeatures() const;

                    /**
                     * 设置计费项特性列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specFeatures 计费项特性列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecFeatures(const std::vector<std::string>& _specFeatures);

                    /**
                     * 判断参数 SpecFeatures 是否已赋值
                     * @return SpecFeatures 是否已赋值
                     * 
                     */
                    bool SpecFeaturesHasBeenSet() const;

                    /**
                     * 获取纳管cvmid
                     * @return CvmInstanceId 纳管cvmid
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置纳管cvmid
                     * @param _cvmInstanceId 纳管cvmid
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取部署失败错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 部署失败错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置部署失败错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode 部署失败错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取部署失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 部署失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置部署失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 部署失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 资源组节点id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点已用资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_usedResource;
                    bool m_usedResourceHasBeenSet;

                    /**
                     * 节点总资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_totalResource;
                    bool m_totalResourceHasBeenSet;

                    /**
                     * 节点状态 
注意：此字段为枚举值
说明: 
DEPLOYING: 部署中
RUNNING: 运行中 
DEPLOY_FAILED: 部署失败
 RELEASING 释放中 
RELEASED：已释放 
EXCEPTION：异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 创建时间: 
注意：北京时间，比如: 2021-12-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间
注意：北京时间，比如：2021-12-11 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标识
注意：此字段为枚举值
说明：
NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知
NOTIFY_AND_AUTO_RENEW：自动续费且到期通知
DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 计费项ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 计费项别名
                     */
                    std::string m_specAlias;
                    bool m_specAliasHasBeenSet;

                    /**
                     * 计费项特性列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_specFeatures;
                    bool m_specFeaturesHasBeenSet;

                    /**
                     * 纳管cvmid
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 部署失败错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 部署失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_
