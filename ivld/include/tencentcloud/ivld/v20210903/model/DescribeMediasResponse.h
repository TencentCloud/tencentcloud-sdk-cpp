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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeMedias返回参数结构体
                */
                class DescribeMediasResponse : public AbstractModel
                {
                public:
                    DescribeMediasResponse();
                    ~DescribeMediasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足过滤条件的媒资视频总数量
                     * @return TotalCount 满足过滤条件的媒资视频总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取满足过滤条件的媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaInfoSet 满足过滤条件的媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MediaInfo> GetMediaInfoSet() const;

                    /**
                     * 判断参数 MediaInfoSet 是否已赋值
                     * @return MediaInfoSet 是否已赋值
                     * 
                     */
                    bool MediaInfoSetHasBeenSet() const;

                private:

                    /**
                     * 满足过滤条件的媒资视频总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 满足过滤条件的媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaInfo> m_mediaInfoSet;
                    bool m_mediaInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASRESPONSE_H_
