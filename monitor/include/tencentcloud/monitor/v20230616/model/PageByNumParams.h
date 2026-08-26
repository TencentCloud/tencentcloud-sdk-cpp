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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMPARAMS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 按第几页进行分页的入参
                */
                class PageByNumParams : public AbstractModel
                {
                public:
                    PageByNumParams();
                    ~PageByNumParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每个分页的数量</p>
                     * @return PerPage <p>每个分页的数量</p>
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置<p>每个分页的数量</p>
                     * @param _perPage <p>每个分页的数量</p>
                     * 
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     * 
                     */
                    bool PerPageHasBeenSet() const;

                    /**
                     * 获取<p>第几个分页，从1开始</p>
                     * @return PageNo <p>第几个分页，从1开始</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>第几个分页，从1开始</p>
                     * @param _pageNo <p>第几个分页，从1开始</p>
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                private:

                    /**
                     * <p>每个分页的数量</p>
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * <p>第几个分页，从1开始</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMPARAMS_H_
