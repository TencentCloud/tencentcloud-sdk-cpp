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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/PresetImageInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribePresetImageList返回参数结构体
                */
                class DescribePresetImageListResponse : public AbstractModel
                {
                public:
                    DescribePresetImageListResponse();
                    ~DescribePresetImageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>记录总数</p>
                     * @return TotalCount <p>记录总数</p>
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
                     * 获取<p>镜像列表</p>
                     * @return PresetImageList <p>镜像列表</p>
                     * 
                     */
                    std::vector<PresetImageInfo> GetPresetImageList() const;

                    /**
                     * 判断参数 PresetImageList 是否已赋值
                     * @return PresetImageList 是否已赋值
                     * 
                     */
                    bool PresetImageListHasBeenSet() const;

                private:

                    /**
                     * <p>记录总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>镜像列表</p>
                     */
                    std::vector<PresetImageInfo> m_presetImageList;
                    bool m_presetImageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTRESPONSE_H_
