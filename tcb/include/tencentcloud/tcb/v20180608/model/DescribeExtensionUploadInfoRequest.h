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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTENSIONUPLOADINFOREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTENSIONUPLOADINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ExtensionFile.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeExtensionUploadInfo请求参数结构体
                */
                class DescribeExtensionUploadInfoRequest : public AbstractModel
                {
                public:
                    DescribeExtensionUploadInfoRequest();
                    ~DescribeExtensionUploadInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待上传的文件
                     * @return ExtensionFiles 待上传的文件
                     * 
                     */
                    std::vector<ExtensionFile> GetExtensionFiles() const;

                    /**
                     * 设置待上传的文件
                     * @param _extensionFiles 待上传的文件
                     * 
                     */
                    void SetExtensionFiles(const std::vector<ExtensionFile>& _extensionFiles);

                    /**
                     * 判断参数 ExtensionFiles 是否已赋值
                     * @return ExtensionFiles 是否已赋值
                     * 
                     */
                    bool ExtensionFilesHasBeenSet() const;

                private:

                    /**
                     * 待上传的文件
                     */
                    std::vector<ExtensionFile> m_extensionFiles;
                    bool m_extensionFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEEXTENSIONUPLOADINFOREQUEST_H_
