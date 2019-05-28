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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_CDSAUDITINSTANCE_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_CDSAUDITINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * 数据安全产品实例信息
                */
                class CdsAuditInstance : public AbstractModel
                {
                public:
                    CdsAuditInstance();
                    ~CdsAuditInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param AppId 用户AppId
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param Uin 用户Uin
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取续费标识
                     * @return RenewFlag 续费标识
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置续费标识
                     * @param RenewFlag 续费标识
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取所属地域
                     * @return Region 所属地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
                     * @param Region 所属地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取付费模式（数据安全审计只支持预付费：1）
                     * @return PayMode 付费模式（数据安全审计只支持预付费：1）
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费模式（数据安全审计只支持预付费：1）
                     * @param PayMode 付费模式（数据安全审计只支持预付费：1）
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例状态： 0，未生效；1：正常运行； 2：被隔离； 3，已过期
                     * @return Status 实例状态： 0，未生效；1：正常运行； 2：被隔离； 3，已过期
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置实例状态： 0，未生效；1：正常运行； 2：被隔离； 3，已过期
                     * @param Status 实例状态： 0，未生效；1：正常运行； 2：被隔离； 3，已过期
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例被隔离时间，格式：yyyy-mm-dd HH:ii:ss
                     * @return IsolatedTimestamp 实例被隔离时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置实例被隔离时间，格式：yyyy-mm-dd HH:ii:ss
                     * @param IsolatedTimestamp 实例被隔离时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取实例创建时间，格式： yyyy-mm-dd HH:ii:ss
                     * @return CreateTime 实例创建时间，格式： yyyy-mm-dd HH:ii:ss
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间，格式： yyyy-mm-dd HH:ii:ss
                     * @param CreateTime 实例创建时间，格式： yyyy-mm-dd HH:ii:ss
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例过期时间，格式：yyyy-mm-dd HH:ii:ss
                     * @return ExpireTime 实例过期时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置实例过期时间，格式：yyyy-mm-dd HH:ii:ss
                     * @param ExpireTime 实例过期时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 续费标识
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 付费模式（数据安全审计只支持预付费：1）
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例状态： 0，未生效；1：正常运行； 2：被隔离； 3，已过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例被隔离时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * 实例创建时间，格式： yyyy-mm-dd HH:ii:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例过期时间，格式：yyyy-mm-dd HH:ii:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_CDSAUDITINSTANCE_H_
