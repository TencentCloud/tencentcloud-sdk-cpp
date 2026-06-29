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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NDRAssetServiceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRAssetIdentificationCursorList返回参数结构体
                */
                class DescribeNDRAssetIdentificationCursorListResponse : public AbstractModel
                {
                public:
                    DescribeNDRAssetIdentificationCursorListResponse();
                    ~DescribeNDRAssetIdentificationCursorListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询结果列表</p>
                     * @return Data <p>查询结果列表</p>
                     * 
                     */
                    std::vector<NDRAssetServiceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>下一页游标</p>
                     * @return NextCursor <p>下一页游标</p>
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取<p>是否存在更多数据</p>
                     * @return HasMore <p>是否存在更多数据</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                private:

                    /**
                     * <p>查询结果列表</p>
                     */
                    std::vector<NDRAssetServiceInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>下一页游标</p>
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * <p>是否存在更多数据</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTRESPONSE_H_
