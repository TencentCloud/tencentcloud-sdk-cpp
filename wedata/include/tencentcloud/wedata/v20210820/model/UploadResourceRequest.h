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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/UploadResourceRequestInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UploadResource请求参数结构体
                */
                class UploadResourceRequest : public AbstractModel
                {
                public:
                    UploadResourceRequest();
                    ~UploadResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源上传请求信息
                     * @return UploadResourceRequestInfo 资源上传请求信息
                     * 
                     */
                    UploadResourceRequestInfo GetUploadResourceRequestInfo() const;

                    /**
                     * 设置资源上传请求信息
                     * @param _uploadResourceRequestInfo 资源上传请求信息
                     * 
                     */
                    void SetUploadResourceRequestInfo(const UploadResourceRequestInfo& _uploadResourceRequestInfo);

                    /**
                     * 判断参数 UploadResourceRequestInfo 是否已赋值
                     * @return UploadResourceRequestInfo 是否已赋值
                     * 
                     */
                    bool UploadResourceRequestInfoHasBeenSet() const;

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

                private:

                    /**
                     * 资源上传请求信息
                     */
                    UploadResourceRequestInfo m_uploadResourceRequestInfo;
                    bool m_uploadResourceRequestInfoHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUEST_H_
