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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeIMCdrList请求参数结构体
                */
                class DescribeIMCdrListRequest : public AbstractModel
                {
                public:
                    DescribeIMCdrListRequest();
                    ~DescribeIMCdrListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取起始时间（必填），Unix 秒级时间戳
                     * @return StartTimestamp 起始时间（必填），Unix 秒级时间戳
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置起始时间（必填），Unix 秒级时间戳
                     * @param _startTimestamp 起始时间（必填），Unix 秒级时间戳
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取结束时间（必填），Unix 秒级时间戳
                     * @return EndTimestamp 结束时间（必填），Unix 秒级时间戳
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置结束时间（必填），Unix 秒级时间戳
                     * @param _endTimestamp 结束时间（必填），Unix 秒级时间戳
                     * 
                     */
                    void SetEndTimestamp(const int64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取返回记录条数，最大为100默认20
                     * @return Limit 返回记录条数，最大为100默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，最大为100默认20
                     * @param _limit 返回记录条数，最大为100默认20
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
                     * 获取返回记录偏移，默认为 0
                     * @return Offset 返回记录偏移，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回记录偏移，默认为 0
                     * @param _offset 返回记录偏移，默认为 0
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
                     * 获取1为全媒体，2为文本客服，不填则查询全部
                     * @return Type 1为全媒体，2为文本客服，不填则查询全部
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1为全媒体，2为文本客服，不填则查询全部
                     * @param _type 1为全媒体，2为文本客服，不填则查询全部
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 起始时间（必填），Unix 秒级时间戳
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 结束时间（必填），Unix 秒级时间戳
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 返回记录条数，最大为100默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回记录偏移，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 1为全媒体，2为文本客服，不填则查询全部
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRLISTREQUEST_H_
