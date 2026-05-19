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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UploadSkillSecScan请求参数结构体
                */
                class UploadSkillSecScanRequest : public AbstractModel
                {
                public:
                    UploadSkillSecScanRequest();
                    ~UploadSkillSecScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceId <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceId <p>服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>zip压缩包base64编码后的数据</p>
                     * @return FileData <p>zip压缩包base64编码后的数据</p>
                     * 
                     */
                    std::string GetFileData() const;

                    /**
                     * 设置<p>zip压缩包base64编码后的数据</p>
                     * @param _fileData <p>zip压缩包base64编码后的数据</p>
                     * 
                     */
                    void SetFileData(const std::string& _fileData);

                    /**
                     * 判断参数 FileData 是否已赋值
                     * @return FileData 是否已赋值
                     * 
                     */
                    bool FileDataHasBeenSet() const;

                    /**
                     * 获取<p>skills文件压缩之后的文件名，.zip结尾</p>
                     * @return FileName <p>skills文件压缩之后的文件名，.zip结尾</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>skills文件压缩之后的文件名，.zip结尾</p>
                     * @param _fileName <p>skills文件压缩之后的文件名，.zip结尾</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>zip压缩包base64编码后的数据</p>
                     */
                    std::string m_fileData;
                    bool m_fileDataHasBeenSet;

                    /**
                     * <p>skills文件压缩之后的文件名，.zip结尾</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_
