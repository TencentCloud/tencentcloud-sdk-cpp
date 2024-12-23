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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYLEVELDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYLEVELDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/LevelItem.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryComplianceGroup.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感数据分级信息
                */
                class DspaDiscoveryLevelDetail : public AbstractModel
                {
                public:
                    DspaDiscoveryLevelDetail();
                    ~DspaDiscoveryLevelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return LevelGroupName 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetLevelGroupName() const;

                    /**
                     * 设置分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _levelGroupName 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    void SetLevelGroupName(const std::string& _levelGroupName);

                    /**
                     * 判断参数 LevelGroupName 是否已赋值
                     * @return LevelGroupName 是否已赋值
                     * 
                     */
                    bool LevelGroupNameHasBeenSet() const;

                    /**
                     * 获取分级组来源，0为内置，1为自定义
                     * @return Source 分级组来源，0为内置，1为自定义
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置分级组来源，0为内置，1为自定义
                     * @param _source 分级组来源，0为内置，1为自定义
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取分级组描述，最多1024字符
                     * @return LevelGroupDesc 分级组描述，最多1024字符
                     * 
                     */
                    std::string GetLevelGroupDesc() const;

                    /**
                     * 设置分级组描述，最多1024字符
                     * @param _levelGroupDesc 分级组描述，最多1024字符
                     * 
                     */
                    void SetLevelGroupDesc(const std::string& _levelGroupDesc);

                    /**
                     * 判断参数 LevelGroupDesc 是否已赋值
                     * @return LevelGroupDesc 是否已赋值
                     * 
                     */
                    bool LevelGroupDescHasBeenSet() const;

                    /**
                     * 获取具体分级标识详情
                     * @return LevelDetail 具体分级标识详情
                     * 
                     */
                    std::vector<LevelItem> GetLevelDetail() const;

                    /**
                     * 设置具体分级标识详情
                     * @param _levelDetail 具体分级标识详情
                     * 
                     */
                    void SetLevelDetail(const std::vector<LevelItem>& _levelDetail);

                    /**
                     * 判断参数 LevelDetail 是否已赋值
                     * @return LevelDetail 是否已赋值
                     * 
                     */
                    bool LevelDetailHasBeenSet() const;

                    /**
                     * 获取引用合规组次数
                     * @return RefComplianceCnt 引用合规组次数
                     * 
                     */
                    uint64_t GetRefComplianceCnt() const;

                    /**
                     * 设置引用合规组次数
                     * @param _refComplianceCnt 引用合规组次数
                     * 
                     */
                    void SetRefComplianceCnt(const uint64_t& _refComplianceCnt);

                    /**
                     * 判断参数 RefComplianceCnt 是否已赋值
                     * @return RefComplianceCnt 是否已赋值
                     * 
                     */
                    bool RefComplianceCntHasBeenSet() const;

                    /**
                     * 获取引用合规组
                     * @return RefCompliance 引用合规组
                     * 
                     */
                    std::vector<DspaDiscoveryComplianceGroup> GetRefCompliance() const;

                    /**
                     * 设置引用合规组
                     * @param _refCompliance 引用合规组
                     * 
                     */
                    void SetRefCompliance(const std::vector<DspaDiscoveryComplianceGroup>& _refCompliance);

                    /**
                     * 判断参数 RefCompliance 是否已赋值
                     * @return RefCompliance 是否已赋值
                     * 
                     */
                    bool RefComplianceHasBeenSet() const;

                    /**
                     * 获取分级组ID
                     * @return LevelGroupId 分级组ID
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置分级组ID
                     * @param _levelGroupId 分级组ID
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                private:

                    /**
                     * 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_levelGroupName;
                    bool m_levelGroupNameHasBeenSet;

                    /**
                     * 分级组来源，0为内置，1为自定义
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 分级组描述，最多1024字符
                     */
                    std::string m_levelGroupDesc;
                    bool m_levelGroupDescHasBeenSet;

                    /**
                     * 具体分级标识详情
                     */
                    std::vector<LevelItem> m_levelDetail;
                    bool m_levelDetailHasBeenSet;

                    /**
                     * 引用合规组次数
                     */
                    uint64_t m_refComplianceCnt;
                    bool m_refComplianceCntHasBeenSet;

                    /**
                     * 引用合规组
                     */
                    std::vector<DspaDiscoveryComplianceGroup> m_refCompliance;
                    bool m_refComplianceHasBeenSet;

                    /**
                     * 分级组ID
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYLEVELDETAIL_H_
