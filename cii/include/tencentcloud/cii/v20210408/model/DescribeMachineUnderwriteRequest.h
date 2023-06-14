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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEMACHINEUNDERWRITEREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEMACHINEUNDERWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeMachineUnderwrite请求参数结构体
                */
                class DescribeMachineUnderwriteRequest : public AbstractModel
                {
                public:
                    DescribeMachineUnderwriteRequest();
                    ~DescribeMachineUnderwriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取核保任务ID
                     * @return UnderwriteTaskId 核保任务ID
                     * 
                     */
                    std::string GetUnderwriteTaskId() const;

                    /**
                     * 设置核保任务ID
                     * @param _underwriteTaskId 核保任务ID
                     * 
                     */
                    void SetUnderwriteTaskId(const std::string& _underwriteTaskId);

                    /**
                     * 判断参数 UnderwriteTaskId 是否已赋值
                     * @return UnderwriteTaskId 是否已赋值
                     * 
                     */
                    bool UnderwriteTaskIdHasBeenSet() const;

                private:

                    /**
                     * 核保任务ID
                     */
                    std::string m_underwriteTaskId;
                    bool m_underwriteTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEMACHINEUNDERWRITEREQUEST_H_
