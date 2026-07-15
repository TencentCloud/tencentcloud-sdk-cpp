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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITBUCKETMONITORSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITBUCKETMONITORSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditBucketMonitorStatus请求参数结构体
                */
                class ModifyCosAuditBucketMonitorStatusRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditBucketMonitorStatusRequest();
                    ~ModifyCosAuditBucketMonitorStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存储桶集合
                     * @return BucketNameSet 存储桶集合
                     * 
                     */
                    std::vector<std::string> GetBucketNameSet() const;

                    /**
                     * 设置存储桶集合
                     * @param _bucketNameSet 存储桶集合
                     * 
                     */
                    void SetBucketNameSet(const std::vector<std::string>& _bucketNameSet);

                    /**
                     * 判断参数 BucketNameSet 是否已赋值
                     * @return BucketNameSet 是否已赋值
                     * 
                     */
                    bool BucketNameSetHasBeenSet() const;

                    /**
                     * 获取0 关闭 1 开启
                     * @return MonitorStatus 0 关闭 1 开启
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置0 关闭 1 开启
                     * @param _monitorStatus 0 关闭 1 开启
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                private:

                    /**
                     * 存储桶集合
                     */
                    std::vector<std::string> m_bucketNameSet;
                    bool m_bucketNameSetHasBeenSet;

                    /**
                     * 0 关闭 1 开启
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITBUCKETMONITORSTATUSREQUEST_H_
