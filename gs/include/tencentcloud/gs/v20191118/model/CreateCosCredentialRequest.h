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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidAppCosInfo.h>


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
                     * 获取Cos 密钥类型， Mobile 移动端, PC 桌面, AndroidApp 安卓应用
                     * @return CosType Cos 密钥类型， Mobile 移动端, PC 桌面, AndroidApp 安卓应用
                     * 
                     */
                    std::string GetCosType() const;

                    /**
                     * 设置Cos 密钥类型， Mobile 移动端, PC 桌面, AndroidApp 安卓应用
                     * @param _cosType Cos 密钥类型， Mobile 移动端, PC 桌面, AndroidApp 安卓应用
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
                     * 获取云手机 Cos 数据
                     * @return AndroidAppCosInfo 云手机 Cos 数据
                     * 
                     */
                    AndroidAppCosInfo GetAndroidAppCosInfo() const;

                    /**
                     * 设置云手机 Cos 数据
                     * @param _androidAppCosInfo 云手机 Cos 数据
                     * 
                     */
                    void SetAndroidAppCosInfo(const AndroidAppCosInfo& _androidAppCosInfo);

                    /**
                     * 判断参数 AndroidAppCosInfo 是否已赋值
                     * @return AndroidAppCosInfo 是否已赋值
                     * 
                     */
                    bool AndroidAppCosInfoHasBeenSet() const;

                private:

                    /**
                     * Cos 密钥类型， Mobile 移动端, PC 桌面, AndroidApp 安卓应用
                     */
                    std::string m_cosType;
                    bool m_cosTypeHasBeenSet;

                    /**
                     * 云手机 Cos 数据
                     */
                    AndroidAppCosInfo m_androidAppCosInfo;
                    bool m_androidAppCosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATECOSCREDENTIALREQUEST_H_
