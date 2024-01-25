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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTFILESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ImportRequestInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ImportFiles请求参数结构体
                */
                class ImportFilesRequest : public AbstractModel
                {
                public:
                    ImportFilesRequest();
                    ~ImportFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入相关信息
                     * @return ImportRequestInfo 导入相关信息
                     * 
                     */
                    ImportRequestInfo GetImportRequestInfo() const;

                    /**
                     * 设置导入相关信息
                     * @param _importRequestInfo 导入相关信息
                     * 
                     */
                    void SetImportRequestInfo(const ImportRequestInfo& _importRequestInfo);

                    /**
                     * 判断参数 ImportRequestInfo 是否已赋值
                     * @return ImportRequestInfo 是否已赋值
                     * 
                     */
                    bool ImportRequestInfoHasBeenSet() const;

                private:

                    /**
                     * 导入相关信息
                     */
                    ImportRequestInfo m_importRequestInfo;
                    bool m_importRequestInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTFILESREQUEST_H_
