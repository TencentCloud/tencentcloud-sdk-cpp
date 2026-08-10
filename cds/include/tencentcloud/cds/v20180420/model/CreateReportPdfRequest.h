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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_CREATEREPORTPDFREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_CREATEREPORTPDFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * CreateReportPdf请求参数结构体
                */
                class CreateReportPdfRequest : public AbstractModel
                {
                public:
                    CreateReportPdfRequest();
                    ~CreateReportPdfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取报表 Id
                     * @return Id 报表 Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置报表 Id
                     * @param _id 报表 Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 报表 Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_CREATEREPORTPDFREQUEST_H_
