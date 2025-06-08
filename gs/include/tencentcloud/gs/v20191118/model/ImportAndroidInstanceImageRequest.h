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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_IMPORTANDROIDINSTANCEIMAGEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_IMPORTANDROIDINSTANCEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ImportAndroidInstanceImage请求参数结构体
                */
                class ImportAndroidInstanceImageRequest : public AbstractModel
                {
                public:
                    ImportAndroidInstanceImageRequest();
                    ~ImportAndroidInstanceImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像名称
                     * @return Name 镜像名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置镜像名称
                     * @param _name 镜像名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取镜像文件下载地址，要求是 tgz 压缩文件
                     * @return URL 镜像文件下载地址，要求是 tgz 压缩文件
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置镜像文件下载地址，要求是 tgz 压缩文件
                     * @param _uRL 镜像文件下载地址，要求是 tgz 压缩文件
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取镜像文件 MD5 值
                     * @return MD5 镜像文件 MD5 值
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置镜像文件 MD5 值
                     * @param _mD5 镜像文件 MD5 值
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取安卓版本。
ANDROID10：默认值，安卓10
ANDROID12：安卓12
ANDROID14：安卓14
                     * @return AndroidVersion 安卓版本。
ANDROID10：默认值，安卓10
ANDROID12：安卓12
ANDROID14：安卓14
                     * 
                     */
                    std::string GetAndroidVersion() const;

                    /**
                     * 设置安卓版本。
ANDROID10：默认值，安卓10
ANDROID12：安卓12
ANDROID14：安卓14
                     * @param _androidVersion 安卓版本。
ANDROID10：默认值，安卓10
ANDROID12：安卓12
ANDROID14：安卓14
                     * 
                     */
                    void SetAndroidVersion(const std::string& _androidVersion);

                    /**
                     * 判断参数 AndroidVersion 是否已赋值
                     * @return AndroidVersion 是否已赋值
                     * 
                     */
                    bool AndroidVersionHasBeenSet() const;

                    /**
                     * 获取镜像可用区
                     * @return Zone 镜像可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置镜像可用区
                     * @param _zone 镜像可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 镜像名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 镜像文件下载地址，要求是 tgz 压缩文件
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 镜像文件 MD5 值
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 安卓版本。
ANDROID10：默认值，安卓10
ANDROID12：安卓12
ANDROID14：安卓14
                     */
                    std::string m_androidVersion;
                    bool m_androidVersionHasBeenSet;

                    /**
                     * 镜像可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_IMPORTANDROIDINSTANCEIMAGEREQUEST_H_
