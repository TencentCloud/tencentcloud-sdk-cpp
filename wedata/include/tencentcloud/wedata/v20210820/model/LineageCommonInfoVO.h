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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGECOMMONINFOVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGECOMMONINFOVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageResouce.h>
#include <tencentcloud/wedata/v20210820/model/LineageNodeInfoVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * LineageCommonInfoVO
                */
                class LineageCommonInfoVO : public AbstractModel
                {
                public:
                    LineageCommonInfoVO();
                    ~LineageCommonInfoVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentResource 当前节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LineageResouce GetCurrentResource() const;

                    /**
                     * 设置当前节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentResource 当前节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentResource(const LineageResouce& _currentResource);

                    /**
                     * 判断参数 CurrentResource 是否已赋值
                     * @return CurrentResource 是否已赋值
                     * 
                     */
                    bool CurrentResourceHasBeenSet() const;

                    /**
                     * 获取上游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSet 上游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageNodeInfoVO> GetParentSet() const;

                    /**
                     * 设置上游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSet 上游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSet(const std::vector<LineageNodeInfoVO>& _parentSet);

                    /**
                     * 判断参数 ParentSet 是否已赋值
                     * @return ParentSet 是否已赋值
                     * 
                     */
                    bool ParentSetHasBeenSet() const;

                    /**
                     * 获取下游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildSet 下游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageNodeInfoVO> GetChildSet() const;

                    /**
                     * 设置下游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childSet 下游节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildSet(const std::vector<LineageNodeInfoVO>& _childSet);

                    /**
                     * 判断参数 ChildSet 是否已赋值
                     * @return ChildSet 是否已赋值
                     * 
                     */
                    bool ChildSetHasBeenSet() const;

                    /**
                     * 获取下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownStreamCount 下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downStreamCount 下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownStreamCount(const int64_t& _downStreamCount);

                    /**
                     * 判断参数 DownStreamCount 是否已赋值
                     * @return DownStreamCount 是否已赋值
                     * 
                     */
                    bool DownStreamCountHasBeenSet() const;

                    /**
                     * 获取上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpStreamCount 上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upStreamCount 上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpStreamCount(const int64_t& _upStreamCount);

                    /**
                     * 判断参数 UpStreamCount 是否已赋值
                     * @return UpStreamCount 是否已赋值
                     * 
                     */
                    bool UpStreamCountHasBeenSet() const;

                    /**
                     * 获取父/子节点是否展示上下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamCountFlag 父/子节点是否展示上下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStreamCountFlag() const;

                    /**
                     * 设置父/子节点是否展示上下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamCountFlag 父/子节点是否展示上下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamCountFlag(const bool& _streamCountFlag);

                    /**
                     * 判断参数 StreamCountFlag 是否已赋值
                     * @return StreamCountFlag 是否已赋值
                     * 
                     */
                    bool StreamCountFlagHasBeenSet() const;

                private:

                    /**
                     * 当前节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LineageResouce m_currentResource;
                    bool m_currentResourceHasBeenSet;

                    /**
                     * 上游节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageNodeInfoVO> m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * 下游节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageNodeInfoVO> m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * 下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * 上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                    /**
                     * 父/子节点是否展示上下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_streamCountFlag;
                    bool m_streamCountFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGECOMMONINFOVO_H_
