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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKREQUEST_H_

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
                * UpdateStack请求参数结构体
                */
                class UpdateStackRequest : public AbstractModel
                {
                public:
                    UpdateStackRequest();
                    ~UpdateStackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的资源栈ID
                     * @return StackId 待更新的资源栈ID
                     * 
                     */
                    std::string GetStackId() const;

                    /**
                     * 设置待更新的资源栈ID
                     * @param _stackId 待更新的资源栈ID
                     * 
                     */
                    void SetStackId(const std::string& _stackId);

                    /**
                     * 判断参数 StackId 是否已赋值
                     * @return StackId 是否已赋值
                     * 
                     */
                    bool StackIdHasBeenSet() const;

                    /**
                     * 获取资源栈名称，不得超过60个字符
                     * @return StackName 资源栈名称，不得超过60个字符
                     * 
                     */
                    std::string GetStackName() const;

                    /**
                     * 设置资源栈名称，不得超过60个字符
                     * @param _stackName 资源栈名称，不得超过60个字符
                     * 
                     */
                    void SetStackName(const std::string& _stackName);

                    /**
                     * 判断参数 StackName 是否已赋值
                     * @return StackName 是否已赋值
                     * 
                     */
                    bool StackNameHasBeenSet() const;

                    /**
                     * 获取资源栈描述，不得超过200个字符
                     * @return Description 资源栈描述，不得超过200个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源栈描述，不得超过200个字符
                     * @param _description 资源栈描述，不得超过200个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 待更新的资源栈ID
                     */
                    std::string m_stackId;
                    bool m_stackIdHasBeenSet;

                    /**
                     * 资源栈名称，不得超过60个字符
                     */
                    std::string m_stackName;
                    bool m_stackNameHasBeenSet;

                    /**
                     * 资源栈描述，不得超过200个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_UPDATESTACKREQUEST_H_
