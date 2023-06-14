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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_

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
                * DeleteLogExport请求参数结构体
                */
                class DeleteLogExportRequest : public AbstractModel
                {
                public:
                    DeleteLogExportRequest();
                    ~DeleteLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ID 项目ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID
                     * @param _iD 项目ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取日志导出ID
                     * @return ExportID 日志导出ID
                     * 
                     */
                    std::string GetExportID() const;

                    /**
                     * 设置日志导出ID
                     * @param _exportID 日志导出ID
                     * 
                     */
                    void SetExportID(const std::string& _exportID);

                    /**
                     * 判断参数 ExportID 是否已赋值
                     * @return ExportID 是否已赋值
                     * 
                     */
                    bool ExportIDHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_
