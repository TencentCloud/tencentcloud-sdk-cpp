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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DELETESANDBOXTOOLREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DELETESANDBOXTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DeleteSandboxTool请求参数结构体
                */
                class DeleteSandboxToolRequest : public AbstractModel
                {
                public:
                    DeleteSandboxToolRequest();
                    ~DeleteSandboxToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取沙箱工具ID
                     * @return ToolId 沙箱工具ID
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置沙箱工具ID
                     * @param _toolId 沙箱工具ID
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                private:

                    /**
                     * 沙箱工具ID
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DELETESANDBOXTOOLREQUEST_H_
