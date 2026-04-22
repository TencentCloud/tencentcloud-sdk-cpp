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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BatchCustomRuleListItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 批量自定义规则列表信息数据
                */
                class BatchCustomRuleListData : public AbstractModel
                {
                public:
                    BatchCustomRuleListData();
                    ~BatchCustomRuleListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则列表
                     * @return List 规则列表
                     * 
                     */
                    std::vector<BatchCustomRuleListItem> GetList() const;

                    /**
                     * 设置规则列表
                     * @param _list 规则列表
                     * 
                     */
                    void SetList(const std::vector<BatchCustomRuleListItem>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取列表总数
                     * @return Total 列表总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置列表总数
                     * @param _total 列表总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<BatchCustomRuleListItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 列表总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTDATA_H_
