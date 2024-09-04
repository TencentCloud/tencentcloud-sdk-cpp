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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYWORKSPACESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYWORKSPACESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * ModifyWorkspacesAttribute请求参数结构体
                */
                class ModifyWorkspacesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyWorkspacesAttributeRequest();
                    ~ModifyWorkspacesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间列表
                     * @return SpaceIds 工作空间列表
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置工作空间列表
                     * @param _spaceIds 工作空间列表
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                    /**
                     * 获取修改后的工作空间名称。可任意命名，但不得超过60个字符。
                     * @return SpaceName 修改后的工作空间名称。可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置修改后的工作空间名称。可任意命名，但不得超过60个字符。
                     * @param _spaceName 修改后的工作空间名称。可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                private:

                    /**
                     * 工作空间列表
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * 修改后的工作空间名称。可任意命名，但不得超过60个字符。
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYWORKSPACESATTRIBUTEREQUEST_H_
