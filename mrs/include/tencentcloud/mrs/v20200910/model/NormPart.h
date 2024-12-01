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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_NORMPART_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_NORMPART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/PartDesc.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 标准部位
                */
                class NormPart : public AbstractModel
                {
                public:
                    NormPart();
                    ~NormPart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位值
                     * @return Part 部位值
                     * 
                     */
                    std::string GetPart() const;

                    /**
                     * 设置部位值
                     * @param _part 部位值
                     * 
                     */
                    void SetPart(const std::string& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     * 
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取部位方向
                     * @return PartDirection 部位方向
                     * 
                     */
                    std::string GetPartDirection() const;

                    /**
                     * 设置部位方向
                     * @param _partDirection 部位方向
                     * 
                     */
                    void SetPartDirection(const std::string& _partDirection);

                    /**
                     * 判断参数 PartDirection 是否已赋值
                     * @return PartDirection 是否已赋值
                     * 
                     */
                    bool PartDirectionHasBeenSet() const;

                    /**
                     * 获取组织值
                     * @return Tissue 组织值
                     * 
                     */
                    std::string GetTissue() const;

                    /**
                     * 设置组织值
                     * @param _tissue 组织值
                     * 
                     */
                    void SetTissue(const std::string& _tissue);

                    /**
                     * 判断参数 Tissue 是否已赋值
                     * @return Tissue 是否已赋值
                     * 
                     */
                    bool TissueHasBeenSet() const;

                    /**
                     * 获取组织方向
                     * @return TissueDirection 组织方向
                     * 
                     */
                    std::string GetTissueDirection() const;

                    /**
                     * 设置组织方向
                     * @param _tissueDirection 组织方向
                     * 
                     */
                    void SetTissueDirection(const std::string& _tissueDirection);

                    /**
                     * 判断参数 TissueDirection 是否已赋值
                     * @return TissueDirection 是否已赋值
                     * 
                     */
                    bool TissueDirectionHasBeenSet() const;

                    /**
                     * 获取上级部位
                     * @return Upper 上级部位
                     * 
                     */
                    std::string GetUpper() const;

                    /**
                     * 设置上级部位
                     * @param _upper 上级部位
                     * 
                     */
                    void SetUpper(const std::string& _upper);

                    /**
                     * 判断参数 Upper 是否已赋值
                     * @return Upper 是否已赋值
                     * 
                     */
                    bool UpperHasBeenSet() const;

                    /**
                     * 获取部位详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartDetail 部位详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    PartDesc GetPartDetail() const;

                    /**
                     * 设置部位详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partDetail 部位详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetPartDetail(const PartDesc& _partDetail);

                    /**
                     * 判断参数 PartDetail 是否已赋值
                     * @return PartDetail 是否已赋值
                     * @deprecated
                     */
                    bool PartDetailHasBeenSet() const;

                    /**
                     * 获取部位详情
                     * @return PartDetailList 部位详情
                     * 
                     */
                    std::vector<PartDesc> GetPartDetailList() const;

                    /**
                     * 设置部位详情
                     * @param _partDetailList 部位详情
                     * 
                     */
                    void SetPartDetailList(const std::vector<PartDesc>& _partDetailList);

                    /**
                     * 判断参数 PartDetailList 是否已赋值
                     * @return PartDetailList 是否已赋值
                     * 
                     */
                    bool PartDetailListHasBeenSet() const;

                private:

                    /**
                     * 部位值
                     */
                    std::string m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 部位方向
                     */
                    std::string m_partDirection;
                    bool m_partDirectionHasBeenSet;

                    /**
                     * 组织值
                     */
                    std::string m_tissue;
                    bool m_tissueHasBeenSet;

                    /**
                     * 组织方向
                     */
                    std::string m_tissueDirection;
                    bool m_tissueDirectionHasBeenSet;

                    /**
                     * 上级部位
                     */
                    std::string m_upper;
                    bool m_upperHasBeenSet;

                    /**
                     * 部位详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PartDesc m_partDetail;
                    bool m_partDetailHasBeenSet;

                    /**
                     * 部位详情
                     */
                    std::vector<PartDesc> m_partDetailList;
                    bool m_partDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_NORMPART_H_
