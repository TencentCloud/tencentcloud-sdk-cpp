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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeBackUpJobDetail返回参数结构体
                */
                class DescribeBackUpJobDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackUpJobDetailResponse();
                    ~DescribeBackUpJobDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份表详情
                     * @return TableContents 备份表详情
                     * 
                     */
                    std::vector<BackupTableContent> GetTableContents() const;

                    /**
                     * 判断参数 TableContents 是否已赋值
                     * @return TableContents 是否已赋值
                     * 
                     */
                    bool TableContentsHasBeenSet() const;

                private:

                    /**
                     * 备份表详情
                     */
                    std::vector<BackupTableContent> m_tableContents;
                    bool m_tableContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_
