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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 话机信息
                */
                class ExtensionInfo : public AbstractModel
                {
                public:
                    ExtensionInfo();
                    ~ExtensionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return SdkAppId 实例ID
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置实例ID
                     * @param _sdkAppId 实例ID
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分机全名
                     * @return FullExtensionId 分机全名
                     * 
                     */
                    std::string GetFullExtensionId() const;

                    /**
                     * 设置分机全名
                     * @param _fullExtensionId 分机全名
                     * 
                     */
                    void SetFullExtensionId(const std::string& _fullExtensionId);

                    /**
                     * 判断参数 FullExtensionId 是否已赋值
                     * @return FullExtensionId 是否已赋值
                     * 
                     */
                    bool FullExtensionIdHasBeenSet() const;

                    /**
                     * 获取分机号
                     * @return ExtensionId 分机号
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置分机号
                     * @param _extensionId 分机号
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取所属技能组列表
                     * @return SkillGroupId 所属技能组列表
                     * 
                     */
                    std::string GetSkillGroupId() const;

                    /**
                     * 设置所属技能组列表
                     * @param _skillGroupId 所属技能组列表
                     * 
                     */
                    void SetSkillGroupId(const std::string& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取分机名称
                     * @return ExtensionName 分机名称
                     * 
                     */
                    std::string GetExtensionName() const;

                    /**
                     * 设置分机名称
                     * @param _extensionName 分机名称
                     * 
                     */
                    void SetExtensionName(const std::string& _extensionName);

                    /**
                     * 判断参数 ExtensionName 是否已赋值
                     * @return ExtensionName 是否已赋值
                     * 
                     */
                    bool ExtensionNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return ModifyTime 最后修改时间
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _modifyTime 最后修改时间
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取话机状态(0 离线、100 空闲、200忙碌）
                     * @return Status 话机状态(0 离线、100 空闲、200忙碌）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置话机状态(0 离线、100 空闲、200忙碌）
                     * @param _status 话机状态(0 离线、100 空闲、200忙碌）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否注册
                     * @return Register 是否注册
                     * 
                     */
                    bool GetRegister() const;

                    /**
                     * 设置是否注册
                     * @param _register 是否注册
                     * 
                     */
                    void SetRegister(const bool& _register);

                    /**
                     * 判断参数 Register 是否已赋值
                     * @return Register 是否已赋值
                     * 
                     */
                    bool RegisterHasBeenSet() const;

                    /**
                     * 获取绑定座席邮箱
                     * @return Relation 绑定座席邮箱
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置绑定座席邮箱
                     * @param _relation 绑定座席邮箱
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                    /**
                     * 获取绑定座席名称
                     * @return RelationName 绑定座席名称
                     * 
                     */
                    std::string GetRelationName() const;

                    /**
                     * 设置绑定座席名称
                     * @param _relationName 绑定座席名称
                     * 
                     */
                    void SetRelationName(const std::string& _relationName);

                    /**
                     * 判断参数 RelationName 是否已赋值
                     * @return RelationName 是否已赋值
                     * 
                     */
                    bool RelationNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分机全名
                     */
                    std::string m_fullExtensionId;
                    bool m_fullExtensionIdHasBeenSet;

                    /**
                     * 分机号
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 所属技能组列表
                     */
                    std::string m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 分机名称
                     */
                    std::string m_extensionName;
                    bool m_extensionNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 话机状态(0 离线、100 空闲、200忙碌）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否注册
                     */
                    bool m_register;
                    bool m_registerHasBeenSet;

                    /**
                     * 绑定座席邮箱
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                    /**
                     * 绑定座席名称
                     */
                    std::string m_relationName;
                    bool m_relationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_
