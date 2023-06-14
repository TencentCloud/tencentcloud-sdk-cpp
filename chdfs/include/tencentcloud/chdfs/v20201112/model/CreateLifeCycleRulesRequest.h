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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/LifeCycleRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateLifeCycleRules请求参数结构体
                */
                class CreateLifeCycleRulesRequest : public AbstractModel
                {
                public:
                    CreateLifeCycleRulesRequest();
                    ~CreateLifeCycleRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取多个生命周期规则，上限为10
                     * @return LifeCycleRules 多个生命周期规则，上限为10
                     * 
                     */
                    std::vector<LifeCycleRule> GetLifeCycleRules() const;

                    /**
                     * 设置多个生命周期规则，上限为10
                     * @param _lifeCycleRules 多个生命周期规则，上限为10
                     * 
                     */
                    void SetLifeCycleRules(const std::vector<LifeCycleRule>& _lifeCycleRules);

                    /**
                     * 判断参数 LifeCycleRules 是否已赋值
                     * @return LifeCycleRules 是否已赋值
                     * 
                     */
                    bool LifeCycleRulesHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 多个生命周期规则，上限为10
                     */
                    std::vector<LifeCycleRule> m_lifeCycleRules;
                    bool m_lifeCycleRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_
