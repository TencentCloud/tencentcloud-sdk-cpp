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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPADSTREAMLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPADSTREAMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PadStreamInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePadStreamList返回参数结构体
                */
                class DescribeLivePadStreamListResponse : public AbstractModel
                {
                public:
                    DescribeLivePadStreamListResponse();
                    ~DescribeLivePadStreamListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前正在拉取垫片的流信息列表。
                     * @return StreamInfoList 当前正在拉取垫片的流信息列表。
                     * 
                     */
                    std::vector<PadStreamInfo> GetStreamInfoList() const;

                    /**
                     * 判断参数 StreamInfoList 是否已赋值
                     * @return StreamInfoList 是否已赋值
                     * 
                     */
                    bool StreamInfoListHasBeenSet() const;

                    /**
                     * 获取传入的分页页数。
                     * @return PageNum 传入的分页页数。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取传入的分页个数。
                     * @return PageSize 传入的分页个数。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取查询到的总个数。
                     * @return TotalNum 查询到的总个数。
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取可以分的总页数。
                     * @return TotalPage 可以分的总页数。
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * 当前正在拉取垫片的流信息列表。
                     */
                    std::vector<PadStreamInfo> m_streamInfoList;
                    bool m_streamInfoListHasBeenSet;

                    /**
                     * 传入的分页页数。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 传入的分页个数。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询到的总个数。
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 可以分的总页数。
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPADSTREAMLISTRESPONSE_H_
