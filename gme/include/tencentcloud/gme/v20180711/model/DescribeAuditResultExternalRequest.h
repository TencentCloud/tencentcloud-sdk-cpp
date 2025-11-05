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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAUDITRESULTEXTERNALREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAUDITRESULTEXTERNALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAuditResultExternal请求参数结构体
                */
                class DescribeAuditResultExternalRequest : public AbstractModel
                {
                public:
                    DescribeAuditResultExternalRequest();
                    ~DescribeAuditResultExternalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID
                     * @return BizId 应用 ID
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用 ID
                     * @param _bizId 应用 ID
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取页数  取值范围：>=1
                     * @return PageNo 页数  取值范围：>=1
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页数  取值范围：>=1
                     * @param _pageNo 页数  取值范围：>=1
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取每页大小
                     * @return PageSize 每页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param _pageSize 每页大小
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
                     * 获取起始时间戳（秒）
                     * @return BeginTime 起始时间戳（秒）
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置起始时间戳（秒）
                     * @param _beginTime 起始时间戳（秒）
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
                     * 获取截止时间戳（秒）
                     * @return EndTime 截止时间戳（秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间戳（秒）
                     * @param _endTime 截止时间戳（秒）
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
                     * 获取最小恶意分数
                     * @return MinRate 最小恶意分数
                     * 
                     */
                    int64_t GetMinRate() const;

                    /**
                     * 设置最小恶意分数
                     * @param _minRate 最小恶意分数
                     * 
                     */
                    void SetMinRate(const int64_t& _minRate);

                    /**
                     * 判断参数 MinRate 是否已赋值
                     * @return MinRate 是否已赋值
                     * 
                     */
                    bool MinRateHasBeenSet() const;

                    /**
                     * 获取最大恶意分数
                     * @return MaxRate 最大恶意分数
                     * 
                     */
                    int64_t GetMaxRate() const;

                    /**
                     * 设置最大恶意分数
                     * @param _maxRate 最大恶意分数
                     * 
                     */
                    void SetMaxRate(const int64_t& _maxRate);

                    /**
                     * 判断参数 MaxRate 是否已赋值
                     * @return MaxRate 是否已赋值
                     * 
                     */
                    bool MaxRateHasBeenSet() const;

                    /**
                     * 获取UserID
                     * @return OpenId UserID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置UserID
                     * @param _openId UserID
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取恶意分类
                     * @return Label 恶意分类
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恶意分类
                     * @param _label 恶意分类
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取房间 ID
                     * @return RoomId 房间 ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间 ID
                     * @param _roomId 房间 ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 应用 ID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 页数  取值范围：>=1
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 起始时间戳（秒）
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 截止时间戳（秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 最小恶意分数
                     */
                    int64_t m_minRate;
                    bool m_minRateHasBeenSet;

                    /**
                     * 最大恶意分数
                     */
                    int64_t m_maxRate;
                    bool m_maxRateHasBeenSet;

                    /**
                     * UserID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 恶意分类
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 房间 ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAUDITRESULTEXTERNALREQUEST_H_
