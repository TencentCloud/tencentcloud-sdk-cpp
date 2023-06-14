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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_APPLYSTACKREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_APPLYSTACKREQUEST_H_

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
                * ApplyStack请求参数结构体
                */
                class ApplyStackRequest : public AbstractModel
                {
                public:
                    ApplyStackRequest();
                    ~ApplyStackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源栈ID
                     * @return StackId 资源栈ID
                     * 
                     */
                    std::string GetStackId() const;

                    /**
                     * 设置资源栈ID
                     * @param _stackId 资源栈ID
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
                     * 获取待执行apply事件的版本ID
                     * @return VersionId 待执行apply事件的版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置待执行apply事件的版本ID
                     * @param _versionId 待执行apply事件的版本ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * 资源栈ID
                     */
                    std::string m_stackId;
                    bool m_stackIdHasBeenSet;

                    /**
                     * 待执行apply事件的版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_APPLYSTACKREQUEST_H_
