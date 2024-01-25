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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CodeSearchInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 代码搜索结果分页信息
                */
                class CodeSearchInfoPage : public AbstractModel
                {
                public:
                    CodeSearchInfoPage();
                    ~CodeSearchInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页数据
                     * @return Rows 分页数据
                     * 
                     */
                    std::vector<CodeSearchInfo> GetRows() const;

                    /**
                     * 设置分页数据
                     * @param _rows 分页数据
                     * 
                     */
                    void SetRows(const std::vector<CodeSearchInfo>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总个数
                     * @param _totalCount 总个数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 分页数据
                     */
                    std::vector<CodeSearchInfo> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * 总个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFOPAGE_H_
