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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODETEMPLATEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODETEMPLATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 模版详情
                */
                class CodeTemplateDetail : public AbstractModel
                {
                public:
                    CodeTemplateDetail();
                    ~CodeTemplateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeTemplateName <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeTemplateName() const;

                    /**
                     * 设置<p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeTemplateName <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeTemplateName(const std::string& _codeTemplateName);

                    /**
                     * 判断参数 CodeTemplateName 是否已赋值
                     * @return CodeTemplateName 是否已赋值
                     * 
                     */
                    bool CodeTemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>代码模版描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeTemplateDesc <p>代码模版描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeTemplateDesc() const;

                    /**
                     * 设置<p>代码模版描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeTemplateDesc <p>代码模版描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeTemplateDesc(const std::string& _codeTemplateDesc);

                    /**
                     * 判断参数 CodeTemplateDesc 是否已赋值
                     * @return CodeTemplateDesc 是否已赋值
                     * 
                     */
                    bool CodeTemplateDescHasBeenSet() const;

                    /**
                     * 获取<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取<p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置<p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取<p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置<p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskExtDsVO GetExt() const;

                    /**
                     * 设置<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ext <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExt(const TaskExtDsVO& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取<p>模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeTemplateId <p>模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeTemplateId() const;

                    /**
                     * 设置<p>模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeTemplateId <p>模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeTemplateId(const std::string& _codeTemplateId);

                    /**
                     * 判断参数 CodeTemplateId 是否已赋值
                     * @return CodeTemplateId 是否已赋值
                     * 
                     */
                    bool CodeTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser <p>更新人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置<p>更新人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser <p>更新人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取<p>更新人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId <p>更新人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置<p>更新人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId <p>更新人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取<p>执行ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp <p>执行ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置<p>执行ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp <p>执行ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取<p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置<p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取<p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置<p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取<p>模版脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptChange <p>模版脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置<p>模版脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptChange <p>模版脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptChange(const bool& _scriptChange);

                    /**
                     * 判断参数 ScriptChange 是否已赋值
                     * @return ScriptChange 是否已赋值
                     * 
                     */
                    bool ScriptChangeHasBeenSet() const;

                    /**
                     * 获取<p>代码模版脚本，base64编码返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>代码模版脚本，base64编码返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>代码模版脚本，base64编码返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>代码模版脚本，base64编码返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeTemplateName;
                    bool m_codeTemplateNameHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>代码模版描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeTemplateDesc;
                    bool m_codeTemplateDescHasBeenSet;

                    /**
                     * <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskExtDsVO m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * <p>模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeTemplateId;
                    bool m_codeTemplateIdHasBeenSet;

                    /**
                     * <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>更新人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * <p>更新人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * <p>执行ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * <p>模版脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * <p>代码模版脚本，base64编码返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODETEMPLATEDETAIL_H_
