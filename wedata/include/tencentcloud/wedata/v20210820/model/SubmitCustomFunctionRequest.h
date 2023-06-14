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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITCUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITCUSTOMFUNCTIONREQUEST_H_

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
                * SubmitCustomFunction请求参数结构体
                */
                class SubmitCustomFunctionRequest : public AbstractModel
                {
                public:
                    SubmitCustomFunctionRequest();
                    ~SubmitCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数唯一标识
                     * @return FunctionId 函数唯一标识
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数唯一标识
                     * @param _functionId 函数唯一标识
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取集群实例 ID
                     * @return ClusterIdentifier 集群实例 ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例 ID
                     * @param _clusterIdentifier 集群实例 ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Comment 备注信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注信息
                     * @param _comment 备注信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

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

                private:

                    /**
                     * 函数唯一标识
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 集群实例 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITCUSTOMFUNCTIONREQUEST_H_
