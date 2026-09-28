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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACERSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACERSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkspaceInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询工作空间详情响应
                */
                class GetWorkspaceRsp : public AbstractModel
                {
                public:
                    GetWorkspaceRsp();
                    ~GetWorkspaceRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间详情
                     * @return WorkspaceInfo 工作空间详情
                     * 
                     */
                    WorkspaceInfo GetWorkspaceInfo() const;

                    /**
                     * 设置工作空间详情
                     * @param _workspaceInfo 工作空间详情
                     * 
                     */
                    void SetWorkspaceInfo(const WorkspaceInfo& _workspaceInfo);

                    /**
                     * 判断参数 WorkspaceInfo 是否已赋值
                     * @return WorkspaceInfo 是否已赋值
                     * 
                     */
                    bool WorkspaceInfoHasBeenSet() const;

                private:

                    /**
                     * 工作空间详情
                     */
                    WorkspaceInfo m_workspaceInfo;
                    bool m_workspaceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACERSP_H_
