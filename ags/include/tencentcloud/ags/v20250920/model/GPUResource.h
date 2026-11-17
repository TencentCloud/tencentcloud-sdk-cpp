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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 已购买GPU资源详细信息
                */
                class GPUResource : public AbstractModel
                {
                public:
                    GPUResource();
                    ~GPUResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>GPU 资源 ID，与沙箱 InstanceId、底层 VM ID 不同。</p>
                     * @return ResourceId <p>GPU 资源 ID，与沙箱 InstanceId、底层 VM ID 不同。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>GPU 资源 ID，与沙箱 InstanceId、底层 VM ID 不同。</p>
                     * @param _resourceId <p>GPU 资源 ID，与沙箱 InstanceId、底层 VM ID 不同。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>所属 GPU 资源组 ID。</p>
                     * @return ResourceGroupId <p>所属 GPU 资源组 ID。</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>所属 GPU 资源组 ID。</p>
                     * @param _resourceGroupId <p>所属 GPU 资源组 ID。</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>GPU资源状态，大小写敏感：Delivering（准备中）、Active（已生效）、Isolated（已隔离）、Destroying（释放中）。不返回 Destroyed 和补偿完成的 Failed。</p>
                     * @return State <p>GPU资源状态，大小写敏感：Delivering（准备中）、Active（已生效）、Isolated（已隔离）、Destroying（释放中）。不返回 Destroyed 和补偿完成的 Failed。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>GPU资源状态，大小写敏感：Delivering（准备中）、Active（已生效）、Isolated（已隔离）、Destroying（释放中）。不返回 Destroyed 和补偿完成的 Failed。</p>
                     * @param _state <p>GPU资源状态，大小写敏感：Delivering（准备中）、Active（已生效）、Isolated（已隔离）、Destroying（释放中）。不返回 Destroyed 和补偿完成的 Failed。</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>占用状态，大小写敏感：Idle（可领取）、Allocating（领取中）、InUse（使用中）、Returning（归还中）、Unavailable（暂不可用）。不能根据 InstanceId 是否存在判断是否空闲。</p>
                     * @return AllocationState <p>占用状态，大小写敏感：Idle（可领取）、Allocating（领取中）、InUse（使用中）、Returning（归还中）、Unavailable（暂不可用）。不能根据 InstanceId 是否存在判断是否空闲。</p>
                     * 
                     */
                    std::string GetAllocationState() const;

                    /**
                     * 设置<p>占用状态，大小写敏感：Idle（可领取）、Allocating（领取中）、InUse（使用中）、Returning（归还中）、Unavailable（暂不可用）。不能根据 InstanceId 是否存在判断是否空闲。</p>
                     * @param _allocationState <p>占用状态，大小写敏感：Idle（可领取）、Allocating（领取中）、InUse（使用中）、Returning（归还中）、Unavailable（暂不可用）。不能根据 InstanceId 是否存在判断是否空闲。</p>
                     * 
                     */
                    void SetAllocationState(const std::string& _allocationState);

                    /**
                     * 判断参数 AllocationState 是否已赋值
                     * @return AllocationState 是否已赋值
                     * 
                     */
                    bool AllocationStateHasBeenSet() const;

                    /**
                     * 获取<p>已绑定的最终 AGS 沙箱实例 ID；尚未绑定或未占用时可能不返回。</p>
                     * @return InstanceId <p>已绑定的最终 AGS 沙箱实例 ID；尚未绑定或未占用时可能不返回。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>已绑定的最终 AGS 沙箱实例 ID；尚未绑定或未占用时可能不返回。</p>
                     * @param _instanceId <p>已绑定的最终 AGS 沙箱实例 ID；尚未绑定或未占用时可能不返回。</p>
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
                     * 获取<p>生效时间，未生效时可能不返回。</p>
                     * @return ActiveAt <p>生效时间，未生效时可能不返回。</p>
                     * 
                     */
                    std::string GetActiveAt() const;

                    /**
                     * 设置<p>生效时间，未生效时可能不返回。</p>
                     * @param _activeAt <p>生效时间，未生效时可能不返回。</p>
                     * 
                     */
                    void SetActiveAt(const std::string& _activeAt);

                    /**
                     * 判断参数 ActiveAt 是否已赋值
                     * @return ActiveAt 是否已赋值
                     * 
                     */
                    bool ActiveAtHasBeenSet() const;

                    /**
                     * 获取<p>到期时间，未生效时可能不返回。</p>
                     * @return ExpireAt <p>到期时间，未生效时可能不返回。</p>
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置<p>到期时间，未生效时可能不返回。</p>
                     * @param _expireAt <p>到期时间，未生效时可能不返回。</p>
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>续费标记：0 不自动续费，1 自动续费，2 不再续费。</p>
                     * @return RenewFlag <p>续费标记：0 不自动续费，1 自动续费，2 不再续费。</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标记：0 不自动续费，1 自动续费，2 不再续费。</p>
                     * @param _renewFlag <p>续费标记：0 不自动续费，1 自动续费，2 不再续费。</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>安全的状态原因标识；空串表示无额外原因，PhysicalUnavailable 表示物理状态不可用，BindingPending 表示绑定身份尚待确认。未知值应作状态确认中处理。</p>
                     * @return StatusReason <p>安全的状态原因标识；空串表示无额外原因，PhysicalUnavailable 表示物理状态不可用，BindingPending 表示绑定身份尚待确认。未知值应作状态确认中处理。</p>
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置<p>安全的状态原因标识；空串表示无额外原因，PhysicalUnavailable 表示物理状态不可用，BindingPending 表示绑定身份尚待确认。未知值应作状态确认中处理。</p>
                     * @param _statusReason <p>安全的状态原因标识；空串表示无额外原因，PhysicalUnavailable 表示物理状态不可用，BindingPending 表示绑定身份尚待确认。未知值应作状态确认中处理。</p>
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 资源 ID，与沙箱 InstanceId、底层 VM ID 不同。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>所属 GPU 资源组 ID。</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>GPU资源状态，大小写敏感：Delivering（准备中）、Active（已生效）、Isolated（已隔离）、Destroying（释放中）。不返回 Destroyed 和补偿完成的 Failed。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>占用状态，大小写敏感：Idle（可领取）、Allocating（领取中）、InUse（使用中）、Returning（归还中）、Unavailable（暂不可用）。不能根据 InstanceId 是否存在判断是否空闲。</p>
                     */
                    std::string m_allocationState;
                    bool m_allocationStateHasBeenSet;

                    /**
                     * <p>已绑定的最终 AGS 沙箱实例 ID；尚未绑定或未占用时可能不返回。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>生效时间，未生效时可能不返回。</p>
                     */
                    std::string m_activeAt;
                    bool m_activeAtHasBeenSet;

                    /**
                     * <p>到期时间，未生效时可能不返回。</p>
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>续费标记：0 不自动续费，1 自动续费，2 不再续费。</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>安全的状态原因标识；空串表示无额外原因，PhysicalUnavailable 表示物理状态不可用，BindingPending 表示绑定身份尚待确认。未知值应作状态确认中处理。</p>
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCE_H_
