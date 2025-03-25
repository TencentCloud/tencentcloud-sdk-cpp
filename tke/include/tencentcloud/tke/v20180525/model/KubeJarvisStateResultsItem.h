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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTSITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateResultObjInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检诊断结果详情信息
                */
                class KubeJarvisStateResultsItem : public AbstractModel
                {
                public:
                    KubeJarvisStateResultsItem();
                    ~KubeJarvisStateResultsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断结果级别
                     * @return Level 诊断结果级别
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置诊断结果级别
                     * @param _level 诊断结果级别
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取诊断对象名
                     * @return ObjName 诊断对象名
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置诊断对象名
                     * @param _objName 诊断对象名
                     * 
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     * 
                     */
                    bool ObjNameHasBeenSet() const;

                    /**
                     * 获取诊断对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjInfo 诊断对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KubeJarvisStateResultObjInfo> GetObjInfo() const;

                    /**
                     * 设置诊断对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objInfo 诊断对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjInfo(const std::vector<KubeJarvisStateResultObjInfo>& _objInfo);

                    /**
                     * 判断参数 ObjInfo 是否已赋值
                     * @return ObjInfo 是否已赋值
                     * 
                     */
                    bool ObjInfoHasBeenSet() const;

                    /**
                     * 获取诊断项标题
                     * @return Title 诊断项标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置诊断项标题
                     * @param _title 诊断项标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取诊断项描述
                     * @return Desc 诊断项描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置诊断项描述
                     * @param _desc 诊断项描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取诊断建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Proposal 诊断建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProposal() const;

                    /**
                     * 设置诊断建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proposal 诊断建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProposal(const std::string& _proposal);

                    /**
                     * 判断参数 Proposal 是否已赋值
                     * @return Proposal 是否已赋值
                     * 
                     */
                    bool ProposalHasBeenSet() const;

                    /**
                     * 获取诊断建议文档链接
                     * @return ProposalDocUrl 诊断建议文档链接
                     * 
                     */
                    std::string GetProposalDocUrl() const;

                    /**
                     * 设置诊断建议文档链接
                     * @param _proposalDocUrl 诊断建议文档链接
                     * 
                     */
                    void SetProposalDocUrl(const std::string& _proposalDocUrl);

                    /**
                     * 判断参数 ProposalDocUrl 是否已赋值
                     * @return ProposalDocUrl 是否已赋值
                     * 
                     */
                    bool ProposalDocUrlHasBeenSet() const;

                    /**
                     * 获取诊断建议文档名称
                     * @return ProposalDocName 诊断建议文档名称
                     * 
                     */
                    std::string GetProposalDocName() const;

                    /**
                     * 设置诊断建议文档名称
                     * @param _proposalDocName 诊断建议文档名称
                     * 
                     */
                    void SetProposalDocName(const std::string& _proposalDocName);

                    /**
                     * 判断参数 ProposalDocName 是否已赋值
                     * @return ProposalDocName 是否已赋值
                     * 
                     */
                    bool ProposalDocNameHasBeenSet() const;

                private:

                    /**
                     * 诊断结果级别
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 诊断对象名
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * 诊断对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateResultObjInfo> m_objInfo;
                    bool m_objInfoHasBeenSet;

                    /**
                     * 诊断项标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 诊断项描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 诊断建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proposal;
                    bool m_proposalHasBeenSet;

                    /**
                     * 诊断建议文档链接
                     */
                    std::string m_proposalDocUrl;
                    bool m_proposalDocUrlHasBeenSet;

                    /**
                     * 诊断建议文档名称
                     */
                    std::string m_proposalDocName;
                    bool m_proposalDocNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTSITEM_H_
