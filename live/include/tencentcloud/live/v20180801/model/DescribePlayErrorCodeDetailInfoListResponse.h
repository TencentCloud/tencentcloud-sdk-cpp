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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODEDETAILINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODEDETAILINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/HttpCodeInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePlayErrorCodeDetailInfoList返回参数结构体
                */
                class DescribePlayErrorCodeDetailInfoListResponse : public AbstractModel
                {
                public:
                    DescribePlayErrorCodeDetailInfoListResponse();
                    ~DescribePlayErrorCodeDetailInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计信息列表。
                     * @return HttpCodeList 统计信息列表。
                     * 
                     */
                    std::vector<HttpCodeInfo> GetHttpCodeList() const;

                    /**
                     * 判断参数 HttpCodeList 是否已赋值
                     * @return HttpCodeList 是否已赋值
                     * 
                     */
                    bool HttpCodeListHasBeenSet() const;

                    /**
                     * 获取统计类型。
                     * @return StatType 统计类型。
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                private:

                    /**
                     * 统计信息列表。
                     */
                    std::vector<HttpCodeInfo> m_httpCodeList;
                    bool m_httpCodeListHasBeenSet;

                    /**
                     * 统计类型。
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODEDETAILINFOLISTRESPONSE_H_
