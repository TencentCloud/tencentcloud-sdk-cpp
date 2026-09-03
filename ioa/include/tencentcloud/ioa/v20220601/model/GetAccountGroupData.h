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
                     * 获取<p>分组名称全路径，点分格式</p>
                     * @return NamePath <p>分组名称全路径，点分格式</p>
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置<p>分组名称全路径，点分格式</p>
                     * @param _namePath <p>分组名称全路径，点分格式</p>
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
                     * 获取<p>分组ID全路径，数组格式</p>
                     * @return IdPathArr <p>分组ID全路径，数组格式</p>
                     * 
                     */
                    std::vector<int64_t> GetIdPathArr() const;

                    /**
                     * 设置<p>分组ID全路径，数组格式</p>
                     * @param _idPathArr <p>分组ID全路径，数组格式</p>
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
                     * 获取<p>分组扩展信息</p>
                     * @return ExtraInfo <p>分组扩展信息</p>
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>分组扩展信息</p>
                     * @param _extraInfo <p>分组扩展信息</p>
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
                     * 获取<p>最后更新时间</p>
                     * @return Utime <p>最后更新时间</p>
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>最后更新时间</p>
                     * @param _utime <p>最后更新时间</p>
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
                     * 获取<p>当前分组的父分组ID</p>
                     * @return ParentId <p>当前分组的父分组ID</p>
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置<p>当前分组的父分组ID</p>
                     * @param _parentId <p>当前分组的父分组ID</p>
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
                     * 获取<p>源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系</p>
                     * @return OrgId <p>源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系</p>
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置<p>源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系</p>
                     * @param _orgId <p>源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系</p>
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
                     * 获取<p>分组名称</p>
                     * @return Name <p>分组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分组名称</p>
                     * @param _name <p>分组名称</p>
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
                     * 获取<p>分组ID</p>
                     * @return Id <p>分组ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>分组ID</p>
                     * @param _id <p>分组ID</p>
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
                     * 获取<p>分组描述</p>
                     * @return Description <p>分组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>分组描述</p>
                     * @param _description <p>分组描述</p>
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
                     * 获取<p>分组导入源(只支持32位)</p>
                     * @return Source <p>分组导入源(只支持32位)</p>
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置<p>分组导入源(只支持32位)</p>
                     * @param _source <p>分组导入源(只支持32位)</p>
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
                     * 获取<p>分组ID全路径，点分格式</p>
                     * @return IdPath <p>分组ID全路径，点分格式</p>
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置<p>分组ID全路径，点分格式</p>
                     * @param _idPath <p>分组ID全路径，点分格式</p>
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
                     * 获取<p>创建时间</p>
                     * @return Itime <p>创建时间</p>
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _itime <p>创建时间</p>
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
                     * 获取<p>父源账号组ID，该字段仅适用于第三方同步的组织架构</p>
                     * @return ParentOrgId <p>父源账号组ID，该字段仅适用于第三方同步的组织架构</p>
                     * 
                     */
                    std::string GetParentOrgId() const;

                    /**
                     * 设置<p>父源账号组ID，该字段仅适用于第三方同步的组织架构</p>
                     * @param _parentOrgId <p>父源账号组ID，该字段仅适用于第三方同步的组织架构</p>
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
                     * 获取<p>导入信息,json格式</p>
                     * @return Import <p>导入信息,json格式</p>
                     * 
                     */
                    std::string GetImport() const;

                    /**
                     * 设置<p>导入信息,json格式</p>
                     * @param _import <p>导入信息,json格式</p>
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
                     * 获取<p>是否开启导入架构</p>
                     * @return ImportEnable <p>是否开启导入架构</p>
                     * 
                     */
                    bool GetImportEnable() const;

                    /**
                     * 设置<p>是否开启导入架构</p>
                     * @param _importEnable <p>是否开启导入架构</p>
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
                     * 获取<p>导入类型</p>
                     * @return ImportType <p>导入类型</p>
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置<p>导入类型</p>
                     * @param _importType <p>导入类型</p>
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
                     * 获取<p>miniIAMId，MiniIAM源才有</p>
                     * @return MiniIamId <p>miniIAMId，MiniIAM源才有</p>
                     * 
                     */
                    std::string GetMiniIamId() const;

                    /**
                     * 设置<p>miniIAMId，MiniIAM源才有</p>
                     * @param _miniIamId <p>miniIAMId，MiniIAM源才有</p>
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
                     * <p>分组名称全路径，点分格式</p>
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * <p>分组ID全路径，数组格式</p>
                     */
                    std::vector<int64_t> m_idPathArr;
                    bool m_idPathArrHasBeenSet;

                    /**
                     * <p>分组扩展信息</p>
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>最后更新时间</p>
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * <p>当前分组的父分组ID</p>
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * <p>源账号组ID，该字段仅适用于第三方同步的组织架构，通过OrgId-Id构成源组织架构分组ID-现组织架构分组ID映射关系</p>
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * <p>分组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分组ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>分组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>分组导入源(只支持32位)</p>
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>分组ID全路径，点分格式</p>
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>父源账号组ID，该字段仅适用于第三方同步的组织架构</p>
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * <p>导入信息,json格式</p>
                     */
                    std::string m_import;
                    bool m_importHasBeenSet;

                    /**
                     * <p>是否开启导入架构</p>
                     */
                    bool m_importEnable;
                    bool m_importEnableHasBeenSet;

                    /**
                     * <p>导入类型</p>
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * <p>miniIAMId，MiniIAM源才有</p>
                     */
                    std::string m_miniIamId;
                    bool m_miniIamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GETACCOUNTGROUPDATA_H_
