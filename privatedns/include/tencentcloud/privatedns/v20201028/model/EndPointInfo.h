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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 终端节点信息
                */
                class EndPointInfo : public AbstractModel
                {
                public:
                    EndPointInfo();
                    ~EndPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端节点ID
                     * @return EndPointId 终端节点ID
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置终端节点ID
                     * @param _endPointId 终端节点ID
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取终端节点名称
                     * @return EndPointName 终端节点名称
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称
                     * @param _endPointName 终端节点名称
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID
                     * @return EndPointServiceId 终端节点服务ID
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID
                     * @param _endPointServiceId 终端节点服务ID
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点VIP列表
                     * @return EndPointVipSet 终端节点VIP列表
                     * 
                     */
                    std::vector<std::string> GetEndPointVipSet() const;

                    /**
                     * 设置终端节点VIP列表
                     * @param _endPointVipSet 终端节点VIP列表
                     * 
                     */
                    void SetEndPointVipSet(const std::vector<std::string>& _endPointVipSet);

                    /**
                     * 判断参数 EndPointVipSet 是否已赋值
                     * @return EndPointVipSet 是否已赋值
                     * 
                     */
                    bool EndPointVipSetHasBeenSet() const;

                    /**
                     * 获取ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCode ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionCode ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取标签键值对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签键值对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签键值对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签键值对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 终端节点ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * 终端节点名称
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点服务ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点VIP列表
                     */
                    std::vector<std::string> m_endPointVipSet;
                    bool m_endPointVipSetHasBeenSet;

                    /**
                     * ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 标签键值对集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_
