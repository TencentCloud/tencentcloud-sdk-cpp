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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidAppCosInfo.h>
#include <tencentcloud/gs/v20191118/model/FileCosInfo.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateCosCredential请求参数结构体
                */
                class CreateCosCredentialRequest : public AbstractModel
                {
                public:
                    CreateCosCredentialRequest();
                    ~CreateCosCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cos 密钥类型，取值： Mobile 云手游、PC 云端游、AndroidApp 云手机应用管理、AndroidAppFile 云手机文件管理、AndroidAppBackup 云手机备份还原
                     * @return CosType Cos 密钥类型，取值： Mobile 云手游、PC 云端游、AndroidApp 云手机应用管理、AndroidAppFile 云手机文件管理、AndroidAppBackup 云手机备份还原
                     * 
                     */
                    std::string GetCosType() const;

                    /**
                     * 设置Cos 密钥类型，取值： Mobile 云手游、PC 云端游、AndroidApp 云手机应用管理、AndroidAppFile 云手机文件管理、AndroidAppBackup 云手机备份还原
                     * @param _cosType Cos 密钥类型，取值： Mobile 云手游、PC 云端游、AndroidApp 云手机应用管理、AndroidAppFile 云手机文件管理、AndroidAppBackup 云手机备份还原
                     * 
                     */
                    void SetCosType(const std::string& _cosType);

                    /**
                     * 判断参数 CosType 是否已赋值
                     * @return CosType 是否已赋值
                     * 
                     */
                    bool CosTypeHasBeenSet() const;

                    /**
                     * 获取云手机应用管理 Cos 数据
                     * @return AndroidAppCosInfo 云手机应用管理 Cos 数据
                     * 
                     */
                    AndroidAppCosInfo GetAndroidAppCosInfo() const;

                    /**
                     * 设置云手机应用管理 Cos 数据
                     * @param _androidAppCosInfo 云手机应用管理 Cos 数据
                     * 
                     */
                    void SetAndroidAppCosInfo(const AndroidAppCosInfo& _androidAppCosInfo);

                    /**
                     * 判断参数 AndroidAppCosInfo 是否已赋值
                     * @return AndroidAppCosInfo 是否已赋值
                     * 
                     */
                    bool AndroidAppCosInfoHasBeenSet() const;

                    /**
                     * 获取云手机文件管理 Cos 数据
                     * @return AndroidAppFileCosInfo 云手机文件管理 Cos 数据
                     * 
                     */
                    FileCosInfo GetAndroidAppFileCosInfo() const;

                    /**
                     * 设置云手机文件管理 Cos 数据
                     * @param _androidAppFileCosInfo 云手机文件管理 Cos 数据
                     * 
                     */
                    void SetAndroidAppFileCosInfo(const FileCosInfo& _androidAppFileCosInfo);

                    /**
                     * 判断参数 AndroidAppFileCosInfo 是否已赋值
                     * @return AndroidAppFileCosInfo 是否已赋值
                     * 
                     */
                    bool AndroidAppFileCosInfoHasBeenSet() const;

                private:

                    /**
                     * Cos 密钥类型，取值： Mobile 云手游、PC 云端游、AndroidApp 云手机应用管理、AndroidAppFile 云手机文件管理、AndroidAppBackup 云手机备份还原
                     */
                    std::string m_cosType;
                    bool m_cosTypeHasBeenSet;

                    /**
                     * 云手机应用管理 Cos 数据
                     */
                    AndroidAppCosInfo m_androidAppCosInfo;
                    bool m_androidAppCosInfoHasBeenSet;

                    /**
                     * 云手机文件管理 Cos 数据
                     */
                    FileCosInfo m_androidAppFileCosInfo;
                    bool m_androidAppFileCosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_
