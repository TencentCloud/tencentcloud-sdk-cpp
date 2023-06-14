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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeFileUrls请求参数结构体
                */
                class DescribeFileUrlsRequest : public AbstractModel
                {
                public:
                    DescribeFileUrlsRequest();
                    ~DescribeFileUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取业务编号数组，如模板编号、文档编号、印章编号、流程编号、目录编号
                     * @return BusinessIds 业务编号数组，如模板编号、文档编号、印章编号、流程编号、目录编号
                     * 
                     */
                    std::vector<std::string> GetBusinessIds() const;

                    /**
                     * 设置业务编号数组，如模板编号、文档编号、印章编号、流程编号、目录编号
                     * @param _businessIds 业务编号数组，如模板编号、文档编号、印章编号、流程编号、目录编号
                     * 
                     */
                    void SetBusinessIds(const std::vector<std::string>& _businessIds);

                    /**
                     * 判断参数 BusinessIds 是否已赋值
                     * @return BusinessIds 是否已赋值
                     * 
                     */
                    bool BusinessIdsHasBeenSet() const;

                    /**
                     * 获取业务类型：
1. TEMPLATE - 模板
2. SEAL - 印章
3. FLOW - 流程
4.CATALOG - 目录
                     * @return BusinessType 业务类型：
1. TEMPLATE - 模板
2. SEAL - 印章
3. FLOW - 流程
4.CATALOG - 目录
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置业务类型：
1. TEMPLATE - 模板
2. SEAL - 印章
3. FLOW - 流程
4.CATALOG - 目录
                     * @param _businessType 业务类型：
1. TEMPLATE - 模板
2. SEAL - 印章
3. FLOW - 流程
4.CATALOG - 目录
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取下载后的文件命名，只有FileType为“ZIP”时生效
                     * @return FileName 下载后的文件命名，只有FileType为“ZIP”时生效
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置下载后的文件命名，只有FileType为“ZIP”时生效
                     * @param _fileName 下载后的文件命名，只有FileType为“ZIP”时生效
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
                     * 获取单个业务ID多个资源情况下，指定资源起始偏移量
                     * @return ResourceOffset 单个业务ID多个资源情况下，指定资源起始偏移量
                     * 
                     */
                    int64_t GetResourceOffset() const;

                    /**
                     * 设置单个业务ID多个资源情况下，指定资源起始偏移量
                     * @param _resourceOffset 单个业务ID多个资源情况下，指定资源起始偏移量
                     * 
                     */
                    void SetResourceOffset(const int64_t& _resourceOffset);

                    /**
                     * 判断参数 ResourceOffset 是否已赋值
                     * @return ResourceOffset 是否已赋值
                     * 
                     */
                    bool ResourceOffsetHasBeenSet() const;

                    /**
                     * 获取单个业务ID多个资源情况下，指定资源数量
                     * @return ResourceLimit 单个业务ID多个资源情况下，指定资源数量
                     * 
                     */
                    int64_t GetResourceLimit() const;

                    /**
                     * 设置单个业务ID多个资源情况下，指定资源数量
                     * @param _resourceLimit 单个业务ID多个资源情况下，指定资源数量
                     * 
                     */
                    void SetResourceLimit(const int64_t& _resourceLimit);

                    /**
                     * 判断参数 ResourceLimit 是否已赋值
                     * @return ResourceLimit 是否已赋值
                     * 
                     */
                    bool ResourceLimitHasBeenSet() const;

                    /**
                     * 获取文件类型，支持"JPG", "PDF","ZIP"等，默认为上传的文件类型
                     * @return FileType 文件类型，支持"JPG", "PDF","ZIP"等，默认为上传的文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，支持"JPG", "PDF","ZIP"等，默认为上传的文件类型
                     * @param _fileType 文件类型，支持"JPG", "PDF","ZIP"等，默认为上传的文件类型
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 业务编号数组，如模板编号、文档编号、印章编号、流程编号、目录编号
                     */
                    std::vector<std::string> m_businessIds;
                    bool m_businessIdsHasBeenSet;

                    /**
                     * 业务类型：
1. TEMPLATE - 模板
2. SEAL - 印章
3. FLOW - 流程
4.CATALOG - 目录
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 下载后的文件命名，只有FileType为“ZIP”时生效
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 单个业务ID多个资源情况下，指定资源起始偏移量
                     */
                    int64_t m_resourceOffset;
                    bool m_resourceOffsetHasBeenSet;

                    /**
                     * 单个业务ID多个资源情况下，指定资源数量
                     */
                    int64_t m_resourceLimit;
                    bool m_resourceLimitHasBeenSet;

                    /**
                     * 文件类型，支持"JPG", "PDF","ZIP"等，默认为上传的文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSREQUEST_H_
