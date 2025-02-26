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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWeChatBillDetails请求参数结构体
                */
                class GetWeChatBillDetailsRequest : public AbstractModel
                {
                public:
                    GetWeChatBillDetailsRequest();
                    ~GetWeChatBillDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拉取的日期（YYYY-MM-DD）。
- 最大可追溯到365天前。
- 当天6点后才能拉取前一天的数据。
                     * @return Date 拉取的日期（YYYY-MM-DD）。
- 最大可追溯到365天前。
- 当天6点后才能拉取前一天的数据。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置拉取的日期（YYYY-MM-DD）。
- 最大可追溯到365天前。
- 当天6点后才能拉取前一天的数据。
                     * @param _date 拉取的日期（YYYY-MM-DD）。
- 最大可追溯到365天前。
- 当天6点后才能拉取前一天的数据。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取游标。
- 用于分页。
- 取第一页时传0，取后续页面时，传入本接口响应中返回的NextCursor字段的值。
                     * @return Cursor 游标。
- 用于分页。
- 取第一页时传0，取后续页面时，传入本接口响应中返回的NextCursor字段的值。
                     * 
                     */
                    uint64_t GetCursor() const;

                    /**
                     * 设置游标。
- 用于分页。
- 取第一页时传0，取后续页面时，传入本接口响应中返回的NextCursor字段的值。
                     * @param _cursor 游标。
- 用于分页。
- 取第一页时传0，取后续页面时，传入本接口响应中返回的NextCursor字段的值。
                     * 
                     */
                    void SetCursor(const uint64_t& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取需要拉取账单详情业务对应的RuleId。
- 不传会返回所有RuleId数据。
- 默认为空字符串。
                     * @return RuleId 需要拉取账单详情业务对应的RuleId。
- 不传会返回所有RuleId数据。
- 默认为空字符串。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置需要拉取账单详情业务对应的RuleId。
- 不传会返回所有RuleId数据。
- 默认为空字符串。
                     * @param _ruleId 需要拉取账单详情业务对应的RuleId。
- 不传会返回所有RuleId数据。
- 默认为空字符串。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 拉取的日期（YYYY-MM-DD）。
- 最大可追溯到365天前。
- 当天6点后才能拉取前一天的数据。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 游标。
- 用于分页。
- 取第一页时传0，取后续页面时，传入本接口响应中返回的NextCursor字段的值。
                     */
                    uint64_t m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 需要拉取账单详情业务对应的RuleId。
- 不传会返回所有RuleId数据。
- 默认为空字符串。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSREQUEST_H_
