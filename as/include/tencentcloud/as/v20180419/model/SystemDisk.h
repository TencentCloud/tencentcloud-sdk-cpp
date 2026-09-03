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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 启动配置的系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>默认取值：CLOUD_PREMIUM。</li>
                     * @return DiskType <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>默认取值：CLOUD_PREMIUM。</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>默认取值：CLOUD_PREMIUM。</li>
                     * @param _diskType <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>默认取值：CLOUD_PREMIUM。</li>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>系统盘大小，单位：GB。默认值为 50</p>
                     * @return DiskSize <p>系统盘大小，单位：GB。默认值为 50</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>系统盘大小，单位：GB。默认值为 50</p>
                     * @param _diskSize <p>系统盘大小，单位：GB。默认值为 50</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否加密系统盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
                     * @return Encrypt <p>是否加密系统盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>是否加密系统盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
                     * @param _encrypt <p>是否加密系统盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取<p>系统盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * @return KmsKeyId <p>系统盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>系统盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * @param _kmsKeyId <p>系统盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>默认取值：CLOUD_PREMIUM。</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>系统盘大小，单位：GB。默认值为 50</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>是否加密系统盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>系统盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
