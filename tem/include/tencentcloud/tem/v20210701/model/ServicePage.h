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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemService.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 服务分页
                */
                class ServicePage : public AbstractModel
                {
                public:
                    ServicePage();
                    ~ServicePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条目
                     * @return Records 条目
                     * 
                     */
                    std::vector<TemService> GetRecords() const;

                    /**
                     * 设置条目
                     * @param _records 条目
                     * 
                     */
                    void SetRecords(const std::vector<TemService>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
                     * @param _total 总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取条目
                     * @return Size 条目
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置条目
                     * @param _size 条目
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return Pages 页数
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置页数
                     * @param _pages 页数
                     * 
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取当前条数
                     * @return Current 当前条数
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 设置当前条数
                     * @param _current 当前条数
                     * 
                     */
                    void SetCurrent(const int64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * 条目
                     */
                    std::vector<TemService> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 条目
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 当前条数
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_
