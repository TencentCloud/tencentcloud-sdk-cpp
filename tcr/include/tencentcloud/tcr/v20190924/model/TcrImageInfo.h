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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 镜像信息
                */
                class TcrImageInfo : public AbstractModel
                {
                public:
                    TcrImageInfo();
                    ~TcrImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取哈希值
                     * @return Digest 哈希值
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置哈希值
                     * @param _digest 哈希值
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取镜像体积（单位：字节）
                     * @return Size 镜像体积（单位：字节）
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置镜像体积（单位：字节）
                     * @param _size 镜像体积（单位：字节）
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Tag名称
                     * @return ImageVersion Tag名称
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置Tag名称
                     * @param _imageVersion Tag名称
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取制品类型
                     * @return Kind 制品类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置制品类型
                     * @param _kind 制品类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取KMS 签名信息
                     * @return KmsSignature KMS 签名信息
                     * 
                     */
                    std::string GetKmsSignature() const;

                    /**
                     * 设置KMS 签名信息
                     * @param _kmsSignature KMS 签名信息
                     * 
                     */
                    void SetKmsSignature(const std::string& _kmsSignature);

                    /**
                     * 判断参数 KmsSignature 是否已赋值
                     * @return KmsSignature 是否已赋值
                     * 
                     */
                    bool KmsSignatureHasBeenSet() const;

                private:

                    /**
                     * 哈希值
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * 镜像体积（单位：字节）
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Tag名称
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 制品类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * KMS 签名信息
                     */
                    std::string m_kmsSignature;
                    bool m_kmsSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_
