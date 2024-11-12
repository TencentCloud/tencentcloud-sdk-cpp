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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINERESPONSE_H_

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
                * ScanBaseline返回参数结构体
                */
                class ScanBaselineResponse : public AbstractModel
                {
                public:
                    ScanBaselineResponse();
                    ~ScanBaselineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取正在扫描中的主机Quuid
                     * @return ScanningQuuids 正在扫描中的主机Quuid
                     * 
                     */
                    std::vector<std::string> GetScanningQuuids() const;

                    /**
                     * 判断参数 ScanningQuuids 是否已赋值
                     * @return ScanningQuuids 是否已赋值
                     * 
                     */
                    bool ScanningQuuidsHasBeenSet() const;

                    /**
                     * 获取任务下发成功返回的TaskId
                     * @return TaskId 任务下发成功返回的TaskId
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 正在扫描中的主机Quuid
                     */
                    std::vector<std::string> m_scanningQuuids;
                    bool m_scanningQuuidsHasBeenSet;

                    /**
                     * 任务下发成功返回的TaskId
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINERESPONSE_H_
