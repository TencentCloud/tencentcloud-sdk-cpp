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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_

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
                * 分页结果参数
                */
                class PageByNoResult : public AbstractModel
                {
                public:
                    PageByNoResult();
                    ~PageByNoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总共有多少数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总共有多少数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总共有多少数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总共有多少数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取总共有多少个分页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPage 总共有多少个分页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置总共有多少个分页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPage 总共有多少个分页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPage(const int64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取当前的分页号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentPageNo 当前的分页号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentPageNo() const;

                    /**
                     * 设置当前的分页号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentPageNo 当前的分页号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentPageNo(const int64_t& _currentPageNo);

                    /**
                     * 判断参数 CurrentPageNo 是否已赋值
                     * @return CurrentPageNo 是否已赋值
                     * 
                     */
                    bool CurrentPageNoHasBeenSet() const;

                    /**
                     * 获取【已弃用】是否遍历到末尾
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnd 【已弃用】是否遍历到末尾
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置【已弃用】是否遍历到末尾
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnd 【已弃用】是否遍历到末尾
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * @deprecated
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取是否遍历到末尾
                     * @return End 是否遍历到末尾
                     * 
                     */
                    bool GetEnd() const;

                    /**
                     * 设置是否遍历到末尾
                     * @param _end 是否遍历到末尾
                     * 
                     */
                    void SetEnd(const bool& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 总共有多少数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总共有多少个分页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 当前的分页号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentPageNo;
                    bool m_currentPageNoHasBeenSet;

                    /**
                     * 【已弃用】是否遍历到末尾
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 是否遍历到末尾
                     */
                    bool m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_
