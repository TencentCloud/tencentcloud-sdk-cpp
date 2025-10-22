/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * PauseStandardEngineResourceGroups请求参数结构体
                */
                class PauseStandardEngineResourceGroupsRequest : public AbstractModel
                {
                public:
                    PauseStandardEngineResourceGroupsRequest();
                    ~PauseStandardEngineResourceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标准引擎资源组名称
                     * @return EngineResourceGroupNames 标准引擎资源组名称
                     * 
                     */
                    std::vector<std::string> GetEngineResourceGroupNames() const;

                    /**
                     * 设置标准引擎资源组名称
                     * @param _engineResourceGroupNames 标准引擎资源组名称
                     * 
                     */
                    void SetEngineResourceGroupNames(const std::vector<std::string>& _engineResourceGroupNames);

                    /**
                     * 判断参数 EngineResourceGroupNames 是否已赋值
                     * @return EngineResourceGroupNames 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupNamesHasBeenSet() const;

                private:

                    /**
                     * 标准引擎资源组名称
                     */
                    std::vector<std::string> m_engineResourceGroupNames;
                    bool m_engineResourceGroupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSREQUEST_H_
