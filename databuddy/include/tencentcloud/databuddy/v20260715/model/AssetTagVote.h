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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASSETTAGVOTE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASSETTAGVOTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 资产标签投票记录
                */
                class AssetTagVote : public AbstractModel
                {
                public:
                    AssetTagVote();
                    ~AssetTagVote() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资产类型，取值参考AssetType定义，如CATALOG、SCHEMA、TABLE、VIEW、MODEL、VOLUME、FUNCTION等
                     * @return PropertyType 资产类型，取值参考AssetType定义，如CATALOG、SCHEMA、TABLE、VIEW、MODEL、VOLUME、FUNCTION等
                     * 
                     */
                    std::string GetPropertyType() const;

                    /**
                     * 设置资产类型，取值参考AssetType定义，如CATALOG、SCHEMA、TABLE、VIEW、MODEL、VOLUME、FUNCTION等
                     * @param _propertyType 资产类型，取值参考AssetType定义，如CATALOG、SCHEMA、TABLE、VIEW、MODEL、VOLUME、FUNCTION等
                     * 
                     */
                    void SetPropertyType(const std::string& _propertyType);

                    /**
                     * 判断参数 PropertyType 是否已赋值
                     * @return PropertyType 是否已赋值
                     * 
                     */
                    bool PropertyTypeHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return PropertyId 资产ID
                     * 
                     */
                    std::string GetPropertyId() const;

                    /**
                     * 设置资产ID
                     * @param _propertyId 资产ID
                     * 
                     */
                    void SetPropertyId(const std::string& _propertyId);

                    /**
                     * 判断参数 PropertyId 是否已赋值
                     * @return PropertyId 是否已赋值
                     * 
                     */
                    bool PropertyIdHasBeenSet() const;

                    /**
                     * 获取标签ID
                     * @return LabelId 标签ID
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置标签ID
                     * @param _labelId 标签ID
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return LabelName 标签名称
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称
                     * @param _labelName 标签名称
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取标签值ID
                     * @return LabelValueId 标签值ID
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置标签值ID
                     * @param _labelValueId 标签值ID
                     * 
                     */
                    void SetLabelValueId(const std::string& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                    /**
                     * 获取标签值
                     * @return LabelValue 标签值
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值
                     * @param _labelValue 标签值
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取修改者
                     * @return Modifier 修改者
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改者
                     * @param _modifier 修改者
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedTime 修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifiedTime 修改时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取所有者账号
                     * @return OwnerAccount 所有者账号
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置所有者账号
                     * @param _ownerAccount 所有者账号
                     * 
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取标签类型，取值：0=未知，1=治理标签，2=自定义标签，3=属性标签，4=脱敏标签
                     * @return Type 标签类型，取值：0=未知，1=治理标签，2=自定义标签，3=属性标签，4=脱敏标签
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置标签类型，取值：0=未知，1=治理标签，2=自定义标签，3=属性标签，4=脱敏标签
                     * @param _type 标签类型，取值：0=未知，1=治理标签，2=自定义标签，3=属性标签，4=脱敏标签
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否删除
                     * @return Deleted 是否删除
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置是否删除
                     * @param _deleted 是否删除
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资产类型，取值参考AssetType定义，如CATALOG、SCHEMA、TABLE、VIEW、MODEL、VOLUME、FUNCTION等
                     */
                    std::string m_propertyType;
                    bool m_propertyTypeHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_propertyId;
                    bool m_propertyIdHasBeenSet;

                    /**
                     * 标签ID
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签值ID
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 修改者
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 所有者账号
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 标签类型，取值：0=未知，1=治理标签，2=自定义标签，3=属性标签，4=脱敏标签
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否删除
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASSETTAGVOTE_H_
