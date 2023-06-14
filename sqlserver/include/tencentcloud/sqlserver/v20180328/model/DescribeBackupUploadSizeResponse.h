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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPUPLOADSIZERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPUPLOADSIZERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CosUploadBackupFile.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupUploadSize返回参数结构体
                */
                class DescribeBackupUploadSizeResponse : public AbstractModel
                {
                public:
                    DescribeBackupUploadSizeResponse();
                    ~DescribeBackupUploadSizeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已上传的备份的信息
                     * @return CosUploadBackupFileSet 已上传的备份的信息
                     * 
                     */
                    std::vector<CosUploadBackupFile> GetCosUploadBackupFileSet() const;

                    /**
                     * 判断参数 CosUploadBackupFileSet 是否已赋值
                     * @return CosUploadBackupFileSet 是否已赋值
                     * 
                     */
                    bool CosUploadBackupFileSetHasBeenSet() const;

                private:

                    /**
                     * 已上传的备份的信息
                     */
                    std::vector<CosUploadBackupFile> m_cosUploadBackupFileSet;
                    bool m_cosUploadBackupFileSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPUPLOADSIZERESPONSE_H_
