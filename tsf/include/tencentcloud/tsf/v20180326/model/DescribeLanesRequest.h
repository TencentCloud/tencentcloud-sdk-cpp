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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeLanes请求参数结构体
                */
                class DescribeLanesRequest : public AbstractModel
                {
                public:
                    DescribeLanesRequest();
                    ~DescribeLanesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页展示的条数
                     * @return Limit 每页展示的条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页展示的条数
                     * @param _limit 每页展示的条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取无
                     * @return LaneIdList 无
                     * 
                     */
                    std::vector<std::string> GetLaneIdList() const;

                    /**
                     * 设置无
                     * @param _laneIdList 无
                     * 
                     */
                    void SetLaneIdList(const std::vector<std::string>& _laneIdList);

                    /**
                     * 判断参数 LaneIdList 是否已赋值
                     * @return LaneIdList 是否已赋值
                     * 
                     */
                    bool LaneIdListHasBeenSet() const;

                    /**
                     * 获取无
                     * @return DisableProgramAuthCheck 无
                     * 
                     */
                    bool GetDisableProgramAuthCheck() const;

                    /**
                     * 设置无
                     * @param _disableProgramAuthCheck 无
                     * 
                     */
                    void SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck);

                    /**
                     * 判断参数 DisableProgramAuthCheck 是否已赋值
                     * @return DisableProgramAuthCheck 是否已赋值
                     * 
                     */
                    bool DisableProgramAuthCheckHasBeenSet() const;

                private:

                    /**
                     * 每页展示的条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_laneIdList;
                    bool m_laneIdListHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_disableProgramAuthCheck;
                    bool m_disableProgramAuthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_
