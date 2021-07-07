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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 产品详情
                */
                class ProductEntry : public AbstractModel
                {
                public:
                    ProductEntry();
                    ~ProductEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param ProductName 产品名称
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品分组模板ID
                     * @return CategoryId 产品分组模板ID
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置产品分组模板ID
                     * @param CategoryId 产品分组模板ID
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取加密类型
                     * @return EncryptionType 加密类型
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置加密类型
                     * @param EncryptionType 加密类型
                     */
                    void SetEncryptionType(const std::string& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取连接类型
                     * @return NetType 连接类型
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置连接类型
                     * @param NetType 连接类型
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取数据协议
                     * @return DataProtocol 数据协议
                     */
                    int64_t GetDataProtocol() const;

                    /**
                     * 设置数据协议
                     * @param DataProtocol 数据协议
                     */
                    void SetDataProtocol(const int64_t& _dataProtocol);

                    /**
                     * 判断参数 DataProtocol 是否已赋值
                     * @return DataProtocol 是否已赋值
                     */
                    bool DataProtocolHasBeenSet() const;

                    /**
                     * 获取产品描述
                     * @return ProductDesc 产品描述
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置产品描述
                     * @param ProductDesc 产品描述
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return DevStatus 状态
                     */
                    std::string GetDevStatus() const;

                    /**
                     * 设置状态
                     * @param DevStatus 状态
                     */
                    void SetDevStatus(const std::string& _devStatus);

                    /**
                     * 判断参数 DevStatus 是否已赋值
                     * @return DevStatus 是否已赋值
                     */
                    bool DevStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param Region 区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取产品类型
                     * @return ProductType 产品类型
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置产品类型
                     * @param ProductType 产品类型
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取产品ModuleId
                     * @return ModuleId 产品ModuleId
                     */
                    int64_t GetModuleId() const;

                    /**
                     * 设置产品ModuleId
                     * @param ModuleId 产品ModuleId
                     */
                    void SetModuleId(const int64_t& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取是否使用脚本进行二进制转json功能 可以取值 true / false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableProductScript 是否使用脚本进行二进制转json功能 可以取值 true / false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnableProductScript() const;

                    /**
                     * 设置是否使用脚本进行二进制转json功能 可以取值 true / false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableProductScript 是否使用脚本进行二进制转json功能 可以取值 true / false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableProductScript(const std::string& _enableProductScript);

                    /**
                     * 判断参数 EnableProductScript 是否已赋值
                     * @return EnableProductScript 是否已赋值
                     */
                    bool EnableProductScriptHasBeenSet() const;

                    /**
                     * 获取创建人 UinId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserId 创建人 UinId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateUserId() const;

                    /**
                     * 设置创建人 UinId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUserId 创建人 UinId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUserId(const int64_t& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorNickName 创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatorNickName() const;

                    /**
                     * 设置创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatorNickName 创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatorNickName(const std::string& _creatorNickName);

                    /**
                     * 判断参数 CreatorNickName 是否已赋值
                     * @return CreatorNickName 是否已赋值
                     */
                    bool CreatorNickNameHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品分组模板ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 加密类型
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 连接类型
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 数据协议
                     */
                    int64_t m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_devStatus;
                    bool m_devStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 产品类型
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 产品ModuleId
                     */
                    int64_t m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 是否使用脚本进行二进制转json功能 可以取值 true / false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableProductScript;
                    bool m_enableProductScriptHasBeenSet;

                    /**
                     * 创建人 UinId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * 创建者昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorNickName;
                    bool m_creatorNickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_
