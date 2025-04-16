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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * CreateDLPFileDetectionTask请求参数结构体
                */
                class CreateDLPFileDetectionTaskRequest : public AbstractModel
                {
                public:
                    CreateDLPFileDetectionTaskRequest();
                    ~CreateDLPFileDetectionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件下载链接，要求公网可访问，GET方式访问后为文件
                     * @return Url 文件下载链接，要求公网可访问，GET方式访问后为文件
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件下载链接，要求公网可访问，GET方式访问后为文件
                     * @param _url 文件下载链接，要求公网可访问，GET方式访问后为文件
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取文件名，带后缀
                     * @return FileName 文件名，带后缀
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，带后缀
                     * @param _fileName 文件名，带后缀
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
                     * 获取 文件md5，传入相同md5会直接使用之前缓存的结果。

> 请注意：不同文件使用相同md5送检，会命中缓存得到旧的检测结果
                     * @return FileMd5  文件md5，传入相同md5会直接使用之前缓存的结果。

> 请注意：不同文件使用相同md5送检，会命中缓存得到旧的检测结果
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置 文件md5，传入相同md5会直接使用之前缓存的结果。

> 请注意：不同文件使用相同md5送检，会命中缓存得到旧的检测结果
                     * @param _fileMd5  文件md5，传入相同md5会直接使用之前缓存的结果。

> 请注意：不同文件使用相同md5送检，会命中缓存得到旧的检测结果
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取回调地址，暂时未使用
                     * @return CallBackUrl 回调地址，暂时未使用
                     * 
                     */
                    std::string GetCallBackUrl() const;

                    /**
                     * 设置回调地址，暂时未使用
                     * @param _callBackUrl 回调地址，暂时未使用
                     * 
                     */
                    void SetCallBackUrl(const std::string& _callBackUrl);

                    /**
                     * 判断参数 CallBackUrl 是否已赋值
                     * @return CallBackUrl 是否已赋值
                     * 
                     */
                    bool CallBackUrlHasBeenSet() const;

                private:

                    /**
                     * 文件下载链接，要求公网可访问，GET方式访问后为文件
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文件名，带后缀
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     *  文件md5，传入相同md5会直接使用之前缓存的结果。

> 请注意：不同文件使用相同md5送检，会命中缓存得到旧的检测结果
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 回调地址，暂时未使用
                     */
                    std::string m_callBackUrl;
                    bool m_callBackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKREQUEST_H_
