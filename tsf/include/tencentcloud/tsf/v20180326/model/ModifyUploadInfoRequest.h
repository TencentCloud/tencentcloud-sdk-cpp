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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYUPLOADINFOREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYUPLOADINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyUploadInfo请求参数结构体
                */
                class ModifyUploadInfoRequest : public AbstractModel
                {
                public:
                    ModifyUploadInfoRequest();
                    ~ModifyUploadInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取调用DescribeUploadInfo接口时返回的软件包ID
                     * @return PkgId 调用DescribeUploadInfo接口时返回的软件包ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置调用DescribeUploadInfo接口时返回的软件包ID
                     * @param _pkgId 调用DescribeUploadInfo接口时返回的软件包ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取COS返回上传结果（默认为0：成功，其他值表示失败）
                     * @return Result COS返回上传结果（默认为0：成功，其他值表示失败）
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置COS返回上传结果（默认为0：成功，其他值表示失败）
                     * @param _result COS返回上传结果（默认为0：成功，其他值表示失败）
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取程序包MD5
                     * @return Md5 程序包MD5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置程序包MD5
                     * @param _md5 程序包MD5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取程序包大小（单位字节）
                     * @return Size 程序包大小（单位字节）
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置程序包大小（单位字节）
                     * @param _size 程序包大小（单位字节）
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取程序包仓库类型
                     * @return RepositoryType 程序包仓库类型
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置程序包仓库类型
                     * @param _repositoryType 程序包仓库类型
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取程序包仓库id
                     * @return RepositoryId 程序包仓库id
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置程序包仓库id
                     * @param _repositoryId 程序包仓库id
                     * 
                     */
                    void SetRepositoryId(const std::string& _repositoryId);

                    /**
                     * 判断参数 RepositoryId 是否已赋值
                     * @return RepositoryId 是否已赋值
                     * 
                     */
                    bool RepositoryIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 调用DescribeUploadInfo接口时返回的软件包ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * COS返回上传结果（默认为0：成功，其他值表示失败）
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 程序包MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 程序包大小（单位字节）
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 程序包仓库类型
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 程序包仓库id
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYUPLOADINFOREQUEST_H_
