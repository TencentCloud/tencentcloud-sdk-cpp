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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FSATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FSATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/GooseFSxAttribute.h>
#include <tencentcloud/goosefs/v20220519/model/Tag.h>
#include <tencentcloud/goosefs/v20220519/model/ChargeAttribute.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 文件系统属性
                */
                class FSAttribute : public AbstractModel
                {
                public:
                    FSAttribute();
                    ~FSAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统类型, 可填goosefs和goosefsx
                     * @return Type 文件系统类型, 可填goosefs和goosefsx
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件系统类型, 可填goosefs和goosefsx
                     * @param _type 文件系统类型, 可填goosefs和goosefsx
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

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
                     * 获取GooseFSx文件系统属性
                     * @return GooseFSxAttribute GooseFSx文件系统属性
                     * 
                     */
                    GooseFSxAttribute GetGooseFSxAttribute() const;

                    /**
                     * 设置GooseFSx文件系统属性
                     * @param _gooseFSxAttribute GooseFSx文件系统属性
                     * 
                     */
                    void SetGooseFSxAttribute(const GooseFSxAttribute& _gooseFSxAttribute);

                    /**
                     * 判断参数 GooseFSxAttribute 是否已赋值
                     * @return GooseFSxAttribute 是否已赋值
                     * 
                     */
                    bool GooseFSxAttributeHasBeenSet() const;

                    /**
                     * 获取文件系统状态 ACTIVE(运行中), CREATING(创建中), DESTROYING(销毁中), FAIL(创建失败),EXPANDING(扩容中),PROBING(容灾中)
                     * @return Status 文件系统状态 ACTIVE(运行中), CREATING(创建中), DESTROYING(销毁中), FAIL(创建失败),EXPANDING(扩容中),PROBING(容灾中)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置文件系统状态 ACTIVE(运行中), CREATING(创建中), DESTROYING(销毁中), FAIL(创建失败),EXPANDING(扩容中),PROBING(容灾中)
                     * @param _status 文件系统状态 ACTIVE(运行中), CREATING(创建中), DESTROYING(销毁中), FAIL(创建失败),EXPANDING(扩容中),PROBING(容灾中)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件系统名
                     * @return Name 文件系统名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件系统名
                     * @param _name 文件系统名
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
                     * 获取文件系统备注描述
                     * @return Description 文件系统备注描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件系统备注描述
                     * @param _description 文件系统备注描述
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
                     * 获取vpc ID
                     * @return VpcId vpc ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc ID
                     * @param _vpcId vpc ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网所在的可用区
                     * @return Zone 子网所在的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在的可用区
                     * @param _zone 子网所在的可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Tag数组
                     * @return Tag Tag数组
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag数组
                     * @param _tag Tag数组
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取更新属性时间
                     * @return ModifyTime 更新属性时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新属性时间
                     * @param _modifyTime 更新属性时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取文件系统付费信息
                     * @return ChargeAttribute 文件系统付费信息
                     * 
                     */
                    ChargeAttribute GetChargeAttribute() const;

                    /**
                     * 设置文件系统付费信息
                     * @param _chargeAttribute 文件系统付费信息
                     * 
                     */
                    void SetChargeAttribute(const ChargeAttribute& _chargeAttribute);

                    /**
                     * 判断参数 ChargeAttribute 是否已赋值
                     * @return ChargeAttribute 是否已赋值
                     * 
                     */
                    bool ChargeAttributeHasBeenSet() const;

                private:

                    /**
                     * 文件系统类型, 可填goosefs和goosefsx
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * GooseFSx文件系统属性
                     */
                    GooseFSxAttribute m_gooseFSxAttribute;
                    bool m_gooseFSxAttributeHasBeenSet;

                    /**
                     * 文件系统状态 ACTIVE(运行中), CREATING(创建中), DESTROYING(销毁中), FAIL(创建失败),EXPANDING(扩容中),PROBING(容灾中)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件系统名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件系统备注描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * vpc ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网所在的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Tag数组
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 更新属性时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 文件系统付费信息
                     */
                    ChargeAttribute m_chargeAttribute;
                    bool m_chargeAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FSATTRIBUTE_H_
