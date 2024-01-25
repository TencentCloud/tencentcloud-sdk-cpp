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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamGetTaskInstancesStatusInfoResponseInstance.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetTestRunTaskInstancesStatusInfo返回参数结构体
                */
                class GetTestRunTaskInstancesStatusInfoResponse : public AbstractModel
                {
                public:
                    GetTestRunTaskInstancesStatusInfoResponse();
                    ~GetTestRunTaskInstancesStatusInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例列表
                     * @return Instances 实例列表
                     * 
                     */
                    std::vector<ParamGetTaskInstancesStatusInfoResponseInstance> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取消息
                     * @return Messages 消息
                     * 
                     */
                    std::string GetMessages() const;

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取是否异常
                     * @return IsException 是否异常
                     * 
                     */
                    bool GetIsException() const;

                    /**
                     * 判断参数 IsException 是否已赋值
                     * @return IsException 是否已赋值
                     * 
                     */
                    bool IsExceptionHasBeenSet() const;

                private:

                    /**
                     * 实例列表
                     */
                    std::vector<ParamGetTaskInstancesStatusInfoResponseInstance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 消息
                     */
                    std::string m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 是否异常
                     */
                    bool m_isException;
                    bool m_isExceptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFORESPONSE_H_
