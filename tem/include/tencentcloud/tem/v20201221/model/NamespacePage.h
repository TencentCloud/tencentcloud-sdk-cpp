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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/TemNamespaceInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 命名空间分页
                */
                class NamespacePage : public AbstractModel
                {
                public:
                    NamespacePage();
                    ~NamespacePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页内容
                     * @return Records 分页内容
                     * 
                     */
                    std::vector<TemNamespaceInfo> GetRecords() const;

                    /**
                     * 设置分页内容
                     * @param _records 分页内容
                     * 
                     */
                    void SetRecords(const std::vector<TemNamespaceInfo>& _records);

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
                     * 获取条目数
                     * @return Size 条目数
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置条目数
                     * @param _size 条目数
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

                private:

                    /**
                     * 分页内容
                     */
                    std::vector<TemNamespaceInfo> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 条目数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_
