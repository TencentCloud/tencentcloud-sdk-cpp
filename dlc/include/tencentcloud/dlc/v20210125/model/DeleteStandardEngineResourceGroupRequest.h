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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETESTANDARDENGINERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETESTANDARDENGINERESOURCEGROUPREQUEST_H_

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
                * DeleteStandardEngineResourceGroup请求参数结构体
                */
                class DeleteStandardEngineResourceGroupRequest : public AbstractModel
                {
                public:
                    DeleteStandardEngineResourceGroupRequest();
                    ~DeleteStandardEngineResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标准引擎资源组名称
                     * @return EngineResourceGroupName 标准引擎资源组名称
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置标准引擎资源组名称
                     * @param _engineResourceGroupName 标准引擎资源组名称
                     * 
                     */
                    void SetEngineResourceGroupName(const std::string& _engineResourceGroupName);

                    /**
                     * 判断参数 EngineResourceGroupName 是否已赋值
                     * @return EngineResourceGroupName 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 标准引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETESTANDARDENGINERESOURCEGROUPREQUEST_H_
