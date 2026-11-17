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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTRESULTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTRESULTREQUEST_H_

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
                * ListVideoSnapshotResult请求参数结构体
                */
                class ListVideoSnapshotResultRequest : public AbstractModel
                {
                public:
                    ListVideoSnapshotResultRequest();
                    ~ListVideoSnapshotResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间</p><p>单位：秒</p>
                     * @return BeginTime <p>开始时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>开始时间</p><p>单位：秒</p>
                     * @param _beginTime <p>开始时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p><p>单位：秒</p>
                     * @return EndTime <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>单位：秒</p>
                     * @param _endTime <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>截图配置Id</p>
                     * @return ConfigId <p>截图配置Id</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>截图配置Id</p>
                     * @param _configId <p>截图配置Id</p>
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>通道Id</p>
                     * @return ChannelId <p>通道Id</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道Id</p>
                     * @param _channelId <p>通道Id</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
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
                     * 获取<p>图片URL有效期，单位：秒</p><p>取值范围：[60, 86400]</p><p>默认值：600</p>
                     * @return ImageUrlExpires <p>图片URL有效期，单位：秒</p><p>取值范围：[60, 86400]</p><p>默认值：600</p>
                     * 
                     */
                    int64_t GetImageUrlExpires() const;

                    /**
                     * 设置<p>图片URL有效期，单位：秒</p><p>取值范围：[60, 86400]</p><p>默认值：600</p>
                     * @param _imageUrlExpires <p>图片URL有效期，单位：秒</p><p>取值范围：[60, 86400]</p><p>默认值：600</p>
                     * 
                     */
                    void SetImageUrlExpires(const int64_t& _imageUrlExpires);

                    /**
                     * 判断参数 ImageUrlExpires 是否已赋值
                     * @return ImageUrlExpires 是否已赋值
                     * 
                     */
                    bool ImageUrlExpiresHasBeenSet() const;

                    /**
                     * 获取<p>页码</p><p>默认值：1</p>
                     * @return PageNumber <p>页码</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p><p>默认值：1</p>
                     * @param _pageNumber <p>页码</p><p>默认值：1</p>
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
                     * 获取<p>每页数目</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @return PageSize <p>每页数目</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数目</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @param _pageSize <p>每页数目</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p><p>单位：秒</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>截图配置Id</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>通道Id</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>图片URL有效期，单位：秒</p><p>取值范围：[60, 86400]</p><p>默认值：600</p>
                     */
                    int64_t m_imageUrlExpires;
                    bool m_imageUrlExpiresHasBeenSet;

                    /**
                     * <p>页码</p><p>默认值：1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数目</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTRESULTREQUEST_H_
