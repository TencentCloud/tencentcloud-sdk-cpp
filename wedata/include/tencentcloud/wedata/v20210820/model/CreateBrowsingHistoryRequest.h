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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBROWSINGHISTORYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBROWSINGHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateBrowsingHistory请求参数结构体
                */
                class CreateBrowsingHistoryRequest : public AbstractModel
                {
                public:
                    CreateBrowsingHistoryRequest();
                    ~CreateBrowsingHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取资源名字
                     * @return Title 资源名字
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置资源名字
                     * @param _title 资源名字
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取查询历史的资源类型file/task/function/event等
                     * @return ResourceType 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置查询历史的资源类型file/task/function/event等
                     * @param _resourceType 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源唯一id，如taskId等
                     * @return ResourceId 资源唯一id，如taskId等
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一id，如taskId等
                     * @param _resourceId 资源唯一id，如taskId等
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取json格式的资源相关个性化信息
                     * @return ExtraInfo json格式的资源相关个性化信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置json格式的资源相关个性化信息
                     * @param _extraInfo json格式的资源相关个性化信息
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源名字
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 查询历史的资源类型file/task/function/event等
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源唯一id，如taskId等
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * json格式的资源相关个性化信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBROWSINGHISTORYREQUEST_H_
