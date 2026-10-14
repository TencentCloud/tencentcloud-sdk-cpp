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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>
#include <tencentcloud/adp/v20260520/model/KBShareStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库空间共享信息
                */
                class KBSpaceShare : public AbstractModel
                {
                public:
                    KBSpaceShare();
                    ~KBSpaceShare() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否已被其他空间引用</p>
                     * @return IsSpaceShared <p>是否已被其他空间引用</p>
                     * 
                     */
                    bool GetIsSpaceShared() const;

                    /**
                     * 设置<p>是否已被其他空间引用</p>
                     * @param _isSpaceShared <p>是否已被其他空间引用</p>
                     * 
                     */
                    void SetIsSpaceShared(const bool& _isSpaceShared);

                    /**
                     * 判断参数 IsSpaceShared 是否已赋值
                     * @return IsSpaceShared 是否已赋值
                     * 
                     */
                    bool IsSpaceSharedHasBeenSet() const;

                    /**
                     * 获取<p>被引用空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SharedSpaceList <p>被引用空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Identity> GetSharedSpaceList() const;

                    /**
                     * 设置<p>被引用空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sharedSpaceList <p>被引用空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSharedSpaceList(const std::vector<Identity>& _sharedSpaceList);

                    /**
                     * 判断参数 SharedSpaceList 是否已赋值
                     * @return SharedSpaceList 是否已赋值
                     * 
                     */
                    bool SharedSpaceListHasBeenSet() const;

                    /**
                     * 获取<p>共享状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubStatus <p>共享状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBShareStatus GetSubStatus() const;

                    /**
                     * 设置<p>共享状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subStatus <p>共享状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubStatus(const KBShareStatus& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否允许操作</p>
                     * @return Enable <p>是否允许操作</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否允许操作</p>
                     * @param _enable <p>是否允许操作</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * <p>是否已被其他空间引用</p>
                     */
                    bool m_isSpaceShared;
                    bool m_isSpaceSharedHasBeenSet;

                    /**
                     * <p>被引用空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Identity> m_sharedSpaceList;
                    bool m_sharedSpaceListHasBeenSet;

                    /**
                     * <p>共享状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBShareStatus m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>是否允许操作</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_
