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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_DELETESTACKREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_DELETESTACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * DeleteStack请求参数结构体
                */
                class DeleteStackRequest : public AbstractModel
                {
                public:
                    DeleteStackRequest();
                    ~DeleteStackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的资源栈ID
                     * @return StackId 待删除的资源栈ID
                     * 
                     */
                    std::string GetStackId() const;

                    /**
                     * 设置待删除的资源栈ID
                     * @param _stackId 待删除的资源栈ID
                     * 
                     */
                    void SetStackId(const std::string& _stackId);

                    /**
                     * 判断参数 StackId 是否已赋值
                     * @return StackId 是否已赋值
                     * 
                     */
                    bool StackIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的资源栈ID
                     */
                    std::string m_stackId;
                    bool m_stackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_DELETESTACKREQUEST_H_
