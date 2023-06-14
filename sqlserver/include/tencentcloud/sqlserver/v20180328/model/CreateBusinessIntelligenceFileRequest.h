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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateBusinessIntelligenceFile请求参数结构体
                */
                class CreateBusinessIntelligenceFileRequest : public AbstractModel
                {
                public:
                    CreateBusinessIntelligenceFileRequest();
                    ~CreateBusinessIntelligenceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取COS_URL
                     * @return FileURL COS_URL
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置COS_URL
                     * @param _fileURL COS_URL
                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                    /**
                     * 获取文件类型 FLAT-作为数据源的平面文件， SSIS-ssis项目包
                     * @return FileType 文件类型 FLAT-作为数据源的平面文件， SSIS-ssis项目包
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型 FLAT-作为数据源的平面文件， SSIS-ssis项目包
                     * @param _fileType 文件类型 FLAT-作为数据源的平面文件， SSIS-ssis项目包
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * COS_URL
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                    /**
                     * 文件类型 FLAT-作为数据源的平面文件， SSIS-ssis项目包
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILEREQUEST_H_
