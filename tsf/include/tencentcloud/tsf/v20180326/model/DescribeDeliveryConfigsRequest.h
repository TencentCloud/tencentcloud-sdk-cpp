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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_

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
                * DescribeDeliveryConfigs请求参数结构体
                */
                class DescribeDeliveryConfigsRequest : public AbstractModel
                {
                public:
                    DescribeDeliveryConfigsRequest();
                    ~DescribeDeliveryConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键字
                     * @return SearchWord 关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置关键字
                     * @param _searchWord 关键字
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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
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
                     * 获取搜索条数
                     * @return Limit 搜索条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置搜索条数
                     * @param _limit 搜索条数
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
                     * 获取数据集idList
                     * @return ProgramIdList 数据集idList
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置数据集idList
                     * @param _programIdList 数据集idList
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                    /**
                     * 获取ConfigIdList
                     * @return ConfigIdList ConfigIdList
                     * 
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置ConfigIdList
                     * @param _configIdList ConfigIdList
                     * 
                     */
                    void SetConfigIdList(const std::vector<std::string>& _configIdList);

                    /**
                     * 判断参数 ConfigIdList 是否已赋值
                     * @return ConfigIdList 是否已赋值
                     * 
                     */
                    bool ConfigIdListHasBeenSet() const;

                private:

                    /**
                     * 关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据集idList
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * ConfigIdList
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_
