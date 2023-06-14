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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ProIspPlayCodeDataInfo.h>
#include <tencentcloud/live/v20180801/model/PlayCodeTotalInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePlayErrorCodeSumInfoList返回参数结构体
                */
                class DescribePlayErrorCodeSumInfoListResponse : public AbstractModel
                {
                public:
                    DescribePlayErrorCodeSumInfoListResponse();
                    ~DescribePlayErrorCodeSumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分省份分运营商错误码为2或3或4或5开头的状态码数据信息。
                     * @return ProIspInfoList 分省份分运营商错误码为2或3或4或5开头的状态码数据信息。
                     * 
                     */
                    std::vector<ProIspPlayCodeDataInfo> GetProIspInfoList() const;

                    /**
                     * 判断参数 ProIspInfoList 是否已赋值
                     * @return ProIspInfoList 是否已赋值
                     * 
                     */
                    bool ProIspInfoListHasBeenSet() const;

                    /**
                     * 获取所有状态码的加和的次数。
                     * @return TotalCodeAll 所有状态码的加和的次数。
                     * 
                     */
                    uint64_t GetTotalCodeAll() const;

                    /**
                     * 判断参数 TotalCodeAll 是否已赋值
                     * @return TotalCodeAll 是否已赋值
                     * 
                     */
                    bool TotalCodeAllHasBeenSet() const;

                    /**
                     * 获取状态码为4开头的总次数。
                     * @return TotalCode4xx 状态码为4开头的总次数。
                     * 
                     */
                    uint64_t GetTotalCode4xx() const;

                    /**
                     * 判断参数 TotalCode4xx 是否已赋值
                     * @return TotalCode4xx 是否已赋值
                     * 
                     */
                    bool TotalCode4xxHasBeenSet() const;

                    /**
                     * 获取状态码为5开头的总次数。
                     * @return TotalCode5xx 状态码为5开头的总次数。
                     * 
                     */
                    uint64_t GetTotalCode5xx() const;

                    /**
                     * 判断参数 TotalCode5xx 是否已赋值
                     * @return TotalCode5xx 是否已赋值
                     * 
                     */
                    bool TotalCode5xxHasBeenSet() const;

                    /**
                     * 获取各状态码的总次数。
                     * @return TotalCodeList 各状态码的总次数。
                     * 
                     */
                    std::vector<PlayCodeTotalInfo> GetTotalCodeList() const;

                    /**
                     * 判断参数 TotalCodeList 是否已赋值
                     * @return TotalCodeList 是否已赋值
                     * 
                     */
                    bool TotalCodeListHasBeenSet() const;

                    /**
                     * 获取页号。
                     * @return PageNum 页号。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小。
                     * @return PageSize 每页大小。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取总页数。
                     * @return TotalPage 总页数。
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取总记录数。
                     * @return TotalNum 总记录数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取状态码为2开头的总次数。
                     * @return TotalCode2xx 状态码为2开头的总次数。
                     * 
                     */
                    uint64_t GetTotalCode2xx() const;

                    /**
                     * 判断参数 TotalCode2xx 是否已赋值
                     * @return TotalCode2xx 是否已赋值
                     * 
                     */
                    bool TotalCode2xxHasBeenSet() const;

                    /**
                     * 获取状态码为3开头的总次数。
                     * @return TotalCode3xx 状态码为3开头的总次数。
                     * 
                     */
                    uint64_t GetTotalCode3xx() const;

                    /**
                     * 判断参数 TotalCode3xx 是否已赋值
                     * @return TotalCode3xx 是否已赋值
                     * 
                     */
                    bool TotalCode3xxHasBeenSet() const;

                private:

                    /**
                     * 分省份分运营商错误码为2或3或4或5开头的状态码数据信息。
                     */
                    std::vector<ProIspPlayCodeDataInfo> m_proIspInfoList;
                    bool m_proIspInfoListHasBeenSet;

                    /**
                     * 所有状态码的加和的次数。
                     */
                    uint64_t m_totalCodeAll;
                    bool m_totalCodeAllHasBeenSet;

                    /**
                     * 状态码为4开头的总次数。
                     */
                    uint64_t m_totalCode4xx;
                    bool m_totalCode4xxHasBeenSet;

                    /**
                     * 状态码为5开头的总次数。
                     */
                    uint64_t m_totalCode5xx;
                    bool m_totalCode5xxHasBeenSet;

                    /**
                     * 各状态码的总次数。
                     */
                    std::vector<PlayCodeTotalInfo> m_totalCodeList;
                    bool m_totalCodeListHasBeenSet;

                    /**
                     * 页号。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总页数。
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 总记录数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 状态码为2开头的总次数。
                     */
                    uint64_t m_totalCode2xx;
                    bool m_totalCode2xxHasBeenSet;

                    /**
                     * 状态码为3开头的总次数。
                     */
                    uint64_t m_totalCode3xx;
                    bool m_totalCode3xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_
