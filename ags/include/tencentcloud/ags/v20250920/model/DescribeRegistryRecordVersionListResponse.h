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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudRecordVersion.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistryRecordVersionList返回参数结构体
                */
                class DescribeRegistryRecordVersionListResponse : public AbstractModel
                {
                public:
                    DescribeRegistryRecordVersionListResponse();
                    ~DescribeRegistryRecordVersionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>筛选和分页后的版本数组。普通模式指定 RecordId 时按 Revision 降序，普通跨 Record 查询与市场查询均按 CreateTime 降序、VersionId 升序。</p><p>市场模式只返回公开字段。支持此版本契约的后端返回 SupportedHarnessVersions 和 Metadata 数组，未设置时返回空数组。Metadata 的每项由字符串 Name 和 Value 组成。无匹配时返回空数组。</p>
                     * @return VersionSet <p>筛选和分页后的版本数组。普通模式指定 RecordId 时按 Revision 降序，普通跨 Record 查询与市场查询均按 CreateTime 降序、VersionId 升序。</p><p>市场模式只返回公开字段。支持此版本契约的后端返回 SupportedHarnessVersions 和 Metadata 数组，未设置时返回空数组。Metadata 的每项由字符串 Name 和 Value 组成。无匹配时返回空数组。</p>
                     * 
                     */
                    std::vector<CloudRecordVersion> GetVersionSet() const;

                    /**
                     * 判断参数 VersionSet 是否已赋值
                     * @return VersionSet 是否已赋值
                     * 
                     */
                    bool VersionSetHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的总数。</p>
                     * @return TotalCount <p>符合条件的总数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>筛选和分页后的版本数组。普通模式指定 RecordId 时按 Revision 降序，普通跨 Record 查询与市场查询均按 CreateTime 降序、VersionId 升序。</p><p>市场模式只返回公开字段。支持此版本契约的后端返回 SupportedHarnessVersions 和 Metadata 数组，未设置时返回空数组。Metadata 的每项由字符串 Name 和 Value 组成。无匹配时返回空数组。</p>
                     */
                    std::vector<CloudRecordVersion> m_versionSet;
                    bool m_versionSetHasBeenSet;

                    /**
                     * <p>符合条件的总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDVERSIONLISTRESPONSE_H_
