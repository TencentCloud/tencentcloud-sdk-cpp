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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcTextDetailData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC生文明细
                */
                class AigcTextDetail : public AbstractModel
                {
                public:
                    AigcTextDetail();
                    ~AigcTextDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每页条数</p>
                     * @return PageSize <p>每页条数</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数</p>
                     * @param _pageSize <p>每页条数</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>上一页响应中返回的 scroll_token,用于翻下一页</p>
                     * @return ScrollToken <p>上一页响应中返回的 scroll_token,用于翻下一页</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>上一页响应中返回的 scroll_token,用于翻下一页</p>
                     * @param _scrollToken <p>上一页响应中返回的 scroll_token,用于翻下一页</p>
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取<p>生文详细数据</p>
                     * @return Data <p>生文详细数据</p>
                     * 
                     */
                    std::vector<AigcTextDetailData> GetData() const;

                    /**
                     * 设置<p>生文详细数据</p>
                     * @param _data <p>生文详细数据</p>
                     * 
                     */
                    void SetData(const std::vector<AigcTextDetailData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>每页条数</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>上一页响应中返回的 scroll_token,用于翻下一页</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>生文详细数据</p>
                     */
                    std::vector<AigcTextDetailData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_
