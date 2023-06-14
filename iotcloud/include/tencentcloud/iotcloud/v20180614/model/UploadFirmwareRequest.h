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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPLOADFIRMWAREREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPLOADFIRMWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * UploadFirmware请求参数结构体
                */
                class UploadFirmwareRequest : public AbstractModel
                {
                public:
                    UploadFirmwareRequest();
                    ~UploadFirmwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取固件版本号
                     * @return FirmwareVersion 固件版本号
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件版本号
                     * @param _firmwareVersion 固件版本号
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
                     * 获取固件的MD5值
                     * @return Md5sum 固件的MD5值
                     * 
                     */
                    std::string GetMd5sum() const;

                    /**
                     * 设置固件的MD5值
                     * @param _md5sum 固件的MD5值
                     * 
                     */
                    void SetMd5sum(const std::string& _md5sum);

                    /**
                     * 判断参数 Md5sum 是否已赋值
                     * @return Md5sum 是否已赋值
                     * 
                     */
                    bool Md5sumHasBeenSet() const;

                    /**
                     * 获取固件的大小
                     * @return FileSize 固件的大小
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置固件的大小
                     * @param _fileSize 固件的大小
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
                     * 获取固件名称
                     * @return FirmwareName 固件名称
                     * 
                     */
                    std::string GetFirmwareName() const;

                    /**
                     * 设置固件名称
                     * @param _firmwareName 固件名称
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
                     * 获取固件类型：选填 mcu、moudule。默认：mcu
                     * @return FwType 固件类型：选填 mcu、moudule。默认：mcu
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置固件类型：选填 mcu、moudule。默认：mcu
                     * @param _fwType 固件类型：选填 mcu、moudule。默认：mcu
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 固件版本号
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 固件的MD5值
                     */
                    std::string m_md5sum;
                    bool m_md5sumHasBeenSet;

                    /**
                     * 固件的大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 固件名称
                     */
                    std::string m_firmwareName;
                    bool m_firmwareNameHasBeenSet;

                    /**
                     * 固件描述
                     */
                    std::string m_firmwareDescription;
                    bool m_firmwareDescriptionHasBeenSet;

                    /**
                     * 固件类型：选填 mcu、moudule。默认：mcu
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPLOADFIRMWAREREQUEST_H_
