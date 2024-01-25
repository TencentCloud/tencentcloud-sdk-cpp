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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPTESTRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPTESTRUNREQUEST_H_

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
                * StopTestRun请求参数结构体
                */
                class StopTestRunRequest : public AbstractModel
                {
                public:
                    StopTestRunRequest();
                    ~StopTestRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例Id
                     * @return InstanceKey 任务实例Id
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置任务实例Id
                     * @param _instanceKey 任务实例Id
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STOPTESTRUNREQUEST_H_
