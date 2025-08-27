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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEEXPORTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteExport请求参数结构体
                */
                class DeleteExportRequest : public AbstractModel
                {
                public:
                    DeleteExportRequest();
                    ~DeleteExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志导出ID
                     * @return ExportId 日志导出ID
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置日志导出ID
                     * @param _exportId 日志导出ID
                     * 
                     */
                    void SetExportId(const std::string& _exportId);

                    /**
                     * 判断参数 ExportId 是否已赋值
                     * @return ExportId 是否已赋值
                     * 
                     */
                    bool ExportIdHasBeenSet() const;

                private:

                    /**
                     * 日志导出ID
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEEXPORTREQUEST_H_
