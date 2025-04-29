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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListVideoDownloadTask请求参数结构体
                */
                class ListVideoDownloadTaskRequest : public AbstractModel
                {
                public:
                    ListVideoDownloadTaskRequest();
                    ~ListVideoDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称，用于模糊搜索
                     * @return DeviceName 设备名称，用于模糊搜索
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称，用于模糊搜索
                     * @param _deviceName 设备名称，用于模糊搜索
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取通道名称，用于模糊搜索
                     * @return ChannelName 通道名称，用于模糊搜索
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通道名称，用于模糊搜索
                     * @param _channelName 通道名称，用于模糊搜索
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取任务状态（0：准备中，1：执行中，2：已完成，3：失败）
                     * @return Status 任务状态（0：准备中，1：执行中，2：已完成，3：失败）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态（0：准备中，1：执行中，2：已完成，3：失败）
                     * @param _status 任务状态（0：准备中，1：执行中，2：已完成，3：失败）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序规则（仅支持 StartTime，EndTime，倒序为-StartTime，-EndTime）
                     * @return SortRule 排序规则（仅支持 StartTime，EndTime，倒序为-StartTime，-EndTime）
                     * 
                     */
                    std::string GetSortRule() const;

                    /**
                     * 设置排序规则（仅支持 StartTime，EndTime，倒序为-StartTime，-EndTime）
                     * @param _sortRule 排序规则（仅支持 StartTime，EndTime，倒序为-StartTime，-EndTime）
                     * 
                     */
                    void SetSortRule(const std::string& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     * 
                     */
                    bool SortRuleHasBeenSet() const;

                    /**
                     * 获取响应是否携带预览地址(0:不携带；1:携带)
                     * @return WithPreviewUrl 响应是否携带预览地址(0:不携带；1:携带)
                     * 
                     */
                    int64_t GetWithPreviewUrl() const;

                    /**
                     * 设置响应是否携带预览地址(0:不携带；1:携带)
                     * @param _withPreviewUrl 响应是否携带预览地址(0:不携带；1:携带)
                     * 
                     */
                    void SetWithPreviewUrl(const int64_t& _withPreviewUrl);

                    /**
                     * 判断参数 WithPreviewUrl 是否已赋值
                     * @return WithPreviewUrl 是否已赋值
                     * 
                     */
                    bool WithPreviewUrlHasBeenSet() const;

                    /**
                     * 获取分页页数
                     * @return PageNumber 分页页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页数
                     * @param _pageNumber 分页页数
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取下载任务 ID
                     * @return DownloadTaskId 下载任务 ID
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置下载任务 ID
                     * @param _downloadTaskId 下载任务 ID
                     * 
                     */
                    void SetDownloadTaskId(const std::string& _downloadTaskId);

                    /**
                     * 判断参数 DownloadTaskId 是否已赋值
                     * @return DownloadTaskId 是否已赋值
                     * 
                     */
                    bool DownloadTaskIdHasBeenSet() const;

                    /**
                     * 获取下载地址过期时间，单位秒，最大为 1 天， 86400秒
                     * @return UrlExpires 下载地址过期时间，单位秒，最大为 1 天， 86400秒
                     * 
                     */
                    int64_t GetUrlExpires() const;

                    /**
                     * 设置下载地址过期时间，单位秒，最大为 1 天， 86400秒
                     * @param _urlExpires 下载地址过期时间，单位秒，最大为 1 天， 86400秒
                     * 
                     */
                    void SetUrlExpires(const int64_t& _urlExpires);

                    /**
                     * 判断参数 UrlExpires 是否已赋值
                     * @return UrlExpires 是否已赋值
                     * 
                     */
                    bool UrlExpiresHasBeenSet() const;

                private:

                    /**
                     * 设备名称，用于模糊搜索
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 通道名称，用于模糊搜索
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 任务状态（0：准备中，1：执行中，2：已完成，3：失败）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序规则（仅支持 StartTime，EndTime，倒序为-StartTime，-EndTime）
                     */
                    std::string m_sortRule;
                    bool m_sortRuleHasBeenSet;

                    /**
                     * 响应是否携带预览地址(0:不携带；1:携带)
                     */
                    int64_t m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * 分页页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 下载任务 ID
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                    /**
                     * 下载地址过期时间，单位秒，最大为 1 天， 86400秒
                     */
                    int64_t m_urlExpires;
                    bool m_urlExpiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_
