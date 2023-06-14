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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeAuditTrack请求参数结构体
                */
                class DescribeAuditTrackRequest : public AbstractModel
                {
                public:
                    DescribeAuditTrackRequest();
                    ~DescribeAuditTrackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集 ID
                     * @return TrackId 跟踪集 ID
                     * 
                     */
                    uint64_t GetTrackId() const;

                    /**
                     * 设置跟踪集 ID
                     * @param _trackId 跟踪集 ID
                     * 
                     */
                    void SetTrackId(const uint64_t& _trackId);

                    /**
                     * 判断参数 TrackId 是否已赋值
                     * @return TrackId 是否已赋值
                     * 
                     */
                    bool TrackIdHasBeenSet() const;

                private:

                    /**
                     * 跟踪集 ID
                     */
                    uint64_t m_trackId;
                    bool m_trackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKREQUEST_H_
