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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REPOSITORYINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REPOSITORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 仓库信息
                */
                class RepositoryInfo : public AbstractModel
                {
                public:
                    RepositoryInfo();
                    ~RepositoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库ID
                     * @return RepositoryId 仓库ID
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置仓库ID
                     * @param _repositoryId 仓库ID
                     * 
                     */
                    void SetRepositoryId(const std::string& _repositoryId);

                    /**
                     * 判断参数 RepositoryId 是否已赋值
                     * @return RepositoryId 是否已赋值
                     * 
                     */
                    bool RepositoryIdHasBeenSet() const;

                    /**
                     * 获取仓库名称
                     * @return RepositoryName 仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称
                     * @param _repositoryName 仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取仓库类型（默认仓库：default，私有仓库：private）
                     * @return RepositoryType 仓库类型（默认仓库：default，私有仓库：private）
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置仓库类型（默认仓库：default，私有仓库：private）
                     * @param _repositoryType 仓库类型（默认仓库：default，私有仓库：private）
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取仓库描述
                     * @return RepositoryDesc 仓库描述
                     * 
                     */
                    std::string GetRepositoryDesc() const;

                    /**
                     * 设置仓库描述
                     * @param _repositoryDesc 仓库描述
                     * 
                     */
                    void SetRepositoryDesc(const std::string& _repositoryDesc);

                    /**
                     * 判断参数 RepositoryDesc 是否已赋值
                     * @return RepositoryDesc 是否已赋值
                     * 
                     */
                    bool RepositoryDescHasBeenSet() const;

                    /**
                     * 获取仓库是否正在被使用
                     * @return IsUsed 仓库是否正在被使用
                     * 
                     */
                    bool GetIsUsed() const;

                    /**
                     * 设置仓库是否正在被使用
                     * @param _isUsed 仓库是否正在被使用
                     * 
                     */
                    void SetIsUsed(const bool& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                    /**
                     * 获取仓库创建时间
                     * @return CreateTime 仓库创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置仓库创建时间
                     * @param _createTime 仓库创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取仓库桶名称
                     * @return BucketName 仓库桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置仓库桶名称
                     * @param _bucketName 仓库桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取仓库桶所在地域
                     * @return BucketRegion 仓库桶所在地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置仓库桶所在地域
                     * @param _bucketRegion 仓库桶所在地域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取仓库目录
                     * @return Directory 仓库目录
                     * 
                     */
                    std::string GetDirectory() const;

                    /**
                     * 设置仓库目录
                     * @param _directory 仓库目录
                     * 
                     */
                    void SetDirectory(const std::string& _directory);

                    /**
                     * 判断参数 Directory 是否已赋值
                     * @return Directory 是否已赋值
                     * 
                     */
                    bool DirectoryHasBeenSet() const;

                private:

                    /**
                     * 仓库ID
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 仓库类型（默认仓库：default，私有仓库：private）
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 仓库描述
                     */
                    std::string m_repositoryDesc;
                    bool m_repositoryDescHasBeenSet;

                    /**
                     * 仓库是否正在被使用
                     */
                    bool m_isUsed;
                    bool m_isUsedHasBeenSet;

                    /**
                     * 仓库创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 仓库桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 仓库桶所在地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 仓库目录
                     */
                    std::string m_directory;
                    bool m_directoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REPOSITORYINFO_H_
