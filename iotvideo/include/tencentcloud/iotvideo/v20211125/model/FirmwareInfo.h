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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_FIRMWAREINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_FIRMWAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 设备固件详细信息
                */
                class FirmwareInfo : public AbstractModel
                {
                public:
                    FirmwareInfo();
                    ~FirmwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取固件版本
                     * @return Version 固件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置固件版本
                     * @param _version 固件版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取固件MD5值
                     * @return Md5sum 固件MD5值
                     * 
                     */
                    std::string GetMd5sum() const;

                    /**
                     * 设置固件MD5值
                     * @param _md5sum 固件MD5值
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
                     * 获取固件创建时间
                     * @return CreateTime 固件创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置固件创建时间
                     * @param _createTime 固件创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取固件名称
                     * @return Name 固件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置固件名称
                     * @param _name 固件名称
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
                     * 获取固件描述
                     * @return Description 固件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置固件描述
                     * @param _description 固件描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取固件升级模块
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwType 固件升级模块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置固件升级模块
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwType 固件升级模块
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 固件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 固件MD5值
                     */
                    std::string m_md5sum;
                    bool m_md5sumHasBeenSet;

                    /**
                     * 固件创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 固件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 固件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件升级模块
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_FIRMWAREINFO_H_
