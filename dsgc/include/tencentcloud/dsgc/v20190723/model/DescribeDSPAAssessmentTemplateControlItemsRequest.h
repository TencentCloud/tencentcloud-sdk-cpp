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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTTEMPLATECONTROLITEMSREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTTEMPLATECONTROLITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaAssessmentFilter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentTemplateControlItems请求参数结构体
                */
                class DescribeDSPAAssessmentTemplateControlItemsRequest : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentTemplateControlItemsRequest();
                    ~DescribeDSPAAssessmentTemplateControlItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id。格式“dspa-xxxxxxxx”
                     * @return DspaId DSPA实例Id。格式“dspa-xxxxxxxx”
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id。格式“dspa-xxxxxxxx”
                     * @param _dspaId DSPA实例Id。格式“dspa-xxxxxxxx”
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取评估模板Id。格式“template-xxxxxxxx”
                     * @return TemplateId 评估模板Id。格式“template-xxxxxxxx”
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置评估模板Id。格式“template-xxxxxxxx”
                     * @param _templateId 评估模板Id。格式“template-xxxxxxxx”
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取偏移量。默认为0
                     * @return Offset 偏移量。默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认为0
                     * @param _offset 偏移量。默认为0
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
                     * 获取结果集个数限制。默认为20，最大值为100
                     * @return Limit 结果集个数限制。默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置结果集个数限制。默认为20，最大值为100
                     * @param _limit 结果集个数限制。默认为20，最大值为100
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
                     * 获取过滤项。
支持模糊搜索：ItemId，ItemName
支持过滤：
Source：评估项来源，system / user
ItemType：评估项类型，questionnaire / auto
ItemSubType：评估项子类型
Status：评估项启用状态，draft / launched
                     * @return Filters 过滤项。
支持模糊搜索：ItemId，ItemName
支持过滤：
Source：评估项来源，system / user
ItemType：评估项类型，questionnaire / auto
ItemSubType：评估项子类型
Status：评估项启用状态，draft / launched
                     * 
                     */
                    std::vector<DspaAssessmentFilter> GetFilters() const;

                    /**
                     * 设置过滤项。
支持模糊搜索：ItemId，ItemName
支持过滤：
Source：评估项来源，system / user
ItemType：评估项类型，questionnaire / auto
ItemSubType：评估项子类型
Status：评估项启用状态，draft / launched
                     * @param _filters 过滤项。
支持模糊搜索：ItemId，ItemName
支持过滤：
Source：评估项来源，system / user
ItemType：评估项类型，questionnaire / auto
ItemSubType：评估项子类型
Status：评估项启用状态，draft / launched
                     * 
                     */
                    void SetFilters(const std::vector<DspaAssessmentFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id。格式“dspa-xxxxxxxx”
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 评估模板Id。格式“template-xxxxxxxx”
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 偏移量。默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 结果集个数限制。默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤项。
支持模糊搜索：ItemId，ItemName
支持过滤：
Source：评估项来源，system / user
ItemType：评估项类型，questionnaire / auto
ItemSubType：评估项子类型
Status：评估项启用状态，draft / launched
                     */
                    std::vector<DspaAssessmentFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTTEMPLATECONTROLITEMSREQUEST_H_
