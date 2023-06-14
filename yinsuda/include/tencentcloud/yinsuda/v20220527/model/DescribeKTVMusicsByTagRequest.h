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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICSBYTAGREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICSBYTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVMusicsByTag请求参数结构体
                */
                class DescribeKTVMusicsByTagRequest : public AbstractModel
                {
                public:
                    DescribeKTVMusicsByTagRequest();
                    ~DescribeKTVMusicsByTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取标签 Id。
                     * @return TagId 标签 Id。
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置标签 Id。
                     * @param _tagId 标签 Id。
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取滚动标记。
                     * @return ScrollToken 滚动标记。
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置滚动标记。
                     * @param _scrollToken 滚动标记。
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取返回条数限制，默认 20，最大 50。
                     * @return Limit 返回条数限制，默认 20，最大 50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回条数限制，默认 20，最大 50。
                     * @param _limit 返回条数限制，默认 20，最大 50。
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
                     * 获取权益过滤，取值有：
<li>Play：可播；</li>
<li>Sing：可唱。</li>
                     * @return RightFilters 权益过滤，取值有：
<li>Play：可播；</li>
<li>Sing：可唱。</li>
                     * 
                     */
                    std::vector<std::string> GetRightFilters() const;

                    /**
                     * 设置权益过滤，取值有：
<li>Play：可播；</li>
<li>Sing：可唱。</li>
                     * @param _rightFilters 权益过滤，取值有：
<li>Play：可播；</li>
<li>Sing：可唱。</li>
                     * 
                     */
                    void SetRightFilters(const std::vector<std::string>& _rightFilters);

                    /**
                     * 判断参数 RightFilters 是否已赋值
                     * @return RightFilters 是否已赋值
                     * 
                     */
                    bool RightFiltersHasBeenSet() const;

                    /**
                     * 获取物料过滤，取值有：
<li>Lyrics：含有歌词；</li>
<li>Midi：含有音高线。</li>
                     * @return MaterialFilters 物料过滤，取值有：
<li>Lyrics：含有歌词；</li>
<li>Midi：含有音高线。</li>
                     * 
                     */
                    std::vector<std::string> GetMaterialFilters() const;

                    /**
                     * 设置物料过滤，取值有：
<li>Lyrics：含有歌词；</li>
<li>Midi：含有音高线。</li>
                     * @param _materialFilters 物料过滤，取值有：
<li>Lyrics：含有歌词；</li>
<li>Midi：含有音高线。</li>
                     * 
                     */
                    void SetMaterialFilters(const std::vector<std::string>& _materialFilters);

                    /**
                     * 判断参数 MaterialFilters 是否已赋值
                     * @return MaterialFilters 是否已赋值
                     * 
                     */
                    bool MaterialFiltersHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 标签 Id。
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 滚动标记。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * 返回条数限制，默认 20，最大 50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 权益过滤，取值有：
<li>Play：可播；</li>
<li>Sing：可唱。</li>
                     */
                    std::vector<std::string> m_rightFilters;
                    bool m_rightFiltersHasBeenSet;

                    /**
                     * 物料过滤，取值有：
<li>Lyrics：含有歌词；</li>
<li>Midi：含有音高线。</li>
                     */
                    std::vector<std::string> m_materialFilters;
                    bool m_materialFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICSBYTAGREQUEST_H_
