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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PKGLIST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PKGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/PkgInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 包列表
                */
                class PkgList : public AbstractModel
                {
                public:
                    PkgList();
                    ~PkgList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取程序包总量
                     * @return TotalCount 程序包总量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置程序包总量
                     * @param _totalCount 程序包总量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取程序包信息列表
                     * @return Content 程序包信息列表
                     * 
                     */
                    std::vector<PkgInfo> GetContent() const;

                    /**
                     * 设置程序包信息列表
                     * @param _content 程序包信息列表
                     * 
                     */
                    void SetContent(const std::vector<PkgInfo>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取程序包仓库id
                     * @return RepositoryId 程序包仓库id
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置程序包仓库id
                     * @param _repositoryId 程序包仓库id
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
                     * 获取程序包仓库类型
                     * @return RepositoryType 程序包仓库类型
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置程序包仓库类型
                     * @param _repositoryType 程序包仓库类型
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
                     * 获取程序包仓库名称
                     * @return RepositoryName 程序包仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置程序包仓库名称
                     * @param _repositoryName 程序包仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                private:

                    /**
                     * 程序包总量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 程序包信息列表
                     */
                    std::vector<PkgInfo> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 程序包仓库id
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * 程序包仓库类型
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 程序包仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PKGLIST_H_
