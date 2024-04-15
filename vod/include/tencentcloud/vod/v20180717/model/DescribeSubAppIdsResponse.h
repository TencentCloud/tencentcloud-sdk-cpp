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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SubAppIdInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeSubAppIds返回参数结构体
                */
                class DescribeSubAppIdsResponse : public AbstractModel
                {
                public:
                    DescribeSubAppIdsResponse();
                    ~DescribeSubAppIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用信息集合。
                     * @return SubAppIdInfoSet 应用信息集合。
                     * 
                     */
                    std::vector<SubAppIdInfo> GetSubAppIdInfoSet() const;

                    /**
                     * 判断参数 SubAppIdInfoSet 是否已赋值
                     * @return SubAppIdInfoSet 是否已赋值
                     * 
                     */
                    bool SubAppIdInfoSetHasBeenSet() const;

                    /**
                     * 获取应用总数量。
                     * @return TotalCount 应用总数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 应用信息集合。
                     */
                    std::vector<SubAppIdInfo> m_subAppIdInfoSet;
                    bool m_subAppIdInfoSetHasBeenSet;

                    /**
                     * 应用总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_
