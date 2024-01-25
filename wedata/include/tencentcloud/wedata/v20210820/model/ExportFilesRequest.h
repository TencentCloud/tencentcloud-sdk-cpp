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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExportRequestInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExportFiles请求参数结构体
                */
                class ExportFilesRequest : public AbstractModel
                {
                public:
                    ExportFilesRequest();
                    ~ExportFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导出相关信息
                     * @return ExportRequestInfo 导出相关信息
                     * 
                     */
                    ExportRequestInfo GetExportRequestInfo() const;

                    /**
                     * 设置导出相关信息
                     * @param _exportRequestInfo 导出相关信息
                     * 
                     */
                    void SetExportRequestInfo(const ExportRequestInfo& _exportRequestInfo);

                    /**
                     * 判断参数 ExportRequestInfo 是否已赋值
                     * @return ExportRequestInfo 是否已赋值
                     * 
                     */
                    bool ExportRequestInfoHasBeenSet() const;

                private:

                    /**
                     * 导出相关信息
                     */
                    ExportRequestInfo m_exportRequestInfo;
                    bool m_exportRequestInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESREQUEST_H_
