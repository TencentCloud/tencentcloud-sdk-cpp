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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEIMAGETAGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEIMAGETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeImageTags请求参数结构体
                */
                class DescribeImageTagsRequest : public AbstractModel
                {
                public:
                    DescribeImageTagsRequest();
                    ~DescribeImageTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用Id
                     * @return ApplicationId 应用Id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用Id
                     * @param _applicationId 应用Id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取偏移量，取值从0开始
                     * @return Offset 偏移量，取值从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值从0开始
                     * @param _offset 偏移量，取值从0开始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数，默认为20， 取值应为1~100
                     * @return Limit 分页个数，默认为20， 取值应为1~100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~100
                     * @param _limit 分页个数，默认为20， 取值应为1~100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取不填和0:查询 1:不查询
                     * @return QueryImageIdFlag 不填和0:查询 1:不查询
                     * 
                     */
                    int64_t GetQueryImageIdFlag() const;

                    /**
                     * 设置不填和0:查询 1:不查询
                     * @param _queryImageIdFlag 不填和0:查询 1:不查询
                     * 
                     */
                    void SetQueryImageIdFlag(const int64_t& _queryImageIdFlag);

                    /**
                     * 判断参数 QueryImageIdFlag 是否已赋值
                     * @return QueryImageIdFlag 是否已赋值
                     * 
                     */
                    bool QueryImageIdFlagHasBeenSet() const;

                    /**
                     * 获取可用于搜索的 tag 名字
                     * @return SearchWord 可用于搜索的 tag 名字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置可用于搜索的 tag 名字
                     * @param _searchWord 可用于搜索的 tag 名字
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取企业: tcr ；个人: personal或者不填
                     * @return RepoType 企业: tcr ；个人: personal或者不填
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置企业: tcr ；个人: personal或者不填
                     * @param _repoType 企业: tcr ；个人: personal或者不填
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
                     * @return TcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
                     * @param _tcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                    /**
                     * 获取仓库名
                     * @return RepoName 仓库名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名
                     * @param _repoName 仓库名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                private:

                    /**
                     * 应用Id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 偏移量，取值从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 不填和0:查询 1:不查询
                     */
                    int64_t m_queryImageIdFlag;
                    bool m_queryImageIdFlagHasBeenSet;

                    /**
                     * 可用于搜索的 tag 名字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 企业: tcr ；个人: personal或者不填
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * TcrRepoInfo值
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * 仓库名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEIMAGETAGSREQUEST_H_
