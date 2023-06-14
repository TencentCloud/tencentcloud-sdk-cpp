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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEDOWNLOADINFOSREQUEST_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEDOWNLOADINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * DescribeDownloadInfos请求参数结构体
                */
                class DescribeDownloadInfosRequest : public AbstractModel
                {
                public:
                    DescribeDownloadInfosRequest();
                    ~DescribeDownloadInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取默认10
                     * @return Limit 默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置默认10
                     * @param _limit 默认10
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
                     * 获取默认0
                     * @return Offset 默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置默认0
                     * @param _offset 默认0
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
                     * 获取开始时间晚于指定时间
                     * @return BeginTime 开始时间晚于指定时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间晚于指定时间
                     * @param _beginTime 开始时间晚于指定时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间早于指定时间
                     * @return EndTime 结束时间早于指定时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间早于指定时间
                     * @param _endTime 结束时间早于指定时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取无效值，过滤结果为空
                     * @return ImageIds 无效值，过滤结果为空
                     * 
                     */
                    std::vector<int64_t> GetImageIds() const;

                    /**
                     * 设置无效值，过滤结果为空
                     * @param _imageIds 无效值，过滤结果为空
                     * 
                     */
                    void SetImageIds(const std::vector<int64_t>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                private:

                    /**
                     * 默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 开始时间晚于指定时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间早于指定时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 无效值，过滤结果为空
                     */
                    std::vector<int64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEDOWNLOADINFOSREQUEST_H_
