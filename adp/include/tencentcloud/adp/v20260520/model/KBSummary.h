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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>
#include <tencentcloud/adp/v20260520/model/Operator.h>
#include <tencentcloud/adp/v20260520/model/KBPermission.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库摘要信息
                */
                class KBSummary : public AbstractModel
                {
                public:
                    KBSummary();
                    ~KBSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>关联的应用列表，仅共享知识库返回</p>
                     * @return AppList <p>关联的应用列表，仅共享知识库返回</p>
                     * 
                     */
                    std::vector<Identity> GetAppList() const;

                    /**
                     * 设置<p>关联的应用列表，仅共享知识库返回</p>
                     * @param _appList <p>关联的应用列表，仅共享知识库返回</p>
                     * 
                     */
                    void SetAppList(const std::vector<Identity>& _appList);

                    /**
                     * 判断参数 AppList 是否已赋值
                     * @return AppList 是否已赋值
                     * 
                     */
                    bool AppListHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（Unix 秒）</p>
                     * @return CreateTime <p>创建时间（Unix 秒）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix 秒）</p>
                     * @param _createTime <p>创建时间（Unix 秒）</p>
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Operator GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const Operator& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>文档数</p>
                     * @return DocCount <p>文档数</p>
                     * 
                     */
                    uint64_t GetDocCount() const;

                    /**
                     * 设置<p>文档数</p>
                     * @param _docCount <p>文档数</p>
                     * 
                     */
                    void SetDocCount(const uint64_t& _docCount);

                    /**
                     * 判断参数 DocCount 是否已赋值
                     * @return DocCount 是否已赋值
                     * 
                     */
                    bool DocCountHasBeenSet() const;

                    /**
                     * 获取<p>是否超量</p>
                     * @return IsExceeded <p>是否超量</p>
                     * 
                     */
                    bool GetIsExceeded() const;

                    /**
                     * 设置<p>是否超量</p>
                     * @param _isExceeded <p>是否超量</p>
                     * 
                     */
                    void SetIsExceeded(const bool& _isExceeded);

                    /**
                     * 判断参数 IsExceeded 是否已赋值
                     * @return IsExceeded 是否已赋值
                     * 
                     */
                    bool IsExceededHasBeenSet() const;

                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>类型：1=默认知识库，2=共享知识库<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>默认知识库</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>共享知识库</td></tr></tbody></table></p>
                     * @return KbType <p>类型：1=默认知识库，2=共享知识库<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>默认知识库</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>共享知识库</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKbType() const;

                    /**
                     * 设置<p>类型：1=默认知识库，2=共享知识库<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>默认知识库</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>共享知识库</td></tr></tbody></table></p>
                     * @param _kbType <p>类型：1=默认知识库，2=共享知识库<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>默认知识库</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>共享知识库</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKbType(const int64_t& _kbType);

                    /**
                     * 判断参数 KbType 是否已赋值
                     * @return KbType 是否已赋值
                     * 
                     */
                    bool KbTypeHasBeenSet() const;

                    /**
                     * 获取<p>最后操作人，仅共享知识库返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperator <p>最后操作人，仅共享知识库返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Operator GetLatestOperator() const;

                    /**
                     * 设置<p>最后操作人，仅共享知识库返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperator <p>最后操作人，仅共享知识库返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperator(const Operator& _latestOperator);

                    /**
                     * 判断参数 LatestOperator 是否已赋值
                     * @return LatestOperator 是否已赋值
                     * 
                     */
                    bool LatestOperatorHasBeenSet() const;

                    /**
                     * 获取<p>知识库名称</p>
                     * @return Name <p>知识库名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>知识库名称</p>
                     * @param _name <p>知识库名称</p>
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
                     * 获取<p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBPermission GetPermission() const;

                    /**
                     * 设置<p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermission(const KBPermission& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>处理中状态列表</p>
                     * @return ProcessingFlagList <p>处理中状态列表</p>
                     * 
                     */
                    std::vector<int64_t> GetProcessingFlagList() const;

                    /**
                     * 设置<p>处理中状态列表</p>
                     * @param _processingFlagList <p>处理中状态列表</p>
                     * 
                     */
                    void SetProcessingFlagList(const std::vector<int64_t>& _processingFlagList);

                    /**
                     * 判断参数 ProcessingFlagList 是否已赋值
                     * @return ProcessingFlagList 是否已赋值
                     * 
                     */
                    bool ProcessingFlagListHasBeenSet() const;

                    /**
                     * 获取<p>共享子类型：1=普通，2=公众号<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>普通</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>公众号</td></tr></tbody></table></p>
                     * @return SharedSubType <p>共享子类型：1=普通，2=公众号<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>普通</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>公众号</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSharedSubType() const;

                    /**
                     * 设置<p>共享子类型：1=普通，2=公众号<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>普通</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>公众号</td></tr></tbody></table></p>
                     * @param _sharedSubType <p>共享子类型：1=普通，2=公众号<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>普通</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>公众号</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSharedSubType(const int64_t& _sharedSubType);

                    /**
                     * 判断参数 SharedSubType 是否已赋值
                     * @return SharedSubType 是否已赋值
                     * 
                     */
                    bool SharedSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（Unix 秒）</p>
                     * @return UpdateTime <p>更新时间（Unix 秒）</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（Unix 秒）</p>
                     * @param _updateTime <p>更新时间（Unix 秒）</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>关联的应用列表，仅共享知识库返回</p>
                     */
                    std::vector<Identity> m_appList;
                    bool m_appListHasBeenSet;

                    /**
                     * <p>创建时间（Unix 秒）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Operator m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>文档数</p>
                     */
                    uint64_t m_docCount;
                    bool m_docCountHasBeenSet;

                    /**
                     * <p>是否超量</p>
                     */
                    bool m_isExceeded;
                    bool m_isExceededHasBeenSet;

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>类型：1=默认知识库，2=共享知识库<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>默认知识库</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>共享知识库</td></tr></tbody></table></p>
                     */
                    int64_t m_kbType;
                    bool m_kbTypeHasBeenSet;

                    /**
                     * <p>最后操作人，仅共享知识库返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Operator m_latestOperator;
                    bool m_latestOperatorHasBeenSet;

                    /**
                     * <p>知识库名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBPermission m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>处理中状态列表</p>
                     */
                    std::vector<int64_t> m_processingFlagList;
                    bool m_processingFlagListHasBeenSet;

                    /**
                     * <p>共享子类型：1=普通，2=公众号<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>普通</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>公众号</td></tr></tbody></table></p>
                     */
                    int64_t m_sharedSubType;
                    bool m_sharedSubTypeHasBeenSet;

                    /**
                     * <p>更新时间（Unix 秒）</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_
