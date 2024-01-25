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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPADHOCTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPADHOCTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * StopAdhocTask请求参数结构体
                */
                class StopAdhocTaskRequest : public AbstractModel
                {
                public:
                    StopAdhocTaskRequest();
                    ~StopAdhocTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务提交记录Id
                     * @return RecordId 任务提交记录Id
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置任务提交记录Id
                     * @param _recordId 任务提交记录Id
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取任务实例Id
                     * @return InstanceId 任务实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置任务实例Id
                     * @param _instanceId 任务实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 任务提交记录Id
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPADHOCTASKREQUEST_H_
