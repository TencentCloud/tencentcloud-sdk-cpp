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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/EventEscapeImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeEventEscapeImageList返回参数结构体
                */
                class DescribeEventEscapeImageListResponse : public AbstractModel
                {
                public:
                    DescribeEventEscapeImageListResponse();
                    ~DescribeEventEscapeImageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险容器镜像列表
                     * @return List 风险容器镜像列表
                     * 
                     */
                    std::vector<EventEscapeImageInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取事件总数量
                     * @return TotalCount 事件总数量
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
                     * 风险容器镜像列表
                     */
                    std::vector<EventEscapeImageInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 事件总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTRESPONSE_H_
