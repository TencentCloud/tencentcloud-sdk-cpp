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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_BUSINESSSYSTEMITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_BUSINESSSYSTEMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 业务系统
                */
                class BusinessSystemItem : public AbstractModel
                {
                public:
                    BusinessSystemItem();
                    ~BusinessSystemItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
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
                     * 获取<p>名称</p>
                     * @return InstanceName <p>名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _instanceName <p>名称</p>
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
                     * 获取<p>描述</p>
                     * @return InstanceDesc <p>描述</p>
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _instanceDesc <p>描述</p>
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取<p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * @return Status <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * @param _status <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>状态： 2（隔离），1（使用中），3（已销毁）</p>
                     * @return ChargeStatus <p>状态： 2（隔离），1（使用中），3（已销毁）</p>
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置<p>状态： 2（隔离），1（使用中），3（已销毁）</p>
                     * @param _chargeStatus <p>状态： 2（隔离），1（使用中），3（已销毁）</p>
                     * 
                     */
                    void SetChargeStatus(const int64_t& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updatedAt <p>更新时间</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态： 2（隔离），1（使用中），3（已销毁）</p>
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_BUSINESSSYSTEMITEM_H_
