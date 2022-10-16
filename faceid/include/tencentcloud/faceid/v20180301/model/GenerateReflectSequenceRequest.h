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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCEREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GenerateReflectSequence请求参数结构体
                */
                class GenerateReflectSequenceRequest : public AbstractModel
                {
                public:
                    GenerateReflectSequenceRequest();
                    ~GenerateReflectSequenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK生成的打包数据的资源链接。
                     * @return DeviceDataUrl SDK生成的打包数据的资源链接。
                     */
                    std::string GetDeviceDataUrl() const;

                    /**
                     * 设置SDK生成的打包数据的资源链接。
                     * @param DeviceDataUrl SDK生成的打包数据的资源链接。
                     */
                    void SetDeviceDataUrl(const std::string& _deviceDataUrl);

                    /**
                     * 判断参数 DeviceDataUrl 是否已赋值
                     * @return DeviceDataUrl 是否已赋值
                     */
                    bool DeviceDataUrlHasBeenSet() const;

                    /**
                     * 获取SDK生成的打包数据的MD5值。
                     * @return DeviceDataMd5 SDK生成的打包数据的MD5值。
                     */
                    std::string GetDeviceDataMd5() const;

                    /**
                     * 设置SDK生成的打包数据的MD5值。
                     * @param DeviceDataMd5 SDK生成的打包数据的MD5值。
                     */
                    void SetDeviceDataMd5(const std::string& _deviceDataMd5);

                    /**
                     * 判断参数 DeviceDataMd5 是否已赋值
                     * @return DeviceDataMd5 是否已赋值
                     */
                    bool DeviceDataMd5HasBeenSet() const;

                    /**
                     * 获取1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     * @return SecurityLevel 1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     * @param SecurityLevel 1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * SDK生成的打包数据的资源链接。
                     */
                    std::string m_deviceDataUrl;
                    bool m_deviceDataUrlHasBeenSet;

                    /**
                     * SDK生成的打包数据的MD5值。
                     */
                    std::string m_deviceDataMd5;
                    bool m_deviceDataMd5HasBeenSet;

                    /**
                     * 1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCEREQUEST_H_
