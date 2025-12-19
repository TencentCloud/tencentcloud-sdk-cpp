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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListChannel请求参数结构体
                */
                class ListChannelRequest : public AbstractModel
                {
                public:
                    ListChannelRequest();
                    ~ListChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @return AppBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @param _appBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * @deprecated
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * @deprecated
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * @deprecated
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取页码（必须大于0）
                     * @return PageNumber 页码（必须大于0）
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码（必须大于0）
                     * @param _pageNumber 页码（必须大于0）
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
                     * 获取分页数量（取值范围为1-200）
                     * @return PageSize 分页数量（取值范围为1-200）
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页数量（取值范围为1-200）
                     * @param _pageSize 分页数量（取值范围为1-200）
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取渠道类型, 10000: 微信订阅号，10001: 微信服务号，10002：企微应用，10004：微信客服，10005：小程序，10009：企微智能机器人 。（默认为[]）
                     * @return ChannelType 渠道类型, 10000: 微信订阅号，10001: 微信服务号，10002：企微应用，10004：微信客服，10005：小程序，10009：企微智能机器人 。（默认为[]）
                     * 
                     */
                    std::vector<uint64_t> GetChannelType() const;

                    /**
                     * 设置渠道类型, 10000: 微信订阅号，10001: 微信服务号，10002：企微应用，10004：微信客服，10005：小程序，10009：企微智能机器人 。（默认为[]）
                     * @param _channelType 渠道类型, 10000: 微信订阅号，10001: 微信服务号，10002：企微应用，10004：微信客服，10005：小程序，10009：企微智能机器人 。（默认为[]）
                     * 
                     */
                    void SetChannelType(const std::vector<uint64_t>& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取渠道状态 1未发布 2运行中 3已下线 （默认为[]）
                     * @return ChannelStatus 渠道状态 1未发布 2运行中 3已下线 （默认为[]）
                     * 
                     */
                    std::vector<uint64_t> GetChannelStatus() const;

                    /**
                     * 设置渠道状态 1未发布 2运行中 3已下线 （默认为[]）
                     * @param _channelStatus 渠道状态 1未发布 2运行中 3已下线 （默认为[]）
                     * 
                     */
                    void SetChannelStatus(const std::vector<uint64_t>& _channelStatus);

                    /**
                     * 判断参数 ChannelStatus 是否已赋值
                     * @return ChannelStatus 是否已赋值
                     * 
                     */
                    bool ChannelStatusHasBeenSet() const;

                private:

                    /**
                     * 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 页码（必须大于0）
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页数量（取值范围为1-200）
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 渠道类型, 10000: 微信订阅号，10001: 微信服务号，10002：企微应用，10004：微信客服，10005：小程序，10009：企微智能机器人 。（默认为[]）
                     */
                    std::vector<uint64_t> m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 渠道状态 1未发布 2运行中 3已下线 （默认为[]）
                     */
                    std::vector<uint64_t> m_channelStatus;
                    bool m_channelStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELREQUEST_H_
