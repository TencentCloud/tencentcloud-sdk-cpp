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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeReportClassify请求参数结构体
                */
                class DescribeReportClassifyRequest : public AbstractModel
                {
                public:
                    DescribeReportClassifyRequest();
                    ~DescribeReportClassifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * @return ServiceType 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * @param _serviceType 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取文件地址数组
                     * @return FileList 文件地址数组
                     * 
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置文件地址数组
                     * @param _fileList 文件地址数组
                     * 
                     */
                    void SetFileList(const std::vector<std::string>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 文件地址数组
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYREQUEST_H_
