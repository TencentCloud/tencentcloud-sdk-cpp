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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ImageOsList.h>
#include <tencentcloud/cvm/v20170312/model/OsVersion.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImportImageOs返回参数结构体
                */
                class DescribeImportImageOsResponse : public AbstractModel
                {
                public:
                    DescribeImportImageOsResponse();
                    ~DescribeImportImageOsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的导入镜像的操作系统类型。
                     * @return ImportImageOsListSupported 支持的导入镜像的操作系统类型。
                     * 
                     */
                    ImageOsList GetImportImageOsListSupported() const;

                    /**
                     * 判断参数 ImportImageOsListSupported 是否已赋值
                     * @return ImportImageOsListSupported 是否已赋值
                     * 
                     */
                    bool ImportImageOsListSupportedHasBeenSet() const;

                    /**
                     * 获取支持的导入镜像的操作系统版本。
                     * @return ImportImageOsVersionSet 支持的导入镜像的操作系统版本。
                     * 
                     */
                    std::vector<OsVersion> GetImportImageOsVersionSet() const;

                    /**
                     * 判断参数 ImportImageOsVersionSet 是否已赋值
                     * @return ImportImageOsVersionSet 是否已赋值
                     * 
                     */
                    bool ImportImageOsVersionSetHasBeenSet() const;

                private:

                    /**
                     * 支持的导入镜像的操作系统类型。
                     */
                    ImageOsList m_importImageOsListSupported;
                    bool m_importImageOsListSupportedHasBeenSet;

                    /**
                     * 支持的导入镜像的操作系统版本。
                     */
                    std::vector<OsVersion> m_importImageOsVersionSet;
                    bool m_importImageOsVersionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_
