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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunOneClickTaskExternal请求参数结构体
                */
                class DescribeCloudBaseRunOneClickTaskExternalRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunOneClickTaskExternalRequest();
                    ~DescribeCloudBaseRunOneClickTaskExternalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部任务Id 最长64字节
                     * @return ExternalId 外部任务Id 最长64字节
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置外部任务Id 最长64字节
                     * @param _externalId 外部任务Id 最长64字节
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                private:

                    /**
                     * 外部任务Id 最长64字节
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALREQUEST_H_
