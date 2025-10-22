/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEAPPSREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEAPPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeApps请求参数结构体
                */
                class DescribeAppsRequest : public AbstractModel
                {
                public:
                    DescribeAppsRequest();
                    ~DescribeAppsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页每页个数
                     * @return Limit 分页每页个数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页个数
                     * @param _limit 分页每页个数
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
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
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
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取搜索关键词
                     * @return Keyword 搜索关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyword 搜索关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return AppIds 应用id
                     * 
                     */
                    std::vector<std::string> GetAppIds() const;

                    /**
                     * 设置应用id
                     * @param _appIds 应用id
                     * 
                     */
                    void SetAppIds(const std::vector<std::string>& _appIds);

                    /**
                     * 判断参数 AppIds 是否已赋值
                     * @return AppIds 是否已赋值
                     * 
                     */
                    bool AppIdsHasBeenSet() const;

                    /**
                     * 获取来源类型
                     * @return Channel 来源类型
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置来源类型
                     * @param _channel 来源类型
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取1-自定义应用；2-模型应用
                     * @return Type 1-自定义应用；2-模型应用
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1-自定义应用；2-模型应用
                     * @param _type 1-自定义应用；2-模型应用
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取应用是否收藏
                     * @return Favorite 应用是否收藏
                     * 
                     */
                    bool GetFavorite() const;

                    /**
                     * 设置应用是否收藏
                     * @param _favorite 应用是否收藏
                     * 
                     */
                    void SetFavorite(const bool& _favorite);

                    /**
                     * 判断参数 Favorite 是否已赋值
                     * @return Favorite 是否已赋值
                     * 
                     */
                    bool FavoriteHasBeenSet() const;

                private:

                    /**
                     * 分页每页个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::vector<std::string> m_appIds;
                    bool m_appIdsHasBeenSet;

                    /**
                     * 来源类型
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 1-自定义应用；2-模型应用
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 应用是否收藏
                     */
                    bool m_favorite;
                    bool m_favoriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEAPPSREQUEST_H_
