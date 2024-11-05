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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_GETACCOUNTGROUPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_GETACCOUNTGROUPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 账号分组详情响应数据
                */
                class GetAccountGroupData : public AbstractModel
                {
                public:
                    GetAccountGroupData();
                    ~GetAccountGroupData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组名称全路径，点分格式
                     * @return NamePath 分组名称全路径，点分格式
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置分组名称全路径，点分格式
                     * @param _namePath 分组名称全路径，点分格式
                     * 
                     */
                    void SetNamePath(const std::string& _namePath);

                    /**
                     * 判断参数 NamePath 是否已赋值
                     * @return NamePath 是否已赋值
                     * 
                     */
                    bool NamePathHasBeenSet() const;

                    /**
                     * 获取分组ID全路径，数组格式
                     * @return IdPathArr 分组ID全路径，数组格式
                     * 
                     */
                    std::vector<int64_t> GetIdPathArr() const;

                    /**
                     * 设置分组ID全路径，数组格式
                     * @param _idPathArr 分组ID全路径，数组格式
                     * 
                     */
                    void SetIdPathArr(const std::vector<int64_t>& _idPathArr);

                    /**
                     * 判断参数 IdPathArr 是否已赋值
                     * @return IdPathArr 是否已赋值
                     * 
                     */
                    bool IdPathArrHasBeenSet() const;

                    /**
                     * 获取分组扩展信息
                     * @return ExtraInfo 分组扩展信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置分组扩展信息
                     * @param _extraInfo 分组扩展信息
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return Utime 最后更新时间
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置最后更新时间
                     * @param _utime 最后更新时间
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                    /**
                     * 获取当前分组的父分组ID
                     * @return ParentId 当前分组的父分组ID
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置当前分组的父分组ID
                     * @param _parentId 当前分组的父分组ID
                     * 
                     */
                    void SetParentId(const uint64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系
                     * @return OrgId 源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系
                     * @param _orgId 源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系
                     * 
                     */
                    void SetOrgId(const std::string& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return Name 分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名称
                     * @param _name 分组名称
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
                     * 获取分组ID
                     * @return Id 分组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置分组ID
                     * @param _id 分组ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取分组描述
                     * @return Description 分组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分组描述
                     * @param _description 分组描述
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
                     * 获取分组导入源(只支持32位)
                     * @return Source 分组导入源(只支持32位)
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置分组导入源(只支持32位)
                     * @param _source 分组导入源(只支持32位)
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取分组ID全路径，点分格式
                     * @return IdPath 分组ID全路径，点分格式
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置分组ID全路径，点分格式
                     * @param _idPath 分组ID全路径，点分格式
                     * 
                     */
                    void SetIdPath(const std::string& _idPath);

                    /**
                     * 判断参数 IdPath 是否已赋值
                     * @return IdPath 是否已赋值
                     * 
                     */
                    bool IdPathHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return Itime 创建时间
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置创建时间
                     * @param _itime 创建时间
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取父源账号组ID，该字段仅适用于第三方同步的组织架构
                     * @return ParentOrgId 父源账号组ID，该字段仅适用于第三方同步的组织架构
                     * 
                     */
                    std::string GetParentOrgId() const;

                    /**
                     * 设置父源账号组ID，该字段仅适用于第三方同步的组织架构
                     * @param _parentOrgId 父源账号组ID，该字段仅适用于第三方同步的组织架构
                     * 
                     */
                    void SetParentOrgId(const std::string& _parentOrgId);

                    /**
                     * 判断参数 ParentOrgId 是否已赋值
                     * @return ParentOrgId 是否已赋值
                     * 
                     */
                    bool ParentOrgIdHasBeenSet() const;

                    /**
                     * 获取导入信息,json格式
                     * @return Import 导入信息,json格式
                     * 
                     */
                    std::string GetImport() const;

                    /**
                     * 设置导入信息,json格式
                     * @param _import 导入信息,json格式
                     * 
                     */
                    void SetImport(const std::string& _import);

                    /**
                     * 判断参数 Import 是否已赋值
                     * @return Import 是否已赋值
                     * 
                     */
                    bool ImportHasBeenSet() const;

                    /**
                     * 获取是否开启导入架构
                     * @return ImportEnable 是否开启导入架构
                     * 
                     */
                    bool GetImportEnable() const;

                    /**
                     * 设置是否开启导入架构
                     * @param _importEnable 是否开启导入架构
                     * 
                     */
                    void SetImportEnable(const bool& _importEnable);

                    /**
                     * 判断参数 ImportEnable 是否已赋值
                     * @return ImportEnable 是否已赋值
                     * 
                     */
                    bool ImportEnableHasBeenSet() const;

                    /**
                     * 获取导入类型
                     * @return ImportType 导入类型
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置导入类型
                     * @param _importType 导入类型
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取miniIAMId，MiniIAM源才有
                     * @return MiniIamId miniIAMId，MiniIAM源才有
                     * 
                     */
                    std::string GetMiniIamId() const;

                    /**
                     * 设置miniIAMId，MiniIAM源才有
                     * @param _miniIamId miniIAMId，MiniIAM源才有
                     * 
                     */
                    void SetMiniIamId(const std::string& _miniIamId);

                    /**
                     * 判断参数 MiniIamId 是否已赋值
                     * @return MiniIamId 是否已赋值
                     * 
                     */
                    bool MiniIamIdHasBeenSet() const;

                private:

                    /**
                     * 分组名称全路径，点分格式
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 分组ID全路径，数组格式
                     */
                    std::vector<int64_t> m_idPathArr;
                    bool m_idPathArrHasBeenSet;

                    /**
                     * 分组扩展信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * 当前分组的父分组ID
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分组导入源(只支持32位)
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 分组ID全路径，点分格式
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 父源账号组ID，该字段仅适用于第三方同步的组织架构
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * 导入信息,json格式
                     */
                    std::string m_import;
                    bool m_importHasBeenSet;

                    /**
                     * 是否开启导入架构
                     */
                    bool m_importEnable;
                    bool m_importEnableHasBeenSet;

                    /**
                     * 导入类型
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * miniIAMId，MiniIAM源才有
                     */
                    std::string m_miniIamId;
                    bool m_miniIamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GETACCOUNTGROUPDATA_H_
