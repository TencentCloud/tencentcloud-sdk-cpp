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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RETRYCREATESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RETRYCREATESNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * RetryCreateSnapshot请求参数结构体
                */
                class RetryCreateSnapshotRequest : public AbstractModel
                {
                public:
                    RetryCreateSnapshotRequest();
                    ~RetryCreateSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修复任务id
                     * @return FixId 修复任务id
                     * 
                     */
                    uint64_t GetFixId() const;

                    /**
                     * 设置修复任务id
                     * @param _fixId 修复任务id
                     * 
                     */
                    void SetFixId(const uint64_t& _fixId);

                    /**
                     * 判断参数 FixId 是否已赋值
                     * @return FixId 是否已赋值
                     * 
                     */
                    bool FixIdHasBeenSet() const;

                    /**
                     * 获取主机quuid
                     * @return Quuid 主机quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
                     * @param _quuid 主机quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取任务进度返回的快照唯一Id
                     * @return Id 任务进度返回的快照唯一Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务进度返回的快照唯一Id
                     * @param _id 任务进度返回的快照唯一Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 修复任务id
                     */
                    uint64_t m_fixId;
                    bool m_fixIdHasBeenSet;

                    /**
                     * 主机quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 任务进度返回的快照唯一Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RETRYCREATESNAPSHOTREQUEST_H_
