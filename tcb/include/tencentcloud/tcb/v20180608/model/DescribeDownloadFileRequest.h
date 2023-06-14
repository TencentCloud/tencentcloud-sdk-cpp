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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeDownloadFile请求参数结构体
                */
                class DescribeDownloadFileRequest : public AbstractModel
                {
                public:
                    DescribeDownloadFileRequest();
                    ~DescribeDownloadFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代码uri，格式如：extension://abcdefhhxxx.zip，对应 DescribeExtensionUploadInfo 接口的返回值
                     * @return CodeUri 代码uri，格式如：extension://abcdefhhxxx.zip，对应 DescribeExtensionUploadInfo 接口的返回值
                     * 
                     */
                    std::string GetCodeUri() const;

                    /**
                     * 设置代码uri，格式如：extension://abcdefhhxxx.zip，对应 DescribeExtensionUploadInfo 接口的返回值
                     * @param _codeUri 代码uri，格式如：extension://abcdefhhxxx.zip，对应 DescribeExtensionUploadInfo 接口的返回值
                     * 
                     */
                    void SetCodeUri(const std::string& _codeUri);

                    /**
                     * 判断参数 CodeUri 是否已赋值
                     * @return CodeUri 是否已赋值
                     * 
                     */
                    bool CodeUriHasBeenSet() const;

                private:

                    /**
                     * 代码uri，格式如：extension://abcdefhhxxx.zip，对应 DescribeExtensionUploadInfo 接口的返回值
                     */
                    std::string m_codeUri;
                    bool m_codeUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILEREQUEST_H_
