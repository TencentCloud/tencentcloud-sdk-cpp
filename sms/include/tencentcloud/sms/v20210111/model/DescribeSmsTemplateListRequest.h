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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSmsTemplateList请求参数结构体
                */
                class DescribeSmsTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeSmsTemplateListRequest();
                    ~DescribeSmsTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取模板 ID 数组。数组为空时默认查询模板列表信息，请使用 Limit 和 Offset 字段设置查询范围。
<dx-alert infotype="notice" title="注意">默认数组长度最大100</dx-alert>
                     * @return TemplateIdSet 模板 ID 数组。数组为空时默认查询模板列表信息，请使用 Limit 和 Offset 字段设置查询范围。
<dx-alert infotype="notice" title="注意">默认数组长度最大100</dx-alert>
                     * 
                     */
                    std::vector<uint64_t> GetTemplateIdSet() const;

                    /**
                     * 设置模板 ID 数组。数组为空时默认查询模板列表信息，请使用 Limit 和 Offset 字段设置查询范围。
<dx-alert infotype="notice" title="注意">默认数组长度最大100</dx-alert>
                     * @param _templateIdSet 模板 ID 数组。数组为空时默认查询模板列表信息，请使用 Limit 和 Offset 字段设置查询范围。
<dx-alert infotype="notice" title="注意">默认数组长度最大100</dx-alert>
                     * 
                     */
                    void SetTemplateIdSet(const std::vector<uint64_t>& _templateIdSet);

                    /**
                     * 判断参数 TemplateIdSet 是否已赋值
                     * @return TemplateIdSet 是否已赋值
                     * 
                     */
                    bool TemplateIdSetHasBeenSet() const;

                    /**
                     * 获取最大上限，最多100。
注：默认为0，TemplateIdSet 为空时启用。
                     * @return Limit 最大上限，最多100。
注：默认为0，TemplateIdSet 为空时启用。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大上限，最多100。
注：默认为0，TemplateIdSet 为空时启用。
                     * @param _limit 最大上限，最多100。
注：默认为0，TemplateIdSet 为空时启用。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。
注：默认为0，TemplateIdSet 为空时启用。
                     * @return Offset 偏移量。
注：默认为0，TemplateIdSet 为空时启用。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
注：默认为0，TemplateIdSet 为空时启用。
                     * @param _offset 偏移量。
注：默认为0，TemplateIdSet 为空时启用。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 模板 ID 数组。数组为空时默认查询模板列表信息，请使用 Limit 和 Offset 字段设置查询范围。
<dx-alert infotype="notice" title="注意">默认数组长度最大100</dx-alert>
                     */
                    std::vector<uint64_t> m_templateIdSet;
                    bool m_templateIdSetHasBeenSet;

                    /**
                     * 最大上限，最多100。
注：默认为0，TemplateIdSet 为空时启用。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
注：默认为0，TemplateIdSet 为空时启用。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
