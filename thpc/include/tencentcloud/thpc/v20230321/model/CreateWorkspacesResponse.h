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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESRESPONSE_H_

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
                * CreateWorkspaces返回参数结构体
                */
                class CreateWorkspacesResponse : public AbstractModel
                {
                public:
                    CreateWorkspacesResponse();
                    ~CreateWorkspacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间ID
                     * @return SpaceIdSet 工作空间ID
                     * 
                     */
                    std::vector<std::string> GetSpaceIdSet() const;

                    /**
                     * 判断参数 SpaceIdSet 是否已赋值
                     * @return SpaceIdSet 是否已赋值
                     * 
                     */
                    bool SpaceIdSetHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::vector<std::string> m_spaceIdSet;
                    bool m_spaceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESRESPONSE_H_
