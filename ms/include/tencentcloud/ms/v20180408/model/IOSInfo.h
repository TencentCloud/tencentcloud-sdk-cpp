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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_IOSINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_IOSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * iOS加固信息

	InfoPListUrl  string `json:"InfoPListUrl"`  //info.plist的url，必须保证不用权限校验就可以下载
	InfoPListSize int64  `json:"InfoPListSize"` //info.plist文件的大小
	InfoPListMd5  string `json:"InfoPListMd5"`  //info.plist文件的md5
	BuildType     string `json:"BuildType"`     //release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                */
                class IOSInfo : public AbstractModel
                {
                public:
                    IOSInfo();
                    ~IOSInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取info.plist的url，必须保证不用权限校验就可以下载
                     * @return InfoPListUrl info.plist的url，必须保证不用权限校验就可以下载
                     * 
                     */
                    std::string GetInfoPListUrl() const;

                    /**
                     * 设置info.plist的url，必须保证不用权限校验就可以下载
                     * @param _infoPListUrl info.plist的url，必须保证不用权限校验就可以下载
                     * 
                     */
                    void SetInfoPListUrl(const std::string& _infoPListUrl);

                    /**
                     * 判断参数 InfoPListUrl 是否已赋值
                     * @return InfoPListUrl 是否已赋值
                     * 
                     */
                    bool InfoPListUrlHasBeenSet() const;

                    /**
                     * 获取info.plist文件的大小
                     * @return InfoPListSize info.plist文件的大小
                     * 
                     */
                    int64_t GetInfoPListSize() const;

                    /**
                     * 设置info.plist文件的大小
                     * @param _infoPListSize info.plist文件的大小
                     * 
                     */
                    void SetInfoPListSize(const int64_t& _infoPListSize);

                    /**
                     * 判断参数 InfoPListSize 是否已赋值
                     * @return InfoPListSize 是否已赋值
                     * 
                     */
                    bool InfoPListSizeHasBeenSet() const;

                    /**
                     * 获取info.plist文件的md5
                     * @return InfoPListMd5 info.plist文件的md5
                     * 
                     */
                    std::string GetInfoPListMd5() const;

                    /**
                     * 设置info.plist文件的md5
                     * @param _infoPListMd5 info.plist文件的md5
                     * 
                     */
                    void SetInfoPListMd5(const std::string& _infoPListMd5);

                    /**
                     * 判断参数 InfoPListMd5 是否已赋值
                     * @return InfoPListMd5 是否已赋值
                     * 
                     */
                    bool InfoPListMd5HasBeenSet() const;

                    /**
                     * 获取release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * @return BuildType release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * @param _buildType release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                private:

                    /**
                     * info.plist的url，必须保证不用权限校验就可以下载
                     */
                    std::string m_infoPListUrl;
                    bool m_infoPListUrlHasBeenSet;

                    /**
                     * info.plist文件的大小
                     */
                    int64_t m_infoPListSize;
                    bool m_infoPListSizeHasBeenSet;

                    /**
                     * info.plist文件的md5
                     */
                    std::string m_infoPListMd5;
                    bool m_infoPListMd5HasBeenSet;

                    /**
                     * release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_IOSINFO_H_
