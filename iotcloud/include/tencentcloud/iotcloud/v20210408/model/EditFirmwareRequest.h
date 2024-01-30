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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_EDITFIRMWAREREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_EDITFIRMWAREREQUEST_H_

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
                * EditFirmware请求参数结构体
                */
                class EditFirmwareRequest : public AbstractModel
                {
                public:
                    EditFirmwareRequest();
                    ~EditFirmwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID。
                     * @return ProductId 产品ID。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
                     * @param _productId 产品ID。
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
                     * 获取固件版本号。
                     * @return FirmwareVersion 固件版本号。
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件版本号。
                     * @param _firmwareVersion 固件版本号。
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取固件名称。
                     * @return FirmwareName 固件名称。
                     * 
                     */
                    std::string GetFirmwareName() const;

                    /**
                     * 设置固件名称。
                     * @param _firmwareName 固件名称。
                     * 
                     */
                    void SetFirmwareName(const std::string& _firmwareName);

                    /**
                     * 判断参数 FirmwareName 是否已赋值
                     * @return FirmwareName 是否已赋值
                     * 
                     */
                    bool FirmwareNameHasBeenSet() const;

                    /**
                     * 获取固件描述
                     * @return FirmwareDescription 固件描述
                     * 
                     */
                    std::string GetFirmwareDescription() const;

                    /**
                     * 设置固件描述
                     * @param _firmwareDescription 固件描述
                     * 
                     */
                    void SetFirmwareDescription(const std::string& _firmwareDescription);

                    /**
                     * 判断参数 FirmwareDescription 是否已赋值
                     * @return FirmwareDescription 是否已赋值
                     * 
                     */
                    bool FirmwareDescriptionHasBeenSet() const;

                    /**
                     * 获取固件用户自定义配置信息
                     * @return FirmwareUserDefined 固件用户自定义配置信息
                     * 
                     */
                    std::string GetFirmwareUserDefined() const;

                    /**
                     * 设置固件用户自定义配置信息
                     * @param _firmwareUserDefined 固件用户自定义配置信息
                     * 
                     */
                    void SetFirmwareUserDefined(const std::string& _firmwareUserDefined);

                    /**
                     * 判断参数 FirmwareUserDefined 是否已赋值
                     * @return FirmwareUserDefined 是否已赋值
                     * 
                     */
                    bool FirmwareUserDefinedHasBeenSet() const;

                private:

                    /**
                     * 产品ID。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件版本号。
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 固件名称。
                     */
                    std::string m_firmwareName;
                    bool m_firmwareNameHasBeenSet;

                    /**
                     * 固件描述
                     */
                    std::string m_firmwareDescription;
                    bool m_firmwareDescriptionHasBeenSet;

                    /**
                     * 固件用户自定义配置信息
                     */
                    std::string m_firmwareUserDefined;
                    bool m_firmwareUserDefinedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_EDITFIRMWAREREQUEST_H_
