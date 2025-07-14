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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_

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
                * 分页请求参数
                */
                class PageByNoParams : public AbstractModel
                {
                public:
                    PageByNoParams();
                    ~PageByNoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个分页的数量是多少
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PerPage 每个分页的数量是多少
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置每个分页的数量是多少
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _perPage 每个分页的数量是多少
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取第几个分页，从1开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNo 第几个分页，从1开始
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 设置第几个分页，从1开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNo 第几个分页，从1开始
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNo(const std::string& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                private:

                    /**
                     * 每个分页的数量是多少
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * 第几个分页，从1开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_
