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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PKGINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PKGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/PkgBind.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 包信息
                */
                class PkgInfo : public AbstractModel
                {
                public:
                    PkgInfo();
                    ~PkgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取程序包ID
                     * @return PkgId 程序包ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
                     * @param _pkgId 程序包ID
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
                     * 获取程序包名
                     * @return PkgName 程序包名
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置程序包名
                     * @param _pkgName 程序包名
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取程序包类型
                     * @return PkgType 程序包类型
                     * 
                     */
                    std::string GetPkgType() const;

                    /**
                     * 设置程序包类型
                     * @param _pkgType 程序包类型
                     * 
                     */
                    void SetPkgType(const std::string& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取程序包版本
                     * @return PkgVersion 程序包版本
                     * 
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置程序包版本
                     * @param _pkgVersion 程序包版本
                     * 
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     * 
                     */
                    bool PkgVersionHasBeenSet() const;

                    /**
                     * 获取程序包描述
                     * @return PkgDesc 程序包描述
                     * 
                     */
                    std::string GetPkgDesc() const;

                    /**
                     * 设置程序包描述
                     * @param _pkgDesc 程序包描述
                     * 
                     */
                    void SetPkgDesc(const std::string& _pkgDesc);

                    /**
                     * 判断参数 PkgDesc 是否已赋值
                     * @return PkgDesc 是否已赋值
                     * 
                     */
                    bool PkgDescHasBeenSet() const;

                    /**
                     * 获取上传时间
                     * @return UploadTime 上传时间
                     * 
                     */
                    std::string GetUploadTime() const;

                    /**
                     * 设置上传时间
                     * @param _uploadTime 上传时间
                     * 
                     */
                    void SetUploadTime(const std::string& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     * 
                     */
                    bool UploadTimeHasBeenSet() const;

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
                     * 获取程序包状态
                     * @return PkgPubStatus 程序包状态
                     * 
                     */
                    int64_t GetPkgPubStatus() const;

                    /**
                     * 设置程序包状态
                     * @param _pkgPubStatus 程序包状态
                     * 
                     */
                    void SetPkgPubStatus(const int64_t& _pkgPubStatus);

                    /**
                     * 判断参数 PkgPubStatus 是否已赋值
                     * @return PkgPubStatus 是否已赋值
                     * 
                     */
                    bool PkgPubStatusHasBeenSet() const;

                    /**
                     * 获取程序包关联关系
                     * @return PkgBindInfo 程序包关联关系
                     * 
                     */
                    std::vector<PkgBind> GetPkgBindInfo() const;

                    /**
                     * 设置程序包关联关系
                     * @param _pkgBindInfo 程序包关联关系
                     * 
                     */
                    void SetPkgBindInfo(const std::vector<PkgBind>& _pkgBindInfo);

                    /**
                     * 判断参数 PkgBindInfo 是否已赋值
                     * @return PkgBindInfo 是否已赋值
                     * 
                     */
                    bool PkgBindInfoHasBeenSet() const;

                private:

                    /**
                     * 程序包ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 程序包名
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 程序包类型
                     */
                    std::string m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 程序包版本
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 程序包描述
                     */
                    std::string m_pkgDesc;
                    bool m_pkgDescHasBeenSet;

                    /**
                     * 上传时间
                     */
                    std::string m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * 程序包MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 程序包状态
                     */
                    int64_t m_pkgPubStatus;
                    bool m_pkgPubStatusHasBeenSet;

                    /**
                     * 程序包关联关系
                     */
                    std::vector<PkgBind> m_pkgBindInfo;
                    bool m_pkgBindInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PKGINFO_H_
