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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportLicenseDetail请求参数结构体
                */
                class ExportLicenseDetailRequest : public AbstractModel
                {
                public:
                    ExportLicenseDetailRequest();
                    ~ExportLicenseDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个条件筛选时 LicenseStatus,DeadlineStatus,ResourceId,Keywords 取交集
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>ResourceId 资源ID</li>
                     * @return Filters 多个条件筛选时 LicenseStatus,DeadlineStatus,ResourceId,Keywords 取交集
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>ResourceId 资源ID</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置多个条件筛选时 LicenseStatus,DeadlineStatus,ResourceId,Keywords 取交集
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>ResourceId 资源ID</li>
                     * @param _filters 多个条件筛选时 LicenseStatus,DeadlineStatus,ResourceId,Keywords 取交集
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>ResourceId 资源ID</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否导出全部授权详情
                     * @return IsHistory 是否导出全部授权详情
                     * 
                     */
                    bool GetIsHistory() const;

                    /**
                     * 设置是否导出全部授权详情
                     * @param _isHistory 是否导出全部授权详情
                     * 
                     */
                    void SetIsHistory(const bool& _isHistory);

                    /**
                     * 判断参数 IsHistory 是否已赋值
                     * @return IsHistory 是否已赋值
                     * 
                     */
                    bool IsHistoryHasBeenSet() const;

                    /**
                     * 获取标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * @return Tags 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * @param _tags 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取导出月份, 该参数仅在IsHistory 时可选.
                     * @return ExportMonth 导出月份, 该参数仅在IsHistory 时可选.
                     * 
                     */
                    std::string GetExportMonth() const;

                    /**
                     * 设置导出月份, 该参数仅在IsHistory 时可选.
                     * @param _exportMonth 导出月份, 该参数仅在IsHistory 时可选.
                     * 
                     */
                    void SetExportMonth(const std::string& _exportMonth);

                    /**
                     * 判断参数 ExportMonth 是否已赋值
                     * @return ExportMonth 是否已赋值
                     * 
                     */
                    bool ExportMonthHasBeenSet() const;

                private:

                    /**
                     * 多个条件筛选时 LicenseStatus,DeadlineStatus,ResourceId,Keywords 取交集
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>ResourceId 资源ID</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否导出全部授权详情
                     */
                    bool m_isHistory;
                    bool m_isHistoryHasBeenSet;

                    /**
                     * 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 导出月份, 该参数仅在IsHistory 时可选.
                     */
                    std::string m_exportMonth;
                    bool m_exportMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTLICENSEDETAILREQUEST_H_
