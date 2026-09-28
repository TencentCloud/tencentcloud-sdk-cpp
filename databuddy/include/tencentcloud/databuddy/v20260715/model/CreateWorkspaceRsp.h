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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACERSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACERSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 创建工作空间响应
                */
                class CreateWorkspaceRsp : public AbstractModel
                {
                public:
                    CreateWorkspaceRsp();
                    ~CreateWorkspaceRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建成功的工作空间ID
                     * @return WorkspaceId 创建成功的工作空间ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置创建成功的工作空间ID
                     * @param _workspaceId 创建成功的工作空间ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACERSP_H_
