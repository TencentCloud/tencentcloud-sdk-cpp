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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETDETAILDATAEXPORTRESULTRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETDETAILDATAEXPORTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeAssetDetailDataExportResult返回参数结构体
                */
                class DescribeAssetDetailDataExportResultResponse : public AbstractModel
                {
                public:
                    DescribeAssetDetailDataExportResultResponse();
                    ~DescribeAssetDetailDataExportResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导出结果
                     * @return ExportResult 导出结果
                     * 
                     */
                    std::string GetExportResult() const;

                    /**
                     * 判断参数 ExportResult 是否已赋值
                     * @return ExportResult 是否已赋值
                     * 
                     */
                    bool ExportResultHasBeenSet() const;

                    /**
                     * 获取导出文件地址
                     * @return ExportFileUrl 导出文件地址
                     * 
                     */
                    std::string GetExportFileUrl() const;

                    /**
                     * 判断参数 ExportFileUrl 是否已赋值
                     * @return ExportFileUrl 是否已赋值
                     * 
                     */
                    bool ExportFileUrlHasBeenSet() const;

                private:

                    /**
                     * 导出结果
                     */
                    std::string m_exportResult;
                    bool m_exportResultHasBeenSet;

                    /**
                     * 导出文件地址
                     */
                    std::string m_exportFileUrl;
                    bool m_exportFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETDETAILDATAEXPORTRESULTRESPONSE_H_
