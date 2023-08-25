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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACOSTASKRESULTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACOSTASKRESULTREQUEST_H_

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
                * ModifyDSPACOSTaskResult请求参数结构体
                */
                class ModifyDSPACOSTaskResultRequest : public AbstractModel
                {
                public:
                    ModifyDSPACOSTaskResultRequest();
                    ~ModifyDSPACOSTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceId 合规组ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceId 合规组ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取文件扫描结果ID
                     * @return FileResultId 文件扫描结果ID
                     * 
                     */
                    int64_t GetFileResultId() const;

                    /**
                     * 设置文件扫描结果ID
                     * @param _fileResultId 文件扫描结果ID
                     * 
                     */
                    void SetFileResultId(const int64_t& _fileResultId);

                    /**
                     * 判断参数 FileResultId 是否已赋值
                     * @return FileResultId 是否已赋值
                     * 
                     */
                    bool FileResultIdHasBeenSet() const;

                    /**
                     * 获取是否设置为非敏感文件
                     * @return IsSetNonSensitiveFile 是否设置为非敏感文件
                     * 
                     */
                    bool GetIsSetNonSensitiveFile() const;

                    /**
                     * 设置是否设置为非敏感文件
                     * @param _isSetNonSensitiveFile 是否设置为非敏感文件
                     * 
                     */
                    void SetIsSetNonSensitiveFile(const bool& _isSetNonSensitiveFile);

                    /**
                     * 判断参数 IsSetNonSensitiveFile 是否已赋值
                     * @return IsSetNonSensitiveFile 是否已赋值
                     * 
                     */
                    bool IsSetNonSensitiveFileHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 文件扫描结果ID
                     */
                    int64_t m_fileResultId;
                    bool m_fileResultIdHasBeenSet;

                    /**
                     * 是否设置为非敏感文件
                     */
                    bool m_isSetNonSensitiveFile;
                    bool m_isSetNonSensitiveFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACOSTASKRESULTREQUEST_H_
