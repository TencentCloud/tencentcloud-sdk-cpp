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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFODTO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFODTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 工作空间基本信息描述
                */
                class WorkspaceInfoDTO : public AbstractModel
                {
                public:
                    WorkspaceInfoDTO();
                    ~WorkspaceInfoDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间创建时间
                     * @return CreateDate 工作空间创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置工作空间创建时间
                     * @param _createDate 工作空间创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取空间key
                     * @return SpaceKey 空间key
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置空间key
                     * @param _spaceKey 空间key
                     * 
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     * 
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 工作空间创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 空间key
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFODTO_H_
