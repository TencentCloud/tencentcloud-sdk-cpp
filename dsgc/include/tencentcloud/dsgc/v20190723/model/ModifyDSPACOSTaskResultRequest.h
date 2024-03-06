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

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取桶名
                     * @return BucketName 桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名
                     * @param _bucketName 桶名
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

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

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPACOSTASKRESULTREQUEST_H_
