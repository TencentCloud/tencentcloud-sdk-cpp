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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARERESPONSE_H_

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
                * DescribeFirmware返回参数结构体
                */
                class DescribeFirmwareResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareResponse();
                    ~DescribeFirmwareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固件版本号
                     * @return Version 固件版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取固件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 固件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取固件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 固件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取固件Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5sum 固件Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5sum() const;

                    /**
                     * 判断参数 Md5sum 是否已赋值
                     * @return Md5sum 是否已赋值
                     * 
                     */
                    bool Md5sumHasBeenSet() const;

                    /**
                     * 获取固件上传的秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Createtime 固件上传的秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreatetime() const;

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取固件类型。选项：mcu、module
                     * @return FwType 固件类型。选项：mcu、module
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取固件用户自定义配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefined 固件用户自定义配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserDefined() const;

                    /**
                     * 判断参数 UserDefined 是否已赋值
                     * @return UserDefined 是否已赋值
                     * 
                     */
                    bool UserDefinedHasBeenSet() const;

                private:

                    /**
                     * 固件版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 固件描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 固件Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5sum;
                    bool m_md5sumHasBeenSet;

                    /**
                     * 固件上传的秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 固件类型。选项：mcu、module
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 固件用户自定义配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDefined;
                    bool m_userDefinedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARERESPONSE_H_
