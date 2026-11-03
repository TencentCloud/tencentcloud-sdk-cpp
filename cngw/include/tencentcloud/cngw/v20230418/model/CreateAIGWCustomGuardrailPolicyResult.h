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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailResourceRef.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailSyncFailure.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 创建自定义安全护栏策略结果
                */
                class CreateAIGWCustomGuardrailPolicyResult : public AbstractModel
                {
                public:
                    CreateAIGWCustomGuardrailPolicyResult();
                    ~CreateAIGWCustomGuardrailPolicyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本次配置同步是否全部成功。即使云 API 未返回 Response.Error，仍须检查此值、SyncStatus 和 FailedResources。</p>
                     * @return Success <p>本次配置同步是否全部成功。即使云 API 未返回 Response.Error，仍须检查此值、SyncStatus 和 FailedResources。</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置<p>本次配置同步是否全部成功。即使云 API 未返回 Response.Error，仍须检查此值、SyncStatus 和 FailedResources。</p>
                     * @param _success <p>本次配置同步是否全部成功。即使云 API 未返回 Response.Error，仍须检查此值、SyncStatus 和 FailedResources。</p>
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取<p>新建策略 ID</p>
                     * @return PolicyId <p>新建策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>新建策略 ID</p>
                     * @param _policyId <p>新建策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>本次同步成功的业务资源引用；Modify 返回的不是严格的新增差集。</p>
                     * @return AddedResources <p>本次同步成功的业务资源引用；Modify 返回的不是严格的新增差集。</p>
                     * 
                     */
                    std::vector<CustomGuardrailResourceRef> GetAddedResources() const;

                    /**
                     * 设置<p>本次同步成功的业务资源引用；Modify 返回的不是严格的新增差集。</p>
                     * @param _addedResources <p>本次同步成功的业务资源引用；Modify 返回的不是严格的新增差集。</p>
                     * 
                     */
                    void SetAddedResources(const std::vector<CustomGuardrailResourceRef>& _addedResources);

                    /**
                     * 判断参数 AddedResources 是否已赋值
                     * @return AddedResources 是否已赋值
                     * 
                     */
                    bool AddedResourcesHasBeenSet() const;

                    /**
                     * 获取<p>失败资源及原因；非空表示配置同步仍需处理，不要因 HTTP 200 判定全部成功。</p>
                     * @return FailedResources <p>失败资源及原因；非空表示配置同步仍需处理，不要因 HTTP 200 判定全部成功。</p>
                     * 
                     */
                    std::vector<CustomGuardrailSyncFailure> GetFailedResources() const;

                    /**
                     * 设置<p>失败资源及原因；非空表示配置同步仍需处理，不要因 HTTP 200 判定全部成功。</p>
                     * @param _failedResources <p>失败资源及原因；非空表示配置同步仍需处理，不要因 HTTP 200 判定全部成功。</p>
                     * 
                     */
                    void SetFailedResources(const std::vector<CustomGuardrailSyncFailure>& _failedResources);

                    /**
                     * 判断参数 FailedResources 是否已赋值
                     * @return FailedResources 是否已赋值
                     * 
                     */
                    bool FailedResourcesHasBeenSet() const;

                    /**
                     * 获取<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @return SyncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @param _syncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                private:

                    /**
                     * <p>本次配置同步是否全部成功。即使云 API 未返回 Response.Error，仍须检查此值、SyncStatus 和 FailedResources。</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * <p>新建策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>本次同步成功的业务资源引用；Modify 返回的不是严格的新增差集。</p>
                     */
                    std::vector<CustomGuardrailResourceRef> m_addedResources;
                    bool m_addedResourcesHasBeenSet;

                    /**
                     * <p>失败资源及原因；非空表示配置同步仍需处理，不要因 HTTP 200 判定全部成功。</p>
                     */
                    std::vector<CustomGuardrailSyncFailure> m_failedResources;
                    bool m_failedResourcesHasBeenSet;

                    /**
                     * <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
