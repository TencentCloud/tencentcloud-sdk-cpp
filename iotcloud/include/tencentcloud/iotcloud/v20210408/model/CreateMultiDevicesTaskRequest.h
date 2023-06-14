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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEMULTIDEVICESTASKREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEMULTIDEVICESTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateMultiDevicesTask请求参数结构体
                */
                class CreateMultiDevicesTaskRequest : public AbstractModel
                {
                public:
                    CreateMultiDevicesTaskRequest();
                    ~CreateMultiDevicesTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取参数类型 cosfile-文件上传 random-随机创建
                     * @return ParametersType 参数类型 cosfile-文件上传 random-随机创建
                     * 
                     */
                    std::string GetParametersType() const;

                    /**
                     * 设置参数类型 cosfile-文件上传 random-随机创建
                     * @param _parametersType 参数类型 cosfile-文件上传 random-随机创建
                     * 
                     */
                    void SetParametersType(const std::string& _parametersType);

                    /**
                     * 判断参数 ParametersType 是否已赋值
                     * @return ParametersType 是否已赋值
                     * 
                     */
                    bool ParametersTypeHasBeenSet() const;

                    /**
                     * 获取文件上传类型时文件名
                     * @return FileName 文件上传类型时文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件上传类型时文件名
                     * @param _fileName 文件上传类型时文件名
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
                     * 获取文件上传类型时文件大小
                     * @return FileSize 文件上传类型时文件大小
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件上传类型时文件大小
                     * @param _fileSize 文件上传类型时文件大小
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取随机创建时设备创建个数
                     * @return BatchCount 随机创建时设备创建个数
                     * 
                     */
                    uint64_t GetBatchCount() const;

                    /**
                     * 设置随机创建时设备创建个数
                     * @param _batchCount 随机创建时设备创建个数
                     * 
                     */
                    void SetBatchCount(const uint64_t& _batchCount);

                    /**
                     * 判断参数 BatchCount 是否已赋值
                     * @return BatchCount 是否已赋值
                     * 
                     */
                    bool BatchCountHasBeenSet() const;

                    /**
                     * 获取文件上传类型时文件md5值
                     * @return Hash 文件上传类型时文件md5值
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 设置文件上传类型时文件md5值
                     * @param _hash 文件上传类型时文件md5值
                     * 
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 参数类型 cosfile-文件上传 random-随机创建
                     */
                    std::string m_parametersType;
                    bool m_parametersTypeHasBeenSet;

                    /**
                     * 文件上传类型时文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件上传类型时文件大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 随机创建时设备创建个数
                     */
                    uint64_t m_batchCount;
                    bool m_batchCountHasBeenSet;

                    /**
                     * 文件上传类型时文件md5值
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEMULTIDEVICESTASKREQUEST_H_
