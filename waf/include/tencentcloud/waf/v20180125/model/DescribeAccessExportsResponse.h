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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ExportAccessInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAccessExports返回参数结构体
                */
                class DescribeAccessExportsResponse : public AbstractModel
                {
                public:
                    DescribeAccessExportsResponse();
                    ~DescribeAccessExportsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志导出ID。
                     * @return TotalCount 日志导出ID。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志导出列表
                     * @return Exports 日志导出列表
                     * 
                     */
                    std::vector<ExportAccessInfo> GetExports() const;

                    /**
                     * 判断参数 Exports 是否已赋值
                     * @return Exports 是否已赋值
                     * 
                     */
                    bool ExportsHasBeenSet() const;

                private:

                    /**
                     * 日志导出ID。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志导出列表
                     */
                    std::vector<ExportAccessInfo> m_exports;
                    bool m_exportsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSEXPORTSRESPONSE_H_
