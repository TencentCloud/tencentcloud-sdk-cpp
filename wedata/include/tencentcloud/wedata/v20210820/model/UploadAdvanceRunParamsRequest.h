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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADADVANCERUNPARAMSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADADVANCERUNPARAMSREQUEST_H_

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
                * UploadAdvanceRunParams请求参数结构体
                */
                class UploadAdvanceRunParamsRequest : public AbstractModel
                {
                public:
                    UploadAdvanceRunParamsRequest();
                    ~UploadAdvanceRunParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取远程路径
                     * @return RemotePath 远程路径
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置远程路径
                     * @param _remotePath 远程路径
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取高级运行参数
                     * @return AdvanceRunParam 高级运行参数
                     * 
                     */
                    std::string GetAdvanceRunParam() const;

                    /**
                     * 设置高级运行参数
                     * @param _advanceRunParam 高级运行参数
                     * 
                     */
                    void SetAdvanceRunParam(const std::string& _advanceRunParam);

                    /**
                     * 判断参数 AdvanceRunParam 是否已赋值
                     * @return AdvanceRunParam 是否已赋值
                     * 
                     */
                    bool AdvanceRunParamHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 远程路径
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 高级运行参数
                     */
                    std::string m_advanceRunParam;
                    bool m_advanceRunParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADADVANCERUNPARAMSREQUEST_H_
