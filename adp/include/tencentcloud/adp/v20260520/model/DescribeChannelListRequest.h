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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECHANNELLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECHANNELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeChannelList请求参数结构体
                */
                class DescribeChannelListRequest : public AbstractModel
                {
                public:
                    DescribeChannelListRequest();
                    ~DescribeChannelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用业务ID</p>
                     * @return AppId <p>应用业务ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用业务ID</p>
                     * @param _appId <p>应用业务ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @return Scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @param _scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件（可选，支持ChannelType/ChannelStatus等维度）</p>
                     * @return FilterList <p>过滤条件（可选，支持ChannelType/ChannelStatus等维度）</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件（可选，支持ChannelType/ChannelStatus等维度）</p>
                     * @param _filterList <p>过滤条件（可选，支持ChannelType/ChannelStatus等维度）</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>页码（从1开始）</p>
                     * @return PageNumber <p>页码（从1开始）</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码（从1开始）</p>
                     * @param _pageNumber <p>页码（从1开始）</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页数量（最大100）</p>
                     * @return PageSize <p>每页数量（最大100）</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量（最大100）</p>
                     * @param _pageSize <p>每页数量（最大100）</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>应用业务ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>渠道场景：0-B端场景，1-C端场景</p>
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>过滤条件（可选，支持ChannelType/ChannelStatus等维度）</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>页码（从1开始）</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量（最大100）</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECHANNELLISTREQUEST_H_
