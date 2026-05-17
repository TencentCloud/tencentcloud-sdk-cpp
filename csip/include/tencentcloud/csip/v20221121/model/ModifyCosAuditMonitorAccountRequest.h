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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditMonitorAccount请求参数结构体
                */
                class ModifyCosAuditMonitorAccountRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditMonitorAccountRequest();
                    ~ModifyCosAuditMonitorAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
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
                     * 获取需要监测的appid信息
                     * @return MonitorAppIdSet 需要监测的appid信息
                     * 
                     */
                    std::vector<uint64_t> GetMonitorAppIdSet() const;

                    /**
                     * 设置需要监测的appid信息
                     * @param _monitorAppIdSet 需要监测的appid信息
                     * 
                     */
                    void SetMonitorAppIdSet(const std::vector<uint64_t>& _monitorAppIdSet);

                    /**
                     * 判断参数 MonitorAppIdSet 是否已赋值
                     * @return MonitorAppIdSet 是否已赋值
                     * 
                     */
                    bool MonitorAppIdSetHasBeenSet() const;

                    /**
                     * 获取选择存储桶映射关系
                     * @return BindBucket 选择存储桶映射关系
                     * 
                     */
                    std::vector<CosBucketId> GetBindBucket() const;

                    /**
                     * 设置选择存储桶映射关系
                     * @param _bindBucket 选择存储桶映射关系
                     * 
                     */
                    void SetBindBucket(const std::vector<CosBucketId>& _bindBucket);

                    /**
                     * 判断参数 BindBucket 是否已赋值
                     * @return BindBucket 是否已赋值
                     * 
                     */
                    bool BindBucketHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 需要监测的appid信息
                     */
                    std::vector<uint64_t> m_monitorAppIdSet;
                    bool m_monitorAppIdSetHasBeenSet;

                    /**
                     * 选择存储桶映射关系
                     */
                    std::vector<CosBucketId> m_bindBucket;
                    bool m_bindBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITMONITORACCOUNTREQUEST_H_
