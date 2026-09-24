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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudFilter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistryRecordVersionList请求参数结构体
                */
                class DescribeRegistryRecordVersionListRequest : public AbstractModel
                {
                public:
                    DescribeRegistryRecordVersionListRequest();
                    ~DescribeRegistryRecordVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>父 Registry ID。</p>
                     * @return RegistryId <p>父 Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>父 Registry ID。</p>
                     * @param _registryId <p>父 Registry ID。</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Record ID。</p>
                     * @return RecordId <p>Record ID。</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID。</p>
                     * @param _recordId <p>Record ID。</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>分页起始偏移，默认 0。</p>
                     * @return Offset <p>分页起始偏移，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始偏移，默认 0。</p>
                     * @param _offset <p>分页起始偏移，默认 0。</p>
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
                     * 获取<p>分页条数，默认 20，最大 100。</p>
                     * @return Limit <p>分页条数，默认 20，最大 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页条数，默认 20，最大 100。</p>
                     * @param _limit <p>分页条数，默认 20，最大 100。</p>
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
                     * 获取<p>过滤条件。支持：status（按 Version 状态：PREPARING/PENDING_APPROVAL/APPROVED/REJECTED/CANCELED，多值 OR）、source_type（按内容来源：MANUAL/URL_IMPORT/TAR_PACKAGE，多值 OR）。</p>
                     * @return Filters <p>过滤条件。支持：status（按 Version 状态：PREPARING/PENDING_APPROVAL/APPROVED/REJECTED/CANCELED，多值 OR）、source_type（按内容来源：MANUAL/URL_IMPORT/TAR_PACKAGE，多值 OR）。</p>
                     * 
                     */
                    std::vector<CloudFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持：status（按 Version 状态：PREPARING/PENDING_APPROVAL/APPROVED/REJECTED/CANCELED，多值 OR）、source_type（按内容来源：MANUAL/URL_IMPORT/TAR_PACKAGE，多值 OR）。</p>
                     * @param _filters <p>过滤条件。支持：status（按 Version 状态：PREPARING/PENDING_APPROVAL/APPROVED/REJECTED/CANCELED，多值 OR）、source_type（按内容来源：MANUAL/URL_IMPORT/TAR_PACKAGE，多值 OR）。</p>
                     * 
                     */
                    void SetFilters(const std::vector<CloudFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>父 Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record ID。</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>分页起始偏移，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页条数，默认 20，最大 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件。支持：status（按 Version 状态：PREPARING/PENDING_APPROVAL/APPROVED/REJECTED/CANCELED，多值 OR）、source_type（按内容来源：MANUAL/URL_IMPORT/TAR_PACKAGE，多值 OR）。</p>
                     */
                    std::vector<CloudFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTREQUEST_H_
