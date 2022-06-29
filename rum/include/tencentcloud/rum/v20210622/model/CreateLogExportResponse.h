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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateLogExport返回参数结构体
                */
                class CreateLogExportResponse : public AbstractModel
                {
                public:
                    CreateLogExportResponse();
                    ~CreateLogExportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志导出ID
                     * @return ExportID 日志导出ID
                     */
                    std::string GetExportID() const;

                    /**
                     * 判断参数 ExportID 是否已赋值
                     * @return ExportID 是否已赋值
                     */
                    bool ExportIDHasBeenSet() const;

                private:

                    /**
                     * 日志导出ID
                     */
                    std::string m_exportID;
                    bool m_exportIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTRESPONSE_H_
